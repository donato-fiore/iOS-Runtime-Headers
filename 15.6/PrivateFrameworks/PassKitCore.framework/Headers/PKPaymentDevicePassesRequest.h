// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTDEVICEPASSESREQUEST_H
#define PKPAYMENTDEVICEPASSESREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"

@interface PKPaymentDevicePassesRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *updatedSince; // ivar: _updatedSince


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;


@end


#endif