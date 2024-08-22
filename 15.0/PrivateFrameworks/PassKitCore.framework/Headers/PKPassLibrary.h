// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSLIBRARY_H
#define PKPASSLIBRARY_H

@class NSHashTable, NSString, NSArray;
@protocol PKXPCServiceDelegate, PKPassLibraryExportedInterface, NSObject, OS_dispatch_queue, PKPassLibraryDelegate;

#import <Foundation/Foundation.h>

#import "PKXPCService.h"
#import "PKPassLibrary.h"

@interface PKPassLibrary : NSObject <PKXPCServiceDelegate, PKPassLibraryExportedInterface>

 {
    PKXPCService *_remoteService;
    PKPassLibrary *_remoteLibrary;
    id<NSObject> *_remoteLibraryObserver;
    NSUInteger _interfaceType;
    NSHashTable *_delegates;
    os_unfair_lock_s _delegatesLock;
    NSObject<OS_dispatch_queue> *_asynchronousImageQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPassLibraryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *remoteSecureElementPasses;
@property (readonly, nonatomic, getter=isSecureElementPassActivationAvailable) BOOL secureElementPassActivationAvailable;
@property (readonly) Class superclass;


+(BOOL)contactlessInterfaceCanBePresentedFromSource:(NSInteger)arg0 ;
+(BOOL)contactlessInterfaceCanBePresentedFromSource:(NSInteger)arg0 deviceUILocked:(BOOL)arg1 ;
+(BOOL)isPassLibraryAvailable;
+(BOOL)isPaymentPassActivationAvailable;
+(BOOL)isSuppressingAutomaticPassPresentation;
+(NSUInteger)requestAutomaticPassPresentationSuppressionWithResponseHandler:(id)arg0 ;
+(id)sharedInstance;
+(id)sharedInstanceWithRemoteLibrary;
+(void)endAutomaticPassPresentationSuppressionWithRequestToken:(NSUInteger)arg0 ;
-(BOOL)_hasInterfaceOfType:(NSUInteger)arg0 ;
-(BOOL)_hasRemoteLibrary;
-(BOOL)_setSetting:(NSUInteger)arg0 enabled:(BOOL)arg1 forPass:(id)arg2 ;
-(BOOL)canAddFelicaPass;
-(BOOL)canAddPassOfType:(NSUInteger)arg0 ;
-(BOOL)canAddPaymentPassWithPrimaryAccountIdentifier:(id)arg0 ;
-(BOOL)canAddSecureElementPassWithConfiguration:(id)arg0 ;
-(BOOL)canAddSecureElementPassWithConfiguration:(id)arg0 outError:(*id)arg1 ;
-(BOOL)canAddSecureElementPassWithPrimaryAccountIdentifier:(id)arg0 ;
-(BOOL)containsPass:(id)arg0 ;
-(BOOL)hasPassesOfType:(NSUInteger)arg0 ;
-(BOOL)hasPassesWithSupportedNetworks:(id)arg0 merchantCapabilities:(NSUInteger)arg1 issuerCountryCodes:(id)arg2 webDomain:(id)arg3 ;
-(BOOL)hasSecureElementPassesOfType:(NSInteger)arg0 ;
-(BOOL)isPassbookVisible;
-(BOOL)isPaymentPassActivationAvailable;
-(BOOL)isRemovingPassesOfType:(NSUInteger)arg0 ;
-(BOOL)migrateData;
-(BOOL)replacePassWithPass:(id)arg0 ;
-(BOOL)resetApplePayWithDiagnosticReason:(id)arg0 ;
-(BOOL)resetSettingsForPass:(id)arg0 ;
-(BOOL)setAutomaticPresentationEnabled:(BOOL)arg0 forPass:(id)arg1 ;
-(BOOL)setAutomaticUpdatesEnabled:(BOOL)arg0 forPass:(id)arg1 ;
-(BOOL)setNotificationServiceUpdatesEnabled:(BOOL)arg0 forPass:(id)arg1 ;
-(BOOL)setShowInLockScreenEnabled:(BOOL)arg0 forPass:(id)arg1 ;
-(BOOL)setSuppressNotificationsEnabled:(BOOL)arg0 forPass:(id)arg1 ;
-(BOOL)setSuppressPromotionsEnabled:(BOOL)arg0 forPass:(id)arg1 ;
-(BOOL)supportsDisbursements;
-(BOOL)supportsSearchForPassUniqueID:(id)arg0 ;
-(NSInteger)_currentNotificationCountForIdentifier:(id)arg0 ;
-(NSUInteger)countOfPasses;
-(NSUInteger)countPassesOfType:(NSUInteger)arg0 ;
-(NSUInteger)estimatedTimeToResetApplePay;
-(id)_copyPassesOfStyles:(NSUInteger)arg0 withRetries:(NSUInteger)arg1 ;
-(id)_copyPassesOfType:(NSUInteger)arg0 withRetries:(NSUInteger)arg1 ;
-(id)_copyPassesWithRetries:(NSUInteger)arg0 ;
-(id)_defaultPaymentPassForPaymentRequest:(id)arg0 ;
-(id)_extendedRemoteObjectProxy;
-(id)_extendedRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_extendedRemoteObjectProxyWithFailureHandler:(id)arg0 ;
-(id)_filterPeerPaymentPass:(id)arg0 request:(id)arg1 ;
-(id)_inAppRemoteObjectProxy;
-(id)_inAppRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_inAppRemoteObjectProxyWithFailureHandler:(id)arg0 ;
-(id)_initWithRemote:(id)arg0 ;
-(id)_remoteLibrary;
-(id)_remoteObjectProxy;
-(id)_remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_remoteObjectProxyWithFailureHandler:(id)arg0 ;
-(id)_sortedPaymentPassesForPaymentRequest:(id)arg0 ;
-(id)_synchronousExtendedRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_synchronousInAppRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)archiveForObjectWithUniqueID:(id)arg0 ;
-(id)backupMetadata;
-(id)cachedImageSetForUniqueID:(id)arg0 type:(NSInteger)arg1 withDisplayProfile:(id)arg2 displayTraits:(id)arg3 ;
-(id)contentForUniqueID:(id)arg0 ;
-(id)dataForBundleResourceNamed:(id)arg0 withExtension:(id)arg1 objectUniqueIdentifier:(id)arg2 ;
-(id)dataForBundleResources:(id)arg0 objectUniqueIdentifier:(id)arg1 ;
-(id)defaultPaymentPassesWithRemotePasses:(BOOL)arg0 ;
-(id)diffForPassUpdateUserNotificationWithIdentifier:(id)arg0 ;
-(id)expressFelicaTransitPasses;
-(id)imageSetForUniqueID:(id)arg0 ofType:(NSInteger)arg1 displayProfile:(id)arg2 suffix:(id)arg3 ;
-(id)inAppPaymentPassesForPaymentRequest:(id)arg0 ;
-(id)inAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg0 issuerCountryCodes:(id)arg1 ;
-(id)inAppPrivateLabelPaymentPassesForWebDomain:(id)arg0 issuerCountryCodes:(id)arg1 ;
-(id)init;
-(id)initWithMachServiceName:(id)arg0 resumeNotificationName:(id)arg1 interfaceType:(NSUInteger)arg2 ;
-(id)passForProvisioningCredentialHash:(id)arg0 ;
-(id)passLocalizedStringForKey:(id)arg0 uniqueID:(id)arg1 ;
-(id)passWithDPANIdentifier:(id)arg0 ;
-(id)passWithFPANIdentifier:(id)arg0 ;
-(id)passWithPassTypeIdentifier:(id)arg0 serialNumber:(id)arg1 ;
-(id)passWithUniqueID:(id)arg0 ;
-(id)passes;
-(id)passesOfStyles:(NSUInteger)arg0 ;
-(id)passesOfType:(NSUInteger)arg0 ;
-(id)passesPendingActivation;
-(id)paymentPassesWithLocallyStoredValue;
-(id)peerPaymentPassUniqueID;
-(id)remotePaymentPasses;
-(void)_activateSecureElementPass:(id)arg0 withActivationCode:(id)arg1 activationData:(id)arg2 completion:(id)arg3 ;
-(void)_applyDataAccessorToObject:(id)arg0 ;
-(void)_applyDataAccessorToObjects:(id)arg0 ;
-(void)_fetchContentForUniqueID:(id)arg0 usingSynchronousProxy:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)_fetchImageSetContainerForUniqueID:(id)arg0 ofType:(NSInteger)arg1 displayProfile:(id)arg2 suffix:(id)arg3 usingSynchronousProxy:(BOOL)arg4 withCompletion:(id)arg5 ;
-(void)_fetchImageSetForUniqueID:(id)arg0 ofType:(NSInteger)arg1 displayProfile:(id)arg2 suffix:(id)arg3 usingSynchronousProxy:(BOOL)arg4 withCompletion:(id)arg5 ;
-(void)_getGroupsControllerSnapshotWithOptions:(id)arg0 synchronously:(BOOL)arg1 retries:(NSUInteger)arg2 handler:(id)arg3 ;
-(void)_getPassesAndCatalogOfPassTypes:(NSUInteger)arg0 synchronously:(BOOL)arg1 limitResults:(BOOL)arg2 withRetries:(NSUInteger)arg3 handler:(id)arg4 ;
-(void)_postLibraryChangeWithUserInfo:(id)arg0 ;
-(void)activatePaymentPass:(id)arg0 withActivationCode:(id)arg1 completion:(id)arg2 ;
-(void)activatePaymentPass:(id)arg0 withActivationData:(id)arg1 completion:(id)arg2 ;
-(void)activateSecureElementPass:(id)arg0 withActivationData:(id)arg1 completion:(id)arg2 ;
-(void)addDelegate:(id)arg0 ;
-(void)addISO18013Blobs:(id)arg0 cardType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)addPasses:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)addPassesContainer:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)addPassesWithData:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)addUnsignedPassesAtURLs:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)availableHomeKeyPassesWithCompletionHandler:(id)arg0 ;
-(void)canAddSecureElementPassWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)canPresentPaymentRequest:(id)arg0 completion:(id)arg1 ;
-(void)catalogChanged:(id)arg0 withNewPasses:(id)arg1 ;
-(void)checkFidoKeyPresenceForRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 fidoKeyHash:(id)arg2 completion:(id)arg3 ;
-(void)checkForTransitNotification;
-(void)configurePushProvisioningConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)contactlessInterfaceDidDismissFromSource:(NSInteger)arg0 ;
-(void)contactlessInterfaceDidPresentFromSource:(NSInteger)arg0 ;
-(void)containsPassWithPassTypeIdentifier:(id)arg0 serialNumber:(id)arg1 completionHandler:(id)arg2 ;
-(void)createFidoKeyForRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 challenge:(id)arg2 externalizedAuth:(id)arg3 completion:(id)arg4 ;
-(void)dealloc;
-(void)deleteKeyMaterialForSubCredentialId:(id)arg0 ;
-(void)enableExpressForPassWithPassTypeIdentifier:(id)arg0 serialNumber:(id)arg1 completionHandler:(id)arg2 ;
-(void)enabledValueAddedServicePassesWithCompletion:(id)arg0 ;
-(void)fetchAppletSubCredentialForPassTypeIdentifier:(id)arg0 serialNumber:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchContentForUniqueID:(id)arg0 withCompletion:(id)arg1 ;
-(void)fetchCurrentRelevantPassInfo:(id)arg0 ;
-(void)fetchHasCandidatePasses:(id)arg0 ;
-(void)fetchImageSetForUniqueID:(id)arg0 ofType:(NSInteger)arg1 displayProfile:(id)arg2 suffix:(id)arg3 withCompletion:(id)arg4 ;
-(void)fetchTransactionKeyForPassTypeIdentifier:(id)arg0 serialNumber:(id)arg1 completionHandler:(id)arg2 ;
-(void)forceImmediateRevocationCheck;
-(void)generateISOEncryptionCertificateForSubCredentialId:(id)arg0 completion:(id)arg1 ;
-(void)generateSEEncryptionCertificateForSubCredentialId:(id)arg0 completion:(id)arg1 ;
-(void)generateTransactionKeyWithReaderIdentifier:(id)arg0 readerPublicKey:(id)arg1 completion:(id)arg2 ;
-(void)getContainmentStatusAndSettingsForPass:(id)arg0 withHandler:(id)arg1 ;
-(void)getGroupsControllerSnapshotWithOptions:(id)arg0 synchronously:(BOOL)arg1 handler:(id)arg2 ;
-(void)getMetadataForFieldWithProperties:(id)arg0 withHandler:(id)arg1 ;
-(void)getPassesAndCatalog:(BOOL)arg0 synchronously:(BOOL)arg1 withHandler:(id)arg2 ;
-(void)getPassesAndCatalog:(BOOL)arg0 withHandler:(id)arg1 ;
-(void)getPassesAndCatalogOfPassTypes:(NSUInteger)arg0 synchronously:(BOOL)arg1 withHandler:(id)arg2 ;
-(void)getPassesWithUniqueIdentifiers:(id)arg0 handler:(id)arg1 ;
-(void)getRouteRelevantPassesFromLocation:(id)arg0 handler:(id)arg1 ;
-(void)hasInAppPaymentPassesForNetworks:(id)arg0 capabilities:(NSUInteger)arg1 issuerCountryCodes:(id)arg2 withHandler:(id)arg3 ;
-(void)hasInAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg0 issuerCountryCodes:(id)arg1 withHandler:(id)arg2 ;
-(void)hasInAppPrivateLabelPaymentPassesForWebDomain:(id)arg0 issuerCountryCodes:(id)arg1 withHandler:(id)arg2 ;
-(void)introduceDatabaseIntegrityProblem;
-(void)issueWalletUserNotificationWithTitle:(id)arg0 message:(id)arg1 forPassUniqueIdentifier:(id)arg2 customActionRoute:(id)arg3 ;
-(void)noteAppleAccountChanged:(id)arg0 ;
-(void)noteObjectSharedWithUniqueID:(id)arg0 ;
-(void)notifyPassUsedWithIdentifier:(id)arg0 fromSource:(NSInteger)arg1 ;
-(void)openDigitalIssuanceSetupForIdentifier:(id)arg0 ;
-(void)openPaymentSetup;
-(void)openPaymentSetupForMerchantIdentifier:(id)arg0 domain:(id)arg1 completion:(id)arg2 ;
-(void)passAdded:(id)arg0 ;
-(void)passRemoved:(id)arg0 ;
-(void)passUpdated:(id)arg0 ;
-(void)paymentPassWithAssociatedAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)paymentSetupFeaturesForConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)pendingUserNotificationsWithCompletion:(id)arg0 ;
-(void)postUpgradedPassNotificationForMarket:(id)arg0 passUniqueID:(id)arg1 ;
-(void)presentContactlessInterfaceForDefaultPassFromSource:(NSInteger)arg0 completion:(id)arg1 ;
-(void)presentContactlessInterfaceForPassWithUniqueIdentifier:(id)arg0 fromSource:(NSInteger)arg1 completion:(id)arg2 ;
-(void)presentPaymentPass:(id)arg0 ;
-(void)presentPaymentSetupRequest:(id)arg0 orientation:(id)arg1 completion:(id)arg2 ;
-(void)presentSecureElementPass:(id)arg0 ;
-(void)presentWalletWithRelevantPassUniqueID:(id)arg0 ;
-(void)provisionHomeKeyPassForSerialNumbers:(id)arg0 completionHandler:(id)arg1 ;
-(void)pushProvisioningNoncesWithCredentialCount:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)recomputeRelevantPassesWithSearchMode:(NSInteger)arg0 ;
-(void)remoteService:(id)arg0 didEstablishConnection:(id)arg1 ;
-(void)remoteService:(id)arg0 didInterruptConnection:(id)arg1 ;
-(void)removeAllScheduledActivities;
-(void)removeDelegate:(id)arg0 ;
-(void)removePass:(id)arg0 ;
-(void)removePassWithUniqueID:(id)arg0 diagnosticReason:(id)arg1 ;
-(void)removePasses:(id)arg0 ;
-(void)removePassesOfType:(NSUInteger)arg0 withDiagnosticReason:(id)arg1 ;
-(void)removePassesOfType:(NSUInteger)arg0 withDiagnosticReason:(id)arg1 completion:(id)arg2 ;
-(void)removePassesWithUniqueIDs:(id)arg0 diagnosticReason:(id)arg1 ;
-(void)replaceUnsignedPassAtURL:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)requestPersonalizationOfPassWithUniqueIdentifier:(id)arg0 contact:(id)arg1 personalizationToken:(id)arg2 requiredPersonalizationFields:(NSUInteger)arg3 personalizationSource:(NSUInteger)arg4 handler:(id)arg5 ;
-(void)requestUpdateOfObjectWithUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)rescheduleCommutePlanRenewalReminderForPassWithUniqueID:(id)arg0 ;
-(void)resetApplePayWithDiagnosticReason:(id)arg0 completion:(id)arg1 ;
-(void)sendUserEditedCatalog:(id)arg0 ;
-(void)serviceProviderDataForSecureElementPass:(id)arg0 completion:(id)arg1 ;
-(void)setBackupMetadata:(id)arg0 ;
-(void)setSortingState:(NSInteger)arg0 forObjectWithUniqueID:(id)arg1 withCompletion:(id)arg2 ;
-(void)shouldHomePresentAddPassFlow:(id)arg0 ;
-(void)shuffleGroups:(int)arg0 ;
-(void)signData:(id)arg0 signatureEntanglementMode:(NSUInteger)arg1 withCompletionHandler:(id)arg2 ;
-(void)signData:(id)arg0 withSecureElementPass:(id)arg1 completion:(id)arg2 ;
-(void)signWithFidoKeyForRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 fidoKeyHash:(id)arg2 challenge:(id)arg3 publicKeyIdentifier:(id)arg4 externalizedAuth:(id)arg5 completion:(id)arg6 ;
-(void)sortedTransitPassesForAppletDataFormat:(id)arg0 completion:(id)arg1 ;
-(void)spotlightReindexAllContentWithAcknowledgement:(id)arg0 ;
-(void)spotlightReindexContentWithIdentifiers:(id)arg0 acknowledgement:(id)arg1 ;
-(void)spotlightResetWithCompletion:(id)arg0 ;
-(void)spotlightStatusWithCompletion:(id)arg0 ;
-(void)supportedTransitPartnersForDigitalIssuance:(id)arg0 ;
-(void)transitMessageDidDisplay:(id)arg0 ;
-(void)transitMessageForRouteInfo:(id)arg0 completion:(id)arg1 ;
-(void)updateSettings:(NSUInteger)arg0 forObjectWithUniqueID:(id)arg1 ;


@end


#endif