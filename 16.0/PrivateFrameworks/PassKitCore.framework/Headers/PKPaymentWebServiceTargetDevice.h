// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTWEBSERVICETARGETDEVICE_H
#define PKPAYMENTWEBSERVICETARGETDEVICE_H

@class NSString;
@protocol PKPaymentWebServiceTargetDeviceProtocol;

#import <Foundation/Foundation.h>

#import "PKPassLibrary.h"
#import "PKPaymentService.h"
#import "PKAssertion.h"
#import "PKPassUpgradeController.h"

@interface PKPaymentWebServiceTargetDevice : NSObject <PKPaymentWebServiceTargetDeviceProtocol>

 {
    PKPassLibrary *_passLibrary;
    PKPaymentService *_paymentService;
    PKAssertion *_provisioningAssertion;
    BOOL _provisioningAssertionActive;
    PKAssertion *_verificationAssertion;
    BOOL _verificationAssertionActive;
    PKAssertion *_requiringUpgradedPasscodeAssertion;
    BOOL _requiringUpgradedPasscodeAssertionActive;
    PKAssertion *_activePasscodeUpgradeFlowAssertion;
    BOOL _activePasscodeUpgradeFlowAssertionActive;
    PKPassUpgradeController *_passUpgradeController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)localTargetDevice;
-(BOOL)_willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg0 ;
-(BOOL)areUnifiedAccessPassesSupported;
-(BOOL)claimSecureElementForCurrentUser;
-(BOOL)felicaSecureElementIsAvailable;
-(BOOL)paymentWebService:(id)arg0 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg1 ;
-(BOOL)paymentWebService:(id)arg0 hasPassesOfType:(NSUInteger)arg1 ;
-(BOOL)paymentWebServiceSupportsAccounts:(id)arg0 ;
-(BOOL)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg0 ;
-(BOOL)secureElementIsAvailable;
-(BOOL)supportsAutomaticPassPresentation;
-(BOOL)supportsCredentialType:(NSInteger)arg0 ;
-(BOOL)supportsExpressForAutomaticSelectionTechnologyType:(NSInteger)arg0 ;
-(BOOL)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg0 ;
-(NSUInteger)maximumPaymentCards;
-(NSUInteger)paymentSupportedInCurrentRegionForWebService:(id)arg0 ;
-(NSUInteger)registrationSupportedInCurrentRegionForWebService:(id)arg0 ;
-(NSUInteger)secureElementOwnershipStateForCurrentUser;
-(id)_upgradeRequestForPass:(id)arg0 ;
-(id)appleAccountInformation;
-(id)bridgedClientInfo;
-(id)cellularNetworkRegion;
-(id)deviceClass;
-(id)deviceDescriptionForPaymentWebService:(id)arg0 ;
-(id)deviceIDSIdentifier;
-(id)deviceName;
-(id)deviceRegion;
-(id)deviceVersion;
-(id)entitlementsForPassIdentifier:(id)arg0 ;
-(id)init;
-(id)osVersion;
-(id)paymentWebService:(id)arg0 filterVerificationChannels:(id)arg1 ;
-(id)paymentWebService:(id)arg0 passWithUniqueID:(id)arg1 ;
-(id)paymentWebService:(id)arg0 passesOfType:(NSUInteger)arg1 ;
-(id)paymentWebService:(id)arg0 supportedRegionFeatureOfType:(NSInteger)arg1 ;
-(id)secureElementIdentifiers;
-(id)supportedFeatureIdentifiersForAccountProvisioningWithPaymentWebService:(id)arg0 ;
-(id)supportedFeatureIdentifiersWithPaymentWebService:(id)arg0 ;
-(id)trustedDeviceEnrollmentInfoForWebService:(id)arg0 ;
-(void)_accountAttestationAnonymizationSaltWithCompletion:(id)arg0 ;
-(void)_addPass:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_addPassShare:(id)arg0 onCredentialWithIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)_cachedFeatureApplicationsForProvisioningWithCompletion:(id)arg0 ;
-(void)_canAcceptInvitation:(id)arg0 withCompletion:(id)arg1 ;
-(void)_canAddSecureElementPassWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)_conflictingExpressPassIdentifiersForPassInformation:(id)arg0 withCompletion:(id)arg1 ;
-(void)_conflictingExpressPassIdentifiersForPassInformation:(id)arg0 withReferenceExpressState:(id)arg1 completion:(id)arg2 ;
-(void)_consistencyCheck;
-(void)_credentialWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_declineRelatedSharingInvitationsIfNecessary:(id)arg0 withCompletion:(id)arg1 ;
-(void)_downloadAllPaymentPasses;
-(void)_enforceUpgradedPasscodePolicyWithCompletion:(id)arg0 ;
-(void)_featureApplicationsForProvisioningWithCompletion:(id)arg0 ;
-(void)_initializeSecureElement:(id)arg0 ;
-(void)_initializeSecureElementIfNecessaryWithCompletion:(id)arg0 ;
-(void)_matchingInvitationOnDevice:(id)arg0 withTimeout:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_passOwnershipTokenWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_passSharesForCredentialIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_paymentHardwareStatusWithType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_paymentWebService:(id)arg0 pass:(id)arg1 withExpressInfo:(id)arg2 hasDisqualifyingConflicts:(id)arg3 ;
-(void)_performDeviceCheckInWithCompletion:(id)arg0 ;
-(void)_performDeviceRegistrationForReason:(id)arg0 brokerURL:(id)arg1 completion:(id)arg2 ;
-(void)_performProductActionRequest:(id)arg0 completion:(id)arg1 ;
-(void)_productsWithCompletion:(id)arg0 ;
-(void)_productsWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)_removeExpressPassWithUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_removePassWithUniqueID:(id)arg0 diagnosticReason:(id)arg1 ;
-(void)_removeSharingInvitation:(id)arg0 withCompletion:(id)arg1 ;
-(void)_removeSharingInvitationReceiptWithIdentifiers:(id)arg0 onCredential:(id)arg1 completion:(id)arg2 ;
-(void)_requestBackgroundRegistrationForCredentialWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_sanitizeExpressPasses;
-(void)_setAccountAttestationAnonymizationSalt:(id)arg0 withCompletion:(id)arg1 ;
-(void)_setDefaultPaymentPassUniqueIdentifier:(id)arg0 ;
-(void)_setExpressWithPassInformation:(id)arg0 credential:(id)arg1 handler:(id)arg2 ;
-(void)_startBackgroundVerificationObserverForPass:(id)arg0 verificationMethod:(id)arg1 ;
-(void)_storePassOwnershipToken:(id)arg0 withIdentifier:(id)arg1 ;
-(void)_subcredentialInvitationsWithCompletion:(id)arg0 ;
-(void)_updateMetadataOnPassWithIdentifier:(id)arg0 credential:(id)arg1 completion:(id)arg2 ;
-(void)_validateCommonPreconditionsWithCompletion:(id)arg0 ;
-(void)acceptCarKeyShareForMessage:(id)arg0 activationCode:(id)arg1 completion:(id)arg2 ;
-(void)accountWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)accountsWithCompletion:(id)arg0 ;
-(void)addISO18013Blobs:(id)arg0 cardType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)applePayTrustKeyForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)availableHomeKeyPassesWithCompletionHandler:(id)arg0 ;
-(void)availableProductsWithCompletion:(id)arg0 ;
-(void)cacheSharingMessageFromMailboxAddress:(id)arg0 message:(id)arg1 ;
-(void)cachedFeatureApplicationsForProvisioningWithCompletion:(id)arg0 ;
-(void)checkFidoKeyPresenceForRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 fidoKeyHash:(id)arg2 completion:(id)arg3 ;
-(void)checkInvitationStatusForMailboxAddress:(id)arg0 completion:(id)arg1 ;
-(void)claimSecureElementForCurrentUserWithCompletion:(id)arg0 ;
-(void)consistencyCheck;
-(void)createApplePayTrustKeyWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)createFidoKeyForRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 challenge:(id)arg2 externalizedAuth:(id)arg3 completion:(id)arg4 ;
-(void)createShareForPartialShareInvitation:(id)arg0 authorization:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)deleteApplePayTrustKeyWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)deleteKeyMaterialForSubCredentialId:(id)arg0 ;
-(void)displayableEntitlementsForPassIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)displayableSharesForPassIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)downloadAllPaymentPassesForPaymentWebService:(id)arg0 ;
-(void)encryptedServiceProviderDataForSecureElementPass:(id)arg0 completion:(id)arg1 ;
-(void)endRequiringUpgradedPasscodeIfNecessary;
-(void)enforceUpgradedPasscodePolicyWithCompletion:(id)arg0 ;
-(void)familyMembersWithCompletion:(id)arg0 ;
-(void)featureApplicationsForProvisioningWithCompletion:(id)arg0 ;
-(void)generateISOEncryptionCertificateForSubCredentialId:(id)arg0 completion:(id)arg1 ;
-(void)generateSEEncryptionCertificateForSubCredentialId:(id)arg0 completion:(id)arg1 ;
-(void)hasActiveExternallySharedPasses:(id)arg0 ;
-(void)longTermPrivacyKeyForCredentialGroupIdentifier:(id)arg0 reuseExisting:(BOOL)arg1 completion:(id)arg2 ;
-(void)noteForegroundVerificationObserverActive:(BOOL)arg0 ;
-(void)notePasscodeUpgradeFlowDidEnd;
-(void)notePasscodeUpgradeFlowWillBeginWithCompletion:(id)arg0 ;
-(void)noteProvisioningDidBegin;
-(void)noteProvisioningDidEnd;
-(void)noteProvisioningUserInterfaceDidAppear;
-(void)noteProvisioningUserInterfaceDidDisappear;
-(void)paymentWebService:(id)arg0 accountAttestationAnonymizationSaltWithCompletion:(id)arg1 ;
-(void)paymentWebService:(id)arg0 addPassShare:(id)arg1 onCredential:(id)arg2 withCompletion:(id)arg3 ;
-(void)paymentWebService:(id)arg0 addPaymentPass:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)paymentWebService:(id)arg0 addPaymentPass:(id)arg1 withCompletionHandlerV2:(id)arg2 ;
-(void)paymentWebService:(id)arg0 canAcceptInvitation:(id)arg1 withCompletionV2:(id)arg2 ;
-(void)paymentWebService:(id)arg0 canAddSecureElementPassWithConfiguration:(id)arg1 completion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 configurationDataWithCompletionHandler:(id)arg1 ;
-(void)paymentWebService:(id)arg0 credentialWithIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 declineRelatedSharingInvitationsIfNecessary:(id)arg1 withCompletion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 deleteApplicationWithAID:(id)arg1 ;
-(void)paymentWebService:(id)arg0 deviceMetadataWithFields:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 didRegisterWithRegionMap:(id)arg1 primaryRegionTopic:(id)arg2 ;
-(void)paymentWebService:(id)arg0 generateTransactionKeyWithParameters:(id)arg1 withCompletion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 handlePotentialExpressPass:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)paymentWebService:(id)arg0 isPassExpressWithUniqueIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 matchingInvitationOnDevice:(id)arg1 withTimeout:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)paymentWebService:(id)arg0 passOwnershipTokenWithIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 passSharesForCredentialIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 provisioningDataIncludingDeviceMetadata:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)paymentWebService:(id)arg0 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 registrationDataWithAuthToken:(id)arg1 completionHandler:(id)arg2 ;
-(void)paymentWebService:(id)arg0 registrationDataWithCompletionHandler:(id)arg1 ;
-(void)paymentWebService:(id)arg0 removePass:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)paymentWebService:(id)arg0 removeSharingInvitation:(id)arg1 withCompletion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 removeSharingInvitationReceipts:(id)arg1 onCredential:(id)arg2 withCompletion:(id)arg3 ;
-(void)paymentWebService:(id)arg0 requestPassUpgrade:(id)arg1 pass:(id)arg2 completion:(id)arg3 ;
-(void)paymentWebService:(id)arg0 setAccountAttestationAnonymizationSalt:(id)arg1 withCompletion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 setDefaultPaymentPassUniqueIdentifier:(id)arg1 ;
-(void)paymentWebService:(id)arg0 setNewAuthRandom:(id)arg1 ;
-(void)paymentWebService:(id)arg0 setNewAuthRandomIfNecessaryReturningPairingState:(id)arg1 ;
-(void)paymentWebService:(id)arg0 signData:(id)arg1 signatureEntanglementMode:(NSUInteger)arg2 withCompletionHandler:(id)arg3 ;
-(void)paymentWebService:(id)arg0 storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2 ;
-(void)paymentWebService:(id)arg0 subcredentialInvitationsWithCompletion:(id)arg1 ;
-(void)paymentWebService:(id)arg0 updateAccountWithIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 updateMetadataOnPass:(id)arg1 withCredential:(id)arg2 completion:(id)arg3 ;
-(void)paymentWebService:(id)arg0 validateAddPreconditionsWithCompletion:(id)arg1 ;
-(void)paymentWebService:(id)arg0 validateTransferPreconditionsWithCompletion:(id)arg1 ;
-(void)paymentWebServiceDidUpdateConfiguration:(id)arg0 ;
-(void)performDeviceCheckInWithCompletion:(id)arg0 ;
-(void)performDeviceRegistrationForReason:(id)arg0 brokerURL:(id)arg1 completion:(id)arg2 ;
-(void)performProductActionRequest:(id)arg0 completion:(id)arg1 ;
-(void)prepareProvisioningTarget:(id)arg0 checkFamilyCircle:(BOOL)arg1 completion:(id)arg2 ;
-(void)prewarmCreateShareForPassIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)productsWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)provisionHomeKeyPassForSerialNumbers:(id)arg0 completionHandler:(id)arg1 ;
-(void)relinquishInvitation:(id)arg0 completion:(id)arg1 ;
-(void)removeExpressPassWithUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)renewAppleAccountWithCompletionHandler:(id)arg0 ;
-(void)requestBackgroundRegistrationForCredential:(id)arg0 withCompletion:(id)arg1 ;
-(void)retrieveShareInvitationForMailboxAddress:(id)arg0 completion:(id)arg1 ;
-(void)revokeShareForPassIdentifier:(id)arg0 share:(id)arg1 shouldCascade:(BOOL)arg2 completion:(id)arg3 ;
-(void)setMaximumPaymentCards:(NSUInteger)arg0 ;
-(void)signWithFidoKeyForRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 fidoKeyHash:(id)arg2 challenge:(id)arg3 publicKeyIdentifier:(id)arg4 externalizedAuth:(id)arg5 completion:(id)arg6 ;
-(void)signatureForAuthToken:(id)arg0 webService:(id)arg1 completion:(id)arg2 ;
-(void)startBackgroundVerificationObserverForPass:(id)arg0 verificationMethod:(id)arg1 ;
-(void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg0 ;
-(void)statusForShareableCredentials:(id)arg0 completion:(id)arg1 ;
-(void)triggerCloudStoreZoneCreationForAccount:(id)arg0 withCompletion:(id)arg1 ;
-(void)updateShareForPassIdentifier:(id)arg0 share:(id)arg1 authorization:(id)arg2 completion:(id)arg3 ;
-(void)updatedAccountsForProvisioningWithCompletion:(id)arg0 ;


@end


#endif