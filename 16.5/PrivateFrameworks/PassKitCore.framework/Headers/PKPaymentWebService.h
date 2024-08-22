// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTWEBSERVICE_H
#define PKPAYMENTWEBSERVICE_H

@class NSURLSession, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSHashTable, NSString, NSArray, NSURL;
@protocol NSURLSessionDownloadDelegate, OS_dispatch_queue, PKPaymentWebServiceArchiver, PKPaymentWebServiceBackgroundDelegate, PKPaymentWebServiceTargetDeviceProtocol;


#import "PKWebService.h"
#import "PKPaymentDevice.h"
#import "PKPaymentWebServiceContext.h"
#import "PKPaymentWebServiceBackgroundContext.h"

@interface PKPaymentWebService : PKWebService <NSURLSessionDownloadDelegate>

 {
    NSURLSession *_backgroundSession;
    PKPaymentDevice *_paymentDevice;
    NSMutableDictionary *_passesByLocalURL;
    NSUInteger _paymentSupportInRegion;
    NSUInteger _registrationSupportInRegion;
    NSMutableSet *_activeRegistrationTasks;
    os_unfair_lock_s _lock;
    os_unfair_lock_s _delegateLock;
    NSObject<OS_dispatch_queue> *_backgroundDownloadQueue;
    NSOperationQueue *_backgroundSessionDelegateQueue;
    NSHashTable *_delegates;
    PKPaymentWebServiceContext *_context;
    os_unfair_lock_s _contextLock;
    BOOL _handlingApplePayTrustReRegister;
}


@property (retain) NSObject<PKPaymentWebServiceArchiver> *archiver; // ivar: _archiver
@property (retain) PKPaymentWebServiceBackgroundContext *backgroundContext; // ivar: _backgroundContext
@property (weak) NSObject<PKPaymentWebServiceBackgroundDelegate> *backgroundDelegate; // ivar: _backgroundDelegate
@property (retain, nonatomic) PKPaymentWebServiceContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSArray *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL needsConfiguration;
@property (readonly) BOOL needsRegistration;
@property (readonly) NSUInteger paymentSetupSupportedInRegion;
@property (readonly) NSURL *primaryBrokerURL;
@property (readonly) BOOL registrationSetupSupportedInRegion;
@property (nonatomic) BOOL sharedService; // ivar: _sharedService
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PKPaymentWebServiceTargetDeviceProtocol> *targetDevice; // ivar: _targetDevice


+(BOOL)supportsSecureCoding;
-(BOOL)_canRegisterForPeerPayment;
-(BOOL)_hasConfiguration;
-(BOOL)_isSandboxAccount;
-(BOOL)_isValidResponse:(id)arg0 error:(id)arg1 ;
-(BOOL)_needsRegistrationShouldCheckSecureElementOwnership:(BOOL)arg0 ;
-(BOOL)_supportsAccounts;
-(BOOL)canBypassTrustValidation;
-(BOOL)isChinaRegionIdentifier:(id)arg0 ;
-(BOOL)needsConfigurationWithSupportedRegionTimeInterval:(CGFloat)arg0 unsupportedRegionTimeInterval:(CGFloat)arg1 ;
-(NSInteger)logFacilityType;
-(NSUInteger)_augmentSessionWithRequest:(id)arg0 serviceURL:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)_auxiliaryCapabilityRegisterResultForResponse:(id)arg0 error:(id)arg1 successHandler:(id)arg2 ;
-(NSUInteger)_downloadPassAtURL:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)_nonceWithRequest:(id)arg0 serviceURL:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)_passActionGroupIncludingAppletDataWithRemoteContentPassActionGroup:(id)arg0 forPass:(id)arg1 forDeviceIdentifier:(id)arg2 completion:(id)arg3 ;
-(NSUInteger)_passActionGroupWithRemoteContentPassActionGroup:(id)arg0 forPass:(id)arg1 forDeviceIdentifier:(id)arg2 completion:(id)arg3 ;
-(NSUInteger)_passActionIncludingAppletDataWithRemoteContentPassAction:(id)arg0 pass:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)_passActionWithRemoteContentPassAction:(id)arg0 encryptedServiceProviderData:(id)arg1 forDeviceIdentifier:(id)arg2 passTypeIdentifier:(id)arg3 passSerialNumber:(id)arg4 completion:(id)arg5 ;
-(NSUInteger)_passActionWithRemoteContentPassAction:(id)arg0 forDeviceIdentifier:(id)arg1 passTypeIdentifier:(id)arg2 passSerialNumber:(id)arg3 completion:(id)arg4 ;
-(NSUInteger)_passActionWithRemoteContentPassAction:(id)arg0 pass:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)_performAccountApplePayTrustProtocolRequest:(id)arg0 originalRequest:(id)arg1 taskID:(NSUInteger)arg2 completion:(id)arg3 ;
-(NSUInteger)_performAccountRequest:(id)arg0 account:(id)arg1 request:(id)arg2 taskID:(NSUInteger)arg3 responseClass:(Class)arg4 completion:(id)arg5 ;
-(NSUInteger)_performAccountRequest:(id)arg0 account:(id)arg1 responseClass:(Class)arg2 completion:(id)arg3 ;
-(NSUInteger)_performAccountRequest:(id)arg0 request:(id)arg1 responseClass:(Class)arg2 completion:(id)arg3 ;
-(NSUInteger)_performAccountRequest:(id)arg0 responseClass:(Class)arg1 completion:(id)arg2 ;
-(NSUInteger)_performAccountRequest:(id)arg0 taskID:(NSUInteger)arg1 responseClass:(Class)arg2 completion:(id)arg3 ;
-(NSUInteger)_performApplePayTrustRegistrationWithURL:(id)arg0 pushToken:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)_performApplyRequest:(id)arg0 responseClass:(Class)arg1 completion:(id)arg2 ;
-(NSUInteger)_performOptionalAccountApplePayTrustProtocolRequest:(id)arg0 originalRequest:(id)arg1 taskID:(NSUInteger)arg2 completion:(id)arg3 ;
// -(NSUInteger)_performRewrapRequest:(id)arg0 serviceURL:(id)arg1 responseHandler:(id)arg2 completion:(unk)arg3  ;
-(NSUInteger)_resultForResponse:(id)arg0 error:(id)arg1 successHandler:(id)arg2 ;
-(NSUInteger)_resultForUnexpectedStatusCode:(NSInteger)arg0 ;
-(NSUInteger)_updateContextWithRegistrationResponse:(id)arg0 ;
-(NSUInteger)accountActionWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountBalanceHistoryWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountBankLookupWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountDocumentActionWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountFinancingOptionsWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountFinancingPlanNonceWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountFinancingPlanPaymentIntentWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountFinancingPlansWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountPassDetailsRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountPayLaterChangeAutoPaymentWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountPayLaterContentWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountPayLaterDisputeSendEmailWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountPayLaterFinancingOptionCancellationWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountReportFraudEventWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountSendReportWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountServiceCertificatesWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountStatementsWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountTaxFormsWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountTermsDataWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountTermsWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountTransactionAnswerWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountUpdateUserInfoWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountUserInfoWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountUsersWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)accountsWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)addFundingSourceWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)applePayTrustSignatureRequestWithRequest:(id)arg0 account:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)applePayTrustSignatureRequestWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)applicationsWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)applyWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)augmentSessionWithRequest:(id)arg0 serviceURL:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)augmentedProductWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)availableDevicesWithCompletion:(id)arg0 ;
-(NSUInteger)availableProductsWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)browseableBankAppsWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)cancelPaymentWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)cardInfoForMerchantIdentifier:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)checkAuxiliaryCapabilityRegistrationStateWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)checkMerchantStatus:(id)arg0 forDomain:(id)arg1 withCompletion:(id)arg2 ;
-(NSUInteger)completeSession:(id)arg0 wrappedPayment:(id)arg1 pass:(id)arg2 applicationData:(id)arg3 completion:(id)arg4 ;
-(NSUInteger)completeSessionWithRequest:(id)arg0 serviceURL:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)configurePaymentServiceWithCompletion:(id)arg0 ;
-(NSUInteger)contactInformationWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)createVirtualCardWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)createWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)createdZoneWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)credentialAccountAttesationWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)customizePhysicalCardWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)dailyCashEligibilityWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)deleteAccountUserWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)deleteAccountWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)deleteApplicationWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)deleteForRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)deleteFundingSourceWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)deleteMerchantTokenWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)deprovisionForRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)deviceCheckInDeviceCheckInForRegion:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)devicePassesSinceLastUpdatedTag:(BOOL)arg0 withCompletion:(id)arg1 ;
-(NSUInteger)discoveryBundleForURL:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)discoveryManifestWithCompletion:(id)arg0 ;
-(NSUInteger)eligibilityForRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)enhancedMerchantsWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)exportTransactionDataWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)featureTermsDataWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)fetchBarcodesWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)fundingSourcesWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)inAppPaymentNonceForPass:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)inAppPaymentNonceWithRequest:(id)arg0 serviceURL:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)issuerProvisioningCertificatesForRequest:(id)arg0 withCompletion:(id)arg1 ;
-(NSUInteger)moreInfoItemAtURL:(id)arg0 withMetadata:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)networkManifestWithCompletion:(id)arg0 ;
-(NSUInteger)notifyIssuerAppletStateDirtyWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)passActionGroupWithRemoteContentPassActionGroup:(id)arg0 forPass:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)passActionWithRemoteContentPassAction:(id)arg0 encryptedServiceProviderData:(id)arg1 forDeviceIdentifier:(id)arg2 passTypeIdentifier:(id)arg3 passSerialNumber:(id)arg4 completion:(id)arg5 ;
-(NSUInteger)passActionWithRemoteContentPassAction:(id)arg0 forDeviceIdentifier:(id)arg1 passTypeIdentifier:(id)arg2 passSerialNumber:(id)arg3 completion:(id)arg4 ;
-(NSUInteger)passActionWithRemoteContentPassAction:(id)arg0 forPass:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)passAtURL:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)passUpgradeWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)passWithPassTypeIdentifier:(id)arg0 serialNumber:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)passesWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)paymentProvisioningNonceOfType:(NSUInteger)arg0 completion:(id)arg1 ;
-(NSUInteger)paymentsWithRequest:(id)arg0 account:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)performAction:(id)arg0 onServiceProviderPurchase:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)performApplePayTrustRegistrationWithCompletion:(id)arg0 ;
-(NSUInteger)performInstallmentAuthorizationWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)performInstallmentBindWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)performNotificationActionRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)performProductActionRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)performServiceProviderPayment:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)physicalCardActionWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)physicalCardsWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)prepareTransactionDetailsForMerchantSession:(id)arg0 secureElementIdentifier:(id)arg1 amount:(id)arg2 currencyCode:(id)arg3 completion:(id)arg4 ;
-(NSUInteger)promotionsWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)provideEncryptedPushProvisioningTargetWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)provisionForRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)provisionPassesWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)provisionRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)provisioningMethodWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)pushProvisioningSharingIdentifiersWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)pushProvisioningSharingStatusRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)regeneratePaymentCredentialsForPaymentPass:(id)arg0 vpanIdentifier:(id)arg1 nonce:(id)arg2 encryptionFields:(id)arg3 completion:(id)arg4 ;
-(NSUInteger)registerAuxiliaryCapabilityWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)registerCredentialWithRequest:(id)arg0 withCompletion:(id)arg1 ;
-(NSUInteger)registerDeviceAtBrokerURL:(id)arg0 consistencyCheckResults:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)registerDeviceAtBrokerURL:(id)arg0 withConsistencyCheckResults:(id)arg1 retries:(NSUInteger)arg2 completion:(id)arg3 ;
-(NSUInteger)registerDeviceWithCompletion:(id)arg0 ;
-(NSUInteger)remotePaymentCredentialsForRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)remotePaymentCredentialsUpdateForRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)repopulateZonesWithCloudStoreZoneNames:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)requestPhysicalCardWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)requestVerificationCodeForPass:(id)arg0 usingChannel:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)requirementsForRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)resendVerificationRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)retrieveMerchantTokensWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)revokeSharedCredentialWithRequest:(id)arg0 withCompletion:(id)arg1 ;
-(NSUInteger)rewrapInAppPayment:(id)arg0 merchantIdentifier:(id)arg1 hostApplicationIdentifier:(id)arg2 applicationData:(id)arg3 pass:(id)arg4 completion:(id)arg5 ;
-(NSUInteger)rewrapInAppPayment:(id)arg0 merchantIdentifier:(id)arg1 merchantSession:(id)arg2 hostApplicationIdentifier:(id)arg3 applicationData:(id)arg4 pass:(id)arg5 paymentApplication:(id)arg6 completion:(id)arg7 ;
-(NSUInteger)rewrapInAppPaymentWithRequest:(id)arg0 serviceURL:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)savingsAccountStatementsWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)savingsAccountUserInfoWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)schedulePaymentWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)scheduleTransferWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)sendOwnershipTokensForReason:(NSUInteger)arg0 completion:(id)arg1 ;
-(NSUInteger)serviceProviderAugmentSessionWithRequest:(id)arg0 serviceURL:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)serviceProviderNonceWithRequest:(id)arg0 serviceURL:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)serviceProviderPurchaseWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)serviceProviderPurchasesWithRequest:(id)arg0 inRegion:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)sharedAccountCloudStoreWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)shownTermsWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)submitDocumentsWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)submitTermsWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)submitVerificationCode:(id)arg0 verificationData:(id)arg1 forPass:(id)arg2 completion:(id)arg3 ;
-(NSUInteger)submitVerificationWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)supportTopicsWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)termsDataWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)transactionReceiptAuthorizationWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)transactionReceiptWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)transferEligibilityWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)transfersWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)unregisterDeviceWithCompanionSerialNumber:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)unregisterDeviceWithCompletion:(id)arg0 ;
-(NSUInteger)updateAccountUserPreferencesWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)updateRegistrationDataAtBrokerURL:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)updateVerification:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)verificationChannelsForPass:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)verificationOptionsForRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)virtualCardActionWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)virtualCardLegacyCredentialsWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)virtualCardListWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)virtualCardPaymentSessionWithCompletion:(id)arg0 ;
-(NSUInteger)virtualCardSecurityCodeActivity:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)vpanNonceForPaymentPass:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)vpanPaymentCredentialsForPaymentPass:(id)arg0 vpanIdentifier:(id)arg1 nonce:(id)arg2 encryptionFields:(id)arg3 merchantHost:(id)arg4 completion:(id)arg5 ;
-(NSUInteger)vpanPaymentCredentialsForPaymentPass:(id)arg0 vpanIdentifier:(id)arg1 nonce:(id)arg2 encryptionFields:(id)arg3 merchantHost:(id)arg4 regenerate:(BOOL)arg5 completion:(id)arg6 ;
-(id)_appleAccountInformation;
-(id)_downloadCacheLocation;
-(id)_downloadPassesWithURLs:(id)arg0 ;
-(id)_errorWithResult:(NSUInteger)arg0 data:(id)arg1 ;
-(id)_fakeVerificationChannelsWithRealChannels:(id)arg0 ;
-(id)_movePassToDownloadCache:(id)arg0 ;
-(id)_passWithFileURL:(id)arg0 ;
-(id)_paymentDevice;
-(id)forbiddenErrorWithResponse:(id)arg0 ;
-(id)initWithContext:(id)arg0 targetDevice:(id)arg1 archiver:(id)arg2 ;
-(id)initWithContext:(id)arg0 targetDevice:(id)arg1 archiver:(id)arg2 tapToRadarDelegate:(id)arg3 ;
-(id)initWithContext:(id)arg0 targetDevice:(id)arg1 tapToRadarDelegate:(id)arg2 ;
-(id)initWithTapToRadarDelegate:(id)arg0 ;
-(id)removeRedundantChannelsFromChannels:(id)arg0 ;
-(id)verificationRecordForPass:(id)arg0 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)_applePayTrustPublicKeyHashWithCompletion:(id)arg0 ;
-(void)_archiveBackgroundContext;
-(void)_archiveContext;
-(void)_backgroundDownloadCloudStoreAssetsforItem:(id)arg0 cloudStoreCoordinatorDelegate:(id)arg1 ;
-(void)_canRegisterForPeerPaymentWithCompletion:(id)arg0 ;
-(void)_cleanupPassDownloadCache;
-(void)_createApplePayTrustKeyWithCompletion:(id)arg0 ;
-(void)_deviceConfigurationDataWithCompletion:(id)arg0 ;
-(void)_deviceDataIncludingMetadataFields:(NSUInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)_deviceProvisioningDataIncludingDeviceMetadata:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_deviceRegistrationDataWithCompletion:(id)arg0 ;
-(void)_handleDeviceCheckInTask:(id)arg0 downloadRecord:(id)arg1 data:(id)arg2 ;
-(void)_handlePassDownloadTask:(id)arg0 data:(id)arg1 ;
-(void)_handlePassListDownloadTask:(id)arg0 data:(id)arg1 ;
-(void)_handleRemoteAssetDownloadForManifestItem:(id)arg0 taskPassURL:(id)arg1 data:(id)arg2 shouldWriteData:(BOOL)arg3 ;
-(void)_handleRemoteCloudStoreAssetForRecordName:(id)arg0 taskRecord:(id)arg1 data:(id)arg2 shouldWriteData:(BOOL)arg3 ;
-(void)_handleRemoteURLAssetDownloadTask:(id)arg0 data:(id)arg1 ;
-(void)_handleRetryAfterApplePayTrustEnrollmentWithOriginalRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleRetryAfterRegisterWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleRetryAfterTSMSyncForPushTopic:(id)arg0 withRequest:(id)arg1 taskIdentifier:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)_passOwnershipTokenForPaymentCredential:(id)arg0 completion:(id)arg1 ;
-(void)_passWithData:(id)arg0 response:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)_performVerificationRequest:(id)arg0 selectedChannel:(id)arg1 paymentPass:(id)arg2 taskID:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)_recentConfiguration:(id)arg0 ;
-(void)_regionChanged;
-(void)_registerIfNeededWithResponse:(id)arg0 task:(id)arg1 isRedirect:(BOOL)arg2 completion:(id)arg3 ;
-(void)_removeVerificationRequestRecord:(id)arg0 ;
-(void)_renewAppleAccountWithCompletionHandler:(id)arg0 ;
-(void)_resetSupportInRegionCache;
-(void)_shouldPerformApplePayTrustRegistrationWithCompletion:(id)arg0 ;
-(void)_startBackgroundURLSessionWithIdentifier:(id)arg0 context:(id)arg1 backgroundDelegate:(id)arg2 completion:(id)arg3 ;
-(void)_storePassOwnershipToken:(id)arg0 withIdentifier:(id)arg1 ;
-(void)_updateRequestWithCurrentTargetDevice:(id)arg0 ;
-(void)_updateSharedServiceWithContext:(id)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)backgroundDownloadPassAtURL:(id)arg0 ;
-(void)backgroundDownloadPassesForPushTopic:(id)arg0 sinceLastUpdatedTag:(BOOL)arg1 ;
-(void)backgroundDownloadPassesSinceLastUpdatedTag:(BOOL)arg0 ;
-(void)backgroundDownloadRemotePassAssets:(id)arg0 ;
-(void)backgroundDownloadRemotePassAssets:(id)arg0 cloudStoreCoordinatorDelegate:(id)arg1 ;
-(void)backgroundDownloadRemotePassAssets:(id)arg0 forSuffixesAndScreenScales:(id)arg1 ;
-(void)backgroundDownloadRemotePassAssets:(id)arg0 forSuffixesAndScreenScales:(id)arg1 cloudStoreCoordinatorDelegate:(id)arg2 ;
-(void)backgroundDownloadWithPassTypeIdentifier:(id)arg0 serialNumber:(id)arg1 ;
-(void)backgroundPerformDeviceCheckInForRegion:(id)arg0 identifier:(id)arg1 ;
-(void)backgroundRegisterCredentialWithRequest:(id)arg0 ;
-(void)dealloc;
-(void)getHasBackgroundDownloadTaskPassesForPushTopic:(id)arg0 completion:(id)arg1 ;
-(void)handleAuthenticationFailureWithCompletionHandler:(id)arg0 ;
-(void)handleResponse:(id)arg0 withError:(id)arg1 data:(id)arg2 task:(id)arg3 completionHandler:(id)arg4 ;
-(void)handleWillPerformHTTPRedirectionWithResponse:(id)arg0 originalRequest:(id)arg1 redirectHandler:(id)arg2 ;
-(void)invalidateBackgroundSession;
-(void)processRetryRequest:(id)arg0 responseData:(id)arg1 orginalRequest:(id)arg2 completion:(id)arg3 ;
-(void)removeDelegate:(id)arg0 ;
-(void)sharedPaymentServiceChanged:(id)arg0 ;
-(void)signNonce:(id)arg0 withCompletion:(id)arg1 ;
-(void)startBackgroundURLSessionWithIdentifier:(id)arg0 context:(id)arg1 backgroundDelegate:(id)arg2 ;
-(void)startBackgroundURLSessionWithIdentifier:(id)arg0 context:(id)arg1 backgroundDelegate:(id)arg2 completion:(id)arg3 ;
-(void)updateContextAndNotifyIfNeeded:(id)arg0 ;
-(void)updateVerificationRecord:(id)arg0 ;


@end


#endif