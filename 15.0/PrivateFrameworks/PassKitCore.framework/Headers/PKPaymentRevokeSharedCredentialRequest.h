// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTREVOKESHAREDCREDENTIALREQUEST_H
#define PKPAYMENTREVOKESHAREDCREDENTIALREQUEST_H

@class NSString, NSDictionary;


#import "PKPaymentWebServiceRequest.h"

@interface PKPaymentRevokeSharedCredentialRequest : PKPaymentWebServiceRequest {
    NSString *_credentialIdentifier;
    NSDictionary *_revocationAttestation;
}




-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithCredential:(id)arg0 revocationAttestation:(id)arg1 ;
-(id)requestBody;


@end


#endif