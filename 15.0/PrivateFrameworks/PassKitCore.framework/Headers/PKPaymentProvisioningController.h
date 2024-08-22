// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTPROVISIONINGCONTROLLER_H
#define PKPAYMENTPROVISIONINGCONTROLLER_H

@class NSMutableSet, NSTimer, NSString, NSHashTable, NSSet, CLLocationManager, NSData, NSMutableArray, NSArray, CIDVUIProofingFlowManager, NSExtension;
@protocol CIDVUIProofingFlowManagerDelegate, CLLocationManagerDelegate, PKPaymentServiceDelegate, PKPaymentWebServiceDelegate, OS_dispatch_source, OS_dispatch_queue, PKCloudStoreCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "PKPaymentCredential.h"
#import "PKAddPaymentPassRequestConfiguration.h"
#import "PKPaymentSetupMoreInfoItem.h"
#import "PKPaymentService.h"
#import "PKPaymentProvisioningControllerCredentialQueue.h"
#import "PKPaymentEligibilityResponse.h"
#import "PKPaymentSetupProductModel.h"
#import "PKPaymentPass.h"
#import "PKPaymentProvisioningResponse.h"
#import "PKPaymentRequirementsResponse.h"
#import "PKPaymentWebService.h"

@interface PKPaymentProvisioningController : NSObject <CIDVUIProofingFlowManagerDelegate, CLLocationManagerDelegate, PKPaymentServiceDelegate, PKPaymentWebServiceDelegate>

 {
    NSMutableSet *_tasks;
    NSTimer *_descriptionTimer;
    BOOL _provisioningUserInterfaceIsVisible;
    BOOL _proxyTargetDeviceWebServiceInUse;
    NSString *_provisioningNonce;
    PKPaymentCredential *_currentCredential;
    PKAddPaymentPassRequestConfiguration *_currentAddPaymentPassRequestConfiguration;
    NSHashTable *_delegates;
    os_unfair_lock_s _delegatesLock;
    NSSet *_supportedFeatureIdentifierStrings;
    NSSet *_supportedFeatureIdentifierStringsForAccountProvisioning;
    NSMutableSet *_analyticsFeaturesToReport;
    NSUInteger _targetDeviceSupportsTypeF;
    PKPaymentSetupMoreInfoItem *_marketExpressInfoItem;
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_source> *_locationTimer;
    id *_locationCompletion;
    PKPaymentService *_paymentService;
    NSUInteger _backgroundTaskIdentifier;
    NSInteger _provisioningStatusCount;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSSet *_featuresDidBeginReporting;
    NSData *_externalizedAuth;
    NSMutableArray *_preflighUpdateHandlers;
    BOOL _isPreflighting;
    NSUInteger _isTargetUserUnder13;
    BOOL _preflightedAccounts;
    BOOL _preflightedApplications;
}


@property (readonly, nonatomic, getter=isAMPEnrollmentAvailable) BOOL AMPEnrollmentAvailable; // ivar: _AMPEnrollmentAvailable
@property (readonly, copy, nonatomic) NSArray *allCredentials;
@property (retain, nonatomic) NSSet *allowedFeatureIdentifiers; // ivar: _allowedFeatureIdentifiers
@property (retain, nonatomic) NSArray *allowedPaymentNetworks; // ivar: _allowedPaymentNetworks
@property (retain, nonatomic) NSSet *allowedProductIdentifiers; // ivar: _allowedProductIdentifiers
@property (readonly, copy, nonatomic) NSArray *associatedCredentials; // ivar: _associatedCredentials
@property (readonly, nonatomic) NSSet *automaticExpressModes; // ivar: _automaticExpressModes
@property (retain, nonatomic) NSObject<PKCloudStoreCoordinatorDelegate> *cloudStoreCoordinator; // ivar: _cloudStoreCoordinator
@property (readonly, nonatomic) PKPaymentProvisioningControllerCredentialQueue *credentialProvisioningQueue; // ivar: _credentialProvisioningQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse; // ivar: _eligibilityResponse
@property (readonly, nonatomic, getter=isExpressModeSetupOptional) BOOL expressModeSetupOptional; // ivar: _expressModeSetupOptional
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CIDVUIProofingFlowManager *identityProofingManager; // ivar: _identityProofingManager
@property (copy, nonatomic) id *identityProofingManagerCompletionHandler; // ivar: _identityProofingManagerCompletionHandler
@property (readonly, nonatomic) NSUInteger isCurrentUserUnder13; // ivar: _isCurrentUserUnder13
@property (nonatomic) BOOL isProvisioningForAltAccount; // ivar: _isProvisioningForAltAccount
@property (readonly, copy, nonatomic) NSString *localizedProgressDescription; // ivar: _localizedProgressDescription
@property (readonly, nonatomic) NSArray *moreInfoItems; // ivar: _moreInfoItems
@property (readonly, nonatomic, getter=isPasscodeUpgradeRequired) BOOL passcodeUpgradeRequired;
@property (readonly, nonatomic) PKPaymentSetupProductModel *paymentSetupProductModel; // ivar: _paymentSetupProductModel
@property (readonly, nonatomic) NSUInteger preflightRequirements; // ivar: _preflightRequirements
@property (readonly, copy, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (readonly, nonatomic) PKPaymentPass *provisionedPass; // ivar: _provisionedPass
@property (readonly, nonatomic) NSExtension *provisioningExtension; // ivar: _provisioningExtension
@property (readonly, copy, nonatomic) NSArray *provisioningExtensionCredentials; // ivar: _provisioningExtensionCredentials
@property (readonly, nonatomic) PKPaymentProvisioningResponse *provisioningResponse; // ivar: _provisioningResponse
@property (readonly, copy, nonatomic) NSArray *purchaseCredentials; // ivar: _purchaseCredentials
@property (copy, nonatomic) NSString *referrerIdentifier; // ivar: _referrerIdentifier
@property (retain, nonatomic) NSSet *requiredTransitNetworkIdentifiers; // ivar: _requiredTransitNetworkIdentifiers
@property (readonly, nonatomic) PKPaymentRequirementsResponse *requirementsResponse; // ivar: _requirementsResponse
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suppressDefaultCardholderNameField;
@property (readonly, nonatomic) PKPaymentWebService *webService; // ivar: _webService


-(BOOL)_credentialIsValidForSetupConfiguration:(id)arg0 ;
-(BOOL)_featureApplicationInValidStateToPresent:(id)arg0 ;
-(BOOL)_hasSetupConfiguration;
-(BOOL)_isProvisioningPaymentAccount;
-(BOOL)_isValidLocation:(id)arg0 ;
-(BOOL)hasCreditPaymentPass;
-(BOOL)hasDebitPaymentPass;
-(BOOL)hasExternalizedAuth;
-(BOOL)hasPaymentPass;
-(BOOL)provisioningUserInterfaceIsVisible;
-(BOOL)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg0 ;
-(id)_displayableErrorOverrideForUnderlyingError:(id)arg0 ;
-(id)_doesDisplayableErrorConstitutePreflightFailure:(id)arg0 ;
-(id)_fetchOrCreateProductsForIdentifier:(NSUInteger)arg0 ;
-(id)_filterPaymentSetupProducts:(id)arg0 ;
-(id)_filteredPaymentSetupProductSections:(id)arg0 ;
-(id)_mockBrowseBanksResponse;
-(id)_paymentPassWithPaymentMethodType:(NSUInteger)arg0 ;
-(id)_supportedFeatureIdentifierStrings;
-(id)_supportedFeatureIdentifierStringsForAccountProvisioning;
-(id)displayableErrorForError:(id)arg0 ;
-(id)displayableErrorForProvisioningError:(id)arg0 ;
-(id)initWithWebService:(id)arg0 ;
-(id)initWithWebService:(id)arg0 paymentSetupRequest:(id)arg1 ;
-(id)passesWithPaymentMethodType:(NSUInteger)arg0 ;
-(id)provisioningTracker;
-(void)_addAssociatedCredential:(id)arg0 ;
-(void)_associateCredential:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_associateCredentials:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_beginReportingIfNecessary;
-(void)_browsableBanksWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)_deletePaymentPass:(id)arg0 ;
-(void)_downloadMoreInfoItemURLs:(id)arg0 withMetadata:(id)arg1 completion:(id)arg2 ;
-(void)_downloadRemoteAssetsForPaymentPass:(id)arg0 paymentCredential:(id)arg1 completion:(id)arg2 ;
-(void)_endRequiringUpgradedPasscodeIfNecessary;
-(void)_endSessionIfNecessary;
-(void)_handleProvisioningError:(id)arg0 forRequest:(id)arg1 pass:(id)arg2 ;
-(void)_identityConfigurationWithCompletion:(id)arg0 ;
-(void)_informDelegatesOfPaymentPassUpdateOnCredential:(id)arg0 ;
-(void)_ingestPaymentPass:(id)arg0 withCompletion:(id)arg1 ;
-(void)_loadMoreInfoItemForMarket:(id)arg0 completionHandler:(id)arg1 ;
-(void)_metadataUpdatedOnCredenitals;
-(void)_noteProvisioningDidBegin;
-(void)_noteProvisioningDidEnd;
-(void)_passAlreadyProvisioned;
-(void)_preflightRequirementsUpdated:(NSUInteger)arg0 displayableError:(id)arg1 ;
-(void)_provisioningNonceWithCompletion:(id)arg0 ;
-(void)_queryEligibilityForCredential:(id)arg0 completion:(id)arg1 ;
-(void)_queryRequirementsForCredential:(id)arg0 completion:(id)arg1 ;
-(void)_requestEligibility:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_requestProvisioning:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_requestRequirements:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_setupAccountCredentialForProvisioning:(id)arg0 completion:(id)arg1 ;
-(void)_setupAccounts:(id)arg0 ;
-(void)_setupFeatureApplications:(id)arg0 ;
-(void)_startLocationSearchWithTimeout:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg0 ;
-(void)_updateAllAssoicatedCredentialsMetadataWithCompletion:(id)arg0 ;
-(void)_updateCredentialWithPaymentPass:(id)arg0 completion:(id)arg1 ;
-(void)_updateCredentialWithPaymentPassAssets:(id)arg0 completion:(id)arg1 ;
-(void)_updateLocalizedProgressAndInvalidateTimer;
-(void)_updatePaymentSetupProductModelExtensionsWithCompletion:(id)arg0 ;
-(void)_updatePaymentSetupProductModelWithAvailability:(NSUInteger)arg0 activeConfigurations:(id)arg1 ;
-(void)_updatePreflightRequirement:(NSUInteger)arg0 displayableError:(id)arg1 ;
-(void)_updateProvisioningRequestForEnableRequirements:(id)arg0 completion:(id)arg1 ;
-(void)_verifyPassIsSupportedForExpressInLocalMarket:(id)arg0 completion:(id)arg1 ;
-(void)acceptTerms;
-(void)addDelegate:(id)arg0 ;
-(void)associateCredentials:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)cachedPaymentSetupProductModelWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)declineTerms;
-(void)deleteCredential:(id)arg0 completionHandler:(id)arg1 ;
-(void)featureApplicationAdded:(id)arg0 ;
-(void)featureApplicationChanged:(id)arg0 ;
-(void)featureApplicationRemoved:(id)arg0 ;
-(void)finishOptionalExpressModeSetupForPass:(id)arg0 withProvisioningTracker:(id)arg1 completion:(id)arg2 ;
-(void)handleOptionalExpressModeSetupDidFinishForPass:(id)arg0 withExpressModes:(id)arg1 provisioningTracker:(id)arg2 completion:(id)arg3 ;
-(void)ingestPaymentPassForCredential:(id)arg0 completion:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)makePaymentPassDefault:(id)arg0 ;
-(void)noteProvisioningUserInterfaceDidAppear;
-(void)noteProvisioningUserInterfaceDidDisappear;
-(void)passcodeUpgradeCompleted:(BOOL)arg0 ;
-(void)paymentWebService:(id)arg0 didCompleteTSMConnectionForTaskID:(NSUInteger)arg1 ;
-(void)paymentWebService:(id)arg0 didQueueTSMConnectionForTaskID:(NSUInteger)arg1 ;
-(void)performDeviceCheckInIfNeeded:(id)arg0 ;
-(void)preflightPasscodeUpgradeWithCompletion:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)preflightWithRequirements:(NSUInteger)arg0 completionRequirements:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)preflightWithRequirements:(NSUInteger)arg0 update:(id)arg1 ;
-(void)proofingFlowManager:(id)arg0 completedProofingWithError:(id)arg1 ;
-(void)provisionHomeKeyCredential:(id)arg0 completionHandler:(id)arg1 ;
-(void)provisioningExtensionProductsWithCompletionHandler:(id)arg0 ;
-(void)registerDevice:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)removeProvisionedPass;
-(void)requestEligibility:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)requestExternalizedAuthForWatchWithCompletion:(id)arg0 ;
-(void)requestProvisioning:(id)arg0 withCompletion:(id)arg1 ;
-(void)requestProvisioning:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)requestProvisioningMethodMetadataForProduct:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestPurchasesForProduct:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestRequirements:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)reset;
-(void)resetForNewProvisioning;
-(void)resolveAmbiguousRequirementsWithProductIdentifier:(id)arg0 ;
-(void)resolveProvisioningForCredential:(id)arg0 ;
-(void)resolveRequirementsAndEligibilityForHomeKeyCredential:(id)arg0 ;
-(void)resolveRequirementsForIssuerProvisioningExtensionCredential:(id)arg0 ;
-(void)resolveRequirementsForShareableCredential:(id)arg0 ;
-(void)resolveRequirementsUsingAlreadyProvisionedRemoteCredential:(id)arg0 ;
-(void)resolveRequirementsUsingProduct:(id)arg0 ;
-(void)resolveRequirementsUsingProvisioningMethodMetadata:(id)arg0 ;
-(void)retrieveAccountCredentials:(id)arg0 ;
-(void)retrieveAllAvailableCredentials:(id)arg0 ;
-(void)retrieveRemoteCredentials:(id)arg0 ;
-(void)setupAccountCredentialForProvisioning:(id)arg0 completion:(id)arg1 ;
-(void)setupProductForProvisioning:(id)arg0 includePurchases:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)storeExternalizedAuth:(id)arg0 ;
-(void)updatePaymentSetupProductModelWithCompletionHandler:(id)arg0 ;
-(void)updateRemoteCredentials:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)validatePreconditions:(id)arg0 ;
-(void)validatePreconditionsAndRegister:(id)arg0 ;
-(void)validatePreconditionsRegisterAndAssociateRemoteCredentials:(id)arg0 ;


@end


#endif