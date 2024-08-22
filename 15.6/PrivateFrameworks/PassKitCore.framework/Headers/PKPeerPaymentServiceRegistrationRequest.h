// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTSERVICEREGISTRATIONREQUEST_H
#define PKPEERPAYMENTSERVICEREGISTRATIONREQUEST_H

@class NSString;


#import "PKPeerPaymentWebServiceRequest.h"
#import "PKPeerPaymentDeviceRegistrationData.h"

@interface PKPeerPaymentServiceRegistrationRequest : PKPeerPaymentWebServiceRequest

@property (retain, nonatomic) PKPeerPaymentDeviceRegistrationData *deviceData; // ivar: _deviceData
@property (copy, nonatomic) NSString *pushToken; // ivar: _pushToken


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 deviceIdentifier:(id)arg2 deviceScore:(id)arg3 deviceMetadata:(id)arg4 ;


@end


#endif