#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include<conio.h>
#define NUM 1001

void denglu();
void edenglu();

void kaihu();
void ekaihu();

void enter0();

void enter1();
void eenter1();

void enter2();
void eenter2();

void tuichu();
void etuichu();

void zhuanzhang();
void ezhuanzhang();

void chaxun();
void echaxun();

void qukuan();
void equkuan();

void cunkuan();
void ecunkuan();

void xiugai();
void exiugai();

void load();


int j = 0, k;




struct yonghu
{
	int ID;
	char key[20];
	int account;
}user[NUM];


//主函数
void main()
{
	enter0();

}
//语言
void enter0()
{
	int a;
	system("cls");
	printf(" \t\t\t************ 选 择 语 言 ****************\n");
	printf("\n");
	printf("\n");
	printf(" \t\t\t  +++++++++++++++++++++\n");
	printf(" \t\t\t  +      1.中 文（）  +\n");
	printf(" \t\t\t  +      2.英 文（）  +\n");
	printf(" \t\t\t  +      3.退 出（）  +\n");
	printf(" \t\t\t  +++++++++++++++++++++\n");
	printf("\n\n");
	printf("\n\n");
	printf(" \t\t\t  |请 选 择 操 作（）| \n\n\t\t\t\t  ");
	scanf("%d", &a);

	switch (a)
	{
	case 1:system("cls");
		enter1();
		break;
	case 2:system("cls");
		eenter1();
		break;
	case 3:system("cls");
		etuichu();
		break;
	default:printf("\t\t\t\t无此操作项\n请重新选择\n()");
		system("pause");
		system("cls");
		enter0();
	}
}
//主菜单
void enter1()

{
	int a;
	load();
	system("cls");
	printf(" \t\t\t*****************************************\n");
	printf(" \t\t\t*           银 行 A T M 系 统           *\n");
	printf(" \t\t\t*****************************************\n");
	printf(" \t\t\t*****************************************\n");
	printf(" \t\t\t*                                       *\n");
	printf(" \t\t\t************ 选 择 业 务 ****************\n");
	printf("\n");
	printf("\n");
	printf(" \t\t\t  +++++++++++++++++++++\n");
	printf(" \t\t\t  +      1.开 户      +\n");
	printf(" \t\t\t  +      2.登 录      +\n");
	printf(" \t\t\t  +      3.退 出      +\n");
	printf(" \t\t\t  +++++++++++++++++++++\n");
	printf("\n\n");
	printf("\n\n");
	printf(" \t\t\t  |请 选 择 操 作| \n\n\t\t\t\t  ");
	scanf("%d", &a);

	switch (a)
	{
	case 1:system("cls");

		kaihu();
		break;
	case 2:system("cls");
		denglu();
		break;
	case 3:system("cls");
		tuichu();
		break;
	default:printf("\t\t\t\t无此操作项\n请重新选择\n");
		system("pause");
		system("cls");
		enter1();
	}
}
void eenter1()

{
	int a;
	load();
	system("cls");
	printf(" \t\t\t*****************************************\n");
	printf(" \t\t\t*          Bank  A T M  system          *\n");
	printf(" \t\t\t*****************************************\n");
	printf(" \t\t\t*****************************************\n");
	printf(" \t\t\t*                                       *\n");
	printf(" \t\t\t************ Select business ************\n");
	printf("\n");
	printf("\n");
	printf(" \t\t\t  +++++++++++++++++++++\n");
	printf(" \t\t\t  +      1.Open an account +\n");
	printf(" \t\t\t  +      2.Log in          +\n");
	printf(" \t\t\t  +      3.Exit            +\n");
	printf(" \t\t\t  +++++++++++++++++++++\n");
	printf("\n\n");
	printf("\n\n");
	printf(" \t\t\t  |Please select| \n\n\t\t\t\t  ");
	scanf("%d", &a);

	switch (a)
	{
	case 1:system("cls");

		ekaihu();
		break;
	case 2:system("cls");
		edenglu();
		break;
	case 3:system("cls");
		etuichu();
		break;
	default:printf("\t\t\t\tError\nPleace select again\n");
		system("pause");
		system("cls");
		eenter1();
	}
}
//读取文件
void load()
{
	FILE* fp;
	int i;
	if ((fp = fopen("data.txt", "r")) == NULL)
	{
		printf("不能打开文件\n");
		return;
	}
	for (i = 0; !feof(fp); i++)
	{
		fread(&user[i], sizeof(struct yonghu), 1, fp);
	}
	fclose(fp);
	system("cls");
	printf("文件读取成功\n");
}
//保存文件
void save()
{
	FILE* fp;
	if ((fp = fopen("data.txt", "w")) == NULL)
	{
		printf("无法打开文件\n");
		exit(0);
	}
	fwrite(user, sizeof(struct yonghu), NUM, fp);

	printf("文件写入完成\n");
	fclose(fp);
}
//开户
void kaihu()
{
	char ch;
	if (user[1000].account != 0)
	{
		j = user[1000].account;
	}
	srand(time(0));
	int m = rand();
	user[j].ID = m % 1000 + 10000000;
	printf(" \t\t\t*****************************************\n");
	printf(" \t\t\t*           银 行 开 户 系 统           *\n");
	printf(" \t\t\t*****************************************\n");
	printf(" \t\t\t*****************************************\n");
	printf(" \t\t\t*                                       *\n");
	printf(" \t\t\t*****************************************\n");
	printf("\n\t\t\t\t请设置您的密码:\n\t\t\t\t  ");
	scanf("%s", user[j].key);

	user[j].account = 0;

	printf("卡号：%d \n余额：%4d\n", user[j].ID, user[j].account);

	user[1000].account = ++j;

	save();

	printf("\n\n\t\t\t\t恭喜您注册成功!");

	printf("\n\n\n");

	system("pause");

	printf("\t\t\t\t按回车键返回上一级\n");

	printf("\n\n\n");

	system("cls");

	ch = getchar();

	if (ch == '\n')
	{
		enter1();
	}
}
void ekaihu()
{
	char ch;
	if (user[1000].account != 0)
	{
		j = user[1000].account;
	}
	srand(time(0));
	int m = rand();
	user[j].ID = m % 1000 + 10000000;
	printf(" \t\t\t*****************************************\n");
	printf(" \t\t\t*    Bank account opening system        *\n");
	printf(" \t\t\t*****************************************\n");
	printf(" \t\t\t*****************************************\n");
	printf(" \t\t\t*                                       *\n");
	printf(" \t\t\t*****************************************\n");
	printf("\n\t\t\t\tPlease set your password:\n\t\t\t\t  ");
	scanf("%s", user[j].key);

	user[j].account = 0;

	printf("Card number：%d \nBalance：%4d\n", user[j].ID, user[j].account);

	user[1000].account = ++j;

	save();

	printf("\n\n\t\t\t\tCongratulations.Registration success!");

	printf("\n\n\n");

	system("pause");

	printf("\t\t\t\t\Enter Return to the next level\n");

	printf("\n\n\n");

	system("cls");

	ch = getchar();

	if (ch == '\n')
	{
		eenter1();
	}
}
//退出
void tuichu()
{
	printf("\t\t\t**********谢 谢!**********\n");
	printf("\t\t\t*                        *\n");
	printf("\t\t\t*****感 谢 您 的 使 用!***\n");
	printf("\t\t\t*                        *\n");
	printf("\t\t\t*****欢 迎 下 次 光 临!***\n");
	printf("\t\t\t*                        *\n");
	printf("\t\t\t**********再 见!**********\n");
	exit(0);
}
void etuichu()
{
	printf("\t\t\t**********THANKS!**********\n");
	printf("\t\t\t*                        *\n");
	printf("\t\t\t**Thank you for using it**\n");
	printf("\t\t\t*                        *\n");
	printf("\t\t\t*****Welcome next time!***\n");
	printf("\t\t\t*                        *\n");
	printf("\t\t\t*********See you!*********\n");
	exit(0);
}
//登录
void denglu()
{
	int i, n, m, id;
	  char p[20];

	printf("\t\t    连续输错账号或密码三次，将返回主菜单!\n");

	for (i = 0; i < 3; i++)
	{
		printf("请输入您的登录账号\n");

		scanf("%d", &id);

		for (k = 0; k < NUM - 1; k++)
		{
			if (id == user[k].ID)
			{
				m = 1;
				break;
			}
			else
				m = 0;
		}
		if (m == 0)
		{
			printf("该账号不存在,剩余输入次数%d\n", 2 - i);

			if ((2 - i) == 0)
			{
				printf("账号输入错误3次，即将返回菜单......\n");

				system("pause");

				enter1();
			}
		}

		if (m == 1)
		{
			printf("请输入您的登录密码\n");
			for (n = 0; n < 3; n++)
			{

				int i = 0;
				do
				{
					p[i] = _getch();
					if (p[i] == '\r')
						break;
					if (p[i] == '\b')
					{
						if (i == 0)
						{
							printf("\a");
							continue;
						}
						i = i - 1;
						printf("\b");
					}
					else
					{
						i = i + 1;
						printf("*");
					}
				} while (p[i] != '\n' && i < 20);
				p[i] = '\0';

				if (strcmp(p, user[k].key) == 0)
				{
					system("cls");
					enter2();
				}
				else
				{
					printf("密码输入错误,剩余输入次数%d\n", 2 - n);

					if ((2 - n) == 0)
					{
						printf("密码输入错误3次，即将返回菜单......\n");

						system("pause");

						enter1();
					}
				}
			}
		}
	}
}
void edenglu()
{
	int i, n, m, id;
	char kw[20];

	printf("\t\t    Enter the wrong account or password three times, will return to the main menu!\n");

	for (i = 0; i < 3; i++)
	{
		printf("Please enter your login account\n");

		scanf("%d", &id);

		for (k = 0; k < NUM - 1; k++)
		{
			if (id == user[k].ID)
			{
				m = 1;
				break;
			}
			else
				m = 0;
		}
		if (m == 0)
		{
			printf("The account does not exist, the remaining number of entries%d\n", 2 - i);

			if ((2 - i) == 0)
			{
				printf("Account input error 3 times, will return to the menu......\n");

				system("pause");

				eenter1();
			}
		}

		if (m == 1)
		{
			printf("Please enter your login password!\n");
			for (n = 0; n < 3; n++)
			{

				scanf("%s", kw);

				if (strcmp(kw, user[k].key) == 0)
				{
					system("cls");
					eenter2();
				}
				else
				{
					printf("Incorrrect password!Remaining number of times%d\n", 2 - n);

					if ((2 - n) == 0)
					{
						printf("The password was entered incorrectly three times,coming back to menu......\n");

						system("pause");

						eenter1();
					}
				}
			}
		}
	}
}
//二级菜单
void enter2()
{
	int n;
	do
	{
		printf("\n\n\n");
		printf(" \t\t\t+++++++++++++++++++++++++++++\n");
		printf(" \t\t\t+  A T M 系 统 个 人 界 面  +\n");
		printf(" \t\t\t+     您 有 以 下 选 择     +\n");
		printf(" \t\t\t+++++++++++++++++++++++++++++\n");
		printf(" \t\t\t    +++++++++++++++++++++\n");
		printf(" \t\t\t    #     1.  查 询     #\n");
		printf(" \t\t\t    #     2.  取 款     #\n");
		printf(" \t\t\t    #     3.  转 账     #\n");
		printf(" \t\t\t    #     4.  存 款     #\n");
		printf(" \t\t\t    #     5.修 改 密 码 #\n");
		printf(" \t\t\t    #     6.返 回 目 录 #\n");
		printf(" \t\t\t    ++++++++++++++++++++\n\n\t\t\t\t  ");
		scanf("%d", &n);

		switch (n)
		{
		case 1:system("cls");
			chaxun();
			break;
		case 2:system("cls");
			qukuan();
			break;
		case 3:system("cls");
			zhuanzhang();
			break;
		case 4:system("cls");
			cunkuan();
			break;
		case 5:system("cls");
			xiugai();
			break;
		case 6:system("cls");
			enter1();
			break;
		default:printf("\t\t\t\t无此操作项\n\n");

			system("pause");

			system("cls");
		}
	} while (n > 4 && n < 0);
}
void eenter2()
{
	int n;
	do
	{
		printf("\n\n\n");
		printf(" \t\t\t+++++++++++++++++++++++++++++\n");
		printf(" \t\t\t+  A T M System Personal Interface  +\n");
		printf(" \t\t\t+     Business Choice     +\n");
		printf(" \t\t\t+++++++++++++++++++++++++++++\n");
		printf(" \t\t\t    +++++++++++++++++++++\n");
		printf(" \t\t\t    #     1.  Inquire     #\n");
		printf(" \t\t\t    #     2.  Withdrawal     #\n");
		printf(" \t\t\t    #     3.  Transfer Accounts     #\n");
		printf(" \t\t\t    #     4.  Dwposit     #\n");
		printf(" \t\t\t    #     5.  Change password #\n");
		printf(" \t\t\t    #     6.  Return to the login #\n");
		printf(" \t\t\t    ++++++++++++++++++++\n\n\t\t\t\t  ");
		scanf("%d", &n);

		switch (n)
		{
		case 1:system("cls");
			echaxun();
			break;
		case 2:system("cls");
			equkuan();
			break;
		case 3:system("cls");
			ezhuanzhang();
			break;
		case 4:system("cls");
			ecunkuan();
			break;
		case 5:system("cls");
			exiugai();
			break;
		case 6:system("cls");
			eenter1();
			break;
		default:printf("\t\t\t\terror\n\n");

			system("pause");

			system("cls");
		}
	} while (n > 4 && n < 0);
}
//查询
void chaxun()
{
	char ch;
	printf("\t\t\t******欢 迎 您 使 用 查 询 服 务******\n");

	printf("\t\t\t******您 的 余 额 为 %d元******\n\n", user[k].account);

	system("pause");

	system("cls");

	printf("\n\n\n");

	ch = getchar();

	if (ch == '\n')
	{
		enter2();
	}

}
void echaxun()
{
	char ch;
	printf("\t\t\t******Welcome to the enquiry service******\n");

	printf("\t\t\t******your balance %d元******\n\n", user[k].account);

	system("pause");

	system("cls");

	printf("\n\n\n");

	ch = getchar();

	if (ch == '\n')
	{
		eenter2();
	}

}
//取款
void qukuan()
{
	int i, x;
	char a, ch;
	printf(" \t\t\t+++++++++++++++++++++++++++++++\n");
	printf(" \t\t\t+  本银行最低取款金额为100元  +\n");
	printf(" \t\t\t+       您卡号的余额为        +\n");
	printf(" \t\t\t+       %d 元                  +\n", user[k].account);
	printf(" \t\t\t+    请选择你要提取的金额:    +\n");
	printf(" \t\t\t+    1:100元      2:200元     +\n");
	printf(" \t\t\t+    3.500元      4:1000元    +\n");
	printf(" \t\t\t+    5:2000元     6:5000元    +\n");
	printf(" \t\t\t+        7: 自定义金额        +\n");
	printf(" \t\t\t+++++++++++++++++++++++++++++++\n\n\t\t\t\t      ");
	scanf("%d", &i);
	if (i == 1)
	{
		x = 100;
	}
	else
		if (i == 2)
		{
			x = 200;
		}
		else
			if (i == 3)
			{
				x = 500;
			}
			else
				if (i == 4)
				{
					x = 1000;
				}
				else
					if (i == 5)
					{
						x = 2000;
					}
					else
						if (i == 6)
						{
							x = 5000;
						}
						else
							if (i == 7)
							{
								printf("\t\t\t\t请输入自定义的金额:\n\t\t\t\t  ");
								scanf("%d", &x);
							}

	if (x <= user[k].account)
	{
		user[k].account = user[k].account - x;

		printf(" \t\t\t\t您取了%d元钱\n", x);

		printf(" \t\t\t\t您的余额为%d元\n", user[k].account);
	}

	else if (x > user[k].account)
	{
		printf("\t\t\t\t您卡里的余额不足\n");

		printf("\t\t\t\t请重新输入提取金额:\n");
	}
	printf(" \t\t\t\t请选择是否继续取款\n");

	printf(" \t\t\t\t是:Y          否:N\n\n\t\t\t\t  ");

	scanf("%s", &a);


	if (a == 'Y')
	{
		save();
		qukuan();
	}
	else
		if (a == 'N')
		{
			save();
			system("pause");

			system("cls");
			printf("\n\n\n");
		}
		else
		{
			save();
			system("pause");


			system("cls");
			printf("\n\n\n");
		}
	ch = getchar();

	if (ch == '\n')
	{
		system("cls");
		enter2();
	}
}
void equkuan()
{
	int i, x;
	char a, ch;
	printf(" \t\t\t+++++++++++++++++++++++++++++++\n");
	printf(" \t\t\t+  The minimum withdrawal amount of the bank is 100yuan+\n");
	printf(" \t\t\t+  The balance of your card number is                  +\n");
	printf(" \t\t\t+       %d yuan                                        +\n", user[k].account);
	printf(" \t\t\t+    Please select the amount you want to withdraw:    +\n");
	printf(" \t\t\t+    1:100yuan      2:20yuan                           +\n");
	printf(" \t\t\t+    3.500yuan      4:1000yuan                         +\n");
	printf(" \t\t\t+    5:2000yuan     6:5000yuan                         +\n");
	printf(" \t\t\t+        7: Custom amount                              +\n");
	printf(" \t\t\t+++++++++++++++++++++++++++++++\n\n\t\t\t\t      ");
	scanf("%d", &i);
	if (i == 1)
	{
		x = 100;
	}
	else
		if (i == 2)
		{
			x = 200;
		}
		else
			if (i == 3)
			{
				x = 500;
			}
			else
				if (i == 4)
				{
					x = 1000;
				}
				else
					if (i == 5)
					{
						x = 2000;
					}
					else
						if (i == 6)
						{
							x = 5000;
						}
						else
							if (i == 7)
							{
								printf("\t\t\t\tPlease enter a custom amount:\n\t\t\t\t  ");
								scanf("%d", &x);
							}

	if (x <= user[k].account)
	{
		user[k].account = user[k].account - x;

		printf(" \t\t\t\tThe amount of your withdrawal is%dtyuan\n", x);

		printf(" \t\t\t\tYour balance is%dyuan\n", user[k].account);
	}

	else if (x > user[k].account)
	{
		printf("\t\t\t\tThe balance in your card is insufficient\n");

		printf("\t\t\t\tPlease re-enter the withdrawal amount:\n");
	}
	printf(" \t\t\t\tPlease choose whether to continue to withdraw money\n");

	printf(" \t\t\t\tyes:Y          no:N\n\n\t\t\t\t  ");

	scanf("%s", &a);


	if (a == 'Y')
	{
		save();
		equkuan();
	}
	else
		if (a == 'N')
		{
			save();
			system("pause");

			system("cls");
			printf("\n\n\n");
		}
		else
		{
			save();
			system("pause");


			system("cls");
			printf("\n\n\n");
		}
	ch = getchar();

	if (ch == '\n')
	{
		system("cls");
		eenter2();
	}
}
//存款
void cunkuan()
{
	int a;
	printf("\t\t\t\t请输入存入账户的金额:\n\n\t\t\t\t  ");
	scanf("%d", &a);

	user[k].account = user[k].account + a;

	save();
	printf(" \t\t\t\t您的余额为%d元\n", user[k].account);

	system("pause");


	system("cls");

	printf("\n\n\n");

	enter2();
}
void ecunkuan()
{
	int a;
	printf("\t\t\t\tPlease enter the amount deposited into the account:\n\n\t\t\t\t  ");
	scanf("%d", &a);

	user[k].account = user[k].account + a;

	save();
	printf(" \t\t\t\tYour current balance is%dyuan\n", user[k].account);

	system("pause");


	system("cls");

	printf("\n\n\n");

	eenter2();
}
//修改密码
void xiugai()
{
	printf("\t\t\t\t请输入您新的密码\n\t\t\t\t  ");

	scanf("%s", user[k].key);

	save();

	system("pause");


	system("cls");

	printf("\n\n\n");
	enter2();
}
void exiugai()
{
	printf("\t\t\t\tPlease enter your new password\n\t\t\t\t  ");

	scanf("%s", user[k].key);

	save();

	system("pause");


	system("cls");

	printf("\n\n\n");
	eenter2();
}
//转账
void zhuanzhang()
{
	int a, b, c, x;
	int kahao;
	printf("\t\t\t       请输入转账卡号:\n\t\t\t\t  ");
	scanf("%d", &kahao);

	for (a = 0; a < NUM - 1; a++)
	{
		if (kahao == user[a].ID)
		{
			printf("\t\t\t\t  卡号正确\n\n");
			break;
		}
	}

	if (kahao != user[a].ID)
	{
		printf("\t\t\t\t  卡号不存在\n\n");
		system("pause");
		zhuanzhang();
	}

	printf("\t\t\t\t请输入转账金额\n\t\t\t\t    ");
	scanf("%d", &x);

	if (x > user[k].account)
	{
		printf("\t\t\t\t您卡里的余额不足\n");

		printf("\t\t\t\t请重新输入提取金额:\n");
	}
	else
	{
		user[k].account = user[k].account - x;

		user[a].account = user[a].account + x;

		save();
	}
	system("pause");

	system("cls");

	printf("\n\n\n");

	enter2();
}
void ezhuanzhang()
{
	int a, b, c, x;
	int kahao;
	printf("\t\t\t       Please enter the transfer card number:\n\t\t\t\t  ");
	scanf("%d", &kahao);

	for (a = 0; a < NUM - 1; a++)
	{
		if (kahao == user[a].ID)
		{
			printf("\t\t\t\t  The card number is correct\n\n");
			break;
		}
	}

	if (kahao != user[a].ID)
	{
		printf("\t\t\t\t  The card number doesn't exist\n\n");
		system("pause");
		ezhuanzhang();
	}

	printf("\t\t\t\tPlease enter the transfer amount\n\t\t\t\t    ");
	scanf("%d", &x);

	if (x > user[k].account)
	{
		printf("\t\t\t\tThe balance in your card is insufficient\n");

		printf("\t\t\t\tPlease re-enter the withdrawal amount:\n");
	}
	else
	{
		user[k].account = user[k].account - x;

		user[a].account = user[a].account + x;

		save();
	}
	system("pause");

	system("cls");

	printf("\n\n\n");

	eenter2();
}