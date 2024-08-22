// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSERVICEPROVIDERPURCHASESRESPONSE_H
#define PKPAYMENTSERVICEPROVIDERPURCHASESRESPONSE_H

@class NSArray;


#import "PKPaymentWebServiceResponse.h"

@interface PKPaymentServiceProviderPurchasesResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *purchases; // ivar: _purchases


-(id)initWithData:(id)arg0 ;


@end


#endif