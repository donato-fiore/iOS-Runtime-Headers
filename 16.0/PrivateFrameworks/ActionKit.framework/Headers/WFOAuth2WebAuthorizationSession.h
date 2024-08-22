// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFOAUTH2WEBAUTHORIZATIONSESSION_H
#define WFOAUTH2WEBAUTHORIZATIONSESSION_H

@class ASWebAuthenticationSession, NSURL, NSString;
@protocol WFOAuth2AuthorizationSession;

#import <Foundation/Foundation.h>

#import "WFWebAuthenticationSessionPresentationContext.h"
#import "WFOAuth2SessionManager.h"

@interface WFOAuth2WebAuthorizationSession : NSObject <WFOAuth2AuthorizationSession>



@property (retain, nonatomic) ASWebAuthenticationSession *authenticationSession; // ivar: _authenticationSession
@property (readonly, copy, nonatomic) NSURL *authorizationURL; // ivar: _authorizationURL
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFWebAuthenticationSessionPresentationContext *presentationContext; // ivar: _presentationContext
@property (readonly, copy, nonatomic) NSURL *redirectURI; // ivar: _redirectURI
@property (readonly, nonatomic) NSString *responseKey; // ivar: _responseKey
@property (readonly, copy, nonatomic) NSString *responseType; // ivar: _responseType
@property (readonly, nonatomic) WFOAuth2SessionManager *sessionManager; // ivar: _sessionManager
@property (readonly, nonatomic) NSString *state; // ivar: _state
@property (readonly) Class superclass;


-(BOOL)resumeSessionWithResponseObject:(id)arg0 ;
-(BOOL)resumeSessionWithURL:(id)arg0 ;
-(id)authenticationSessionWithPresentationAnchor:(id)arg0 ;
-(id)initWithSessionManager:(id)arg0 authorizationURL:(id)arg1 responseType:(id)arg2 redirectURI:(id)arg3 specifyRedirectURI:(BOOL)arg4 completionHandler:(id)arg5 ;


@end


#endif