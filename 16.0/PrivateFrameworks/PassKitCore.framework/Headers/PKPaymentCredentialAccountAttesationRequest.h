// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTCREDENTIALACCOUNTATTESATIONREQUEST_H
#define PKPAYMENTCREDENTIALACCOUNTATTESATIONREQUEST_H

@class NSDictionary;


#import "PKPaymentWebServiceRequest.h"

@interface PKPaymentCredentialAccountAttesationRequest : PKPaymentWebServiceRequest {
    NSDictionary *_requestBody;
}




-(id)initWithCredential:(id)arg0 attesationRequest:(id)arg1 ;
-(id)requestBodyWithAttesationRequest:(id)arg0 ;
-(void)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 webService:(id)arg3 completion:(id)arg4 ;


@end


#endif