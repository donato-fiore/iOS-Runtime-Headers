// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTREGISTERPRETRACKCREDENTIALREQUEST_H
#define PKPAYMENTREGISTERPRETRACKCREDENTIALREQUEST_H

@class NSDictionary;


#import "PKPaymentRegisterCredentialRequest.h"

@interface PKPaymentRegisterPreTrackCredentialRequest : PKPaymentRegisterCredentialRequest {
    NSDictionary *_encryptedVehicleDataRequest;
}




-(id)initWithCredential:(id)arg0 encryptedVehicleDataRequest:(id)arg1 metadata:(id)arg2 ;
-(id)initWithCredential:(id)arg0 metadata:(id)arg1 ;
-(void)buildRequestBody:(id)arg0 ;


@end


#endif