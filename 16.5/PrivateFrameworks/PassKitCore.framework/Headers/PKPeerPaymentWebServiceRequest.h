// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTWEBSERVICEREQUEST_H
#define PKPEERPAYMENTWEBSERVICEREQUEST_H

@protocol PKPeerPaymentWebServiceTargetDeviceProtocol;


#import "PKOverlayableWebServiceRequest.h"

@interface PKPeerPaymentWebServiceRequest : PKOverlayableWebServiceRequest

@property (retain, nonatomic) NSObject<PKPeerPaymentWebServiceTargetDeviceProtocol> *targetDevice; // ivar: _targetDevice


-(id)_murlRequestWithServiceURL:(id)arg0 endpointComponents:(id)arg1 queryParameters:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)_murlRequestWithURL:(id)arg0 ;
-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 deviceIdentifier:(id)arg2 ;
-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 deviceIdentifier:(id)arg2 deviceScore:(id)arg3 odiAssessment:(id)arg4 deviceMetadata:(id)arg5 ;


@end


#endif