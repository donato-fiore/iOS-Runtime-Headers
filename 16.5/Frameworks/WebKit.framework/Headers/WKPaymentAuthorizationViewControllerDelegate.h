// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKPAYMENTAUTHORIZATIONVIEWCONTROLLERDELEGATE_H
#define WKPAYMENTAUTHORIZATIONVIEWCONTROLLERDELEGATE_H

@class NSString;
@protocol PKPaymentAuthorizationViewControllerDelegate, PKPaymentAuthorizationViewControllerPrivateDelegate;


#import "WKPaymentAuthorizationDelegate.h"

@interface WKPaymentAuthorizationViewControllerDelegate : WKPaymentAuthorizationDelegate <PKPaymentAuthorizationViewControllerDelegate, PKPaymentAuthorizationViewControllerPrivateDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithRequest:(id)arg0 presenter:(*void)arg1 ;
-(void)_getPaymentServicesMerchantURL:(id)arg0 ;
-(void)paymentAuthorizationViewController:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationViewController:(id)arg0 didChangeCouponCode:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationViewController:(id)arg0 didRequestMerchantSession:(id)arg1 ;
-(void)paymentAuthorizationViewController:(id)arg0 didSelectPaymentMethod:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationViewController:(id)arg0 didSelectShippingContact:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationViewController:(id)arg0 didSelectShippingMethod:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationViewController:(id)arg0 willFinishWithError:(id)arg1 ;
-(void)paymentAuthorizationViewControllerDidFinish:(id)arg0 ;


@end


#endif