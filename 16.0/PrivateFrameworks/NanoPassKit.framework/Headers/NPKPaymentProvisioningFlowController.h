// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPAYMENTPROVISIONINGFLOWCONTROLLER_H
#define NPKPAYMENTPROVISIONINGFLOWCONTROLLER_H

@class PKPaymentAuthorizationController, PKContactlessCardIngester, NSString, PKAppleBalanceCredential, PKPaymentCredential, PKPaymentSetupProduct, NSDecimalNumber, PKPaymentRequest, PKServiceProviderPurchase, PKPaymentSetupFieldsModel, NSData, PKAddPaymentPassRequest, PKAddPaymentPassRequestConfiguration, PKPaymentProvisioningMethodMetadata, PKPaymentPass, PKPaymentProvisioningController, PKPaymentWebService;
@protocol PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate, PKContactlessCardIngesterDelegate, NPKPaymentProvisioningFlowControllerProtocol, NPKPaymentProvisioningFlowControllerDelegate, OS_dispatch_source, NSObject;

#import <Foundation/Foundation.h>

#import "NPKPaymentProvisioningFlowControllerRequestContext.h"
#import "NPKFidoAuthCoordinator.h"
#import "NPKPaymentProvisioningFlowControllerPreconditionsStepContext.h"

@interface NPKPaymentProvisioningFlowController : NSObject <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate, PKContactlessCardIngesterDelegate, NPKPaymentProvisioningFlowControllerProtocol>



@property (retain, nonatomic) PKPaymentAuthorizationController *authorizationController; // ivar: _authorizationController
@property (retain, nonatomic) PKContactlessCardIngester *cardIngester; // ivar: _cardIngester
@property (retain, nonatomic) NSString *chooseCredentialsStepIdentifier; // ivar: _chooseCredentialsStepIdentifier
@property (retain, nonatomic) PKAppleBalanceCredential *currentAppleBalanceCredential; // ivar: _currentAppleBalanceCredential
@property (retain, nonatomic) PKPaymentCredential *currentCredential; // ivar: _currentCredential
@property (retain, nonatomic) PKPaymentSetupProduct *currentProduct; // ivar: _currentProduct
@property (nonatomic) int currentStep; // ivar: _currentStep
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NPKPaymentProvisioningFlowControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDecimalNumber *digitalIssuanceAmount; // ivar: _digitalIssuanceAmount
@property (retain, nonatomic) NPKPaymentProvisioningFlowControllerRequestContext *digitalIssuanceAmountRequestContext; // ivar: _digitalIssuanceAmountRequestContext
@property (retain, nonatomic) PKPaymentRequest *digitalIssuancePaymentRequest; // ivar: _digitalIssuancePaymentRequest
@property (retain, nonatomic) NPKPaymentProvisioningFlowControllerRequestContext *digitalIssuancePaymentRequestContext; // ivar: _digitalIssuancePaymentRequestContext
@property (retain, nonatomic) PKServiceProviderPurchase *digitalIssuancePurchase; // ivar: _digitalIssuancePurchase
@property (nonatomic, getter=isDigitalIssuanceSupported) BOOL digitalIssuanceSupported; // ivar: _digitalIssuanceSupported
@property (retain, nonatomic) NPKFidoAuthCoordinator *fidoAuthCoordinator; // ivar: _fidoAuthCoordinator
@property (retain, nonatomic) PKPaymentSetupFieldsModel *fieldsModel; // ivar: _fieldsModel
@property (nonatomic) NSUInteger flowIngestionState; // ivar: _flowIngestionState
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *immediatelyBeforeTermsStepIdentifier; // ivar: _immediatelyBeforeTermsStepIdentifier
@property (retain, nonatomic) NSObject<OS_dispatch_source> *inAppProvisioningGetRequestTimer; // ivar: _inAppProvisioningGetRequestTimer
@property (retain, nonatomic) NSData *inAppProvisioningNonce; // ivar: _inAppProvisioningNonce
@property (retain, nonatomic) NSData *inAppProvisioningPublicKeyHash; // ivar: _inAppProvisioningPublicKeyHash
@property (retain, nonatomic) PKAddPaymentPassRequest *inAppProvisioningRequest; // ivar: _inAppProvisioningRequest
@property (retain, nonatomic) PKAddPaymentPassRequestConfiguration *inAppProvisioningRequestConfiguration; // ivar: _inAppProvisioningRequestConfiguration
@property (retain, nonatomic) NSObject<OS_dispatch_source> *ingestionCardNotFoundTimer; // ivar: _ingestionCardNotFoundTimer
@property (retain, nonatomic) NSString *ingestionCardSessionToken; // ivar: _ingestionCardSessionToken
@property (retain, nonatomic) PKPaymentProvisioningMethodMetadata *ingestionMethodMetadata; // ivar: _ingestionMethodMetadata
@property (nonatomic) CGFloat ingestionProgress; // ivar: _ingestionProgress
@property (nonatomic) NSUInteger ingestionStateOnRetry; // ivar: _ingestionStateOnRetry
@property (nonatomic) NSUInteger internalIngestionState; // ivar: _internalIngestionState
@property (retain, nonatomic) PKPaymentPass *issuerVerificationPass; // ivar: _issuerVerificationPass
@property (retain, nonatomic) NPKPaymentProvisioningFlowControllerPreconditionsStepContext *preconditionsRequestContext; // ivar: _preconditionsRequestContext
@property (retain, nonatomic) NSObject<NSObject> *progressNotificationToken; // ivar: _progressNotificationToken
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (retain, nonatomic) NPKPaymentProvisioningFlowControllerRequestContext *provisioningProgressRequestContext; // ivar: _provisioningProgressRequestContext
@property (nonatomic, getter=isReaderModeProvisioningSupported) BOOL readerModeProvisioningSupported; // ivar: _readerModeProvisioningSupported
@property (retain, nonatomic) NPKPaymentProvisioningFlowControllerRequestContext *readerModeRequestContext; // ivar: _readerModeRequestContext
@property (nonatomic, getter=isSeparateLocalDeviceEntryRequired) BOOL separateLocalDeviceEntryRequired; // ivar: _separateLocalDeviceEntryRequired
@property (readonly, nonatomic) NSInteger setupContext; // ivar: _setupContext
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) BOOL termsAcceptedOutOfBand; // ivar: _termsAcceptedOutOfBand
@property (nonatomic) NSUInteger termsReason; // ivar: _termsReason
@property (retain, nonatomic) PKPaymentAuthorizationController *unitTestingAuthorizationController; // ivar: _unitTestingAuthorizationController
@property (retain, nonatomic) PKContactlessCardIngester *unitTestingCardIngester; // ivar: _unitTestingCardIngester
@property (retain, nonatomic) PKPaymentWebService *webService; // ivar: _webService


+(BOOL)_isHSA2Enabled;
+(BOOL)_localCredentials:(id)arg0 containProduct:(id)arg1 ;
+(BOOL)_readerModeEntryAllowedForProduct:(id)arg0 ;
+(id)_authContext;
+(id)_displayableCouldNotAddCardErrorWithUnderlyingError:(id)arg0 ;
+(id)_displayableErrorWithIneligibilityReason:(NSInteger)arg0 learnMoreURL:(id)arg1 ;
+(id)_displayableErrorWithUnderlyingVerificationError:(id)arg0 ;
+(id)_filterAssociatedCredentials:(id)arg0 forProduct:(id)arg1 ;
+(id)_filteredPaymentSetupProducts:(id)arg0 localCredentials:(id)arg1 setupContext:(NSInteger)arg2 webService:(id)arg3 mobileCarrierRegion:(id)arg4 readerModeSupported:(BOOL)arg5 digitalIssuanceSupported:(BOOL)arg6 ;
+(id)_flowPickerSectionsWithContext:(NSInteger)arg0 provisioningController:(id)arg1 readerModeSupported:(BOOL)arg2 digitalIssuanceSupported:(BOOL)arg3 ;
+(id)_physicalCardURLFromMetadata:(id)arg0 forScale:(CGFloat)arg1 ;
+(id)_productsArrayFromPickerSection:(id)arg0 ;
+(id)_readerModeResources;
+(void)_addAppleBalanceToSections:(id)arg0 fromModel:(id)arg1 ;
// +(void)_addCreditDebitItemToSection:(id)arg0 webService:(unk)arg1  ;
+(void)_addGroupedItemsToSections:(id)arg0 fromModel:(id)arg1 webService:(id)arg2 paymentSection:(id)arg3 ;
-(BOOL)_fieldRequiresLocalEntry:(id)arg0 ;
-(BOOL)_fieldsModelCompleteExceptForLocalFields:(id)arg0 ;
-(BOOL)_isPasscodeUpgradeRequired;
-(BOOL)_isResolveLocalEligibilityRequired;
-(BOOL)_isValidateSecurityRequirementsRequired;
-(BOOL)hasCredentialsAssociatedWithProduct:(id)arg0 ;
-(id)_addCardErrorForPaymentRequest:(id)arg0 ;
-(id)_credentialReadonlyFieldIdentifiers;
-(id)_curatedDefaultPaymentSetupProvisioningFields;
-(id)_filteredPaymentSetupFields:(id)arg0 forLocalDeviceEntry:(BOOL)arg1 ;
-(id)_localRequiredFieldsFromRequirementsResponse;
-(id)_newPaymentEligibilityRequest;
-(id)_newPaymentProvisioningRequest;
-(id)_newPaymentRequirementsRequest;
-(id)_paymentRequestForAmount:(id)arg0 ;
-(id)_paymentRequestForAmount:(id)arg0 serviceProviderProduct:(id)arg1 productItem:(id)arg2 ;
-(id)_requiredFieldsFromRequirementsResponse;
-(id)_requiredFieldsFromRequirementsResponseExcludingLocalFields;
-(id)_secondaryFilteredFields:(id)arg0 forCredential:(id)arg1 ;
-(id)_subtitleForState:(NSUInteger)arg0 ;
-(id)_titleForState:(NSUInteger)arg0 ;
-(id)initWithProvisioningController:(id)arg0 setupContext:(NSInteger)arg1 ;
-(void)_canMakeDigitalIssuancePaymentsForTransitProducts:(id)arg0 withCompletion:(id)arg1 ;
-(void)_canMakeDigitalIssuancePaymentsForTransitProductsWithCompletion:(id)arg0 ;
-(void)_cardNotFoundTimerFired;
// -(void)_cardsOnFileForProduct:(id)arg0 updateHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)_chooseProductFromFlowPickerSection:(id)arg0 requestContext:(id)arg1 transitioningToStep:(int)arg2 ;
-(void)_configureWebServiceIfNecessary:(id)arg0 completion:(id)arg1 ;
-(void)_downloadAndAddUpdatedPassForPaymentPass:(id)arg0 completion:(id)arg1 ;
-(void)_downloadRemoteAssetsAndAddPaymentPass:(id)arg0 completion:(id)arg1 ;
-(void)_endProvisioningFlowWithError:(id)arg0 requestContext:(id)arg1 ;
-(void)_endProvisioningFlowWithSuccessForPass:(id)arg0 requestContext:(id)arg1 ;
// -(void)_ensureMetadataForCredentials:(id)arg0 updateHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)_fetchAddRequestWithCertificatesResponse:(id)arg0 requestContext:(id)arg1 ;
-(void)_fetchInAppProvisioningCertificates:(id)arg0 ;
-(void)_handleAppleBalanceAccountDetailsAcknowledgedWithProduct:(id)arg0 requestContext:(id)arg1 ;
-(void)_handleAppleBalanceProductChosen:(id)arg0 requestContext:(id)arg1 ;
-(void)_handleDigitalIssuanceTermsAccepted:(id)arg0 ;
-(void)_handleEndOfProvisioningFlowForCurrentPass:(id)arg0 requestContext:(id)arg1 ;
-(void)_handleFinished:(id)arg0 ;
-(void)_handlePasscodeUpgradeCompleteWithSuccess:(BOOL)arg0 error:(id)arg1 requestContext:(id)arg2 ;
-(void)_handlePreconditionsVerified:(id)arg0 ;
-(void)_handleProceedWithCredentials:(id)arg0 chosenByUser:(BOOL)arg1 requestContext:(id)arg2 ;
-(void)_handleProductChosen:(id)arg0 includeCardsOnFile:(BOOL)arg1 requestContext:(id)arg2 ;
-(void)_handleProvisioningFlowStarted:(id)arg0 ;
-(void)_handleReaderModeTermsAccepted:(id)arg0 ;
-(void)_handleVerificationCode:(id)arg0 forPass:(id)arg1 context:(id)arg2 ;
-(void)_handleVerificationFieldsForPass:(id)arg0 context:(id)arg1 ;
-(void)_handleVerificationResponseForPass:(id)arg0 context:(id)arg1 ;
-(void)_invalidateCardNotFoundTimer;
-(void)_noteProvisioningStateChangeForReaderMode:(NSInteger)arg0 ;
-(void)_performEligibility:(id)arg0 ;
-(void)_performNextActionForProvisioningState:(id)arg0 ;
-(void)_performNextStepForProvisionedPass:(id)arg0 moreInfoAcknowledged:(BOOL)arg1 requestContext:(id)arg2 ;
-(void)_performNextStepForProvisionedPass:(id)arg0 requestContext:(id)arg1 ;
-(void)_performPasscodeUpgrade:(id)arg0 ;
-(void)_performProvision:(id)arg0 ;
-(void)_performProvisionWithRequest:(id)arg0 requestContext:(id)arg1 assertion:(id)arg2 ;
-(void)_performProvisioningEligibility:(id)arg0 ;
-(void)_performRequirementsOrEligibilityForInAppProvisioning:(id)arg0 ;
-(void)_performResolveLocalEligibilityARequirements:(id)arg0 completion:(id)arg1 ;
-(void)_performTerms:(id)arg0 ;
-(void)_performTransitionToStep:(int)arg0 withContext:(id)arg1 ;
-(void)_performValidateSecurityRequirements:(id)arg0 completion:(id)arg1 ;
-(void)_provisioningLocalizedProgressDescriptionDidChange:(id)arg0 ;
-(void)_removePassIfNecessary;
-(void)_requestPassDetailsForAccountCredential:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_requestRequirements:(id)arg0 ;
-(void)_requestVerificationOptionsForPass:(id)arg0 context:(id)arg1 ;
-(void)_resetReaderModeProvisioningState;
-(void)_sendDidEncounterError:(id)arg0 requestContext:(id)arg1 ;
-(void)_sendDidTransitionFromStep:(int)arg0 toStep:(int)arg1 withContext:(id)arg2 ;
-(void)_setupCardIngester;
-(void)_startCardNotFoundTimer;
-(void)_startDigitalIssuancePaymentWithAmount:(id)arg0 requestContext:(id)arg1 ;
-(void)_startDigitalIssuancePaymentWithAmount:(id)arg0 requestContext:(id)arg1 serviceProviderProduct:(id)arg2 productItem:(id)arg3 ;
-(void)_startIngestion;
-(void)_startProvisioningForCredential:(id)arg0 requestContext:(id)arg1 ;
-(void)_startReaderModeIngestion:(id)arg0 ;
-(void)_startReadingCard;
-(void)_startTransferringCard;
-(void)_tearDownCardIngester;
-(void)_transitionBasedOnCredentials:(id)arg0 product:(id)arg1 requestContext:(id)arg2 ;
-(void)_transitionBasedOnTermsForReason:(NSUInteger)arg0 URL:(id)arg1 requestContext:(id)arg2 ;
-(void)_transitionToAppleBalanceAccountDetailsWithProduct:(id)arg0 requestContext:(id)arg1 ;
-(void)_transitionToChooseCredentials:(id)arg0 product:(id)arg1 requestContext:(id)arg2 ;
-(void)_transitionToChooseFlowWithSections:(id)arg0 requestContext:(id)arg1 ;
-(void)_transitionToChooseProductWithProducts:(id)arg0 requestContext:(id)arg1 ;
-(void)_transitionToDigitalIssuanceForProduct:(id)arg0 requestContext:(id)arg1 ;
-(void)_transitionToFlowIngestionState:(NSUInteger)arg0 ;
-(void)_transitionToFlowIngestionState:(NSUInteger)arg0 progress:(CGFloat)arg1 ;
-(void)_transitionToIngestionProgress:(CGFloat)arg0 ;
-(void)_transitionToManualEntry:(id)arg0 ;
-(void)_transitionToMoreInformationWithItems:(id)arg0 pass:(id)arg1 requestContext:(id)arg2 ;
-(void)_transitionToProductDisambiguationWithProducts:(id)arg0 requestContext:(id)arg1 ;
-(void)_transitionToProvisioningForCredential:(id)arg0 product:(id)arg1 requestContext:(id)arg2 ;
-(void)_transitionToProvisioningProgressWithRequestContext:(id)arg0 ;
-(void)_transitionToReaderModeForProduct:(id)arg0 requestContext:(id)arg1 ;
-(void)_transitionToSecondaryManualEntryWithFields:(id)arg0 credential:(id)arg1 requestContext:(id)arg2 ;
-(void)_transitionToVerificationChannelsWithPaymentPass:(id)arg0 channels:(id)arg1 requestContext:(id)arg2 ;
-(void)_transitionToVerificationCodeWithPaymentPass:(id)arg0 channel:(id)arg1 requestContext:(id)arg2 ;
-(void)_transitionToVerificationFieldsWithPaymentPass:(id)arg0 fields:(id)arg1 requestContext:(id)arg2 ;
-(void)_updateVerificationForPass:(id)arg0 channel:(id)arg1 context:(id)arg2 ;
-(void)_verifyPasscodeStateIfNecessaryWithCompletion:(id)arg0 ;
-(void)acceptTerms:(id)arg0 ;
-(void)acknowledgeAppleBalanceAccountDetailsWithProduct:(id)arg0 requestContext:(id)arg1 ;
-(void)acknowledgeMoreInformation:(id)arg0 ;
-(void)acknowledgeWelcome:(id)arg0 ;
-(void)chooseCardsOnFileFlowForProduct:(id)arg0 requestContext:(id)arg1 preloadMetadata:(BOOL)arg2 ;
-(void)chooseCredentials:(id)arg0 requestContext:(id)arg1 ;
-(void)chooseEMoneyProductFromFlowPickerSection:(id)arg0 requestContext:(id)arg1 ;
-(void)chooseFlowForPickerItem:(id)arg0 requestContext:(id)arg1 ;
-(void)chooseManualEntry:(id)arg0 ;
-(void)chooseProduct:(id)arg0 includeCardsOnFile:(BOOL)arg1 requestContext:(id)arg2 ;
-(void)chooseProduct:(id)arg0 requestContext:(id)arg1 ;
-(void)chooseProductAndCredentialsFlowForProduct:(id)arg0 credentials:(id)arg1 requestContext:(id)arg2 ;
-(void)chooseReaderMode:(id)arg0 ;
-(void)chooseTransitProductFromFlowPickerSection:(id)arg0 requestContext:(id)arg1 ;
-(void)contactlessCardIngester:(id)arg0 didFailToIngestCardWithError:(id)arg1 resetProvisioning:(BOOL)arg2 isRecoverable:(BOOL)arg3 ;
-(void)contactlessCardIngester:(id)arg0 didUpdateCardIngestionStatus:(NSUInteger)arg1 ;
-(void)dealloc;
// -(void)ensureMetadataForCredentials:(id)arg0 requestContext:(id)arg1 updateHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)handleDigitalIssuanceAmount:(id)arg0 requestContext:(id)arg1 ;
-(void)handleDigitalIssuanceAmount:(id)arg0 serviceProviderProduct:(id)arg1 item:(id)arg2 requestContext:(id)arg3 ;
-(void)handleIssuerApplicationAddRequest:(id)arg0 requestContext:(id)arg1 ;
-(void)handleIssuerVerificationChannel:(id)arg0 requestContext:(id)arg1 ;
-(void)handleIssuerVerificationCode:(id)arg0 requestContext:(id)arg1 ;
-(void)handleIssuerVerificationFields:(id)arg0 requestContext:(id)arg1 ;
-(void)handleManualEntryFields:(id)arg0 credential:(id)arg1 requestContext:(id)arg2 ;
-(void)handlePasscodeUpgradeCompleteWithSuccess:(BOOL)arg0 error:(id)arg1 requestContext:(id)arg2 ;
-(void)handleProductSelection:(id)arg0 requestContext:(id)arg1 ;
-(void)handleReaderModeFields:(id)arg0 requestContext:(id)arg1 ;
-(void)paymentAuthorizationController:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationController:(id)arg0 didAuthorizePurchase:(id)arg1 completion:(id)arg2 ;
-(void)paymentAuthorizationControllerDidFinish:(id)arg0 ;
-(void)prefetchCredentialsForProduct:(id)arg0 requestContext:(id)arg1 completionHandler:(id)arg2 ;
-(void)presentTransitServiceProviderProductsWithRequestContext:(id)arg0 ;
-(void)reset;
-(void)skipIssuerVerification:(id)arg0 ;
-(void)skipProvisioning:(id)arg0 ;
-(void)startInAppProvisioningFlowWithConfiguration:(id)arg0 requestContext:(id)arg1 ;
-(void)startIssuerVerificationFlowForPaymentPass:(id)arg0 requestContext:(id)arg1 ;
-(void)startProvisioningFlow:(id)arg0 ;


@end


#endif