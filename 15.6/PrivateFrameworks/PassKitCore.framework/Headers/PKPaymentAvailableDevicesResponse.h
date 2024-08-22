// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTAVAILABLEDEVICESRESPONSE_H
#define PKPAYMENTAVAILABLEDEVICESRESPONSE_H

@class NSDictionary;


#import "PKPaymentWebServiceResponse.h"

@interface PKPaymentAvailableDevicesResponse : PKPaymentWebServiceResponse

@property (copy, nonatomic) NSDictionary *devices; // ivar: _devices


-(id)initWithData:(id)arg0 ;


@end


#endif