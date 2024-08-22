// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKPAYMENTAUTHORIZATIONCONTROLLERDELEGATE_H
#define WKPAYMENTAUTHORIZATIONCONTROLLERDELEGATE_H

@class NSString;
@protocol PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate;


#import "WKPaymentAuthorizationDelegate.h"

@interface WKPaymentAuthorizationControllerDelegate : WKPaymentAuthorizationDelegate <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithRequest:(id)arg0 presenter:(*void)arg1 ;
-(void)_getPaymentServicesMerchantURL:(id)arg0 ;
-(void)paymentAuthorizationController:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationController:(id)arg0 didChangeCouponCode:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationController:(id)arg0 didRequestMerchantSession:(id)arg1 ;
-(void)paymentAuthorizationController:(id)arg0 didSelectPaymentMethod:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationController:(id)arg0 didSelectShippingContact:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationController:(id)arg0 didSelectShippingMethod:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationController:(id)arg0 willFinishWithError:(id)arg1 ;
-(void)paymentAuthorizationControllerDidFinish:(id)arg0 ;


@end


#endif