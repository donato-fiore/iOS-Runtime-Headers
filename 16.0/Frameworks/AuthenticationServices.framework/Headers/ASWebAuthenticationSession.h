// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASWEBAUTHENTICATIONSESSION_H
#define ASWEBAUTHENTICATIONSESSION_H

@class NSString, SFAuthenticationSession;
@protocol ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding, ASWebAuthenticationPresentationContextProviding;

#import <Foundation/Foundation.h>

#import "ASAuthorizationController.h"
#import "ASAuthorizationSingleSignOnProvider.h"
#import "ASWebAuthenticationSession.h"

@interface ASWebAuthenticationSession : NSObject <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding>

 {
    ASAuthorizationController *_authorizationController;
    ASAuthorizationSingleSignOnProvider *_ssoProvider;
    NSString *_callbackURLScheme;
    SFAuthenticationSession *_authenticationSession;
    id *_originalCompletionHandler;
    ASWebAuthenticationSession *_referenceToSelf;
}


@property (readonly, nonatomic) BOOL canStart;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL prefersEphemeralWebBrowserSession; // ivar: _prefersEphemeralWebBrowserSession
@property (weak, nonatomic) NSObject<ASWebAuthenticationPresentationContextProviding> *presentationContextProvider; // ivar: _presentationContextProvider
@property (readonly) Class superclass;


+(void)handleSSOExtensionIdentifier:(struct ? )arg0 ;
+(void)resetSSOExtensionIdentifier;
-(BOOL)_startDryRun:(BOOL)arg0 ;
-(BOOL)start;
-(id)initWithURL:(id)arg0 callbackURLScheme:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithURL:(id)arg0 callbackURLScheme:(id)arg1 usingEphemeralSession:(BOOL)arg2 completionHandler:(id)arg3 ;
-(id)initWithURL:(id)arg0 callbackURLScheme:(id)arg1 usingEphemeralSession:(BOOL)arg2 jitEnabled:(BOOL)arg3 completionHandler:(id)arg4 ;
-(id)presentationAnchorForAuthorizationController:(id)arg0 ;
-(void)_invalidate;
-(void)authorizationController:(id)arg0 didCompleteWithAuthorization:(id)arg1 ;
-(void)authorizationController:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)cancel;


@end


#endif