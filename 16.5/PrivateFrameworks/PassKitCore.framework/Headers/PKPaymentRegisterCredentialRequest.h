// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTREGISTERCREDENTIALREQUEST_H
#define PKPAYMENTREGISTERCREDENTIALREQUEST_H

@class NSString, NSDictionary;


#import "PKPaymentWebServiceRequest.h"
#import "PKAppletSubcredential.h"

@interface PKPaymentRegisterCredentialRequest : PKPaymentWebServiceRequest {
    NSString *_credentialIdentifier;
    NSDictionary *_metadata;
}


@property (retain, nonatomic) PKAppletSubcredential *credential; // ivar: _credential


+(id)requestMetadataFromCarKeyRegistrationMetadata:(id)arg0 withCredential:(id)arg1 ;
+(id)requestMetadataFromRegistrationMetadata:(id)arg0 withCredential:(id)arg1 ;
+(id)requestRegistrationDataFromRegistrationData:(id)arg0 ;
-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithCredential:(id)arg0 metadata:(id)arg1 ;
-(id)requestBody;
-(void)buildRequestBody:(id)arg0 ;


@end


#endif