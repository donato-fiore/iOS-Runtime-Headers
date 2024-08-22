// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCONTINUITYPAYMENTREMOTEALERTVIEWCONTROLLER_H
#define PKCONTINUITYPAYMENTREMOTEALERTVIEWCONTROLLER_H

@class SBUIRemoteAlertServiceViewController, UINavigationController, PKRemotePaymentRequest, PKContinuityPaymentService, NSString;
@protocol PKPaymentAuthorizationHostProtocol, PKContinuityPaymentServiceDelegate, PKPaymentAuthorizationHostProtocol;


#import "PKContinuityPaymentViewController.h"

@interface PKContinuityPaymentRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentAuthorizationHostProtocol, PKContinuityPaymentServiceDelegate, PKPaymentAuthorizationHostProtocol>

 {
    PKContinuityPaymentViewController *_continuityViewController;
    UINavigationController *_navigationController;
    PKRemotePaymentRequest *_remoteRequest;
    PKContinuityPaymentService *_continuityService;
    BOOL _hasAuthorizedPayment;
    BOOL _hasSentCancelPaymentRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_isSecureForRemoteViewService;
-(BOOL)_canShowWhileLocked;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAutorotate;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_cancelPayment;
-(void)_dismiss;
-(void)_invalidate;
-(void)_presentEnrollAccessibilityIntentAlert;
-(void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg0 ;
-(void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg0 ;
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
-(void)authorizationWillStart;
-(void)configureWithContext:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)didInvalidateForRemoteAlert;
-(void)didReceiveCancellationForRemotePaymentRequest:(id)arg0 ;
-(void)didReceivePaymentClientUpdate:(id)arg0 forRemotePaymentRequest:(id)arg1 ;
-(void)didReceivePaymentResult:(id)arg0 forRemotePaymentRequest:(id)arg1 ;
-(void)handleButtonActions:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif