// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTAUTHORIZATIONFLOWCOORDINATOR_H
#define PKPAYMENTAUTHORIZATIONFLOWCOORDINATOR_H

@class PKAssertion, NSString, PKAsyncTaskProgressTracker, NSXPCConnection, PKInAppPaymentService, PKPaymentRequest, PKPeerPaymentAccount;
@protocol PKPaymentAuthorizationHostProtocol, PKPaymentAuthorizationOnboardingInterfaceDelegate, PKPaymentAuthorizationProvisioningInterfaceDelegate, PKPeerPaymentIdentityVerificationInterfaceDelegate, PKPaymentAuthorizationPresenter, PKPaymentAuthorizationInterface, PKPaymentAuthorizationFlowCoordinatorDelegate, PKPaymentAuthorizationScenePresenter;

#import <Foundation/Foundation.h>

#import "PKPaymentAuthorizationContext.h"
#import "PKPaymentAuthorizationDefaultService.h"
#import "PKPaymentAuthorizationServiceProxy.h"

@interface PKPaymentAuthorizationFlowCoordinator : NSObject <PKPaymentAuthorizationHostProtocol, PKPaymentAuthorizationOnboardingInterfaceDelegate, PKPaymentAuthorizationProvisioningInterfaceDelegate, PKPeerPaymentIdentityVerificationInterfaceDelegate, PKPaymentAuthorizationPresenter>

 {
    BOOL _didSendAuthorizationDidPresent;
    BOOL _didSendAuthorizationDidFinish;
    PKAssertion *_notificationSuppressionAssertion;
    id<PKPaymentAuthorizationInterface> *_paymentInterface;
    BOOL _invalidated;
    NSUInteger _paymentSetupState;
    BOOL _peerPaymentIdentityVerificationCompleted;
}


@property (readonly, nonatomic) PKPaymentAuthorizationContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PKPaymentAuthorizationDefaultService *defaultService; // ivar: _defaultService
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationFlowCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissAfterPaymentSetup; // ivar: _dismissAfterPaymentSetup
@property (retain, nonatomic) PKAsyncTaskProgressTracker *dismissalTaskProgressTracker; // ivar: _dismissalTaskProgressTracker
@property (readonly, nonatomic) PKPaymentAuthorizationServiceProxy *exportedObject;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCConnection *hostConnection; // ivar: _hostConnection
@property (retain, nonatomic) PKInAppPaymentService *inAppPaymentService; // ivar: _inAppPaymentService
@property (readonly, nonatomic) PKPaymentRequest *paymentRequest;
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // ivar: _peerPaymentAccount
@property (readonly, nonatomic) NSObject<PKPaymentAuthorizationHostProtocol> *remoteObjectProxy;
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationScenePresenter> *scenePresenter; // ivar: _scenePresenter
@property (readonly) Class superclass;


-(BOOL)_peerPaymentIdentityVerificationRequired;
-(BOOL)_shouldBlockHardwareCancels;
-(BOOL)handleHomeButtonPressed;
-(BOOL)supportsSecondaryViewController;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_createPaymentInterfaceConfigurationWithRelevantPassID:(id)arg0 ;
-(id)createConnectionToEndpoint:(id)arg0 ;
-(id)initWithContext:(id)arg0 scenePresenter:(id)arg1 delegate:(id)arg2 ;
-(void)_canPresentPaymentRequest:(id)arg0 completion:(id)arg1 ;
-(void)_endAnalyticsReporting;
// -(void)_experimentalCardSetupFromPaymentSheetVariant:(id)arg0 control:(unk)arg1  ;
-(void)_handlePaymentRequestPresentationResultType:(NSInteger)arg0 relevantUniqueID:(id)arg1 ;
-(void)_openApplication:(id)arg0 ;
-(void)_presentActivatingPassAlertWithRelevantUniqueID:(id)arg0 ;
-(void)_presentAddCardAlert;
-(void)_presentAlertWithTitle:(id)arg0 message:(id)arg1 actionTitle:(id)arg2 actionHandler:(id)arg3 ;
-(void)_presentAlertWithTitle:(id)arg0 message:(id)arg1 cancelTitle:(id)arg2 actionTitle:(id)arg3 actionHandler:(id)arg4 ;
// -(void)_presentAlertWithTitle:(id)arg0 message:(id)arg1 cancelTitle:(id)arg2 actionTitle:(id)arg3 actionHandler:(id)arg4 finalError:(unk)arg5  ;
-(void)_presentEnrollAccessibilityIntentAlert;
-(void)_presentInvalidAlert;
-(void)_presentLostModeAlertWithRelevantUniqueID:(id)arg0 ;
-(void)_presentNextStepDismissingCurrentInterface:(BOOL)arg0 withDefaultPassID:(id)arg1 ;
-(void)_presentOnboardingForContext:(NSInteger)arg0 ;
-(void)_presentPassNotSupportedAlertWithRelevantUniqueID:(id)arg0 ;
-(void)_presentPaymentAuthorizationWithRelevantUniqueID:(id)arg0 ;
-(void)_presentPaymentInterface:(id)arg0 completion:(id)arg1 ;
-(void)_presentPeerPaymentIdentityVerification;
-(void)_presentPeerPaymentIdentityVerificationAlert;
-(void)_presentVerifyPassAlertWithRelevantUniqueID:(id)arg0 ;
-(void)_presentWalletUninstalledAlert;
-(void)_reportAddCardAlertPresentedAnalytics;
-(void)_reportConnectionEstablishedAnalyticsForConnection:(id)arg0 ;
-(void)_reportPaymentPassMissingAnalytics;
-(void)_reportUnsupportedPaymentPassAnalytics;
-(void)_reportVerificationRequiredAnalytics;
-(void)_startAnalyticsReporting;
-(void)_startSuppressingNotificationsIfNecessary;
-(void)_stopSuppressingNotifications;
-(void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg0 ;
-(void)authorizationDidAuthorizeContext;
-(void)authorizationDidAuthorizeDisbursement:(id)arg0 ;
-(void)authorizationDidAuthorizePayment:(id)arg0 ;
-(void)authorizationDidAuthorizePeerPaymentQuote:(id)arg0 ;
-(void)authorizationDidAuthorizePurchase:(id)arg0 ;
-(void)authorizationDidChangeCouponCode:(id)arg0 ;
-(void)authorizationDidFinishWithError:(id)arg0 ;
-(void)authorizationDidPresent;
-(void)authorizationDidRequestMerchantSession;
-(void)authorizationDidSelectPaymentMethod:(id)arg0 ;
-(void)authorizationDidSelectShippingAddress:(id)arg0 ;
-(void)authorizationDidSelectShippingMethod:(id)arg0 ;
-(void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg0 ;
-(void)authorizationWillStart;
-(void)dealloc;
-(void)didEncounterAuthorizationEvent:(NSUInteger)arg0 ;
-(void)dismissSecondaryViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissWithReason:(NSUInteger)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)invalidate;
-(void)notifyOnDismissal:(id)arg0 ;
-(void)openConnection:(id)arg0 ;
-(void)paymentAuthorizationOnboardingDidFinishWithError:(id)arg0 ;
-(void)paymentAuthorizationProvisioningDidFinishWithPass:(id)arg0 ;
-(void)peerPaymentIdentityVerificationDidFinishWithAccount:(id)arg0 ;
-(void)presentPaymentProvisioningDismissingAfterwards:(BOOL)arg0 ;
-(void)presentSecondaryViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)start;
-(void)willAppear;
-(void)willDisappear;


@end


#endif