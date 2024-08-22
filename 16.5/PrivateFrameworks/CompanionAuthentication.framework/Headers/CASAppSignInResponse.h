// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CASAPPSIGNINRESPONSE_H
#define CASAPPSIGNINRESPONSE_H

@class AKAuthorization, ASCPlatformPublicKeyCredentialAssertion, ASCPlatformPublicKeyCredentialRegistration, NSURL;
@protocol NSSecureCoding, ASAuthorizationCredential;


#import "CASAuthenticationResponse.h"
#import "CASPasswordCredential.h"

@interface CASAppSignInResponse : CASAuthenticationResponse <NSSecureCoding>



@property (readonly, nonatomic) AKAuthorization *appleIDAuthorization; // ivar: _appleIDAuthorization
@property (readonly, nonatomic) AKAuthorization *authorization;
@property (readonly, nonatomic) AKAuthorization *authorizaton;
@property (readonly, nonatomic) NSObject<ASAuthorizationCredential> *credential;
@property (readonly, nonatomic) CASPasswordCredential *passwordCredential; // ivar: _passwordCredential
@property (readonly, nonatomic) ASCPlatformPublicKeyCredentialAssertion *platformKeyCredentialAssertion; // ivar: _platformKeyCredentialAssertion
@property (readonly, nonatomic) ASCPlatformPublicKeyCredentialRegistration *platformKeyCredentialRegistration; // ivar: _platformKeyCredentialRegistration
@property (readonly, nonatomic) NSURL *webCallbackURL; // ivar: _webCallbackURL


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAppleIDAuthorization:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPasswordCredential:(id)arg0 ;
-(id)initWithPlatformKeyCredentialAssertion:(id)arg0 ;
-(id)initWithPlatformKeyCredentialRegistration:(id)arg0 ;
-(id)initWithWebCallbackURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif