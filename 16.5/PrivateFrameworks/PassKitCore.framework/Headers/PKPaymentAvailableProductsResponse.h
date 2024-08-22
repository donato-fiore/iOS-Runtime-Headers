// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTAVAILABLEPRODUCTSRESPONSE_H
#define PKPAYMENTAVAILABLEPRODUCTSRESPONSE_H

@class NSArray, NSDate;


#import "PKPaymentWebServiceResponse.h"

@interface PKPaymentAvailableProductsResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSArray *availableProducts; // ivar: _availableProducts
@property (readonly, nonatomic) NSDate *expiry;


-(BOOL)supportsSecureCoding;


@end


#endif