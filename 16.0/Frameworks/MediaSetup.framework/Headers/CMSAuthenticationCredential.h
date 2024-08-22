// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMSAUTHENTICATIONCREDENTIAL_H
#define CMSAUTHENTICATIONCREDENTIAL_H

@class NSString, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMSAuthenticationCredential : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_authHeader;
}


@property (readonly) NSString *authHeader;
@property (readonly) NSString *authToken; // ivar: _authToken
@property (readonly) NSDate *authTokenExpiration; // ivar: _authTokenExpiration
@property (readonly) NSString *refreshToken; // ivar: _refreshToken
@property (readonly) NSString *scope; // ivar: _scope
@property (readonly) NSString *tokenType; // ivar: _tokenType


+(BOOL)supportsSecureCoding;
+(id)authCredentialFromMSAuthData:(id)arg0 ;
+(id)authCredentialWithToken:(id)arg0 tokenType:(id)arg1 expirationDate:(id)arg2 scope:(id)arg3 refreshToken:(id)arg4 ;
-(id)basicPropertiesDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithToken:(id)arg0 tokenType:(id)arg1 expirationDate:(id)arg2 scope:(id)arg3 refreshToken:(id)arg4 ;
-(id)jsonDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif