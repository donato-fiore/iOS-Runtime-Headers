// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSERVICEPROVIDERPERFORMACTIONRESPONSE_H
#define PKPAYMENTSERVICEPROVIDERPERFORMACTIONRESPONSE_H



#import "PKPaymentWebServiceResponse.h"
#import "PKServiceProviderPurchase.h"

@interface PKPaymentServiceProviderPerformActionResponse : PKPaymentWebServiceResponse

@property (readonly, retain, nonatomic) PKServiceProviderPurchase *updatedPurchase; // ivar: _updatedPurchase


-(id)initWithData:(id)arg0 ;


@end


#endif