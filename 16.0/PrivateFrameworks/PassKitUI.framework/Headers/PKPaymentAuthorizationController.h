// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTAUTHORIZATIONCONTROLLER_H
#define PKPAYMENTAUTHORIZATIONCONTROLLER_H

@class NSString, PKPaymentAuthorizationCoordinator;
@protocol PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate;

#import <Foundation/Foundation.h>

#import "PKPaymentAuthorizationController.h"

@interface PKPaymentAuthorizationController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate>

 {
    PKPaymentAuthorizationController *_retainSelf;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPaymentAuthorizationCoordinator *paymentCoordinator; // ivar: _paymentCoordinator
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationControllerPrivateDelegate> *privateDelegate; // ivar: _privateDelegate
@property (readonly) Class superclass;


+(BOOL)canMakePayments;
+(BOOL)canMakePaymentsUsingNetworks:(id)arg0 ;
+(BOOL)canMakePaymentsUsingNetworks:(id)arg0 capabilities:(NSUInteger)arg1 ;
+(BOOL)isPlatformSupported;
+(void)paymentServicesMerchantURLForAPIType:(NSInteger)arg0 completion:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPaymentRequest:(id)arg0 ;
-(id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)arg0 ;
-(void)dealloc;
-(void)dismissWithCompletion:(id)arg0 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizeContextWithHandler:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizeDisbursementVoucher:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizePeerPaymentQuote:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizePurchase:(id)arg1 completion:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didChangeCouponCode:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didEncounterAuthorizationEvent:(NSUInteger)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didRequestMerchantSessionUpdate:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didSelectPaymentMethod:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didSelectShippingAddress:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didSelectShippingMethod:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 willFinishWithError:(id)arg1 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg0 ;
-(void)paymentAuthorizationCoordinatorWillAuthorizePayment:(id)arg0 ;
-(void)presentWithCompletion:(id)arg0 ;


@end


#endif