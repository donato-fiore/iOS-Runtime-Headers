// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFOAUTH2SESSIONMANAGER_H
#define WFOAUTH2SESSIONMANAGER_H

@class NSString, NSURL, NSURLSession;

#import <Foundation/Foundation.h>


@interface WFOAuth2SessionManager : NSObject

@property (readonly, nonatomic) NSString *authenticationMethod; // ivar: _authenticationMethod
@property (readonly, copy, nonatomic) NSURL *authorizationURL; // ivar: _authorizationURL
@property (readonly, copy, nonatomic) NSString *clientID; // ivar: _clientID
@property (readonly, copy, nonatomic) NSString *clientSecret; // ivar: _clientSecret
@property (readonly, nonatomic) NSURLSession *session; // ivar: _session
@property (readonly, copy, nonatomic) NSURL *tokenURL; // ivar: _tokenURL


+(id)combinedScopeFromScopes:(id)arg0 ;
-(id)authorizationSessionWithAuthorizationURL:(id)arg0 responseType:(id)arg1 scopes:(id)arg2 redirectURI:(id)arg3 specifyRedirectURI:(BOOL)arg4 completionHandler:(id)arg5 ;
-(id)authorizationSessionWithResponseType:(id)arg0 scopes:(id)arg1 redirectURI:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithSessionConfiguration:(id)arg0 tokenURL:(id)arg1 authorizationURL:(id)arg2 authenticationMethod:(id)arg3 clientID:(id)arg4 clientSecret:(id)arg5 ;
-(void)authenticateWithCode:(id)arg0 redirectURI:(id)arg1 completionHandler:(id)arg2 ;
-(void)authenticateWithParameters:(id)arg0 completionHandler:(id)arg1 ;
-(void)authenticateWithRefreshCredential:(id)arg0 completionHandler:(id)arg1 ;
-(void)authenticateWithRequest:(id)arg0 refreshToken:(id)arg1 completionHandler:(id)arg2 ;
-(void)authenticateWithScopes:(id)arg0 completionHandler:(id)arg1 ;
-(void)authenticateWithUsername:(id)arg0 password:(id)arg1 scopes:(id)arg2 completionHandler:(id)arg3 ;
-(void)sendRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif