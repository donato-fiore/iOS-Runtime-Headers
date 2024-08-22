// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTREGISTERTRACKCREDENTIALREQUEST_H
#define PKPAYMENTREGISTERTRACKCREDENTIALREQUEST_H

@class NSDictionary;


#import "PKPaymentRegisterCredentialRequest.h"

@interface PKPaymentRegisterTrackCredentialRequest : PKPaymentRegisterCredentialRequest {
    NSDictionary *_registrationData;
}




-(id)initWithCredential:(id)arg0 registrationData:(id)arg1 metadata:(id)arg2 ;
-(void)buildRequestBody:(id)arg0 ;


@end


#endif