// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSERVICEPROVIDERPERFORMPAYMENTRESPONSE_H
#define PKPAYMENTSERVICEPROVIDERPERFORMPAYMENTRESPONSE_H



#import "PKPaymentWebServiceResponse.h"
#import "PKServiceProviderPurchase.h"

@interface PKPaymentServiceProviderPerformPaymentResponse : PKPaymentWebServiceResponse

@property (readonly, retain, nonatomic) PKServiceProviderPurchase *purchase; // ivar: _purchase


-(id)initWithData:(id)arg0 ;


@end


#endif