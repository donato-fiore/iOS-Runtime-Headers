// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDMOAUTH2AUTHENTICATOR_H
#define MDMOAUTH2AUTHENTICATOR_H

@class NSString, NSDictionary;
@protocol MDMAuthenticatorProtocol;

#import <Foundation/Foundation.h>


@interface MDMOAuth2Authenticator : NSObject <MDMAuthenticatorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *personaID; // ivar: _personaID
@property (retain, nonatomic) NSString *state; // ivar: _state
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *tokens; // ivar: _tokens


+(id)_createOAuth2InvalidError;
+(id)authenticationMethod;
+(id)deserializeTokens:(id)arg0 ;
+(id)serializeTokens:(id)arg0 ;
-(BOOL)authenticateRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)canRefreshToken;
-(BOOL)doesWebAuthentication;
-(BOOL)validAuthParams:(id)arg0 ;
-(id)_authorizationGrantURLWithAuthParams:(id)arg0 ;
-(id)initWithRMAccountID:(id)arg0 ;
-(id)initWithTokens:(id)arg0 ;
-(id)prepareForReauthenticationWithAuthParams:(id)arg0 accountID:(id)arg1 error:(*id)arg2 ;
-(id)webAuthenticationURLForAuthParams:(id)arg0 userIdentifier:(id)arg1 ;
-(void)_executeTokenRequestWithURL:(id)arg0 body:(id)arg1 completionHandler:(id)arg2 ;
-(void)_processTokenResponse:(id)arg0 data:(id)arg1 error:(id)arg2 completionHandler:(id)arg3 ;
-(void)_refreshRequestWithRefreshToken:(id)arg0 authParams:(id)arg1 completionHandler:(id)arg2 ;
-(void)_tokenRequestWithCode:(id)arg0 authParams:(id)arg1 completionHandler:(id)arg2 ;
-(void)authTokensWithCallbackURL:(id)arg0 authParams:(id)arg1 completionHandler:(id)arg2 ;
-(void)refreshTokenWithAuthParams:(id)arg0 accountID:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif