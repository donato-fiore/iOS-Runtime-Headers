// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSERVICE_H
#define PKPAYMENTSERVICE_H

@class NSMutableArray, NSString;
@protocol PKXPCServiceDelegate, PKPaymentServiceExportedInterface, PKTapToRadarDelegate, PKPaymentServiceDelegate;

#import <Foundation/Foundation.h>

#import "PKXPCService.h"
#import "PKExpressTransactionState.h"
#import "PKFieldProperties.h"
#import "PKPaymentWebServiceContext.h"

@interface PKPaymentService : NSObject <PKXPCServiceDelegate, PKPaymentServiceExportedInterface, PKTapToRadarDelegate>

 {
    PKXPCService *_remoteService;
    NSUInteger _interfaceType;
    uint8_t _cachedFieldPropertiesValid;
    BOOL _hasPaymentDeviceFieldProperties;
    BOOL _forceConnectionOnResume;
    os_unfair_lock_s _pendingInvitationRequestsLock;
    NSMutableArray *_pendingInvitationRequests;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *defaultPaymentPassUniqueIdentifier;
@property (weak, nonatomic) NSObject<PKPaymentServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasPaymentDeviceFieldProperties;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKExpressTransactionState *outstandingExpressTransactionState;
@property (readonly, weak, nonatomic) PKFieldProperties *paymentDeviceFieldProperties;
@property (retain, nonatomic) PKPaymentWebServiceContext *sharedPaymentWebServiceContext;
@property (readonly) Class superclass;


-(BOOL)_hasInterfaceOfType:(NSUInteger)arg0 ;
-(BOOL)handleStandaloneTransaction:(NSInteger)arg0 forCredentialIdentifier:(id)arg1 appletIdentifier:(id)arg2 ;
-(BOOL)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg0 ;
-(NSUInteger)rangingSuspensionReasonForAppletSubcredential:(id)arg0 forPaymentApplicationID:(id)arg1 ;
-(id)_existingRemoteObjectProxy;
-(id)_extendedRemoteObjectProxy;
-(id)_extendedRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_extendedRemoteObjectProxyWithFailureHandler:(id)arg0 ;
-(id)_extendedSynchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_remoteObjectProxy;
-(id)_remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_remoteObjectProxyWithFailureHandler:(id)arg0 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)approvedTransactionsForTransactionSourceIdentifiers:(id)arg0 withTransactionSource:(NSUInteger)arg1 withBackingData:(NSUInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 limit:(NSInteger)arg5 ;
-(id)categoryVisualizationMagnitudesForPassUniqueID:(id)arg0 ;
-(id)defaultExpressFelicaTransitPassIdentifier;
-(id)defaultExpressTransitPassIdentifier;
-(id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg0 ;
-(id)expressPassInformationForMode:(id)arg0 ;
-(id)expressPassInformationWithPassUniqueIdentifier:(id)arg0 ;
-(id)expressPassesInformation;
-(id)expressPassesInformationWithAutomaticSelectionTechnologyType:(NSInteger)arg0 ;
-(id)expressPassesInformationWithCardType:(NSInteger)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg0 ;
-(id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg0 ;
-(void)_accessDelegate:(id)arg0 ;
-(void)_submitVerificationCode:(id)arg0 verificationData:(id)arg1 forDPANIdentifier:(id)arg2 usingSynchronousProxy:(BOOL)arg3 completion:(id)arg4 ;
-(void)accountAttestationAnonymizationSaltWithCompletion:(id)arg0 ;
-(void)addPlaceholderPassWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)addSharingInvitationReceipts:(id)arg0 onCredentialWithIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)addSubcredential:(id)arg0 fromSharingInvitation:(id)arg1 withCompletion:(id)arg2 ;
-(void)ambiguousPassUniqueIdentifierForTransactionWithServiceIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)ambiguousTransactionWithServiceIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)approvedTransactionsForTransactionSourceIdentifiers:(id)arg0 withTransactionSource:(NSUInteger)arg1 withBackingData:(NSUInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 limit:(NSInteger)arg5 completion:(id)arg6 ;
-(void)archiveMessageWithIdentifier:(id)arg0 ;
-(void)augmentedProductForInstallmentConfiguration:(id)arg0 withCompletion:(id)arg1 ;
-(void)balanceReminderThresholdForBalance:(id)arg0 pass:(id)arg1 withCompletion:(id)arg2 ;
-(void)balancesForPaymentPassWithUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)canAcceptInvitation:(id)arg0 withCompletion:(id)arg1 ;
-(void)cashbackByPeriodForTransactionSourceIdentifiers:(id)arg0 withStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 calendarUnit:(NSUInteger)arg4 type:(NSInteger)arg5 completion:(id)arg6 ;
-(void)categoryVisualizationMagnitudesForPassUniqueID:(id)arg0 completion:(id)arg1 ;
-(void)commutePlanReminderForCommputePlan:(id)arg0 pass:(id)arg1 withCompletion:(id)arg2 ;
-(void)conflictingExpressPassIdentifiersForPassInformation:(id)arg0 withCompletion:(id)arg1 ;
-(void)conflictingExpressPassIdentifiersForPassInformation:(id)arg0 withReferenceExpressState:(id)arg1 completion:(id)arg2 ;
-(void)consistencyCheck;
-(void)credential:(id)arg0 forPaymentApplication:(id)arg1 didUpdateRangingSuspensionReasons:(NSUInteger)arg2 ;
-(void)credentialWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)declineRelatedSharingInvitationsIfNecessary:(id)arg0 withCompletion:(id)arg1 ;
-(void)defaultPaymentPassIngestionSpecificIdentifier:(id)arg0 ;
-(void)deleteAllTransactionsForTransactionSourceIdentifiers:(id)arg0 ;
-(void)deleteMessagesForPaymentPassWithUniqueIdentifier:(id)arg0 ;
-(void)deletePaymentTransactionWithIdentifier:(id)arg0 ;
-(void)deleteTransactionReceiptWithUniqueID:(id)arg0 completion:(id)arg1 ;
-(void)didReceiveDeviceSharingCapabilities:(id)arg0 forHandle:(id)arg1 ;
-(void)didReceiveSharingInvitationRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)didReceiveSharingInvitationWithIdentifier:(id)arg0 fromOriginatorIDSHandle:(id)arg1 sharingSessionIdentifier:(id)arg2 metadata:(id)arg3 completion:(id)arg4 ;
-(void)didRecieveCredentialInvitation:(id)arg0 ;
-(void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg0 ;
-(void)didUpdateFamilyMembers:(id)arg0 ;
-(void)didUpdateSharingInvitationWithIdentifier:(id)arg0 reason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)disbursementVoucherWithDisbursementSource:(NSUInteger)arg0 disbursementTarget:(NSUInteger)arg1 bundleIdentifier:(id)arg2 teamIdentifier:(id)arg3 completion:(id)arg4 ;
-(void)displayTapToRadarAlertForRequest:(id)arg0 completion:(id)arg1 ;
-(void)downloadAllPaymentPasses;
-(void)enforceUpgradedPasscodePolicyWithCompletion:(id)arg0 ;
-(void)familyMembersIgnoringCache:(BOOL)arg0 completion:(id)arg1 ;
-(void)familyMembersWithCompletion:(id)arg0 ;
-(void)featureApplicationAdded:(id)arg0 ;
-(void)featureApplicationChanged:(id)arg0 ;
-(void)featureApplicationRemoved:(id)arg0 ;
-(void)featureApplicationWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)featureApplicationWithReferenceIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)featureApplicationsForAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)featureApplicationsForAccountUserInvitationWithCompletion:(id)arg0 ;
-(void)featureApplicationsForProvisioningWithCompletion:(id)arg0 ;
-(void)featureApplicationsWithCompletion:(id)arg0 ;
-(void)fetchBarcodesForPassUniqueIdentifier:(id)arg0 sessionExchangeToken:(id)arg1 withCompletion:(id)arg2 ;
-(void)finishedKeyExchangeForCredential:(id)arg0 withCompletion:(id)arg1 ;
-(void)hasTransactionsForTransactionSourceIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)initializeSecureElement:(id)arg0 ;
-(void)initializeSecureElementIfNecessaryWithCompletion:(id)arg0 ;
-(void)insertOrUpdatePaymentTransaction:(id)arg0 forPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(id)arg3 ;
-(void)insertOrUpdatePaymentTransaction:(id)arg0 forTransactionSourceIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)insertOrUpdateValueAddedServiceTransaction:(id)arg0 forPassUniqueIdentifier:(id)arg1 paymentTransaction:(id)arg2 completion:(id)arg3 ;
-(void)installmentPlanTransactionsForTransactionSourceIdentifiers:(id)arg0 accountIdentifier:(id)arg1 withRedemptionType:(NSInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 completion:(id)arg5 ;
-(void)installmentPlansWithTransactionReferennceIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)installmentTransactionsForInstallmentPlanIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)invalidateAuxiliaryCapabilityCertificatesForPassUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)isPassExpressWithUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)logoImageDataForURL:(id)arg0 completion:(id)arg1 ;
-(void)mapsMerchantWithIdentifier:(NSUInteger)arg0 resultProviderIdentifier:(int)arg1 completion:(id)arg2 ;
-(void)mapsMerchantsWithCompletion:(id)arg0 ;
-(void)markAuthenticationCompleteForTransactionIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)matchingInvitationOnDevice:(id)arg0 withTimeout:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)messagesForPaymentPassWithUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)passOwnershipTokenWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)passUniqueIdentifierForTransactionWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)passUniqueIdentifierForTransactionWithServiceIdentifier:(id)arg0 transactionSourceIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)passWithUniqueIdentifier:(id)arg0 didReceiveValueAddedServiceTransaction:(id)arg1 ;
-(void)passWithUniqueIdentifier:(id)arg0 didUpdateTiles:(id)arg1 ;
-(void)passbookBannerDidLaunch;
-(void)passbookUIServiceDidLaunch;
-(void)paymentDeviceDidEnterFieldWithProperties:(id)arg0 ;
-(void)paymentDeviceDidExitField;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didEnableMessageService:(BOOL)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didEnableTransactionService:(BOOL)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceiveBalanceUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceiveMessage:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceivePlanUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateBalanceReminder:(id)arg1 forBalanceWithIdentifier:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateCategoryVisualizationWithStyle:(NSInteger)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateCredential:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateWithTransitPassProperties:(id)arg1 ;
-(void)peerPaymentCounterpartHandlesForTransactionSourceIdentifier:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 completion:(id)arg3 ;
-(void)pendingFamilyMembersIgnoringCache:(BOOL)arg0 completion:(id)arg1 ;
-(void)pendingTransactionsForTransactionSourceIdentifiers:(id)arg0 withTransactionSource:(NSUInteger)arg1 withBackingData:(NSUInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 limit:(NSInteger)arg5 completion:(id)arg6 ;
-(void)performDeviceCheckInWithCompletion:(id)arg0 ;
-(void)performProductActionRequest:(id)arg0 completion:(id)arg1 ;
-(void)photosForFamilyMembersWithDSIDs:(id)arg0 completion:(id)arg1 ;
-(void)plansForPaymentPassWithUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)prepareIdentityProvisioningForTargetDeviceIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)prepareProvisioningTarget:(id)arg0 checkFamilyCircle:(BOOL)arg1 completion:(id)arg2 ;
-(void)processTransitTransactionEventWithHistory:(id)arg0 transactionDate:(id)arg1 forPaymentApplication:(id)arg2 withPassUniqueIdentifier:(id)arg3 expressTransactionState:(id)arg4 ;
-(void)processedAuthenticationMechanism:(NSUInteger)arg0 forTransactionIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)productsWithCompletion:(id)arg0 ;
-(void)productsWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)provideEncryptedPushProvisioningTarget:(id)arg0 sharingInstanceIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)provisionIdentityPassWithPassMetadata:(id)arg0 policyIdentifier:(id)arg1 targetDeviceIdentifier:(id)arg2 credentialIdentifier:(id)arg3 attestations:(id)arg4 completion:(id)arg5 ;
-(void)pushProvisioningSharingIdentifiers:(id)arg0 ;
-(void)recomputeCategoryVisualizationMangitudesForPassUniqueID:(id)arg0 style:(NSInteger)arg1 ;
-(void)redeemEncryptedProvisioningTarget:(id)arg0 completion:(id)arg1 ;
-(void)redeemPaymentShareableCredential:(id)arg0 completion:(id)arg1 ;
-(void)redeemProvisioningSharingIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)registerAuxiliaryCapabilityForPassUniqueIdentifier:(id)arg0 sessionExchangeToken:(id)arg1 withCompletion:(id)arg2 ;
-(void)registerCredentialsWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)remoteService:(id)arg0 didEstablishConnection:(id)arg1 ;
-(void)remoteService:(id)arg0 didInterruptConnection:(id)arg1 ;
-(void)remoteServiceDidSuspend:(id)arg0 ;
-(void)removeExpressPassWithUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeExpressPassesWithCardType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)removeMapsDataForTransactionWithIdentifier:(id)arg0 forTransactionSourceIdentifier:(id)arg1 issueReportIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)removeProductsCache;
-(void)removeSharingInvitation:(id)arg0 withCompletion:(id)arg1 ;
-(void)removeSharingInvitationReceiptWithIdentifiers:(id)arg0 onCredential:(id)arg1 completion:(id)arg2 ;
-(void)requestBackgroundRegistrationForCredentialWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)requestNotificationAuthorizationIfNecessaryWithCompletion:(id)arg0 ;
-(void)requestNotificationAuthorizationWithCompletion:(id)arg0 ;
-(void)requiresUpgradedPasscodeWithCompletion:(id)arg0 ;
-(void)retrieveDecryptedBarcodeCredentialForPassUniqueIdentifier:(id)arg0 authorization:(id)arg1 sessionExchangeToken:(id)arg2 withCompletion:(id)arg3 ;
-(void)retrieveDecryptedBarcodeCredentialForPassUniqueIdentifier:(id)arg0 authorization:(id)arg1 withCompletion:(id)arg2 ;
-(void)retrievePINEncryptionCertificateForPassUniqueIdentifier:(id)arg0 sessionExchangeToken:(id)arg1 withCompletion:(id)arg2 ;
-(void)retrievePINEncryptionCertificateForPassUniqueIdentifier:(id)arg0 withCompletion:(id)arg1 ;
-(void)revokeCredentialsWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)sanitizeExpressPasses;
-(void)scheduleAutomaticPresentationAvailableNotificationForPassWithUniqueIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)scheduleDeviceCheckInWithStartTimeOffset:(CGFloat)arg0 ;
-(void)scheduleDeviceUpgradeTasksIfNecessaryWithRandomizeStartDate:(BOOL)arg0 ;
-(void)scheduleSetupReminders;
-(void)sendAllPassTransactions;
-(void)sendDeviceSharingCapabilitiesRequestForHandle:(id)arg0 completion:(id)arg1 ;
-(void)setAccountAttestationAnonymizationSalt:(id)arg0 withCompletion:(id)arg1 ;
-(void)setBalanceReminder:(id)arg0 forBalance:(id)arg1 pass:(id)arg2 completion:(id)arg3 ;
-(void)setCommutePlanReminder:(id)arg0 forCommutePlan:(id)arg1 pass:(id)arg2 completion:(id)arg3 ;
-(void)setDefaultExpressFelicaTransitPassIdentifier:(id)arg0 withCredential:(id)arg1 completion:(id)arg2 ;
-(void)setDefaultExpressTransitPassIdentifier:(id)arg0 withCredential:(id)arg1 completion:(id)arg2 ;
-(void)setDefaultPaymentApplication:(id)arg0 forPassUniqueIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)setDeviceCheckInContextBuildVersion:(id)arg0 outstandingAction:(NSInteger)arg1 forRegion:(id)arg2 ;
-(void)setDeviceUpgradeTasksContextBuildVersion:(id)arg0 upgradeTaskVersion:(NSInteger)arg1 retryCount:(NSInteger)arg2 ;
-(void)setExpressWithPassInformation:(id)arg0 credential:(id)arg1 completion:(id)arg2 ;
-(void)setExpressWithPassInformation:(id)arg0 credential:(id)arg1 handler:(id)arg2 ;
-(void)setPaymentApplicationRangingSuspensionReason:(NSUInteger)arg0 forPassUniqueIdentifier:(id)arg1 ;
-(void)sharedPaymentWebServiceContextWithCompletion:(id)arg0 ;
-(void)sharingInvitationWasInvalidated:(id)arg0 withCredentialIdentifier:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)simulateDefaultExpressTransitPassIdentifier:(id)arg0 forExpressMode:(id)arg1 ;
-(void)simulateNotificationOfType:(NSUInteger)arg0 userInfo:(id)arg1 ;
-(void)simulatePaymentPush;
-(void)simulatePaymentPushTopic:(id)arg0 ;
-(void)startBackgroundVerificationObserverForPass:(id)arg0 verificationMethod:(id)arg1 ;
-(void)statusForShareableCredentials:(id)arg0 completion:(id)arg1 ;
-(void)storePassOwnershipToken:(id)arg0 withIdentifier:(id)arg1 ;
-(void)storeTransactionReceiptData:(id)arg0 completion:(id)arg1 ;
-(void)subcredentialInvitationsWithCompletion:(id)arg0 ;
-(void)submitApplyRequest:(id)arg0 completion:(id)arg1 ;
-(void)submitBarcodePaymentEvent:(id)arg0 forPassUniqueIdentifier:(id)arg1 sessionExchangeToken:(id)arg2 withCompletion:(id)arg3 ;
-(void)submitBarcodePaymentEvent:(id)arg0 forPassUniqueIdentifier:(id)arg1 withCompletion:(id)arg2 ;
-(void)submitDeleteRequest:(id)arg0 completion:(id)arg1 ;
-(void)submitDocumentRequest:(id)arg0 completion:(id)arg1 ;
-(void)submitEncryptedPIN:(id)arg0 forTransactionIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)submitEncryptedPIN:(id)arg0 forTransactionIdentifier:(id)arg1 sessionExchangeToken:(id)arg2 completion:(id)arg3 ;
-(void)submitTermsRequest:(id)arg0 completion:(id)arg1 ;
-(void)submitTransactionAnswerForTransaction:(id)arg0 questionType:(NSUInteger)arg1 answer:(id)arg2 completion:(id)arg3 ;
-(void)submitTransactionSignatureForTransactionIdentifier:(id)arg0 sessionExchangeToken:(id)arg1 completion:(id)arg2 ;
-(void)submitUserConfirmation:(BOOL)arg0 forTransactionIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)submitUserConfirmation:(BOOL)arg0 forTransactionIdentifier:(id)arg1 sessionExchangeToken:(id)arg2 completion:(id)arg3 ;
-(void)submitVerificationCode:(id)arg0 verificationData:(id)arg1 forDPANIdentifier:(id)arg2 ;
-(void)submitVerificationCode:(id)arg0 verificationData:(id)arg1 forDPANIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)submitVerificationRequest:(id)arg0 completion:(id)arg1 ;
-(void)tilesForPassWithUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)transactionBatch:(id)arg0 moreComing:(BOOL)arg1 readyForNextBatch:(id)arg2 ;
-(void)transactionCountByPeriodForTransactionSourceIdentifiers:(id)arg0 withTransactionSource:(NSUInteger)arg1 withBackingData:(NSUInteger)arg2 calendar:(id)arg3 unit:(NSUInteger)arg4 includePurchaseTotal:(BOOL)arg5 completion:(id)arg6 ;
-(void)transactionReceiptForTransactionWithIdentifier:(id)arg0 updateIfNecessary:(BOOL)arg1 completion:(id)arg2 ;
-(void)transactionReceiptWithUniqueID:(id)arg0 completion:(id)arg1 ;
-(void)transactionSourceIdentifier:(id)arg0 didReceiveTransaction:(id)arg1 ;
-(void)transactionSourceIdentifier:(id)arg0 didRemoveTransactionWithIdentifier:(id)arg1 ;
-(void)transactionSourceTypeForTransactionSourceIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)transactionWithIdentifier:(id)arg0 didDownloadTransactionReceipt:(id)arg1 ;
-(void)transactionWithReferenceIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)transactionWithServiceIdentifier:(id)arg0 transactionSourceIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)transactionWithTransactionIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)transactionsForPredicate:(id)arg0 limit:(NSInteger)arg1 completion:(id)arg2 ;
-(void)transactionsForRequest:(id)arg0 completion:(id)arg1 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg0 matchingMerchant:(id)arg1 withTransactionSource:(NSUInteger)arg2 withBackingData:(NSUInteger)arg3 limit:(NSInteger)arg4 completion:(id)arg5 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg0 withMerchantCategory:(NSInteger)arg1 withTransactionSource:(NSUInteger)arg2 withBackingData:(NSUInteger)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(NSInteger)arg6 completion:(id)arg7 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg0 withPeerPaymentCounterpartHandles:(id)arg1 withTransactionSource:(NSUInteger)arg2 withBackingData:(NSUInteger)arg3 limit:(NSInteger)arg4 completion:(id)arg5 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg0 withTransactionSource:(NSUInteger)arg1 withBackingData:(NSUInteger)arg2 limit:(NSInteger)arg3 completion:(id)arg4 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg0 withTransactionSource:(NSUInteger)arg1 withBackingData:(NSUInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 limit:(NSInteger)arg5 completion:(id)arg6 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg0 withTransactionSource:(NSUInteger)arg1 withBackingData:(NSUInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 orderedByDate:(NSInteger)arg5 limit:(NSInteger)arg6 completion:(id)arg7 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg0 withTransactionType:(NSInteger)arg1 withTransactionSource:(NSUInteger)arg2 withBackingData:(NSUInteger)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(NSInteger)arg6 completion:(id)arg7 ;
-(void)transactionsRequiringReviewForAccountWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)transactionsWithTransactionSource:(NSUInteger)arg0 withBackingData:(NSUInteger)arg1 limit:(NSInteger)arg2 completion:(id)arg3 ;
-(void)transitStateWithPassUniqueIdentifier:(id)arg0 paymentApplication:(id)arg1 completion:(id)arg2 ;
-(void)unscheduleDeviceCheckIn;
-(void)unscheduleDeviceUpgradeTaskActivity;
-(void)updateAllMapsBrandAndMerchantDataWithCompletion:(id)arg0 ;
-(void)updateFeatureApplicationsForAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)updateMetadataOnPassWithIdentifier:(id)arg0 credential:(id)arg1 completion:(id)arg2 ;
-(void)updateNotificationForProductIdentifier:(id)arg0 configuration:(id)arg1 localizedNotificationTitle:(id)arg2 localizedNotificationMessage:(id)arg3 completion:(id)arg4 ;
-(void)valueAddedServiceTransactionWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)valueAddedServiceTransactionsForPassWithUniqueIdentifier:(id)arg0 limit:(NSInteger)arg1 completion:(id)arg2 ;
-(void)valueAddedServiceTransactionsForPaymentTransaction:(id)arg0 limit:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif