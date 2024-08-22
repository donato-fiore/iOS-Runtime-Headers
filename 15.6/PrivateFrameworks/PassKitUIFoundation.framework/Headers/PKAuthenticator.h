// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAUTHENTICATOR_H
#define PKAUTHENTICATOR_H

@protocol PKAuthenticatorDelegate;

#import <Foundation/Foundation.h>

#import "PKAuthenticatorEvaluationContext.h"

@interface PKAuthenticator : NSObject {
    NSUInteger _authenticationIdentifier;
    os_unfair_lock_s _lock;
    BOOL _invalidated;
    PKAuthenticatorEvaluationContext *_context;
}


@property (readonly, nonatomic) NSUInteger authenticationIdentifier;
@property (readonly, nonatomic) NSInteger coachingState;
@property (weak, nonatomic) NSObject<PKAuthenticatorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSInteger evaluationState;
@property (readonly, nonatomic) BOOL fingerPresent;
@property (readonly, nonatomic) BOOL passcodeActive;
@property (readonly, nonatomic) BOOL passcodeWasPresented;
@property (readonly, nonatomic) BOOL passphraseActive;


+(BOOL)_isAccessibilityUserIntentEnabled;
+(BOOL)canPerformPSD2StyleBuyForAccessControlRef:(struct __SecAccessControl *)arg0 ;
+(BOOL)isUserIntentAvailableWithStyle:(NSInteger)arg0 ;
+(NSInteger)userIntentStyle;
+(NSUInteger)_currentStateForMechanisms:(id)arg0 ;
+(NSUInteger)cachedStateForPolicy:(NSInteger)arg0 ;
+(NSUInteger)currentStateForAccessControl:(struct __SecAccessControl *)arg0 ;
+(NSUInteger)currentStateForPolicy:(NSInteger)arg0 ;
+(id)viewServiceBundleID;
+(void)preheatAuthenticator;
+(void)removeUserIntentAvailable;
+(void)resetSharedRootContextWithCompletion:(id)arg0 ;
-(id)_context;
-(id)_optionsForEvaluationRequest:(id)arg0 withEvaluationContext:(id)arg1 ;
-(id)_swapContext:(id)arg0 ;
-(id)_swapContext:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)_evaluateEvaluationContext:(id)arg0 ;
-(void)_handleInstructionsForRequest:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(void)accessExternalizedContextWithCompletion:(id)arg0 ;
-(void)cancelEvaluation;
-(void)cancelEvaluationWithOptions:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)evaluateRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)fallbackToSystemPasscodeUI;
-(void)invalidate;
-(void)restartEvaluation;


@end


#endif