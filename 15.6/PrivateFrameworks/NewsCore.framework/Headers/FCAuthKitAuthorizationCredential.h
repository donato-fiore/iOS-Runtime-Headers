// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCAUTHKITAUTHORIZATIONCREDENTIAL_H
#define FCAUTHKITAUTHORIZATIONCREDENTIAL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCAuthKitAuthorizationCredential : NSObject

@property (readonly, copy, nonatomic) NSString *authorizationCode; // ivar: _authorizationCode
@property (readonly, copy, nonatomic) NSString *email; // ivar: _email
@property (readonly, copy, nonatomic) NSString *familyName; // ivar: _familyName
@property (readonly, copy, nonatomic) NSString *givenName; // ivar: _givenName
@property (readonly, copy, nonatomic) NSString *identityToken; // ivar: _identityToken
@property (readonly, copy, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier


-(id)initWithAuthorizationCode:(id)arg0 identityToken:(id)arg1 userIdentifier:(id)arg2 email:(id)arg3 familyName:(id)arg4 givenName:(id)arg5 ;


@end


#endif