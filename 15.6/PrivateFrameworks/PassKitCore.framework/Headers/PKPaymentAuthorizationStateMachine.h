// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTAUTHORIZATIONSTATEMACHINE_H
#define PKPAYMENTAUTHORIZATIONSTATEMACHINE_H

@class NSMutableArray, NSString, NSArray;
@protocol PKContinuityPaymentCoordinatorDelegate, PKBluetoothMonitorerDelegate, PKAggregateDictionaryProtocol, OS_dispatch_source, OS_dispatch_group, PKPaymentAuthorizationStateMachineDelegate;

#import <Foundation/Foundation.h>

#import "PKAccountService.h"
#import "PKBluetoothMonitorer.h"
#import "PKContinuityPaymentCoordinator.h"
#import "PKContinuityPaymentService.h"
#import "PKInAppPaymentSession.h"
#import "PKPaymentAuthorizationDataModel.h"
#import "PKPaymentAuthorizationClientCallbackStateParam.h"
#import "PKODIAssessment.h"
#import "PKPaymentService.h"
#import "PKPaymentWebService.h"
#import "PKPeerPaymentService.h"
#import "PKPeerPaymentSession.h"
#import "PKSecureElement.h"

@interface PKPaymentAuthorizationStateMachine : NSObject <PKContinuityPaymentCoordinatorDelegate, PKBluetoothMonitorerDelegate>



@property (retain, nonatomic) PKAccountService *accountService; // ivar: _accountService
@property (retain, nonatomic) NSObject<PKAggregateDictionaryProtocol> *aggregateDictionary; // ivar: _aggregateDictionary
@property (nonatomic) BOOL awaitingClientCallbackReply; // ivar: _awaitingClientCallbackReply
@property (nonatomic) BOOL awaitingWebServiceResponse; // ivar: _awaitingWebServiceResponse
@property (retain, nonatomic) PKBluetoothMonitorer *bluetoothMonitor; // ivar: _bluetoothMonitor
@property (retain, nonatomic) NSMutableArray *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *clientCallbackTimer; // ivar: _clientCallbackTimer
@property (retain, nonatomic) PKContinuityPaymentCoordinator *continuityPaymentCoordinator; // ivar: _continuityPaymentCoordinator
@property (retain, nonatomic) PKContinuityPaymentService *continuityPaymentService; // ivar: _continuityPaymentService
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *delayAuthorizedStateGroup; // ivar: _delayAuthorizedStateGroup
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationStateMachineDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL detectedBluetoothOn; // ivar: _detectedBluetoothOn
@property (nonatomic) BOOL hasReceivedRemoteDeviceUpdate; // ivar: _hasReceivedRemoteDeviceUpdate
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger hostApplicationState; // ivar: _hostApplicationState
@property (retain, nonatomic) PKInAppPaymentSession *inAppPaymentSession; // ivar: _inAppPaymentSession
@property (retain, nonatomic) NSString *instanceIdentifier; // ivar: _instanceIdentifier
@property (retain, nonatomic) PKPaymentAuthorizationDataModel *model; // ivar: _model
@property (retain, nonatomic) PKPaymentAuthorizationClientCallbackStateParam *mostRecentClientCallback; // ivar: _mostRecentClientCallback
@property (retain, nonatomic) PKODIAssessment *odiAssessment; // ivar: _odiAssessment
@property (nonatomic) BOOL odiAssessmentInFlight; // ivar: _odiAssessmentInFlight
@property (retain, nonatomic) PKPaymentService *paymentService; // ivar: _paymentService
@property (retain, nonatomic) PKPaymentWebService *paymentWebService; // ivar: _paymentWebService
@property (retain, nonatomic) PKPeerPaymentService *peerPaymentService; // ivar: _peerPaymentService
@property (retain, nonatomic) PKPeerPaymentSession *peerPaymentSession; // ivar: _peerPaymentSession
@property (nonatomic) NSUInteger prepareTransactionDetailsCounter; // ivar: _prepareTransactionDetailsCounter
@property (retain, nonatomic) NSArray *remoteDevicesToUpdate; // ivar: _remoteDevicesToUpdate
@property (retain, nonatomic) PKSecureElement *secureElement; // ivar: _secureElement
@property (nonatomic, setter=_setState:) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) CGFloat updatePaymentDeviceTimeout; // ivar: _updatePaymentDeviceTimeout
@property (readonly, nonatomic) BOOL useSecureElement;


-(BOOL)_isDeviceAssessmentEnabled;
-(BOOL)_shouldSignPurpleTrustData;
-(BOOL)canSelectPaymentOptions;
-(BOOL)hasPendingCallbacks;
-(BOOL)isErrorAboutPostalAddressField:(id)arg0 ;
-(NSInteger)statusFromPaymentError:(id)arg0 ;
-(NSUInteger)_adamIdentifier;
-(id)_billingInformationFromPaymentRequest:(id)arg0 ;
-(id)_createNewRemotePaymentRequest;
-(id)_dequeuePendingCallbackParam;
-(id)_inAppSessionAuthorizationRequest;
-(id)_paymentRequestPurpleTrustData;
-(id)_pendingTransactionOnAlternateFundingSourceForAutorizedPeerPaymentQuote:(id)arg0 ;
-(id)_pendingTransactionOnPeerPaymentPassForAuthorizedPeerPaymentQuote:(id)arg0 ;
-(id)_rewrapCompleteSessionRequestWithParam:(id)arg0 serviceURL:(*id)arg1 ;
-(id)_transactionWithPaymentToken:(id)arg0 ;
-(id)_transactionWithPurchase:(id)arg0 paymentHash:(id)arg1 ;
-(id)_updateRewrapBaseRequest:(id)arg0 param:(id)arg1 ;
-(id)clientErrorsFromResult:(id)arg0 ;
-(id)init;
-(void)_advanceToNextState;
-(void)_applyBillingInformationToAuthorizedQuote:(id)arg0 ;
-(void)_applyBillingInformationToPayment:(id)arg0 ;
-(void)_applyShippingInformationToPayment:(id)arg0 ;
-(void)_applyShippingMethodToPayment:(id)arg0 ;
-(void)_applyWebServiceConfigurationIfNeeded;
-(void)_augmentBaseRequestWithCompletion:(id)arg0 ;
-(void)_augmentSessionResponseWithCompletion:(id)arg0 ;
-(void)_cancelClientCallbackTimer;
-(void)_clientCallbackTimedOut;
-(void)_computeAssessmentIfNecessary;
-(void)_deviceUpdateDidFailWithNoEiligbleRemoteDevices:(id)arg0 ;
-(void)_dispatchNextCallbackParam;
-(void)_enqeueDidAuthorizePurchaseWithParam:(id)arg0 ;
-(void)_enqueueCallbackOfKind:(NSInteger)arg0 withObject:(id)arg1 ;
-(void)_enqueueDidAuthorizeAccountServicePaymentRequestWithApplePayTrustSignature:(id)arg0 ;
-(void)_enqueueDidAuthorizeContext;
-(void)_enqueueDidAuthorizeDisbursementWithVoucher:(id)arg0 ;
-(void)_enqueueDidAuthorizePaymentWithByPassPayment:(id)arg0 ;
-(void)_enqueueDidAuthorizePaymentWithInstallmentAuthorizationToken:(id)arg0 ;
-(void)_enqueueDidAuthorizePaymentWithPayment:(id)arg0 ;
-(void)_enqueueDidAuthorizePaymentWithRemotePayment:(id)arg0 ;
-(void)_enqueueDidAuthorizePaymentWithToken:(id)arg0 ;
-(void)_enqueueDidAuthorizePeerPaymentQuoteWithAuthorizedQuote:(id)arg0 ;
-(void)_enqueueDidRequestMerchantSession;
-(void)_enqueueDidSelectBankAccount:(id)arg0 ;
-(void)_enqueueDidSelectPaymentMethodWithBindToken:(id)arg0 ;
-(void)_enqueueDidSelectPaymentMethodWithQuote:(id)arg0 ;
-(void)_enqueueDidSelectPaymentPass:(id)arg0 ;
-(void)_enqueueDidSelectPaymentPass:(id)arg0 paymentApplication:(id)arg1 ;
-(void)_enqueueDidSelectRemotePaymentInstrument:(id)arg0 ;
-(void)_enqueueDidSelectRemotePaymentInstrument:(id)arg0 paymentApplication:(id)arg1 ;
-(void)_enqueueDidSelectShippingContact:(id)arg0 ;
-(void)_enqueueDidUpdateAccountServicePaymentMethod:(id)arg0 ;
-(void)_enqueueInitialCallbacks;
-(void)_handleStateMachineWillStartNotification:(id)arg0 ;
-(void)_insertPendingPaymentTransactionsWithParam:(id)arg0 ;
-(void)_nonceResponseWithCompletion:(id)arg0 ;
-(void)_performAuthorizationWithParam:(id)arg0 ;
-(void)_performCancelRemotePaymentRequest;
-(void)_performDidAuthorizeCallbackWithParam:(id)arg0 ;
-(void)_performInstallmentBind;
-(void)_performNonceRequestWithParam:(id)arg0 ;
-(void)_performPrepareTransactionDetailsRequestWithParam:(id)arg0 ;
-(void)_performRewrapRequestImplWithParam:(id)arg0 ;
-(void)_performRewrapRequestWithParam:(id)arg0 ;
-(void)_performSendClientUpdateWithShippingMethods:(id)arg0 paymentSummaryItems:(id)arg1 paymentApplication:(id)arg2 status:(NSInteger)arg3 ;
-(void)_performSendPaymentResult:(id)arg0 ;
-(void)_performSendRemotePaymentRequest;
-(void)_performUpdatePaymentDevices;
-(void)_postStateMachineWillStartNotification;
-(void)_processBluetoothState:(NSInteger)arg0 ;
-(void)_processErrorsForDataType:(NSInteger)arg0 ;
-(void)_registerForNotifications;
-(void)_removeWebServiceConfigurationIfNeeded;
-(void)_sendDidTransitionFromState:(NSUInteger)arg0 toState:(NSUInteger)arg1 withParam:(id)arg2 ;
-(void)_simulatePayment;
-(void)_start;
-(void)_startAssessmentIfNecessary;
-(void)_startClientCallbackTimer;
-(void)_startHandoff;
-(void)_startPayment;
-(void)_startRemoteDeviceUpdate;
-(void)_trackCouponCodeOutcomeWithError:(id)arg0 ;
-(void)_unregisterForNotifications;
-(void)_updateAssessmentAttributes;
-(void)_updateModelWithPaymentSummaryItems:(id)arg0 ;
-(void)_updateModelWithRemoteDevices:(id)arg0 ;
-(void)_updateModelWithShippingMethods:(id)arg0 paymentSummaryItems:(id)arg1 contentItems:(id)arg2 ;
-(void)_updatePaymentRequestBillingAddressWithPaymentMethod:(id)arg0 ;
-(void)_updateRewrapRequest:(id)arg0 param:(id)arg1 serviceURL:(*id)arg2 ;
-(void)beginDelayingAuthorizedState;
-(void)bluetoothMonitorerRecievedUpdatedBluetoothState:(NSInteger)arg0 ;
-(void)continuityPaymentCoordinator:(id)arg0 didReceivePayment:(id)arg1 ;
-(void)continuityPaymentCoordinator:(id)arg0 didReceiveUpdatedPaymentDevices:(id)arg1 ;
-(void)continuityPaymentCoordinator:(id)arg0 didTimeoutTotalWithPaymentDevices:(id)arg1 ;
-(void)continuityPaymentCoordinatorDidReceiveCancellation:(id)arg0 ;
-(void)continuityPaymentCoordinatorDidTimeoutUpdatePaymentDevices:(id)arg0 ;
-(void)dealloc;
-(void)delayAuthorizedStateByDuration:(CGFloat)arg0 ;
-(void)didAuthenticateWithAuthenticatorEvaluationResponse:(id)arg0 ;
-(void)didAuthenticateWithCredential:(id)arg0 ;
-(void)didBecomeActive:(BOOL)arg0 ;
-(void)didBecomeArmable:(BOOL)arg0 ;
-(void)didBecomeOccluded:(BOOL)arg0 ;
-(void)didCancel;
-(void)didChangeCouponCode:(id)arg0 ;
-(void)didChangeFundingMode:(NSInteger)arg0 ;
-(void)didEncounterError:(id)arg0 ;
-(void)didEncounterFatalError:(id)arg0 ;
-(void)didReceiveCouponCodeCompleteWithUpdate:(id)arg0 ;
-(void)didReceiveMerchantSessionCompleteWithSession:(id)arg0 error:(id)arg1 ;
-(void)didReceiveMerchantSessionCompleteWithUpdate:(id)arg0 ;
-(void)didReceivePaymentAuthorizationResult:(id)arg0 ;
-(void)didReceivePaymentAuthorizationStatus:(NSInteger)arg0 ;
-(void)didReceivePaymentMethodCompleteWithSummaryItems:(id)arg0 ;
-(void)didReceivePaymentMethodCompleteWithUpdate:(id)arg0 ;
-(void)didReceiveShippingContactCompleteWithStatus:(NSInteger)arg0 shippingMethods:(id)arg1 paymentSummaryItems:(id)arg2 ;
-(void)didReceiveShippingContactCompleteWithUpdate:(id)arg0 ;
-(void)didReceiveShippingMethodCompleteWithStatus:(NSInteger)arg0 paymentSummaryItems:(id)arg1 ;
-(void)didReceiveShippingMethodCompleteWithUpdate:(id)arg0 ;
-(void)didReceiveUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg0 signatureRequest:(id)arg1 ;
-(void)didRequestMerchantSession;
-(void)didRequestRefreshPaymentMethods;
-(void)didResignActive:(BOOL)arg0 ;
-(void)didResolveError;
-(void)didSelectBankAccount:(id)arg0 ;
-(void)didSelectBillingAddress:(id)arg0 ;
-(void)didSelectPaymentPass:(id)arg0 ;
-(void)didSelectPaymentPass:(id)arg0 paymentApplication:(id)arg1 ;
-(void)didSelectRemotePaymentInstrument:(id)arg0 ;
-(void)didSelectRemotePaymentInstrument:(id)arg0 paymentApplication:(id)arg1 ;
-(void)didSelectShippingContact:(id)arg0 ;
-(void)didSelectShippingEmail:(id)arg0 ;
-(void)didSelectShippingMethod:(id)arg0 ;
-(void)didSelectShippingName:(id)arg0 ;
-(void)didSelectShippingPhoneNumber:(id)arg0 ;
-(void)didUpdatePeerPaymentBalance:(id)arg0 ;
-(void)endDelayingAuthorizedState;
-(void)start;


@end


#endif