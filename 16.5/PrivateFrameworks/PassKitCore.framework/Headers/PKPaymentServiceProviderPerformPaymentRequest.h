// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSERVICEPROVIDERPERFORMPAYMENTREQUEST_H
#define PKPAYMENTSERVICEPROVIDERPERFORMPAYMENTREQUEST_H

@class NSData, NSString;


#import "PKPaymentWebServiceRequest.h"
#import "PKSecureElementCertificateSet.h"
#import "PKPaymentPass.h"
#import "PKServiceProviderOrder.h"

@interface PKPaymentServiceProviderPerformPaymentRequest : PKPaymentWebServiceRequest {
    PKSecureElementCertificateSet *_certificates;
}


@property (nonatomic) NSInteger cryptogramType; // ivar: _cryptogramType
@property (copy, nonatomic) NSData *nonce; // ivar: _nonce
@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (retain, nonatomic) PKServiceProviderOrder *serviceProviderOrder; // ivar: _serviceProviderOrder
@property (copy, nonatomic) NSString *targetDeviceSerialNumber; // ivar: _targetDeviceSerialNumber


-(void)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 webService:(id)arg3 completion:(id)arg4 ;


@end


#endif