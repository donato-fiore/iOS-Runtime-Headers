// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTSERVICEREGISTRATIONRESPONSE_H
#define PKPEERPAYMENTSERVICEREGISTRATIONRESPONSE_H

@class NSString, NSURL;


#import "PKPeerPaymentWebServiceResponse.h"

@interface PKPeerPaymentServiceRegistrationResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, copy, nonatomic) NSURL *peerPaymentServiceURL; // ivar: _peerPaymentServiceURL
@property (readonly, copy, nonatomic) NSString *peerPaymentServicesPushTopic; // ivar: _peerPaymentServicesPushTopic


-(id)initWithData:(id)arg0 ;


@end


#endif