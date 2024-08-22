// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9PAYMENTUI35PAYMENTAUTHORIZATIONSERVICEDELEGATE_H
#define _TTC9PAYMENTUI35PAYMENTAUTHORIZATIONSERVICEDELEGATE_H

@protocol PKPaymentAuthorizationServiceProtocol;

#import <Foundation/Foundation.h>


@interface _TtC9PaymentUI35PaymentAuthorizationServiceDelegate : NSObject <PKPaymentAuthorizationServiceProtocol>

 {
    ? stateMachine;
    ? context;
}




-(id)init;
-(void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizeDisbursementWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizePurchaseCompleteWithStatus:(NSInteger)arg0 ;
-(void)authorizationDidChangeCouponCodeCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg0 signatureRequest:(id)arg1 ;
-(void)handleDismissWithCompletion:(id)arg0 ;
-(void)handleHostApplicationDidBecomeActive;
-(void)handleHostApplicationDidCancel;
-(void)handleHostApplicationWillResignActive:(BOOL)arg0 ;


@end


#endif