// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSAPPLICATIONCONTROLLER_H
#define VSAPPLICATIONCONTROLLER_H

@class NSString, JSValue, VSAuditToken, NSError, NSURL, VSIdentityProvider, VSPreferences, NSOperationQueue, VSStateMachine;
@protocol VSAppDocumentControllerDelegate, VSApplicationDelegate, VSStateMachineDelegate, VSApplicationControllerDelegate;

#import <Foundation/Foundation.h>

#import "VSAppDocumentController.h"
#import "VSApplication.h"
#import "VSApplicationControllerResponseHandler.h"

@interface VSApplicationController : NSObject <VSAppDocumentControllerDelegate, VSApplicationDelegate, VSStateMachineDelegate>



@property (retain, nonatomic) NSString *accountProviderAuthenticationToken; // ivar: _accountProviderAuthenticationToken
@property (nonatomic) BOOL allowUI; // ivar: _allowUI
@property (retain, nonatomic) VSAppDocumentController *appDocumentController; // ivar: _appDocumentController
@property (retain) VSApplication *application; // ivar: _application
@property (nonatomic) BOOL applicationMustSelfValidate; // ivar: _applicationMustSelfValidate
@property (retain, nonatomic) JSValue *applicationReadyCallback; // ivar: _applicationReadyCallback
@property (copy, nonatomic) VSAuditToken *auditToken; // ivar: _auditToken
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSApplicationControllerDelegate> *delegate; // ivar: _delegate
@property (retain) NSError *delegateError; // ivar: _delegateError
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *fetchedURL; // ivar: _fetchedURL
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSIdentityProvider *identityProvider; // ivar: _identityProvider
@property (retain) NSError *onLaunchError; // ivar: _onLaunchError
@property (retain, nonatomic) VSPreferences *preferences; // ivar: _preferences
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) VSApplicationControllerResponseHandler *responseHandler; // ivar: _responseHandler
@property (retain, nonatomic) VSStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;


-(id)_applicationControllerAlertForJavascriptAlert:(id)arg0 ;
-(id)_bootURL;
-(id)_errorForJavascriptErrorValueValue:(id)arg0 withRequest:(id)arg1 ;
-(id)_javascriptRequestForRequest:(id)arg0 withVerificationData:(id)arg1 ;
-(id)_makeJavaScriptRequest;
-(id)activeAppDocumentForApplication:(id)arg0 ;
-(id)init;
-(id)initWithIdentityProvider:(id)arg0 ;
-(id)launchParamsForApplication:(id)arg0 ;
-(void)_applicationReadyWithSuccess:(BOOL)arg0 javascriptErrorValue:(id)arg1 ;
-(void)_beginAuthentication;
-(void)_cancelValidation;
-(void)_completeRequest:(id)arg0 withJavascriptResponse:(id)arg1 javascriptErrorValue:(id)arg2 ;
-(void)_completeRequest:(id)arg0 withResult:(id)arg1 ;
-(void)_makeJavascriptRequestForRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_notifyDelegateWithBlock:(id)arg0 ;
-(void)_notifyDidReceiveViewModel:(id)arg0 ;
-(void)_notifyDidReceiveViewModelError:(id)arg0 ;
-(void)_notifyDidStart;
-(void)_notifyRequest:(id)arg0 didCompleteWithResponse:(id)arg1 ;
-(void)_notifyRequest:(id)arg0 didFailWithError:(id)arg1 ;
-(void)_notifyStartDidFailWithError:(id)arg0 ;
-(void)_presentAlert:(id)arg0 ;
-(void)_presentDocument:(id)arg0 ;
-(void)_submitJavascriptRequest:(id)arg0 forApplicationControllerRequest:(id)arg1 ;
-(void)appDocumentController:(id)arg0 didFailToUpdateViewModelWithError:(id)arg1 ;
-(void)appDocumentController:(id)arg0 didUpdateViewModel:(id)arg1 ;
-(void)application:(id)arg0 evaluateAppJavascriptInContext:(id)arg1 ;
-(void)application:(id)arg0 startDidFailWithError:(id)arg1 ;
-(void)applicationDidStart:(id)arg0 ;
-(void)applicationStartSelfValidationWithAuthenticationToken:(id)arg0 ;
-(void)dealloc;
-(void)release;
-(void)showAuthenticationUserInterfaceWithAuthenticationToken:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)submitRequest:(id)arg0 ;
-(void)transitionToInvalidState;
-(void)transitionToNotifyingOfLaunchFailureState;
-(void)transitionToReadyState;
-(void)transitionToWaitingForBootUrlState;
-(void)transitionToWaitingForBothLaunchCallbacksState;


@end


#endif