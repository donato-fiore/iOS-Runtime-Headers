// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTCONTACTLESSPRODUCTCREDENTIAL_H
#define PKPAYMENTCONTACTLESSPRODUCTCREDENTIAL_H

@class NSString, NSDictionary;


#import "PKPaymentCredential.h"
#import "PKPaymentSetupProduct.h"

@interface PKPaymentContactlessProductCredential : PKPaymentCredential

@property (copy, nonatomic) NSString *cardSessionToken; // ivar: _cardSessionToken
@property (retain, nonatomic) PKPaymentSetupProduct *product; // ivar: _product
@property (copy, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (copy, nonatomic) NSDictionary *readerModeMetadata; // ivar: _readerModeMetadata


-(NSInteger)_cardTypeFromSetupProductType:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithPaymentSetupProduct:(id)arg0 ;
-(id)initWithPaymentSetupProduct:(id)arg0 cardSessionToken:(id)arg1 ;
-(void)setRequirementsResponse:(id)arg0 ;


@end


#endif