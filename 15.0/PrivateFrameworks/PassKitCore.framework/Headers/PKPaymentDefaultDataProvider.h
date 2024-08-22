// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTDEFAULTDATAPROVIDER_H
#define PKPAYMENTDEFAULTDATAPROVIDER_H

@class NSHashTable, NSString;
@protocol PKPaymentServiceDelegate, PKPaymentDataProvider, OS_dispatch_queue, PKPaymentDataProviderDelegate;

#import <Foundation/Foundation.h>

#import "PKPaymentService.h"
#import "PKSecureElement.h"
#import "PKOSVersionRequirement.h"
#import "PKPaymentWebService.h"

@interface PKPaymentDefaultDataProvider : NSObject <PKPaymentServiceDelegate, PKPaymentDataProvider>

 {
    PKPaymentService *_paymentService;
    PKSecureElement *_secureElement;
    NSHashTable *_delegates;
    os_unfair_lock_s _delegateLock;
    NSObject<OS_dispatch_queue> *_replyQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *defaultPaymentPassIdentifier;
@property (weak, nonatomic) NSObject<PKPaymentDataProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceClass;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) PKOSVersionRequirement *deviceVersion;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDeviceInRestrictedMode;
@property (readonly, nonatomic) BOOL isPaymentHandoffDisabled;
@property (readonly, nonatomic) PKPaymentWebService *paymentWebService; // ivar: _paymentWebService
@property (readonly, nonatomic) NSString *secureElementIdentifier;
@property (readonly, nonatomic) BOOL secureElementIsProductionSigned;
@property (readonly) Class superclass;


-(BOOL)supportsAddingPaymentPasses;
-(BOOL)supportsExpressForAutomaticSelectionTechnologyType:(NSInteger)arg0 ;
-(BOOL)supportsInAppPaymentsForPass:(id)arg0 ;
-(BOOL)supportsLowPowerExpressMode;
-(BOOL)supportsMessagesForPass:(id)arg0 ;
-(BOOL)supportsNotificationsForPass:(id)arg0 ;
-(BOOL)supportsTransactionsForPass:(id)arg0 ;
-(NSInteger)apiVersion;
-(id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg0 ;
-(id)expressPassesInformation;
-(id)expressPassesInformationWithCardType:(NSInteger)arg0 ;
-(id)init;
-(id)initWithPaymentService:(id)arg0 secureElement:(id)arg1 ;
-(id)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg0 ;
-(id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg0 ;
-(void)_accessDelegatesWithHandler:(id)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)approvedTransactionsForTransactionSourceIdentifiers:(id)arg0 withTransactionSource:(NSUInteger)arg1 withBackingData:(NSUInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 limit:(NSInteger)arg5 completion:(id)arg6 ;
-(void)archiveMessageWithIdentifier:(id)arg0 ;
-(void)balanceReminderThresholdForBalance:(id)arg0 pass:(id)arg1 withCompletion:(id)arg2 ;
-(void)balancesForPaymentPassWithUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)cashbackByPeriodForTransactionSourceIdentifiers:(id)arg0 withStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 calendarUnit:(NSUInteger)arg4 type:(NSInteger)arg5 completion:(id)arg6 ;
-(void)commutePlanReminderForCommutePlan:(id)arg0 pass:(id)arg1 withCompletion:(id)arg2 ;
-(void)conflictingExpressPassIdentifiersForPassInformation:(id)arg0 withCompletion:(id)arg1 ;
-(void)credential:(id)arg0 forPaymentApplication:(id)arg1 didUpdateRangingSuspensionReasons:(NSUInteger)arg2 ;
-(void)credentialWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)dataElementsForCredentialIdentifier:(id)arg0 partition:(id)arg1 elementIdentifiers:(id)arg2 completion:(id)arg3 ;
-(void)dealloc;
-(void)deletePaymentTransactionWithIdentifier:(id)arg0 ;
-(void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg0 ;
-(void)didUpdateFamilyMembers:(id)arg0 ;
-(void)familyMembersWithCompletion:(id)arg0 ;
-(void)featureApplicationAdded:(id)arg0 ;
-(void)featureApplicationChanged:(id)arg0 ;
-(void)featureApplicationRemoved:(id)arg0 ;
-(void)featureApplicationsForAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)hasTransactionsForTransactionSourceIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)installmentPlanTransactionsForTransactionSourceIdentifiers:(id)arg0 accountIdentifier:(id)arg1 withRedemptionType:(NSInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 completion:(id)arg5 ;
-(void)installmentPlansWithTransactionReferenceIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)installmentTransactionsForInstallmentPlanIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)mapsMerchantsWithCompletion:(id)arg0 ;
-(void)messagesForPaymentPassWithUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)passUpgradeWithRequest:(id)arg0 pass:(id)arg1 visibleViewController:(id)arg2 completion:(id)arg3 ;
-(void)passWithUniqueIdentifier:(id)arg0 didUpdateTiles:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didEnableMessageService:(BOOL)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didEnableTransactionService:(BOOL)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceiveBalanceUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceiveMessage:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceivePlanUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateBalanceReminder:(id)arg1 forBalanceWithIdentifier:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateCredential:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateWithTransitPassProperties:(id)arg1 ;
-(void)pendingTransactionsForTransactionSourceIdentifiers:(id)arg0 withTransactionSource:(NSUInteger)arg1 withBackingData:(NSUInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 limit:(NSInteger)arg5 completion:(id)arg6 ;
-(void)photosForFamilyMembersWithDSIDs:(id)arg0 completion:(id)arg1 ;
-(void)plansForPaymentPassWithUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeDelegate:(id)arg0 ;
-(void)removeExpressPassWithUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeExpressPassesWithCardType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)setBalanceReminder:(id)arg0 forBalance:(id)arg1 pass:(id)arg2 completion:(id)arg3 ;
-(void)setCommutePlanReminder:(id)arg0 forCommutePlan:(id)arg1 pass:(id)arg2 completion:(id)arg3 ;
-(void)setDefaultPaymentApplication:(id)arg0 forPassUniqueIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)setExpressWithPassInformation:(id)arg0 credential:(id)arg1 completion:(id)arg2 ;
-(void)setPaymentHandoffDisabled:(BOOL)arg0 ;
-(void)submitTransactionAnswerForTransaction:(id)arg0 questionType:(NSUInteger)arg1 answer:(id)arg2 completion:(id)arg3 ;
-(void)tilesForPassWithUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)transactionCountByPeriodForTransactionSourceIdentifiers:(id)arg0 withTransactionSource:(NSUInteger)arg1 withBackingData:(NSUInteger)arg2 calendar:(id)arg3 calendarUnit:(NSUInteger)arg4 includePurchaseTotal:(BOOL)arg5 completion:(id)arg6 ;
-(void)transactionReceiptForTransactionWithIdentifier:(id)arg0 updateIfNecessary:(BOOL)arg1 completion:(id)arg2 ;
-(void)transactionReceiptWithUniqueID:(id)arg0 completion:(id)arg1 ;
-(void)transactionSourceIdentifier:(id)arg0 didReceiveTransaction:(id)arg1 ;
-(void)transactionSourceIdentifier:(id)arg0 didRemoveTransactionWithIdentifier:(id)arg1 ;
-(void)transactionWithIdentifier:(id)arg0 didDownloadTransactionReceipt:(id)arg1 ;
-(void)transactionWithReferenceIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)transactionWithServiceIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)transactionWithServiceIdentifier:(id)arg0 transactionSourceIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)transactionsForRequest:(id)arg0 completion:(id)arg1 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg0 matchingMerchant:(id)arg1 withTransactionSource:(NSUInteger)arg2 withBackingData:(NSUInteger)arg3 limit:(NSInteger)arg4 completion:(id)arg5 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg0 withMerchantCategory:(NSInteger)arg1 withTransactionSource:(NSUInteger)arg2 withBackingData:(NSUInteger)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(NSInteger)arg6 completion:(id)arg7 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg0 withPeerPaymentCounterpartHandles:(id)arg1 withTransactionSource:(NSUInteger)arg2 withBackingData:(NSUInteger)arg3 limit:(NSInteger)arg4 completion:(id)arg5 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg0 withTransactionSource:(NSUInteger)arg1 withBackingData:(NSUInteger)arg2 limit:(NSInteger)arg3 completion:(id)arg4 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg0 withTransactionSource:(NSUInteger)arg1 withBackingData:(NSUInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 limit:(NSInteger)arg5 completion:(id)arg6 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg0 withTransactionSource:(NSUInteger)arg1 withBackingData:(NSUInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 orderedByDate:(NSInteger)arg5 limit:(NSInteger)arg6 completion:(id)arg7 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg0 withTransactionType:(NSInteger)arg1 withTransactionSource:(NSUInteger)arg2 withBackingData:(NSUInteger)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(NSInteger)arg6 completion:(id)arg7 ;
-(void)transactionsRequiringReviewForAccountWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)transitStateWithPassUniqueIdentifier:(id)arg0 paymentApplication:(id)arg1 completion:(id)arg2 ;


@end


#endif