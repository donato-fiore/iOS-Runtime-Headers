// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTSERVICE_H
#define PKACCOUNTSERVICE_H

@class NSHashTable;
@protocol PKAccountServiceExportedInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKXPCService.h"

@interface PKAccountService : NSObject <PKAccountServiceExportedInterface>

 {
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_replyQueue;
    os_unfair_lock_s _lockObservers;
    NSHashTable *_observers;
    NSInteger _accountChangedNotificationSuspensionCount;
}




+(id)sharedInstance;
-(id)_remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)errorHandlerForMethod:(SEL)arg0 completion:(SEL)arg1 ;
-(id)init;
-(void)_accessObserversWithHandler:(id)arg0 ;
-(void)_accountsChanged:(id)arg0 ;
-(void)accountAdded:(id)arg0 ;
-(void)accountChanged:(id)arg0 ;
-(void)accountForPassWithUniqueID:(id)arg0 completion:(id)arg1 ;
-(void)accountPendingFamilyMembersForAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)accountRemoved:(id)arg0 ;
-(void)accountUsersChanged:(id)arg0 forAccountIdentifier:(id)arg1 ;
-(void)accountUsersForAccountWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)accountWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)accountWithVirtualCardIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)accountsForProvisioningWithCompletion:(id)arg0 ;
-(void)accountsWithCompletion:(id)arg0 ;
-(void)accountsWithPassLocallyProvisionedWithCompletion:(id)arg0 ;
-(void)activateBroadwayPhysicalCardWithActivationCode:(id)arg0 completion:(id)arg1 ;
-(void)activatePhysicalCard:(id)arg0 withActivationCode:(id)arg1 forFeatureIdentifier:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)attemptAppleBalanceSetupWithCompletion:(id)arg0 ;
-(void)attemptAppleStoredValueSetupWithCompletion:(id)arg0 ;
-(void)backgroundProvisionInProgressForFeature:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)beginPhysicalCardAction:(id)arg0 onPhysicalCardWithIdentifier:(id)arg1 forAccountWithIdentifier:(id)arg2 accountUserAltDSID:(id)arg3 deviceMetadata:(id)arg4 completion:(id)arg5 ;
-(void)beginPhysicalCardRequestWithOrder:(id)arg0 forAccountWithIdentifier:(id)arg1 accountUserAltDSID:(id)arg2 deviceMetadata:(id)arg3 completion:(id)arg4 ;
-(void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(id)arg0 withStartDate:(id)arg1 endDate:(id)arg2 completion:(id)arg3 ;
-(void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(id)arg0 withStatementIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)cardCredentialsForVirtualCard:(id)arg0 authorization:(id)arg1 action:(NSInteger)arg2 completion:(id)arg3 ;
-(void)completePhysicalCardActionRequest:(id)arg0 withSignature:(id)arg1 completion:(id)arg2 ;
-(void)completePhysicalCardRequest:(id)arg0 withSignature:(id)arg1 completion:(id)arg2 ;
-(void)createVirtualCard:(NSInteger)arg0 forAccountIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)creditStatementsForAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)defaultAccountForFeature:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)deleteAccountUserWithAltDSID:(id)arg0 forAccountWithIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)deleteAccountWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)deleteEventWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)deleteEventsWithAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)deleteEventsWithAccountIdentifier:(id)arg0 excludingTypes:(id)arg1 completion:(id)arg2 ;
-(void)deleteLocalAccountWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)didAddAccountPendingFamilyMembers:(id)arg0 ;
-(void)didUpdatePaymentFundingSources:(id)arg0 accountIdentifier:(id)arg1 ;
-(void)eventsForAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)eventsForAccountIdentifier:(id)arg0 types:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 orderedByDate:(NSInteger)arg4 limit:(NSUInteger)arg5 completion:(id)arg6 ;
-(void)exportTransactionDataForAccountIdentifier:(id)arg0 withFileFormat:(id)arg1 beginDate:(id)arg2 endDate:(id)arg3 productTimeZone:(id)arg4 completion:(id)arg5 ;
-(void)fetchKeychainCredentialForVirtualCardIdentifier:(id)arg0 forAccountIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)inactivePhysicalCardForFeatureIdentifier:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)insertDailyCashNotificationForAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)insertEvents:(id)arg0 withAccountidentifier:(id)arg1 completion:(id)arg2 ;
-(void)insertOrUpdateLocalAccount:(id)arg0 completion:(id)arg1 ;
-(void)insertSummaryNotificationForAccountIdentifier:(id)arg0 summaryType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)lastRedemptionEventToPeerPaymentForAccountIdentifier:(id)arg0 altDSID:(id)arg1 completion:(id)arg2 ;
-(void)lastUsedInAppFundingSourceForAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)markUserViewedIntroduction:(BOOL)arg0 forInstallmentIdentifiers:(id)arg1 accountIdentifier:(id)arg2 ;
-(void)noteSecurityCodeActivityWithAction:(NSInteger)arg0 forSecurityCodeIdentifier:(id)arg1 forVirtualCardIdentifier:(id)arg2 forAccountIdentifier:(id)arg3 completion:(id)arg4 ;
-(void)noteVirtualCardAutoFilledBySafari:(id)arg0 completion:(id)arg1 ;
-(void)paymentFundingSourceForIdentifier:(id)arg0 accountIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)paymentFundingSourcesForAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)performAccountAction:(id)arg0 withAccountIdentifier:(id)arg1 accountUserAltDSID:(id)arg2 completion:(id)arg3 ;
-(void)performVirtualCardAction:(NSInteger)arg0 forVirtualCardIdentifier:(id)arg1 forAccountIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)physicalCardForFeatureIdentifier:(NSUInteger)arg0 activationCode:(id)arg1 completion:(id)arg2 ;
-(void)physicalCardsChanged:(id)arg0 forAccountIdentifier:(id)arg1 ;
-(void)physicalCardsForAccountWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)registerObserver:(id)arg0 ;
-(void)scheduleSetupReminderForAccountWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)scheduledPaymentsChangedForAccountIdentifier:(id)arg0 ;
-(void)scheduledPaymentsWithAccountIdentifier:(id)arg0 includeFailedRecurringPayments:(BOOL)arg1 allowFetchFromServer:(BOOL)arg2 completion:(id)arg3 ;
-(void)scheduledPaymentsWithAccountIdentifier:(id)arg0 includeFailedRecurringPayments:(BOOL)arg1 completion:(id)arg2 ;
-(void)sharedAccountCloudStoreWithAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)statementsChangedForAccountIdentifier:(id)arg0 ;
-(void)termsWithIdentifier:(id)arg0 accepted:(BOOL)arg1 withAccountIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)triggerCloudStoreZoneCreationForAccount:(id)arg0 withCompletion:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateAccountUserNotificationSettings:(id)arg0 forAccountUserWithAltDSID:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)updateAccountUserPreferences:(id)arg0 forAccountUserWithAltDSID:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)updateAccountUsersForAccountWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)updateAccountWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)updateAccountWithIdentifier:(id)arg0 extended:(BOOL)arg1 completion:(id)arg2 ;
-(void)updateAccountsWithCompletion:(id)arg0 ;
-(void)updateLastUsedInAppFundingSource:(id)arg0 accountIdentifier:(id)arg1 ;
-(void)updateMockAccountWithAccount:(id)arg0 completion:(id)arg1 ;
-(void)updatePaymentFundingSourcesForAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)updateScheduledPaymentsWithAccount:(id)arg0 completion:(id)arg1 ;
-(void)updateSharedAccountCloudStoreWithAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)updateUserInfoForAccountIdentifier:(id)arg0 contact:(id)arg1 completion:(id)arg2 ;
-(void)updateVirtualCardsWithAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)updateWalletBadgeCountWithCompletion:(id)arg0 ;
-(void)userInfoForAccountIdentifier:(id)arg0 forceFetch:(BOOL)arg1 completion:(id)arg2 ;
-(void)validateAppleBalanceSecurityRequirementsWithCompletion:(id)arg0 ;
-(void)virtualCardsInKeychainWithCompletion:(id)arg0 ;
-(void)writeVirtualCardToKeychain:(id)arg0 completion:(id)arg1 ;


@end


#endif