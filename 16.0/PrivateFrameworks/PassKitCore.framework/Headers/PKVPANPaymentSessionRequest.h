// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKVPANPAYMENTSESSIONREQUEST_H
#define PKVPANPAYMENTSESSIONREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"

@interface PKVPANPaymentSessionRequest : PKPaymentWebServiceRequest

@property (readonly, copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;
-(id)initWithDeviceIdentifier:(id)arg0 ;


@end


#endif