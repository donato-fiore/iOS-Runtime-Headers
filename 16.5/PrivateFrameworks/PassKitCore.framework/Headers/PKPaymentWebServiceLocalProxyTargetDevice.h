// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTWEBSERVICELOCALPROXYTARGETDEVICE_H
#define PKPAYMENTWEBSERVICELOCALPROXYTARGETDEVICE_H

@class NSXPCConnection, NSString;
@protocol PKPaymentWebServiceTargetDeviceProtocol, PKPaymentWebServiceArchiver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKPaymentWebServiceLocalProxyTargetDevice : NSObject <PKPaymentWebServiceTargetDeviceProtocol, PKPaymentWebServiceArchiver>

 {
    NSObject<OS_dispatch_queue> *_handlerQueue;
}


@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)areUnifiedAccessPassesSupported;
-(BOOL)claimSecureElementForCurrentUser;
-(BOOL)paymentWebService:(id)arg0 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg1 ;
-(BOOL)paymentWebService:(id)arg0 hasPassesOfType:(NSUInteger)arg1 ;
-(BOOL)paymentWebServiceSupportsAccounts:(id)arg0 ;
-(BOOL)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg0 ;
-(BOOL)supportsAutomaticPassPresentation;
-(BOOL)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg0 ;
-(NSUInteger)paymentSupportedInCurrentRegionForWebService:(id)arg0 ;
-(NSUInteger)registrationSupportedInCurrentRegionForWebService:(id)arg0 ;
-(NSUInteger)secureElementOwnershipStateForCurrentUser;
-(id)_proxy;
-(id)_proxyWithErrorHandler:(id)arg0 ;
-(id)_synchronousProxy;
-(id)_synchronousProxyWithErrorHandler:(id)arg0 ;
-(id)appleAccountInformation;
-(id)bridgedClientInfo;
-(id)context;
-(id)deviceClass;
-(id)deviceDescriptionForPaymentWebService:(id)arg0 ;
-(id)deviceName;
-(id)deviceRegion;
-(id)deviceVersion;
-(id)initWithConnection:(id)arg0 ;
-(id)osVersion;
-(id)paymentWebService:(id)arg0 filterVerificationChannels:(id)arg1 ;
-(id)paymentWebService:(id)arg0 passesOfType:(NSUInteger)arg1 ;
-(id)secureElementIdentifiers;
-(id)supportedFeatureIdentifiersForAccountProvisioningWithPaymentWebService:(id)arg0 ;
-(id)supportedFeatureIdentifiersWithPaymentWebService:(id)arg0 ;
-(void)_invalidateConnection;
-(void)addISO18013Blobs:(id)arg0 cardType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)applePayTrustKeyForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)archiveBackgroundContext:(id)arg0 ;
-(void)archiveContext:(id)arg0 ;
-(void)availableHomeKeyPassesWithCompletionHandler:(id)arg0 ;
-(void)cachedFeatureApplicationsForProvisioningWithCompletion:(id)arg0 ;
-(void)checkFidoKeyPresenceForRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 fidoKeyHash:(id)arg2 completion:(id)arg3 ;
-(void)claimSecureElementForCurrentUserWithCompletion:(id)arg0 ;
-(void)contextWithCompletion:(id)arg0 ;
-(void)createApplePayTrustKeyWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)createFidoKeyForRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 challenge:(id)arg2 externalizedAuth:(id)arg3 completion:(id)arg4 ;
-(void)dealloc;
-(void)deleteApplePayTrustKeyWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)deleteKeyMaterialForSubCredentialId:(id)arg0 ;
-(void)downloadAllPaymentPassesForPaymentWebService:(id)arg0 ;
-(void)encryptedServiceProviderDataForSecureElementPass:(id)arg0 completion:(id)arg1 ;
-(void)endRequiringUpgradedPasscodeIfNecessary;
-(void)enforceUpgradedPasscodePolicyWithCompletion:(id)arg0 ;
-(void)familyMembersWithCompletion:(id)arg0 ;
-(void)featureApplicationsForProvisioningWithCompletion:(id)arg0 ;
-(void)generateISOEncryptionCertificateForSubCredentialId:(id)arg0 completion:(id)arg1 ;
-(void)generateSEEncryptionCertificateForSubCredentialId:(id)arg0 completion:(id)arg1 ;
-(void)longTermPrivacyKeyForCredentialGroupIdentifier:(id)arg0 reuseExisting:(BOOL)arg1 completion:(id)arg2 ;
-(void)notePasscodeUpgradeFlowDidEnd;
-(void)notePasscodeUpgradeFlowWillBeginWithCompletion:(id)arg0 ;
-(void)noteProvisioningDidBegin;
-(void)noteProvisioningDidEnd;
-(void)noteProvisioningUserInterfaceDidAppear;
-(void)noteProvisioningUserInterfaceDidDisappear;
-(void)paymentWebService:(id)arg0 addPaymentPass:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)paymentWebService:(id)arg0 addPaymentPass:(id)arg1 withCompletionHandlerV2:(id)arg2 ;
-(void)paymentWebService:(id)arg0 configurationDataWithCompletionHandler:(id)arg1 ;
-(void)paymentWebService:(id)arg0 deleteApplicationWithAID:(id)arg1 ;
-(void)paymentWebService:(id)arg0 deviceMetadataWithFields:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 didRegisterWithRegionMap:(id)arg1 primaryRegionTopic:(id)arg2 ;
-(void)paymentWebService:(id)arg0 generateTransactionKeyWithParameters:(id)arg1 withCompletion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 handlePotentialExpressPass:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)paymentWebService:(id)arg0 passOwnershipTokenWithIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 provisioningDataIncludingDeviceMetadata:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)paymentWebService:(id)arg0 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 registrationDataWithCompletionHandler:(id)arg1 ;
-(void)paymentWebService:(id)arg0 removePass:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)paymentWebService:(id)arg0 requestPassUpgrade:(id)arg1 pass:(id)arg2 completion:(id)arg3 ;
-(void)paymentWebService:(id)arg0 setDefaultPaymentPassUniqueIdentifier:(id)arg1 ;
-(void)paymentWebService:(id)arg0 setNewAuthRandom:(id)arg1 ;
-(void)paymentWebService:(id)arg0 setNewAuthRandomIfNecessaryReturningPairingState:(id)arg1 ;
-(void)paymentWebService:(id)arg0 signData:(id)arg1 signatureEntanglementMode:(NSUInteger)arg2 withCompletionHandler:(id)arg3 ;
-(void)paymentWebService:(id)arg0 storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2 ;
-(void)paymentWebService:(id)arg0 updateAccountWithIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)paymentWebService:(id)arg0 validateAddPreconditionsWithCompletion:(id)arg1 ;
-(void)paymentWebService:(id)arg0 validateTransferPreconditionsWithCompletion:(id)arg1 ;
-(void)paymentWebServiceDidUpdateConfiguration:(id)arg0 ;
-(void)performDeviceCheckInWithCompletion:(id)arg0 ;
-(void)performDeviceRegistrationReturningContextForReason:(id)arg0 brokerURL:(id)arg1 completion:(id)arg2 ;
-(void)prepareProvisioningTarget:(id)arg0 checkFamilyCircle:(BOOL)arg1 completion:(id)arg2 ;
-(void)provisionHomeKeyPassForSerialNumbers:(id)arg0 completionHandler:(id)arg1 ;
-(void)renewAppleAccountWithCompletionHandler:(id)arg0 ;
-(void)signWithFidoKeyForRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 fidoKeyHash:(id)arg2 challenge:(id)arg3 publicKeyIdentifier:(id)arg4 externalizedAuth:(id)arg5 completion:(id)arg6 ;
-(void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg0 ;
-(void)statusForShareableCredentials:(id)arg0 completion:(id)arg1 ;
-(void)triggerCloudStoreZoneCreationForAccount:(id)arg0 withCompletion:(id)arg1 ;
-(void)updatedAccountsForProvisioningWithCompletion:(id)arg0 ;


@end


#endif