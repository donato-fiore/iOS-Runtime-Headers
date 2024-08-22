// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASAUTHORIZATIONCONTROLLER_H
#define ASAUTHORIZATIONCONTROLLER_H

@class SOAuthorization, NSURL, UIWindow, UIViewController, ASCAgentProxy, NSArray, NSString;
@protocol SOAuthorizationDelegate, ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding;

#import <Foundation/Foundation.h>


@interface ASAuthorizationController : NSObject <SOAuthorizationDelegate>

 {
    SOAuthorization *_appSSOAuthorization;
    NSURL *_appSSORequestURL;
    UIWindow *_appSSOPresentationAnchor;
    UIViewController *_appSSOViewController;
    ASCAgentProxy *_authenticationServicesAgentProxy;
}


@property (readonly, nonatomic) NSArray *authorizationRequests; // ivar: _authorizationRequests
@property (copy, nonatomic) NSArray *customAuthorizationMethods; // ivar: _customAuthorizationMethods
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ASAuthorizationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<ASAuthorizationControllerPresentationContextProviding> *presentationContextProvider; // ivar: _presentationContextProvider
@property (readonly) Class superclass;


+(id)new;
-(BOOL)_onlyHasAppleIDRequest:(id)arg0 ;
-(BOOL)_shouldPerformRequestsWithAuthKit:(id)arg0 ;
-(id)_authKitRequestFromAppleIDRequest:(id)arg0 ;
-(id)_authKitRequests;
-(id)_authenticatedResponseFromHTTPResponse:(id)arg0 httpBody:(id)arg1 ;
-(id)_authenticationServicesAgentProxy;
-(id)_authorizationFromAuthKitResult:(id)arg0 ;
-(id)_authorizationRequestsHandledByAuthenticationServicesDaemon:(id)arg0 ;
-(id)_convertCoreErrorToPublicError:(id)arg0 ;
-(id)_requestContextWithRequests:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithAuthorizationRequests:(id)arg0 ;
-(void)_finishAppSSO;
-(void)_performAuthKitRequests:(id)arg0 ;
-(void)_performAuthorizationRequests:(id)arg0 ;
-(void)authorization:(id)arg0 didCompleteWithAuthorizationResult:(id)arg1 ;
-(void)authorization:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)authorization:(id)arg0 didCompleteWithHTTPAuthorizationHeaders:(id)arg1 ;
-(void)authorization:(id)arg0 didCompleteWithHTTPResponse:(id)arg1 httpBody:(id)arg2 ;
-(void)authorization:(id)arg0 presentViewController:(id)arg1 withCompletion:(id)arg2 ;
-(void)authorizationDidCancel:(id)arg0 ;
-(void)authorizationDidComplete:(id)arg0 ;
-(void)authorizationDidNotHandle:(id)arg0 ;
-(void)dealloc;
-(void)performRequests;


@end


#endif