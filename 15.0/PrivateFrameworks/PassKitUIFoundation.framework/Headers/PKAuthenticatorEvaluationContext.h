// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKAUTHENTICATOREVALUATIONCONTEXT_H
#define PKAUTHENTICATOREVALUATIONCONTEXT_H

@class NSDictionary, NSMutableArray, LAContext;
@protocol LAUIDelegate, OS_dispatch_source, PKAuthenticatorDelegate;

#import <Foundation/Foundation.h>

#import "PKAuthenticator.h"
#import "PKAuthenticatorEvaluationRequest.h"

@interface PKAuthenticatorEvaluationContext : NSObject <LAUIDelegate>

 {
    PKAuthenticator *_authenticator;
    id *_completionHandler;
    ? _delegateResponderCache;
    NSObject<OS_dispatch_source> *_matchingDelayTimeout;
    CGFloat _touchIDBeginTime;
    NSObject<OS_dispatch_source> *_liftFingerTimeout;
    NSDictionary *_passcodePresentationParameters;
    BOOL _passcodePresentationRequested;
    BOOL _automaticallyPresentPasscodeOnce;
    NSUInteger _evaluationFlags;
    NSInteger _lastAnnotation;
    BOOL _acquireUserIntent;
    BOOL _acquireSecondaryUserIntent;
    NSInteger _coachingStatus;
    NSMutableArray *_accessHandlers;
    BOOL _usingExternalContext;
    NSUInteger _externalContextInvalidationPolicy;
    NSUInteger _externalContextOptions;
    LAContext *_LAContext;
    NSUInteger _activeMechanisms;
    NSUInteger _completedMechanisms;
}


@property (readonly, nonatomic) BOOL biometricMatch;
@property (readonly, nonatomic) NSInteger coachingState; // ivar: _coachingState
@property (weak, nonatomic) NSObject<PKAuthenticatorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSInteger evaluationState; // ivar: _evaluationState
@property (readonly, nonatomic) BOOL fingerPresent;
@property (readonly, nonatomic) BOOL forceApplePayCheck; // ivar: _forceApplePayCheck
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly, nonatomic) BOOL passcodeActive;
@property (readonly, nonatomic) BOOL passphraseActive;
@property (readonly, nonatomic) NSInteger policy; // ivar: _policy
@property (readonly, nonatomic, getter=isPolicySupported) BOOL policySupported; // ivar: _policySupported
@property (readonly, nonatomic) NSUInteger presentationFlags; // ivar: _presentationFlags
@property (readonly, nonatomic) PKAuthenticatorEvaluationRequest *request; // ivar: _request
@property (readonly, nonatomic, getter=isSupported) BOOL supported; // ivar: _supported


-(BOOL)_presentPasscodeIfNecessary;
-(id)hoistCompletionHandler:(SEL)arg0 ;
-(id)init;
// -(id)initWithRequest:(id)arg0 completionHandler:(id)arg1 forAuthenticator:(unk)arg2  ;
-(void)_clearFingerOnTimer;
-(void)_clearLiftFingerTimer;
-(void)_createContextWithExternalizedContext:(id)arg0 ;
-(void)_dismissAuthenticatorViewOfType:(NSInteger)arg0 ;
-(void)_handleLiftFinger;
-(void)_presentAuthenticatorViewOfType:(NSInteger)arg0 withParams:(id)arg1 ;
-(void)_requestRemoteAuthenticatorViewControllerOfType:(NSInteger)arg0 withClassName:(id)arg1 bundleIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)_setFingerOnTimer;
-(void)_setLiftFingerTimer;
-(void)_updateActiveState:(BOOL)arg0 forEvent:(NSInteger)arg1 withParameters:(id)arg2 ;
-(void)_updateCoachingState;
-(void)_updateEvaluationState;
-(void)accessLAContext:(id)arg0 ;
-(void)dealloc;
-(void)evaluateWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)event:(NSInteger)arg0 params:(id)arg1 reply:(id)arg2 ;
-(void)fallbackToPasscode;
-(void)handlePasscodeEventWithParameters:(id)arg0 ;
-(void)handlePearlEventWithParameters:(id)arg0 ;
-(void)handlePushButtonEventWithParameters:(id)arg0 ;
-(void)handlePushButtonSecondaryEventWithParameters:(id)arg0 ;
-(void)handleTouchIDEventWithParameters:(id)arg0 ;
-(void)invalidate;
-(void)invalidateWithIntent:(NSInteger)arg0 ;


@end


#endif