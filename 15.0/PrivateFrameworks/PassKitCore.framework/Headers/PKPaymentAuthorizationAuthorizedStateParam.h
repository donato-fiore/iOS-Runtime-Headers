// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTAUTHORIZATIONAUTHORIZEDSTATEPARAM_H
#define PKPAYMENTAUTHORIZATIONAUTHORIZEDSTATEPARAM_H

@class NSString;


#import "PKPaymentAuthorizationStateParam.h"
#import "PKApplePayTrustSignature.h"
#import "PKAuthorizedPeerPaymentQuote.h"
#import "PKDisbursementVoucher.h"
#import "PKPayment.h"
#import "PKPaymentToken.h"
#import "PKServiceProviderPurchase.h"

@interface PKPaymentAuthorizationAuthorizedStateParam : PKPaymentAuthorizationStateParam

@property (readonly, nonatomic) PKApplePayTrustSignature *applePayTrustSignature; // ivar: _applePayTrustSignature
@property (readonly, nonatomic) PKAuthorizedPeerPaymentQuote *authorizedPeerPaymentQuote; // ivar: _authorizedPeerPaymentQuote
@property (readonly, nonatomic) PKDisbursementVoucher *disbursementVoucher; // ivar: _disbursementVoucher
@property (readonly, copy, nonatomic) NSString *installmentAuthorizationToken; // ivar: _installmentAuthorizationToken
@property (retain, nonatomic) PKPayment *payment; // ivar: _payment
@property (retain, nonatomic) PKPaymentToken *paymentToken; // ivar: _paymentToken
@property (retain, nonatomic) PKServiceProviderPurchase *purchase; // ivar: _purchase
@property (copy, nonatomic) NSString *purchaseTransactionIdentifier; // ivar: _purchaseTransactionIdentifier


+(id)paramWithApplePayTrustSignature:(id)arg0 ;
+(id)paramWithAuthorizedPeerPaymentQuote:(id)arg0 ;
+(id)paramWithDisbursementVoucher:(id)arg0 ;
+(id)paramWithInstallmentAuthorizationToken:(id)arg0 ;
+(id)paramWithPayment:(id)arg0 ;
+(id)paramWithPaymentToken:(id)arg0 ;
+(id)paramWithPurchase:(id)arg0 purchaseTransactionIdentifier:(id)arg1 ;
-(id)description;


@end


#endif