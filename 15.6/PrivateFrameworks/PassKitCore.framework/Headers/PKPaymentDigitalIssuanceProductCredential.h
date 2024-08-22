// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTDIGITALISSUANCEPRODUCTCREDENTIAL_H
#define PKPAYMENTDIGITALISSUANCEPRODUCTCREDENTIAL_H

@class NSString, NSArray;


#import "PKPaymentCredential.h"
#import "PKCurrencyAmount.h"
#import "PKPaymentSetupProduct.h"
#import "PKServiceProviderPurchase.h"
#import "PKDigitalIssuanceServiceProviderItem.h"
#import "PKDigitalIssuanceServiceProviderProduct.h"

@interface PKPaymentDigitalIssuanceProductCredential : PKPaymentCredential

@property (copy, nonatomic) PKCurrencyAmount *balance; // ivar: _balance
@property (retain, nonatomic) NSString *currency; // ivar: _currency
@property (readonly, copy, nonatomic) NSArray *metadata;
@property (copy, nonatomic) PKCurrencyAmount *price; // ivar: _price
@property (retain, nonatomic) PKPaymentSetupProduct *product; // ivar: _product
@property (copy, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (retain, nonatomic) PKServiceProviderPurchase *purchase; // ivar: _purchase
@property (retain, nonatomic) PKDigitalIssuanceServiceProviderItem *serviceProviderItem; // ivar: _serviceProviderItem
@property (retain, nonatomic) PKDigitalIssuanceServiceProviderProduct *serviceProviderProduct; // ivar: _serviceProviderProduct


-(id)initWithPaymentSetupProduct:(id)arg0 purchase:(id)arg1 balance:(id)arg2 ;
-(id)initWithPaymentSetupProduct:(id)arg0 purchase:(id)arg1 balance:(id)arg2 serviceProviderProduct:(id)arg3 item:(id)arg4 currency:(id)arg5 ;
-(id)initWithPaymentSetupProduct:(id)arg0 purchase:(id)arg1 serviceProviderProduct:(id)arg2 item:(id)arg3 currency:(id)arg4 ;
-(void)setRequirementsResponse:(id)arg0 ;


@end


#endif