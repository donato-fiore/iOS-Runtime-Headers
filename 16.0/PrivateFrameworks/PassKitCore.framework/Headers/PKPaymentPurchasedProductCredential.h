// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTPURCHASEDPRODUCTCREDENTIAL_H
#define PKPAYMENTPURCHASEDPRODUCTCREDENTIAL_H

@class NSArray, NSString;


#import "PKPaymentCredential.h"
#import "PKPaymentSetupProduct.h"
#import "PKServiceProviderPurchase.h"

@interface PKPaymentPurchasedProductCredential : PKPaymentCredential

@property (readonly, copy, nonatomic) NSArray *metadata;
@property (retain, nonatomic) PKPaymentSetupProduct *product; // ivar: _product
@property (copy, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (readonly, nonatomic) PKServiceProviderPurchase *purchase; // ivar: _purchase
@property (readonly, copy, nonatomic) NSString *statusDescription;
@property (readonly, copy, nonatomic) NSString *summaryMetadataDescription;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPaymentPurchasedProductCredential:(id)arg0 ;
-(NSUInteger)hash;
-(id)detailDescription;
-(id)initWithPaymentSetupProduct:(id)arg0 purchase:(id)arg1 ;
-(id)setupProductIdentifier;
-(void)setRequirementsResponse:(id)arg0 ;


@end


#endif