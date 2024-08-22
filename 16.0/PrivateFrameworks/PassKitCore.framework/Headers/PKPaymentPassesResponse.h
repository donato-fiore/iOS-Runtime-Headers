// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTPASSESRESPONSE_H
#define PKPAYMENTPASSESRESPONSE_H

@class NSArray, NSString;


#import "PKPaymentWebServiceResponse.h"

@interface PKPaymentPassesResponse : PKPaymentWebServiceResponse

@property (copy, nonatomic) NSArray *devicePassSerialNumbers; // ivar: _devicePassSerialNumbers
@property (copy, nonatomic) NSString *lastUpdatedTag; // ivar: _lastUpdatedTag
@property (copy, nonatomic) NSArray *passURLs; // ivar: _passURLs


-(id)initWithData:(id)arg0 ;


@end


#endif