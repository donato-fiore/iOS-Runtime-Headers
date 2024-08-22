// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTRANSIENTOVERLAYPRESENTWORKSPACETRANSACTION_H
#define SBTRANSIENTOVERLAYPRESENTWORKSPACETRANSACTION_H

@class NSString;
@protocol SBUIAnimationControllerObserver, BSInvalidatable;


#import "SBMainWorkspaceTransaction.h"
#import "SBUIAnimationController.h"

@interface SBTransientOverlayPresentWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver>

 {
    SBUIAnimationController *_animation;
    id<BSInvalidatable> *_displayLayoutTransitionAssertion;
    id<BSInvalidatable> *_eventBufferingAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canBeInterrupted;
-(BOOL)canInterruptForTransitionRequest:(id)arg0 ;
-(id)initWithTransitionRequest:(id)arg0 ;
-(void)_begin;
-(void)_didComplete;
-(void)_logForInterruptAttemptReason:(id)arg0 ;
-(void)_performStandardPresentationAnimated:(BOOL)arg0 ;
-(void)_willBegin;
-(void)_willInterruptWithReason:(id)arg0 ;
-(void)animationControllerDidFinishAnimation:(id)arg0 ;


@end


#endif