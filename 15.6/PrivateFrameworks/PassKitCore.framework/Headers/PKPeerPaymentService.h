// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTSERVICE_H
#define PKPEERPAYMENTSERVICE_H

@class NSHashTable;
@protocol PKPeerPaymentServiceExportedInterface, PKPeerPaymentTargetDeviceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKXPCService.h"
#import "PKPeerPaymentAccount.h"
#import "PKPeerPaymentPreferences.h"
#import "PKPeerPaymentWebServiceContext.h"

@interface PKPeerPaymentService : NSObject <PKPeerPaymentServiceExportedInterface, PKPeerPaymentTargetDeviceDelegate>

 {
    PKXPCService *_remoteService;
    PKPeerPaymentAccount *_account;
    PKPeerPaymentPreferences *_preferences;
    NSObject<OS_dispatch_queue> *_replyQueue;
    os_unfair_lock_s _accountLock;
    os_unfair_lock_s _lockObservers;
    NSHashTable *_observers;
    NSInteger _accountChangedNotificationSuspensionCount;
}


@property (readonly, nonatomic) PKPeerPaymentAccount *account;
@property (readonly, nonatomic) PKPeerPaymentPreferences *preferences;
@property (retain, nonatomic) PKPeerPaymentWebServiceContext *sharedPeerPaymentWebServiceContext;


+(id)sharedInstance;
-(id)_remoteObjectProxyWithFailureHandler:(id)arg0 ;
-(id)_synchronousRemoteObjectProxyForSelector:(SEL)arg0 ;
-(id)init;
-(id)lastUsedAlternateFundingSourcePassUniqueIdentifier;
-(void)_accessObserversWithHandler:(id)arg0 ;
-(void)_accountChanged:(id)arg0 ;
-(void)_postAccountChangeNotificationIfNecessaryForAccount:(id)arg0 previousAccount:(id)arg1 ;
-(void)_preferencesChanged:(id)arg0 ;
-(void)accountWithCompletion:(id)arg0 ;
-(void)balanceForPass:(id)arg0 completion:(id)arg1 ;
-(void)checkTLKsMissingWithCompletion:(id)arg0 ;
-(void)cloudStoreStatusWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)deleteAccountWithCompletion:(id)arg0 ;
-(void)deletePreferencesWithCompletion:(id)arg0 ;
-(void)downloadPassIfNecessaryWithCompletion:(id)arg0 ;
-(void)initalizeCloudStoreIfNecessaryWithHandler:(id)arg0 ;
-(void)preferencesWithCompletion:(id)arg0 ;
-(void)presentIdentityVerificationFlowWithResponse:(id)arg0 orientation:(id)arg1 completion:(id)arg2 ;
-(void)presentPeerPaymentTermsAndConditionsWithAccount:(id)arg0 orientation:(id)arg1 completion:(id)arg2 ;
-(void)presentRegistrationFlowWithAccount:(id)arg0 amount:(id)arg1 state:(NSUInteger)arg2 senderAddress:(id)arg3 orientation:(id)arg4 completion:(id)arg5 ;
-(void)presentRegistrationFlowWithAccount:(id)arg0 orientation:(id)arg1 completion:(id)arg2 ;
-(void)receivedPeerPaymentMessageData:(id)arg0 ;
-(void)registerDeviceWithCompletion:(id)arg0 ;
-(void)registerDeviceWithForceReregister:(BOOL)arg0 completion:(id)arg1 ;
-(void)registerDeviceWithRegistrationURL:(id)arg0 pushToken:(id)arg1 forceReregister:(BOOL)arg2 completion:(id)arg3 ;
-(void)registerObserver:(id)arg0 ;
-(void)registrationStatusWithCompletion:(id)arg0 ;
-(void)remoteRegistrationRequest:(id)arg0 forHandle:(id)arg1 completion:(id)arg2 ;
-(void)resetApplePayManateeViewWithCompletion:(id)arg0 ;
-(void)resumeAccountChangedNotifications;
-(void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(id)arg0 ;
-(void)sharedPeerPaymentWebServiceContextWithCompletion:(id)arg0 ;
-(void)suspendAccountChangedNotifications;
-(void)unregisterDeviceWithCompletion:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateAccountAndAssociatedAccountsWithCompletion:(id)arg0 ;
-(void)updateAccountWithCompletion:(id)arg0 ;
-(void)updateAssociatedAccountsWithCompletion:(id)arg0 ;
-(void)updateMessageReceivedDate:(id)arg0 forTransactionWithIdentifier:(id)arg1 ;
-(void)updateMockAccountBalanceByAddingAmount:(id)arg0 completion:(id)arg1 ;
-(void)updatePreferencesWithCompletion:(id)arg0 ;


@end


#endif