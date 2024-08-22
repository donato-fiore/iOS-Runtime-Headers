// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CASAPPSIGNINREQUEST_H
#define CASAPPSIGNINREQUEST_H

@class AKAuthorizationRequest, NSArray, NSString, AKPasswordRequest, ASCPublicKeyCredentialAssertionOptions, ASCPublicKeyCredentialCreationOptions;
@protocol NSSecureCoding;


#import "CASAuthenticationRequest.h"
#import "CASWebRequest.h"

@interface CASAppSignInRequest : CASAuthenticationRequest <NSSecureCoding>



@property (readonly, nonatomic) AKAuthorizationRequest *appleIDRequest; // ivar: _appleIDRequest
@property (copy, nonatomic) NSArray *customAuthenticationMethods; // ivar: _customAuthenticationMethods
@property (readonly, nonatomic) BOOL hasAnyNonPasskeyRegistrationRequest;
@property (readonly, nonatomic) BOOL isAppleIDOnlyRequest;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isPasskeyRegistrationRequest;
@property (readonly, nonatomic) BOOL isPasskeyRequest;
@property (copy, nonatomic) NSString *overrideBundleIdentifier; // ivar: _overrideBundleIdentifier
@property (readonly, nonatomic) AKPasswordRequest *passwordRequest; // ivar: _passwordRequest
@property (readonly, nonatomic) ASCPublicKeyCredentialAssertionOptions *platformKeyCredentialAssertionOptions; // ivar: _platformKeyCredentialAssertionOptions
@property (readonly, nonatomic) ASCPublicKeyCredentialCreationOptions *platformKeyCredentialRegistrationOptions; // ivar: _platformKeyCredentialRegistrationOptions
@property (readonly, nonatomic) CASWebRequest *webRequest; // ivar: _webRequest


+(BOOL)supportsSecureCoding;
-(BOOL)_isPlatformKeyOnlyRequest;
-(NSInteger)authType;
-(id)description;
-(id)initWithAppleIDRequest:(id)arg0 passwordReqeust:(id)arg1 platformKeyCredentialAssertionOptions:(id)arg2 platformKeyCredentialRegistrationOptions:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequests:(id)arg0 ;
-(id)initWithWebRequest:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif