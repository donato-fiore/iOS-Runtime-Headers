// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAPPLYWEBSERVICEAUGMENTEDPRODUCTRESPONSE_H
#define PKAPPLYWEBSERVICEAUGMENTEDPRODUCTRESPONSE_H



#import "PKApplyWebServiceResponse.h"
#import "PKPaymentSetupProduct.h"

@interface PKApplyWebServiceAugmentedProductResponse : PKApplyWebServiceResponse {
    PKPaymentSetupProduct *_product;
}


@property (readonly, copy, nonatomic) PKPaymentSetupProduct *product;


+(BOOL)supportsSecureCoding;
-(id)_generateProduct;
-(id)initWithData:(id)arg0 ;


@end


#endif