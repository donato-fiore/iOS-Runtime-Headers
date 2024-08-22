// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CASAPPSIGNINRESPONSE_H
#define CASAPPSIGNINRESPONSE_H

@class AKAuthorization;
@protocol NSSecureCoding, ASAuthorizationCredential;


#import "CASAuthenticationResponse.h"
#import "CASPasswordCredential.h"

@interface CASAppSignInResponse : CASAuthenticationResponse <NSSecureCoding>



@property (readonly, nonatomic) AKAuthorization *appleIDAuthorization; // ivar: _appleIDAuthorization
@property (readonly, nonatomic) AKAuthorization *authorization;
@property (readonly, nonatomic) AKAuthorization *authorizaton;
@property (readonly, nonatomic) NSObject<ASAuthorizationCredential> *credential;
@property (readonly, nonatomic) CASPasswordCredential *passwordCredential; // ivar: _passwordCredential


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAppleIDAuthorization:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPasswordCredential:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif