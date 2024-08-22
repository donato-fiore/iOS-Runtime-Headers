// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCHILDDELEGATEACCOUNTSSTORE_H
#define CNCHILDDELEGATEACCOUNTSSTORE_H

@class ACAccountStore, NSString, ACAccount;
@protocol CNDelegateAccountSource, CNDelegateAccountSink;

#import <Foundation/Foundation.h>


@interface CNChildDelegateAccountsStore : NSObject <CNDelegateAccountSource, CNDelegateAccountSink>



@property (readonly, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ACAccount *parentAccount; // ivar: _parentAccount
@property (readonly) Class superclass;


+(id)os_log;
+(void)configureChildAccount:(id)arg0 withSettingsFromDelegateInfo:(id)arg1 parent:(id)arg2 ;
-(BOOL)updateAccounts:(id)arg0 error:(*id)arg1 ;
-(id)addChildWithDelegateInfo:(id)arg0 ;
-(id)delegateAccounts;
-(id)initWithParentAccount:(id)arg0 accountStore:(id)arg1 ;
-(id)primaryAccount;
-(id)removeAccount:(id)arg0 ;
-(id)updateAccount:(id)arg0 ;


@end


#endif