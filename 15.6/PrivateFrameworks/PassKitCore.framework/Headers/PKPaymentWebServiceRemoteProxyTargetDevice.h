// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTWEBSERVICEREMOTEPROXYTARGETDEVICE_H
#define PKPAYMENTWEBSERVICEREMOTEPROXYTARGETDEVICE_H

@class NSXPCConnection, NSString;
@protocol PKPaymentWebServiceProxyObjectExportedInterface, OS_dispatch_queue, PKPaymentWebServiceTargetDeviceProtocol;

#import <Foundation/Foundation.h>

#import "PKPaymentWebService.h"

@interface PKPaymentWebServiceRemoteProxyTargetDevice : NSObject <PKPaymentWebServiceProxyObjectExportedInterface>

 {
    NSObject<OS_dispatch_queue> *_handlerQueue;
    PKPaymentWebService *_webService;
    id<PKPaymentWebServiceTargetDeviceProtocol> *_targetDevice;
}


@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)areUnifiedAccessPassesSupported;
-(id)init;
-(id)initWithWebService:(id)arg0 connection:(id)arg1 ;
-(void)addISO18013Blobs:(id)arg0 cardType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)addPassData:(id)arg0 completion:(id)arg1 ;
-(void)appleAccountInformationWithCompletion:(id)arg0 ;
-(void)applePayTrustKeyForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)archiveBackgroundContext:(id)arg0 ;
-(void)archiveContext:(id)arg0 ;
-(void)availableHomeKeyPassesWithCompletionHandler:(id)arg0 ;
-(void)cachedFeatureApplicationsForProvisioningWithCompletion:(id)arg0 ;
-(void)canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)checkFidoKeyPresenceForRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 fidoKeyHash:(id)arg2 completion:(id)arg3 ;
-(void)claimSecureElementForCurrentUserWithCompletion:(id)arg0 ;
-(void)createApplePayTrustKeyWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)createFidoKeyForRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 challenge:(id)arg2 externalizedAuth:(id)arg3 completion:(id)arg4 ;
-(void)dealloc;
-(void)deleteApplePayTrustKeyWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)deleteApplicationWithAID:(id)arg0 ;
-(void)deleteKeyMaterialForSubCredentialId:(id)arg0 ;
-(void)deviceMetadataWithFields:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)didRegisterWithRegionMap:(id)arg0 primaryRegionTopic:(id)arg1 ;
-(void)downloadAllPaymentPasses;
-(void)endRequiringUpgradedPasscodeIfNecessary;
-(void)enforceUpgradedPasscodePolicyWithCompletion:(id)arg0 ;
-(void)familyMembersWithCompletion:(id)arg0 ;
-(void)featureApplicationsForProvisioningWithCompletion:(id)arg0 ;
-(void)generateISOEncryptionCertificateForSubCredentialId:(id)arg0 completion:(id)arg1 ;
-(void)generateSEEncryptionCertificateForSubCredentialId:(id)arg0 completion:(id)arg1 ;
-(void)generateTransactionKeyWithParameters:(id)arg0 withCompletion:(id)arg1 ;
-(void)getConfigurationDataWithCompletion:(id)arg0 ;
-(void)getContextWithCompletion:(id)arg0 ;
-(void)getProvisioningDataIncludingDeviceMetadata:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)getRegistrationDataWithCompletion:(id)arg0 ;
-(void)getTrustedDeviceEnrollmentInfoWithCompletion:(id)arg0 ;
-(void)handlePotentialExpressPass:(id)arg0 withCompletion:(id)arg1 ;
-(void)hasPassesOfType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)invalidateRemoteProxyTargetDevice;
-(void)notePasscodeUpgradeFlowDidEnd;
-(void)notePasscodeUpgradeFlowWillBeginWithCompletion:(id)arg0 ;
-(void)noteProvisioningDidBegin;
-(void)noteProvisioningDidEnd;
-(void)noteProvisioningUserInterfaceDidAppear;
-(void)noteProvisioningUserInterfaceDidDisappear;
-(void)passOwnershipTokenWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)passesOfType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)paymentSupportedInCurrentRegion:(id)arg0 ;
-(void)performDeviceCheckInWithCompletion:(id)arg0 ;
-(void)performDeviceRegistrationForReason:(id)arg0 brokerURL:(id)arg1 completion:(id)arg2 ;
-(void)provisionHomeKeyPassForSerialNumbers:(id)arg0 completionHandler:(id)arg1 ;
-(void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg0 withCompletion:(id)arg1 ;
-(void)registrationSupportedInCurrentRegionWithCompletion:(id)arg0 ;
-(void)removePass:(id)arg0 completion:(id)arg1 ;
-(void)renewAppleAccountWithCompletionHandler:(id)arg0 ;
-(void)secureElementOwnershipStateForCurrentUserWithCompletion:(id)arg0 ;
-(void)setDefaultPaymentPassUniqueIdentifier:(id)arg0 ;
-(void)setNewAuthRandom:(id)arg0 ;
-(void)setNewAuthRandomIfNecessaryReturningPairingState:(id)arg0 ;
-(void)signData:(id)arg0 signatureEntanglementMode:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)signWithFidoKeyForRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 fidoKeyHash:(id)arg2 challenge:(id)arg3 publicKeyIdentifier:(id)arg4 externalizedAuth:(id)arg5 completion:(id)arg6 ;
-(void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg0 ;
-(void)storePassOwnershipToken:(id)arg0 withIdentifier:(id)arg1 ;
-(void)supportedFeatureIdentifiersForAccountProvisioningWithCompletion:(id)arg0 ;
-(void)supportedFeatureIdentifiersWithCompletion:(id)arg0 ;
-(void)supportsAccountsWithCompletion:(id)arg0 ;
-(void)supportsPeerPaymentRegistrationWithCompletion:(id)arg0 ;
-(void)triggerCloudStoreZoneCreationForAccount:(id)arg0 withCompletion:(id)arg1 ;
-(void)updateAccountWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)updatedAccountsForProvisioningWithCompletion:(id)arg0 ;
-(void)validateAddPreconditionsWithCompletion:(id)arg0 ;
-(void)validateTransferPreconditionsWithCompletion:(id)arg0 ;
-(void)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg0 completion:(id)arg1 ;


@end


#endif