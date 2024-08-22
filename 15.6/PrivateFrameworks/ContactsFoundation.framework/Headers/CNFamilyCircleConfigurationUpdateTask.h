// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFAMILYCIRCLECONFIGURATIONUPDATETASK_H
#define CNFAMILYCIRCLECONFIGURATIONUPDATETASK_H

@class ACAccountStore, NSArray;
@protocol CNDelegateAccountSink, CNDelegateAccountSource;


#import "CNTask.h"
#import "CNResult.h"

@interface CNFamilyCircleConfigurationUpdateTask : CNTask

@property (readonly, nonatomic) NSObject<CNDelegateAccountSink> *accountSink; // ivar: _accountSink
@property (readonly, nonatomic) NSObject<CNDelegateAccountSource> *accountSource; // ivar: _accountSource
@property (readonly, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, nonatomic) NSArray *delegateAccounts; // ivar: _delegateAccounts
@property (retain, nonatomic) CNResult *result; // ivar: _result


+(id)os_log;
-(id)description;
-(id)init;
-(id)initWithAccountSource:(id)arg0 accountSink:(id)arg1 accountStore:(id)arg2 ;
-(id)initWithName:(id)arg0 ;
-(id)run:(*id)arg0 ;
-(void)loadDefaultSinkIfNecessary;
-(void)loadDefaultSourceIfNecessary;
-(void)loadDelegateAccountsFromSource;
-(void)updateDelegateAccounts;


@end


#endif