// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSJSAPP_H
#define VSJSAPP_H

@class JSContext, NSString, NSURL, NSOperationQueue, NSMutableArray;
@protocol VSStateMachineDelegate, VSJSAppDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "VSSingleThreadDispatchQueue.h"
#import "VSStateMachine.h"

@interface VSJSApp : NSObject <VSStateMachineDelegate>



@property (retain, nonatomic) JSContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSJSAppDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *effectiveURL; // ivar: _effectiveURL
@property (nonatomic) BOOL enforceSystemTrust; // ivar: _enforceSystemTrust
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSSingleThreadDispatchQueue *jsSingleThreadQueue; // ivar: _jsSingleThreadQueue
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) NSString *script; // ivar: _script
@property (retain, nonatomic) NSMutableArray *scriptEvaluators; // ivar: _scriptEvaluators
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) VSStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (retain, nonatomic) NSObject<OS_dispatch_source> *watchdog; // ivar: _watchdog


+(id)currentContext;
-(id)_errorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 ;
-(id)_exceptionErrorWithCode:(NSInteger)arg0 ;
-(id)initWithScriptURL:(id)arg0 ;
-(void)_configureWatchdogWithSeconds:(NSUInteger)arg0 ;
-(void)_initializeContext;
-(void)_invokeOnExit;
-(void)_invokeOnLaunch;
-(void)evaluateScript:(id)arg0 withSourceURL:(id)arg1 ;
-(void)evaluateWithBlock:(id)arg0 ;
-(void)setExceptionWithMessage:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)transitionToErrorState;
-(void)transitionToReadyState;
-(void)transitionToStoppedState;
-(void)transitionToWaitingForBootScriptState;
-(void)transitionToWaitingForBootUrlState;
-(void)transitionToWaitingForOnExitCallbackState;
-(void)transitionToWaitingForOnLaunchCallbackState;


@end


#endif