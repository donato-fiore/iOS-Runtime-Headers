// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTREVOKESHAREDCREDENTIALREQUEST_H
#define PKPAYMENTREVOKESHAREDCREDENTIALREQUEST_H

@class NSDictionary;


#import "PKPaymentWebServiceRequest.h"
#import "PKAppletSubcredential.h"

@interface PKPaymentRevokeSharedCredentialRequest : PKPaymentWebServiceRequest {
    NSDictionary *_revocationAttestation;
    PKAppletSubcredential *_credential;
}




-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithCredential:(id)arg0 revocationAttestation:(id)arg1 ;
-(id)requestBody;


@end


#endif