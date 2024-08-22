// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPAYMENTWEBSERVICECOMPANIONTARGETDEVICE_H
#define NPKPAYMENTWEBSERVICECOMPANIONTARGETDEVICE_H

@class NSString, NSMutableDictionary, PUConnection, NRActiveDeviceAssertion, IDSService;
@protocol IDSServiceDelegate, PKPaymentWebServiceTargetDeviceProtocol, PKPaymentWebServiceArchiver, NPKPaymentWebServiceCompanionTargetDeviceDelegate, OS_dispatch_queue, NPKPasscodeChangeCoordinatorProtocol;

#import <Foundation/Foundation.h>

#import "NPKCompanionAgentConnection.h"
#import "NPKTapToRadarManager.h"
#import "NPKTargetDeviceAssertionManager.h"
#import "NPKSubcredentialInvitationCoordinator.h"

@interface NPKPaymentWebServiceCompanionTargetDevice : NSObject <IDSServiceDelegate, PKPaymentWebServiceTargetDeviceProtocol, PKPaymentWebServiceArchiver>



@property (retain, nonatomic) NPKCompanionAgentConnection *companionAgentConnection; // ivar: _companionAgentConnection
@property (nonatomic) NSUInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NPKPaymentWebServiceCompanionTargetDeviceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain, nonatomic) NPKTapToRadarManager *manager; // ivar: _manager
@property (retain, nonatomic) NSMutableDictionary *outstandingRequests; // ivar: _outstandingRequests
@property (retain, nonatomic) NSObject<NPKPasscodeChangeCoordinatorProtocol> *passcodeChangeCoordinator; // ivar: _passcodeChangeCoordinator
@property (retain, nonatomic) PUConnection *passcodeConnection; // ivar: _passcodeConnection
@property (weak, nonatomic) id *passcodeUpgradeFlowController; // ivar: _passcodeUpgradeFlowController
@property (retain, nonatomic) NRActiveDeviceAssertion *provisioningActiveDeviceAssertion; // ivar: _provisioningActiveDeviceAssertion
@property (retain, nonatomic) IDSService *provisioningService; // ivar: _provisioningService
@property (retain, nonatomic) NPKTargetDeviceAssertionManager *remoteDeviceAssertionManager; // ivar: _remoteDeviceAssertionManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // ivar: _responseQueue
@property (retain, nonatomic) NPKSubcredentialInvitationCoordinator *subcredentialInvitationCoordinator; // ivar: _subcredentialInvitationCoordinator
@property (readonly) Class superclass;


+(id)bridgedClientInfoHTTPHeader;
-(BOOL)_deviceIsConnected;
-(BOOL)_isHomeKeyProvisioningSupported;
-(BOOL)_isSubcredentialProvisioningSupported;
-(BOOL)_isSubcredentialProvisioningSupportedOverUWB;
-(BOOL)_isUnifiedAccessProvisioningSupported;
-(BOOL)_supportsFeaturesForWebService:(id)arg0 ;
-(BOOL)areUnifiedAccessPassesSupported;
-(BOOL)claimSecureElementForCurrentUser;
-(BOOL)deviceSupportMultipleExpressPasses;
-(BOOL)deviceSupportTransitReminderSetting;
-(BOOL)felicaSecureElementIsAvailable;
-(BOOL)isGymKitEnabled;
-(BOOL)paymentWebService:(id)arg0 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg1 ;
-(BOOL)paymentWebService:(id)arg0 hasPassesOfType:(NSUInteger)arg1 ;
-(BOOL)paymentWebServiceSupportsAccounts:(id)arg0 ;
-(BOOL)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg0 ;
-(BOOL)supportsAutomaticPassPresentation;
-(BOOL)supportsCredentialType:(NSInteger)arg0 ;
-(BOOL)supportsExpressForAutomaticSelectionTechnologyType:(NSInteger)arg0 ;
-(BOOL)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg0 ;
-(NSUInteger)maximumPaymentCards;
-(NSUInteger)secureElementOwnershipStateForCurrentUser;
-(id)_categoryIdentifierForPass:(id)arg0 ;
-(id)_deviceSupportedFeatureIdentifiers;
-(id)_expressModesFromExpressPassesInformation:(id)arg0 ;
-(id)_expressPassInformationWithPass:(id)arg0 upgradeRequst:(id)arg1 ;
-(id)_expressPassesInformationFromDataArray:(id)arg0 ;
-(id)_sendProtobuf:(id)arg0 responseExpected:(BOOL)arg1 ;
-(id)_sendProtobuf:(id)arg0 responseExpected:(BOOL)arg1 extraOptions:(id)arg2 ;
-(id)_sendProtobuf:(id)arg0 responseExpected:(BOOL)arg1 extraOptions:(id)arg2 priority:(NSInteger)arg3 ;
-(id)_sendProtobuf:(id)arg0 responseIdentifier:(id)arg1 ;
-(id)_serialNumbersOfAllPairedDevices;
-(id)_statusUpdaterWithResponseClass:(Class)arg0 type:(unsigned short)arg1 responseIdentifier:(id)arg2 ;
-(id)_supportedRegionsForWebService:(id)arg0 ;
-(id)_upgradeExpressAutomaticSelectionCriteriaRequestForPass:(id)arg0 ;
-(id)_upgradeExpressAutomaticSelectionCriteriaRequestForPass:(id)arg0 deviceClass:(id)arg1 OSVersion:(id)arg2 SEID:(id)arg3 ;
-(id)appleAccountInformation;
-(id)bridgedClientInfo;
-(id)deviceClass;
-(id)deviceDescriptionForPaymentWebService:(id)arg0 ;
-(id)deviceIDSIdentifier;
-(id)deviceName;
-(id)deviceRegion;
-(id)deviceVersion;
-(id)init;
-(id)initWithContext:(NSUInteger)arg0 responseQueue:(id)arg1 ;
-(id)osVersion;
-(id)paymentWebService:(id)arg0 filterVerificationChannels:(id)arg1 ;
-(id)paymentWebService:(id)arg0 passesOfType:(NSUInteger)arg1 ;
-(id)paymentWebService:(id)arg0 supportedRegionFeatureOfType:(NSInteger)arg1 ;
-(id)secureElementIdentifiers;
-(id)supportedFeatureIdentifiersForAccountProvisioningWithPaymentWebService:(id)arg0 ;
-(id)supportedFeatureIdentifiersWithPaymentWebService:(id)arg0 ;
-(id)trustedDeviceEnrollmentInfoForWebService:(id)arg0 ;
-(int)paymentSupportedInCurrentRegionForWebService:(id)arg0 ;
-(int)registrationSupportedInCurrentRegionForWebService:(id)arg0 ;
-(void)_acquireAssertionOfType:(NSUInteger)arg0 ;
-(void)_canAddSecureElementPassWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)_getPairingInfoAndSetAuthRandomIfNotPaired:(BOOL)arg0 completion:(id)arg1 ;
-(void)_invalidateAssertionOfType:(NSUInteger)arg0 ;
-(void)_multipleExpressTransitPassPaymentWebService:(id)arg0 handlePotentialExpressPassInformation:(id)arg1 upgradeRequest:(id)arg2 pass:(id)arg3 withCompletionHandler:(id)arg4 ;
-(void)_paymentWebService:(id)arg0 presentStandaloneTransaction:(NSInteger)arg1 forPassUniqueIdentifier:(id)arg2 validUntilDate:(id)arg3 completion:(id)arg4 ;
-(void)_paymentWebService:(id)arg0 registrationDataWithAuthToken:(id)arg1 completionHandler:(id)arg2 ;
-(void)_setNewAuthRandomIfNecessaryReturningPairingState:(id)arg0 ;
-(void)_setNewAuthRandomReturningPairingState:(id)arg0 ;
-(void)_singleExpressTransitPassPaymentWebService:(id)arg0 handlePotentialExpressPassInformation:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_trackOutstandingRequestWithMessageIdentifier:(id)arg0 completionHandler:(id)arg1 errorHandler:(id)arg2 ;
-(void)acceptSubcredentialInvitationResponse:(id)arg0 ;
-(void)accountAttestationAnonymizationSaltResponse:(id)arg0 ;
-(void)addISO18013Blobs:(id)arg0 cardType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)addISO18013BlobsResponse:(id)arg0 ;
-(void)applyPasscodeRestrictionsResponse:(id)arg0 ;
-(void)archiveBackgroundContext:(id)arg0 ;
-(void)archiveContext:(id)arg0 ;
-(void)availableHomeKeyPassesResponse:(id)arg0 ;
-(void)availableHomeKeyPassesWithCompletionHandler:(id)arg0 ;
-(void)availableProductsResponse:(id)arg0 ;
-(void)availableProductsWithCompletion:(id)arg0 ;
-(void)balanceReminderForBalance:(id)arg0 pass:(id)arg1 completion:(id)arg2 ;
-(void)balanceReminderWithBalanceAndPassResponse:(id)arg0 ;
-(void)canAcceptInvitationRequest:(id)arg0 ;
-(void)canAcceptInvitationResponse:(id)arg0 ;
-(void)canAddSecureElementPassWithConfigurationResponse:(id)arg0 ;
-(void)cancelOutstandingEnableServiceModeRequests;
-(void)cancelOutstandingRemotePassUpdateRequest:(id)arg0 pass:(id)arg1 ;
-(void)cancelOutstandingSetDefaultExpressPassRequestsWithExpressMode:(id)arg0 ;
-(void)checkCompanionPeerPaymentRegistrationState:(id)arg0 ;
-(void)checkFidoKeyPresenceForRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 fidoKeyHash:(id)arg2 completion:(id)arg3 ;
-(void)checkFidoKeyResponse:(id)arg0 ;
-(void)checkPasscodePolicyComplianceResponse:(id)arg0 ;
-(void)checkTLKsMissingResponse:(id)arg0 ;
-(void)checkTLKsMissingWithCompletion:(id)arg0 ;
-(void)claimSecureElementForCurrentUserWithCompletion:(id)arg0 ;
-(void)cloudStoreStatusResponse:(id)arg0 ;
-(void)cloudStoreStatusWithCompletion:(id)arg0 ;
-(void)commutePlanReminderForCommutePlan:(id)arg0 pass:(id)arg1 withCompletion:(id)arg2 ;
-(void)commutePlanReminderWithCommutePlanAndPassResponse:(id)arg0 ;
-(void)configurationDataResponse:(id)arg0 ;
-(void)conflictingExpressPassIdentifiersForPassInformation:(id)arg0 completion:(id)arg1 ;
-(void)conflictingExpressPassIdentifiersForPassInformation:(id)arg0 withReferenceExpressState:(id)arg1 completion:(id)arg2 ;
-(void)conflictingExpressPassIdentifiersForPassInformationResponse:(id)arg0 ;
-(void)consistencyCheck;
-(void)createFidoKeyForRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 challenge:(id)arg2 externalizedAuth:(id)arg3 completion:(id)arg4 ;
-(void)createFidoKeyResponse:(id)arg0 ;
-(void)declineRelatedSharingInvitationsIfNecessaryRequest:(id)arg0 ;
-(void)declineRelatedSharingInvitationsIfNecessaryResponse:(id)arg0 ;
-(void)deleteKeyMaterialForSubCredentialId:(id)arg0 ;
-(void)deviceMetadataResponse:(id)arg0 ;
-(void)didRegisterResponse:(id)arg0 ;
-(void)downloadAllPaymentPasses:(id)arg0 ;
-(void)downloadAllPaymentPassesForPaymentWebService:(id)arg0 ;
-(void)dumpLogsResponse:(id)arg0 ;
-(void)dumpLogsWithCompletion:(id)arg0 ;
-(void)enableServiceModeForPassWithUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)enableServiceModeResponse:(id)arg0 ;
-(void)endRequiringUpgradedPasscodeIfNecessary;
-(void)enforceUpgradedPasscodePolicyWithCompletion:(id)arg0 ;
-(void)exitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg0 withShouldContinue:(BOOL)arg1 error:(id)arg2 ;
-(void)familyMembersWithCompletion:(id)arg0 ;
-(void)featureApplicationsForAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)featureApplicationsForAccountIdentifierResponse:(id)arg0 ;
-(void)fetchOrInitializeAccountAttestationAnonymizationSaltRequest:(id)arg0 ;
-(void)generateISOEncryptionCertificateForSubCredentialId:(id)arg0 completion:(id)arg1 ;
-(void)generateISOEncryptionCertificateForSubCredentialIdResponse:(id)arg0 ;
-(void)generateSEEncryptionCertificateForSubCredentialId:(id)arg0 completion:(id)arg1 ;
-(void)generateSEEncryptionCertificateForSubCredentialIdResponse:(id)arg0 ;
-(void)generateTransactionKeyWithParametersResponse:(id)arg0 ;
-(void)getPairingInfoResponse:(id)arg0 ;
-(void)handleAcceptSubcredentialProvisioningRequest:(id)arg0 ;
-(void)handleBalanceChange:(id)arg0 ;
-(void)handleBalanceReminderWithBalanceAndPassRequest:(id)arg0 ;
-(void)handleCompanionMigrationResponse:(id)arg0 ;
-(void)handleCompanionMigrationWithCompletion:(id)arg0 ;
-(void)handleCompanionPeerPaymentRegistration;
-(void)handleCompanioniCloudSignout;
-(void)handleCredentialsChange:(id)arg0 ;
-(void)handleDeletePaymentTransactionWithIdentifier:(id)arg0 passUniqueIdentifier:(id)arg1 ;
-(void)handleDeviceUnlockedForPendingProvisioningRequest:(id)arg0 ;
-(void)handlePasscodeUpgradeFlowShouldExitRequest:(id)arg0 ;
-(void)handlePaymentTransactions:(id)arg0 ;
-(void)handlePeerPaymentTermsAndConditionsAcceptanceRequest:(id)arg0 ;
-(void)handlePendingRemovalOfPaymentPass:(id)arg0 uniqueID:(id)arg1 completion:(id)arg2 ;
-(void)handlePreferredAID:(id)arg0 forPassWithUniqueID:(id)arg1 completion:(id)arg2 ;
-(void)handleRemovedTransaction:(id)arg0 ;
-(void)handleShowPaymentSetupRequest:(id)arg0 ;
-(void)handleTransactionDefaultsNeededRequest:(id)arg0 ;
-(void)handleUpdatedAppletState:(id)arg0 ;
-(void)handleUpdatedPeerPaymentWebServiceContext:(id)arg0 ;
-(void)handleValueAddedServiceTransactions:(id)arg0 ;
-(void)handleWebServiceContextDidChangeRequest:(id)arg0 ;
-(void)handleWebServiceContextNeededRequest:(id)arg0 ;
-(void)initializeCloudStoreIfNecessaryResponse:(id)arg0 ;
-(void)initializeCloudStoreIfNecessaryWithCompletion:(id)arg0 ;
-(void)initializeCloudStoreIfNecessaryWithHandler:(id)arg0 ;
-(void)initializeCloudStoreIfNecessaryWithHandlerResponse:(id)arg0 ;
-(void)markAllAppletsForDeletionResponse:(id)arg0 ;
-(void)markAllAppletsForDeletionWithCompletion:(id)arg0 ;
-(void)matchingCredentialOnDeviceResponse:(id)arg0 ;
-(void)noteForegroundVerificationObserverActive:(BOOL)arg0 ;
-(void)noteProvisioningDidBegin;
-(void)noteProvisioningDidEnd;
-(void)noteProvisioningUserInterfaceDidAppear;
-(void)noteProvisioningUserInterfaceDidDisappear;
-(void)openURLWithRequest:(id)arg0 ;
-(void)paymentWebService:(id)arg0 acceptSubcredentialInvitationWithIdentifier:(id)arg1 metadata:(id)arg2 completion:(id)arg3 ;
-(void)paymentWebService:(id)arg0 accountAttestationAnonymizationSaltWithCompletion:(id)arg1 ;
-(void)paymentWebService:(id)arg0 addPaymentPass:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)paymentWebService:(id)arg0 canAcceptInvitation:(id)arg1 withCompletionV2:(id)arg2 ;
-(void)paymentWebService:(id)arg0 canAddSecureElementPassWithConfiguration:(id)arg1 completion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 canHandlePotentialExpressPass:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)paymentWebService:(id)arg0 configurationDataWithCompletionHandler:(id)arg1 ;
-(void)paymentWebService:(id)arg0 declineRelatedSharingInvitationsIfNecessary:(id)arg1 withCompletion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 deleteApplicationWithAID:(id)arg1 ;
-(void)paymentWebService:(id)arg0 deviceMetadataWithFields:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 didRegisterWithRegionMap:(id)arg1 ;
-(void)paymentWebService:(id)arg0 didRegisterWithRegionMap:(id)arg1 primaryRegionTopic:(id)arg2 ;
-(void)paymentWebService:(id)arg0 generateTransactionKeyWithParameters:(id)arg1 withCompletion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 handlePotentialExpressPass:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)paymentWebService:(id)arg0 matchingInvitationOnDevice:(id)arg1 withTimeout:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)paymentWebService:(id)arg0 pauseRangingForPairedReaderIdentifier:(id)arg1 durationInSeconds:(id)arg2 ;
-(void)paymentWebService:(id)arg0 presentStandaloneTransaction:(NSInteger)arg1 forPassUniqueIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)paymentWebService:(id)arg0 provisioningDataIncludingDeviceMetadata:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)paymentWebService:(id)arg0 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 registrationDataWithCompletionHandler:(id)arg1 ;
-(void)paymentWebService:(id)arg0 removePass:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)paymentWebService:(id)arg0 removeSharingInvitation:(id)arg1 withCompletion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 requestPassUpgrade:(id)arg1 pass:(id)arg2 completion:(id)arg3 ;
-(void)paymentWebService:(id)arg0 requestSubcredentialInvitation:(id)arg1 completion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 resumeRangingForPairedReaderIdentifier:(id)arg1 ;
-(void)paymentWebService:(id)arg0 setAccountAttestationAnonymizationSalt:(id)arg1 withCompletion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 setDefaultPaymentPassUniqueIdentifier:(id)arg1 ;
-(void)paymentWebService:(id)arg0 setNewAuthRandom:(id)arg1 ;
-(void)paymentWebService:(id)arg0 setNewAuthRandomIfNecessaryReturningPairingState:(id)arg1 ;
-(void)paymentWebService:(id)arg0 signData:(id)arg1 signatureEntanglementMode:(NSUInteger)arg2 withCompletionHandler:(id)arg3 ;
-(void)paymentWebService:(id)arg0 signData:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)paymentWebService:(id)arg0 subcredentialInvitationsWithCompletion:(id)arg1 ;
-(void)paymentWebService:(id)arg0 updateAccountWithIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 updateMetadataOnPass:(id)arg1 withCredential:(id)arg2 completion:(id)arg3 ;
-(void)paymentWebService:(id)arg0 validateAddBiometricPassPreconditionsWithCompletion:(id)arg1 ;
-(void)paymentWebService:(id)arg0 validateAddPreconditionsWithCompletion:(id)arg1 ;
-(void)paymentWebService:(id)arg0 validateTransferPreconditionsWithCompletion:(id)arg1 ;
-(void)paymentWebServiceDidUpdateConfiguration:(id)arg0 ;
-(void)paymentWebServiceRegisterResponse:(id)arg0 ;
-(void)peerPaymentRegisterResponse:(id)arg0 ;
-(void)peerPaymentRegisterWithURL:(id)arg0 forceReRegistration:(BOOL)arg1 completion:(id)arg2 ;
-(void)peerPaymentUnregisterResponse:(id)arg0 ;
-(void)peerPaymentUnregisterWithCompletion:(id)arg0 ;
-(void)pendingRemovalResponse:(id)arg0 ;
-(void)performDeviceCheckInResponse:(id)arg0 ;
-(void)performDeviceCheckInWithCompletion:(id)arg0 ;
-(void)performDeviceRegistrationForReason:(id)arg0 brokerURL:(id)arg1 completion:(id)arg2 ;
-(void)performProductActionRequest:(id)arg0 completion:(id)arg1 ;
-(void)performProductActionResponse:(id)arg0 ;
-(void)photosForFamilyMembersWithDSIDs:(id)arg0 completion:(id)arg1 ;
-(void)photosForFamilyMembersWithDSIDsResponse:(id)arg0 ;
-(void)preconditionNotMet:(id)arg0 ;
-(void)preferredAIDRequest:(id)arg0 ;
-(void)preferredAIDResponse:(id)arg0 ;
-(void)presentStandaloneTransactionForPassUniqueIdentifierResponse:(id)arg0 ;
-(void)productsWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)provisionHomeKeyPassForSerialNumbers:(id)arg0 completionHandler:(id)arg1 ;
-(void)provisionHomeKeyPassForSerialNumbersResponse:(id)arg0 ;
-(void)provisionPeerPaymentPassResponse:(id)arg0 ;
-(void)provisionPeerPaymentPassWithCompletion:(id)arg0 ;
-(void)provisioningDataResponse:(id)arg0 ;
-(void)queueTSMConnectionResponse:(id)arg0 ;
-(void)registerCredentialsResponse:(id)arg0 ;
-(void)registerCredentialsWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)registrationDataResponse:(id)arg0 ;
-(void)remotePassUpgradeResponse:(id)arg0 ;
-(void)remotePassUpgradeWithRequest:(id)arg0 pass:(id)arg1 requireAuthorization:(BOOL)arg2 notifyUserOnPairedDevice:(BOOL)arg3 updateBlock:(id)arg4 ;
-(void)removeAIDsFromSecureElement:(id)arg0 withCompletion:(id)arg1 ;
-(void)removeExpressPassWithUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeExpressPassWithUniqueIdentifierResponse:(id)arg0 ;
-(void)removeExpressPassesWithCardType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)removeExpressPassesWithCardTypeResponse:(id)arg0 ;
-(void)removeSharingInvitationResponse:(id)arg0 ;
-(void)renewAppleAccountWithCompletionHandler:(id)arg0 ;
-(void)requestAndStoreExternalizedAuthWithCompletion:(id)arg0 ;
-(void)requestAndStoreExternalizedAuthWithCompletionResponse:(id)arg0 ;
-(void)requestAutomaticProvisioningForCompanionPaymentPass:(id)arg0 ;
-(void)requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg0 withVisibleViewController:(id)arg1 completion:(id)arg2 ;
-(void)requestSubcredentialInvitationResponse:(id)arg0 ;
-(void)resetApplePayManateeViewResponse:(id)arg0 ;
-(void)resetApplePayManateeViewWithCompletion:(id)arg0 ;
-(void)retrieveTransactionsForPassWithUniqueID:(id)arg0 ;
-(void)revokeCredentialsResponse:(id)arg0 ;
-(void)revokeCredentialsWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)secureElementAppletsWithCompletion:(id)arg0 ;
-(void)secureElementGetAppletsResponse:(id)arg0 ;
-(void)secureElementRemoveAppletsResponse:(id)arg0 ;
-(void)sendPaymentOptionsDefaultsToWatch;
-(void)sendWebServiceContextToWatch:(id)arg0 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingUnhandledProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 activeAccountsChanged:(id)arg1 ;
-(void)service:(id)arg0 devicesChanged:(id)arg1 ;
-(void)serviceProviderDataForPassWithUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)serviceProviderDataForPassWithUniqueIdentifierResponse:(id)arg0 ;
-(void)setAccountAttestationAnonymizationSaltResponse:(id)arg0 ;
-(void)setBalanceReminder:(id)arg0 forBalance:(id)arg1 pass:(id)arg2 completion:(id)arg3 ;
-(void)setBalanceReminderWithBalanceAndPassResponse:(id)arg0 ;
-(void)setCommutePlanReminder:(id)arg0 forCommutePlan:(id)arg1 pass:(id)arg2 completion:(id)arg3 ;
-(void)setCommutePlanReminderWithCommutePlanAndPassResponse:(id)arg0 ;
-(void)setExpressPassResponse:(id)arg0 ;
-(void)setExpressWithPassInformation:(id)arg0 requestAuthorization:(BOOL)arg1 completion:(id)arg2 ;
-(void)setMaximumPaymentCards:(NSUInteger)arg0 ;
-(void)setNewAuthRandomIfNecessaryAtBeginningOfProvisioningFlow:(id)arg0 ;
-(void)setNewAuthRandomResponse:(id)arg0 ;
-(void)setPeerPaymentPreferences:(id)arg0 completion:(id)arg1 ;
-(void)setPeerPaymentPreferencesResponse:(id)arg0 ;
-(void)signDataResponse:(id)arg0 ;
-(void)signWithFidoKeyForRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 fidoKeyHash:(id)arg2 challenge:(id)arg3 publicKeyIdentifier:(id)arg4 externalizedAuth:(id)arg5 completion:(id)arg6 ;
-(void)signWithFidoKeyResponse:(id)arg0 ;
-(void)startBackgroundVerificationObserverForPass:(id)arg0 verificationMethod:(id)arg1 ;
-(void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg0 ;
-(void)subcredentialInvitationsResponse:(id)arg0 ;
-(void)updateAccountWithIdentifierResponse:(id)arg0 ;
-(void)updatePaymentPass:(id)arg0 ;
-(void)updatePeerPaymentAccountResponse:(id)arg0 ;
-(void)updatePeerPaymentAccountWithCompletion:(id)arg0 ;
-(void)updatePushToken:(id)arg0 ;
-(void)updateSubcredentialMetadataResponse:(id)arg0 ;
-(void)updatedAccountsForProvisioningWithCompletion:(id)arg0 ;


@end


#endif