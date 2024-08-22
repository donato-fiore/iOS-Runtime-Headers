// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTAUTHORIZATIONVIEWCONTROLLER_H
#define PKPAYMENTAUTHORIZATIONVIEWCONTROLLER_H

@class UIViewController, NSString, PKPaymentAuthorizationCoordinator;
@protocol PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAuthorizationViewControllerDelegate, PKPaymentAuthorizationViewControllerPrivateDelegate;



@interface PKPaymentAuthorizationViewController : UIViewController <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPaymentAuthorizationCoordinator *paymentCoordinator; // ivar: _paymentCoordinator
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationViewControllerPrivateDelegate> *privateDelegate; // ivar: _privateDelegate
@property (readonly) Class superclass;
@property (nonatomic) BOOL viewHasAppeared; // ivar: _viewHasAppeared


+(BOOL)canMakePayments;
+(BOOL)canMakePaymentsUsingNetworks:(id)arg0 ;
+(BOOL)canMakePaymentsUsingNetworks:(id)arg0 capabilities:(NSUInteger)arg1 ;
+(BOOL)isPlatformSupported;
+(void)paymentServicesMerchantURL:(id)arg0 ;
+(void)paymentServicesMerchantURLForAPIType:(NSInteger)arg0 completion:(id)arg1 ;
-(BOOL)_requiresPresentationContext;
-(NSInteger)modalPresentationStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPaymentRequest:(id)arg0 ;
-(id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)arg0 ;
-(void)_presentInAppPaymentInterface;
-(void)_presentInAppPaymentInterfaceWithWindow:(id)arg0 ;
-(void)dealloc;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didChangeCouponCode:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didEncounterAuthorizationEvent:(NSUInteger)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didRequestMerchantSessionUpdate:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didSelectPaymentMethod:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didSelectShippingAddress:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didSelectShippingMethod:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 willFinishWithError:(id)arg1 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg0 ;
-(void)paymentAuthorizationCoordinatorWillAuthorizePayment:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif