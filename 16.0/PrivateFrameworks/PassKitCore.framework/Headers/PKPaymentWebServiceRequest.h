// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTWEBSERVICEREQUEST_H
#define PKPAYMENTWEBSERVICEREQUEST_H

@protocol PKPaymentWebServiceTargetDeviceProtocol;


#import "PKOverlayableWebServiceRequest.h"

@interface PKPaymentWebServiceRequest : PKOverlayableWebServiceRequest

@property (retain, nonatomic) NSObject<PKPaymentWebServiceTargetDeviceProtocol> *targetDevice; // ivar: _targetDevice


+(BOOL)supportsSecureCoding;
-(id)_murlRequestWithServiceURL:(id)arg0 endpointComponents:(id)arg1 queryParameters:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)_murlRequestWithServiceURL:(id)arg0 version:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4 ;
-(id)_murlRequestWithURL:(id)arg0 ;
-(void)_signRequest:(id)arg0 webService:(id)arg1 completion:(id)arg2 ;
-(void)_signRequestData:(id)arg0 forRequest:(id)arg1 webService:(id)arg2 completion:(id)arg3 ;


@end


#endif