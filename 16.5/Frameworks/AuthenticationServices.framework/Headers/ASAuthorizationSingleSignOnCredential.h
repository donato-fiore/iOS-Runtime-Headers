// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASAUTHORIZATIONSINGLESIGNONCREDENTIAL_H
#define ASAUTHORIZATIONSINGLESIGNONCREDENTIAL_H

@class NSData, NSHTTPURLResponse, NSArray, NSString;
@protocol ASAuthorizationCredential;

#import <Foundation/Foundation.h>


@interface ASAuthorizationSingleSignOnCredential : NSObject <ASAuthorizationCredential>



@property (readonly, copy, nonatomic) NSData *accessToken; // ivar: _accessToken
@property (readonly, copy, nonatomic) NSHTTPURLResponse *authenticatedResponse; // ivar: _authenticatedResponse
@property (readonly, copy, nonatomic) NSArray *authorizedScopes; // ivar: _authorizedScopes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSData *identityToken; // ivar: _identityToken
@property (readonly, nonatomic) NSArray *privateKeys; // ivar: _privateKeys
@property (readonly, copy, nonatomic) NSString *state; // ivar: _state
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)emptyCredential;
+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAuthenticatedResponse:(id)arg0 ;
-(id)initWithAuthenticatedResponse:(id)arg0 privateKeys:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_initWithAuthenticatedResponse:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif