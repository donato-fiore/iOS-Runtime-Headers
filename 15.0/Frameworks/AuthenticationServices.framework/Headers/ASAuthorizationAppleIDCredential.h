// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASAUTHORIZATIONAPPLEIDCREDENTIAL_H
#define ASAUTHORIZATIONAPPLEIDCREDENTIAL_H

@class NSData, NSArray, NSString, NSPersonNameComponents;
@protocol ASAuthorizationCredential;

#import <Foundation/Foundation.h>


@interface ASAuthorizationAppleIDCredential : NSObject <ASAuthorizationCredential>



@property (copy, nonatomic) NSData *accessToken; // ivar: _accessToken
@property (copy, nonatomic) NSData *authorizationCode; // ivar: _authorizationCode
@property (readonly, copy, nonatomic) NSArray *authorizedScopes; // ivar: _authorizedScopes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *email; // ivar: _email
@property (copy, nonatomic) NSPersonNameComponents *fullName; // ivar: _fullName
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *identityToken; // ivar: _identityToken
@property (nonatomic) NSInteger realUserStatus; // ivar: _realUserStatus
@property (copy, nonatomic) NSData *refreshToken; // ivar: _refreshToken
@property (copy, nonatomic) NSString *state; // ivar: _state
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