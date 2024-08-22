// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTAUTHORIZATIONCLIENTCALLBACKSTATEPARAM_H
#define PKPAYMENTAUTHORIZATIONCLIENTCALLBACKSTATEPARAM_H

@class NSString, CNContact;


#import "PKPaymentAuthorizationStateParam.h"
#import "PKAccountServicePaymentMethod.h"
#import "PKApplePayTrustSignature.h"
#import "PKAuthorizedPeerPaymentQuote.h"
#import "PKDisbursementVoucher.h"
#import "PKPayment.h"
#import "PKPaymentMethod.h"
#import "PKServiceProviderPurchase.h"
#import "PKShippingMethod.h"

@interface PKPaymentAuthorizationClientCallbackStateParam : PKPaymentAuthorizationStateParam

@property (readonly, nonatomic) PKAccountServicePaymentMethod *accountServicePaymentMethod;
@property (readonly, nonatomic) PKApplePayTrustSignature *applePayTrustSignature;
@property (readonly, nonatomic) PKAuthorizedPeerPaymentQuote *authorizedPeerPaymentQuote;
@property (readonly, nonatomic) NSString *couponCode;
@property (readonly, nonatomic) PKDisbursementVoucher *disbursementVoucher;
@property (nonatomic) NSInteger kind; // ivar: _kind
@property (retain, nonatomic) id *object; // ivar: _object
@property (readonly, nonatomic) PKPayment *payment;
@property (readonly, nonatomic) PKPaymentMethod *paymentMethod;
@property (readonly, nonatomic) PKServiceProviderPurchase *purchase;
@property (readonly, nonatomic) CNContact *shippingContact;
@property (readonly, nonatomic) PKShippingMethod *shippingMethod;


+(id)paramWithCallbackKind:(NSInteger)arg0 object:(id)arg1 ;
-(id)description;


@end


#endif