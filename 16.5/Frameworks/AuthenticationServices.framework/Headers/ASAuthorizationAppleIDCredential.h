// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASAUTHORIZATIONAPPLEIDCREDENTIAL_H
#define ASAUTHORIZATIONAPPLEIDCREDENTIAL_H

@class NSString, NSData, NSPersonNameComponents, NSArray;
@protocol ASAuthorizationCredential;

#import <Foundation/Foundation.h>


@interface ASAuthorizationAppleIDCredential : NSObject <ASAuthorizationCredential>

 {
    NSString *_state;
    NSData *_authorizationCode;
    NSData *_identityToken;
    NSString *_email;
    NSPersonNameComponents *_fullName;
    NSData *_accessToken;
    NSData *_refreshToken;
    NSInteger _realUserStatus;
    os_unfair_lock_s _internalLock;
}


@property (copy, nonatomic) NSData *accessToken;
@property (copy, nonatomic) NSData *authorizationCode;
@property (readonly, copy, nonatomic) NSArray *authorizedScopes; // ivar: _authorizedScopes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSPersonNameComponents *fullName;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *identityToken;
@property (nonatomic) NSInteger realUserStatus;
@property (copy, nonatomic) NSData *refreshToken;
@property (copy, nonatomic) NSString *state;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *user; // ivar: _user


+(BOOL)supportsSecureCoding;
+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUser:(id)arg0 authorizedScopes:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif