// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTAUTHORIZATIONREMOTEALERTVIEWCONTROLLER_H
#define PKPAYMENTAUTHORIZATIONREMOTEALERTVIEWCONTROLLER_H

@class SBUIRemoteAlertServiceViewController, NSString, PKAssertion, PKPaymentProvisioningController, PKPeerPaymentAccount, NSXPCConnection, PKInAppPaymentService, PKPaymentRequest;
@protocol PKCompactNavigationContainerControllerDelegate, PKPaymentAuthorizationServiceViewControllerDelegate, PKPaymentAuthorizationHostProtocol, PKPaymentSetupDelegate, SBSHardwareButtonEventConsuming, PKPaymentSetupViewControllerDelegate, PKLoadingViewControllerDelegate, PKPaymentAuthorizationServiceProtocol, BSInvalidatable;


#import "PKPaymentAuthorizationServiceCompactNavigationContainerController.h"
#import "PKPaymentAuthorizationServiceNavigationController.h"
#import "PKPaymentSetupNavigationController.h"
#import "PKPaymentAuthorizationRemoteAlertViewControllerExportedObject.h"

@interface PKPaymentAuthorizationRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKCompactNavigationContainerControllerDelegate, PKPaymentAuthorizationServiceViewControllerDelegate, PKPaymentAuthorizationHostProtocol, PKPaymentSetupDelegate, SBSHardwareButtonEventConsuming, PKPaymentSetupViewControllerDelegate, PKLoadingViewControllerDelegate>

 {
    BOOL _didDismiss;
    BOOL _didSendAuthorizationDidPresent;
    BOOL _didSendAuthorizationDidFinish;
    NSInteger _forcedInterfaceOrientation;
    BOOL _preventRotation;
    NSString *_hostApplicationIdentifier;
    int _statusBarVisibility;
    PKAssertion *_notificationSuppressionAssertion;
    NSString *_hostBundleIdentifier;
    NSString *_hostTeamID;
    NSString *_hostLocalizedAppName;
    BOOL _paymentAuthorizationPresented;
    id<PKPaymentAuthorizationServiceProtocol> *_serviceDelegate;
    id *_paymentUIInterface;
    PKPaymentAuthorizationServiceCompactNavigationContainerController *_navigationContainer;
    PKPaymentAuthorizationServiceNavigationController *_navigationController;
    NSInteger _coachingState;
    PKPaymentProvisioningController *_paymentProvisioningController;
    PKPaymentSetupNavigationController *_paymentSetupNavigationController;
    BOOL _paymentSetupWasRequired;
    NSString *_applicationBindToken;
    PKPeerPaymentAccount *_peerPaymentAccount;
    BOOL _shouldAcquireLockButtonObserver;
    id<BSInvalidatable> *_lockButtonObserver;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissAfterPaymentSetup; // ivar: _dismissAfterPaymentSetup
@property (retain, nonatomic) PKPaymentAuthorizationRemoteAlertViewControllerExportedObject *exportedObject; // ivar: _exportedObject
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCConnection *hostConnection; // ivar: _hostConnection
@property (retain, nonatomic) PKInAppPaymentService *inAppPaymentService; // ivar: _inAppPaymentService
@property (readonly, nonatomic) BOOL isPerformingPaymentSetup; // ivar: _isPerformingPaymentSetup
@property (retain, nonatomic) PKPaymentRequest *paymentRequest; // ivar: _paymentRequest
@property (readonly) Class superclass;


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)_peerPaymentIdentityVerificationRequired;
-(BOOL)_shouldBlockHardwareCancels;
-(BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_configuredPaymentSetupNavigationController;
-(id)_provisioningController;
-(id)_remoteObjectProxy;
-(id)init;
-(int)_preferredStatusBarVisibility;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_bindFeatureApplication:(id)arg0 completion:(id)arg1 ;
-(void)_canPresentPaymentRequest:(id)arg0 completion:(id)arg1 ;
-(void)_dismiss;
-(void)_handlePaymentRequestPresentationResultType:(NSInteger)arg0 relevantUniqueID:(id)arg1 firstAttempt:(BOOL)arg2 ;
-(void)_initializeLockButtonObserver;
-(void)_invalidate;
-(void)_invalidateLockButtonObserver;
-(void)_presentActivatingPassAlertWithRelevantUniqueID:(id)arg0 ;
-(void)_presentAddCardAlert;
-(void)_presentAlertWithTitle:(id)arg0 message:(id)arg1 actionTitle:(id)arg2 actionHandler:(id)arg3 ;
-(void)_presentAlertWithTitle:(id)arg0 message:(id)arg1 cancelTitle:(id)arg2 actionTitle:(id)arg3 actionHandler:(id)arg4 ;
// -(void)_presentAlertWithTitle:(id)arg0 message:(id)arg1 cancelTitle:(id)arg2 actionTitle:(id)arg3 actionHandler:(id)arg4 finalError:(unk)arg5  ;
-(void)_presentEnrollAccessibilityIntentAlert;
-(void)_presentInvalidAlert;
-(void)_presentLostModeAlertWithRelevantUniqueID:(id)arg0 ;
-(void)_presentOnboardingForFeature:(NSUInteger)arg0 context:(NSInteger)arg1 ;
-(void)_presentPassNotSupportedAlertWithRelevantUniqueID:(id)arg0 ;
-(void)_presentPaymentAuthorizationWithRelevantUniqueID:(id)arg0 ;
-(void)_presentPaymentSetup;
-(void)_presentPaymentUIAuthorizationWithRelevantUniqueID:(id)arg0 framework:(id)arg1 ;
-(void)_presentPeerPaymentIdentityVerification;
-(void)_presentPeerPaymentIdentityVerificationAlert;
-(void)_presentVerifyPassAlertWithRelevantUniqueID:(id)arg0 ;
-(void)_setStatusBarHidden:(BOOL)arg0 ;
-(void)_updatePearlViews;
-(void)_updatePhysicalButtonViews;
-(void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg0 ;
-(void)authorizationDidAuthorizeContext;
-(void)authorizationDidAuthorizeDisbursement:(id)arg0 ;
-(void)authorizationDidAuthorizePayment:(id)arg0 ;
-(void)authorizationDidAuthorizePeerPaymentQuote:(id)arg0 ;
-(void)authorizationDidAuthorizePurchase:(id)arg0 ;
-(void)authorizationDidChangeCouponCode:(id)arg0 ;
-(void)authorizationDidFinishWithError:(id)arg0 ;
-(void)authorizationDidRequestMerchantSession;
-(void)authorizationDidSelectPaymentMethod:(id)arg0 ;
-(void)authorizationDidSelectShippingAddress:(id)arg0 ;
-(void)authorizationDidSelectShippingMethod:(id)arg0 ;
-(void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg0 ;
-(void)authorizationViewController:(id)arg0 didEncounterAuthorizationEvent:(NSUInteger)arg1 ;
-(void)authorizationViewControllerDidChangeCoachingState:(id)arg0 ;
-(void)authorizationViewControllerDidChangePhysicalButtonState:(id)arg0 ;
-(void)authorizationViewControllerDidRequestPaymentSetup;
-(void)authorizationWillStart;
-(void)compactNavigationContainerControllerReceivedExternalTap:(id)arg0 ;
-(void)configureWithContext:(id)arg0 completion:(id)arg1 ;
-(void)consumeDoublePressUpForButtonKind:(NSInteger)arg0 ;
-(void)consumeSinglePressUpForButtonKind:(NSInteger)arg0 ;
-(void)dealloc;
-(void)didInvalidateForRemoteAlert;
-(void)dismissWithRemoteOrigination:(BOOL)arg0 ;
-(void)handleButtonActions:(id)arg0 ;
-(void)loadingViewControllerDidCancel:(id)arg0 ;
-(void)paymentSetupDidFinish:(id)arg0 ;
-(void)sendAuthorizationDidPresentIfNecessary;
-(void)viewController:(id)arg0 canProceedWithInstallment:(BOOL)arg1 featureApplication:(id)arg2 completion:(id)arg3 ;
-(void)viewControllerDidCancelSetupFlow:(id)arg0 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif