// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACUIACCOUNTOPERATIONSHELPER_H
#define ACUIACCOUNTOPERATIONSHELPER_H

@class ACAccountStore;
@protocol OS_dispatch_queue, ACUIAccountOperationsDelegate;

#import <Foundation/Foundation.h>


@interface ACUIAccountOperationsHelper : NSObject {
    ACAccountStore *_accountStore;
    NSObject<OS_dispatch_queue> *_accountOperationsQueue;
}


@property (weak, nonatomic) NSObject<ACUIAccountOperationsDelegate> *delegate; // ivar: _delegate
@property BOOL isRemovingAccount; // ivar: _isRemovingAccount
@property BOOL isSavingAccount; // ivar: _isSavingAccount


-(id)_desiredDataclassActionsFromPossibleActions:(id)arg0 forAccount:(id)arg1 withError:(*id)arg2 ;
-(id)dataclassActionsForAccountSave:(id)arg0 forDataclass:(id)arg1 error:(*id)arg2 ;
-(id)initWithAccountStore:(id)arg0 ;
-(void)removeAccount:(id)arg0 ;
-(void)saveAccount:(id)arg0 ;
-(void)saveAccount:(id)arg0 requireVerification:(BOOL)arg1 ;
-(void)saveAccount:(id)arg0 requireVerification:(BOOL)arg1 completion:(id)arg2 ;
-(void)saveAccount:(id)arg0 withDataclassActions:(id)arg1 ;
-(void)saveAccount:(id)arg0 withDataclassActions:(id)arg1 requireVerification:(BOOL)arg2 ;
-(void)saveAccount:(id)arg0 withDataclassActions:(id)arg1 requireVerification:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif