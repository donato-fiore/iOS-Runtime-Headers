// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTWEBSERVICEAPPLEPAYTRUSTREQUEST_H
#define PKACCOUNTWEBSERVICEAPPLEPAYTRUSTREQUEST_H

@protocol PKAccountWebServiceApplePayTrustProtocol;


#import "PKAccountWebServiceRequest.h"
#import "PKApplePayTrustSignature.h"

@interface PKAccountWebServiceApplePayTrustRequest : PKAccountWebServiceRequest {
    id<PKAccountWebServiceApplePayTrustProtocol> *_protocol;
}


@property (retain, nonatomic) PKApplePayTrustSignature *signature; // ivar: _signature


-(Class)responseClass;
-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;
-(id)endpointComponents;
-(id)initWithApplePayTrustProtocol:(id)arg0 ;


@end


#endif