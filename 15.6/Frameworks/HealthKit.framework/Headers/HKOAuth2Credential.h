// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKOAUTH2CREDENTIAL_H
#define HKOAUTH2CREDENTIAL_H

@class NSString, NSDate, NSUUID, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKOAuth2Credential : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_accessToken;
    os_unfair_lock_s _accessTokenLock;
}


@property (readonly, copy, nonatomic) NSDate *expiration; // ivar: _expiration
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *requestedScopeString; // ivar: _requestedScopeString
@property (readonly, copy, nonatomic) NSArray *scope; // ivar: _scope
@property (readonly, copy, nonatomic) NSString *scopeString;


+(BOOL)supportsSecureCoding;
+(id)_scopeStringFromScope:(id)arg0 ;
+(id)expirationFromTimeInterval:(CGFloat)arg0 ;
+(id)scopeFromScopeString:(id)arg0 ;
-(BOOL)deleteTokensWithError:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCredential:(id)arg0 epsilonExpiration:(CGFloat)arg1 ;
-(BOOL)storeAccessToken:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeRefreshToken:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)hash;
-(id)_accessTokenIdentifier;
-(id)_commonInitWithIdentifier:(id)arg0 requestedScopeString:(id)arg1 expiration:(id)arg2 scope:(id)arg3 ;
-(id)_refreshTokenIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fetchAccessTokenWithError:(*id)arg0 ;
-(id)fetchRefreshTokenWithError:(*id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 requestedScopeString:(id)arg1 expiration:(id)arg2 scope:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 requestedScopeString:(id)arg1 expiration:(id)arg2 scopeString:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif