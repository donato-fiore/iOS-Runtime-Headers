// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTAUTHORIZATIONSERVICEPROXY_H
#define PKPAYMENTAUTHORIZATIONSERVICEPROXY_H

@class NSXPCConnection, PKPaymentRequest, PKEntitlementWhitelist, NSString;
@protocol PKPaymentAuthorizationServiceProtocol;

#import <Foundation/Foundation.h>


@interface PKPaymentAuthorizationServiceProxy : NSObject <PKPaymentAuthorizationServiceProtocol>

 {
    BOOL _dismissed;
    NSXPCConnection *_connection;
    PKPaymentRequest *_paymentRequest;
    PKEntitlementWhitelist *_entitlementWhitelist;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationServiceProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKEntitlementWhitelist *entitlementWhitelist;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_sanitizeMerchantSessionUpdate:(id)arg0 ;
-(id)initWithConnection:(id)arg0 paymentRequest:(id)arg1 ;
-(void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizeDisbursementWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizePurchaseCompleteWithStatus:(NSInteger)arg0 ;
-(void)authorizationDidChangeCouponCodeCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg0 ;
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