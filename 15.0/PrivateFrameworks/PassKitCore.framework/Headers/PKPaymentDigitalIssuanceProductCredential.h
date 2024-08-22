// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTDIGITALISSUANCEPRODUCTCREDENTIAL_H
#define PKPAYMENTDIGITALISSUANCEPRODUCTCREDENTIAL_H

@class NSArray, NSString;


#import "PKPaymentCredential.h"
#import "PKCurrencyAmount.h"
#import "PKPaymentSetupProduct.h"
#import "PKServiceProviderPurchase.h"

@interface PKPaymentDigitalIssuanceProductCredential : PKPaymentCredential

@property (copy, nonatomic) PKCurrencyAmount *balance; // ivar: _balance
@property (readonly, copy, nonatomic) NSArray *metadata;
@property (retain, nonatomic) PKPaymentSetupProduct *product; // ivar: _product
@property (copy, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (retain, nonatomic) PKServiceProviderPurchase *purchase; // ivar: _purchase


-(id)initWithPaymentSetupProduct:(id)arg0 purchase:(id)arg1 balance:(id)arg2 ;
-(void)setRequirementsResponse:(id)arg0 ;


@end


#endif