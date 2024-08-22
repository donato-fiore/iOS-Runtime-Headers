// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKEXTENSIONVENDORCONTEXT_H
#define PKEXTENSIONVENDORCONTEXT_H

@class NSString;
@protocol PKExtensionVendorContextProtocol;


#import "PKExtensionBaseContext.h"
#import "PKEntitlementWhitelist.h"

@interface PKExtensionVendorContext : PKExtensionBaseContext <PKExtensionVendorContextProtocol>

 {
    PKEntitlementWhitelist *_whitelist;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)entitlementWhitelist;
-(id)hostContext;
-(id)hostContextWithErrorHandler:(id)arg0 ;
-(void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizeDisbursementWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizePaymentCompleteWithStatus:(NSInteger)arg0 ;
-(void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizePurchaseCompleteWithStatus:(NSInteger)arg0 ;
-(void)authorizationDidChangeCouponCodeCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg0 ;
-(void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidSelectShippingAddressCompleteWithStatus:(NSInteger)arg0 shippingMethods:(id)arg1 paymentSummaryItems:(id)arg2 ;
-(void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidSelectShippingMethodCompleteWithStatus:(NSInteger)arg0 paymentSummaryItems:(id)arg1 ;
-(void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg0 signatureRequest:(id)arg1 ;
-(void)handleDismissWithCompletion:(id)arg0 ;
-(void)handleHostApplicationDidBecomeActive;
-(void)handleHostApplicationDidCancel;
-(void)handleHostApplicationWillResignActive:(BOOL)arg0 ;
-(void)prepareWithPaymentRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif