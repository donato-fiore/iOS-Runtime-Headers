// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKOAUTH2CREDENTIAL_H
#define HKOAUTH2CREDENTIAL_H

@class NSString, NSDate, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKOAuth2Credential : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *accessToken; // ivar: _accessToken
@property (readonly, copy, nonatomic) NSDate *expiration; // ivar: _expiration
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, copy, nonatomic) NSString *refreshToken; // ivar: _refreshToken
@property (readonly, copy, nonatomic) NSString *requestedScopeString; // ivar: _requestedScopeString
@property (readonly, copy, nonatomic) NSString *scopeString;
@property (readonly, copy, nonatomic) NSSet *scopes; // ivar: _scopes


+(BOOL)supportsSecureCoding;
+(id)expirationFromTimeInterval:(CGFloat)arg0 ;
+(id)scopeStringFromScopes:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCredential:(id)arg0 epsilonExpiration:(CGFloat)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAccessToken:(id)arg0 refreshToken:(id)arg1 expiration:(id)arg2 requestedScopeString:(id)arg3 scopeString:(id)arg4 ;
-(id)initWithAccessToken:(id)arg0 refreshToken:(id)arg1 expiration:(id)arg2 requestedScopeString:(id)arg3 scopes:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_commonInitWithAccessToken:(id)arg0 refreshToken:(id)arg1 expiration:(id)arg2 requestedScopeString:(id)arg3 scopes:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif