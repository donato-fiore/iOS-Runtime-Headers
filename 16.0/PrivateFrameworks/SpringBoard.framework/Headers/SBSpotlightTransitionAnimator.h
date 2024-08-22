// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSPOTLIGHTTRANSITIONANIMATOR_H
#define SBSPOTLIGHTTRANSITIONANIMATOR_H

@class UIView, SBSearchBackdropView, SPUIRemoteSearchViewController, NSString;
@protocol PTSettingsKeyObserver, SBViewControllerInteractiveAnimatedTransitioning, SBViewControllerContextTransitioning, SBUISpotlightInitiating;

#import <Foundation/Foundation.h>

#import "SBSystemAnimationSettings.h"

@interface SBSpotlightTransitionAnimator : NSObject <PTSettingsKeyObserver, SBViewControllerInteractiveAnimatedTransitioning>

 {
    SBSystemAnimationSettings *_settings;
    id<SBViewControllerContextTransitioning> *_transitionContext;
    CGFloat _percentComplete;
    CGFloat _transitionDuration;
    NSUInteger _transitionToken;
    NSUInteger _operation;
    UIView *_touchSwallowingView;
    UIView *_containerView;
    UIView *_searchView;
    SBSearchBackdropView *_backdropView;
    BOOL _ownsBackdropView;
    ? _pulldownInterval;
    id<SBUISpotlightInitiating> *_initiatingViewController;
    SPUIRemoteSearchViewController *_spotlightViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldMoveIntoSearch;
-(BOOL)shouldMoveIntoSearchOnCancel;
-(BOOL)supportsRestarting;
-(CGFloat)_percentVisibleForPercentComplete:(CGFloat)arg0 ;
-(CGFloat)percentComplete;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)init;
-(void)_animateInteractiveTransition:(id)arg0 ;
-(void)_animateIntoSearch:(BOOL)arg0 ;
-(void)_cancelInteractiveTransition:(id)arg0 withCompletionSpeed:(CGFloat)arg1 completionCurve:(NSInteger)arg2 ;
-(void)_cleanupAfterAnimating:(BOOL)arg0 ;
-(void)_finishInteractiveTransition:(id)arg0 withCompletionSpeed:(CGFloat)arg1 completionCurve:(NSInteger)arg2 ;
-(void)_prepareToAnimate;
-(void)_prototypeSettingsChanged;
-(void)_restoreSpotlightHeaderToInitiatingViewController;
-(void)_restoreSpotlightHeaderToInitiatingViewControllerForCancellation:(BOOL)arg0 ;
-(void)_updateTransitionIntoSearch:(BOOL)arg0 percentComplete:(CGFloat)arg1 ;
-(void)animateTransition:(id)arg0 ;
-(void)cancelTransition:(id)arg0 withCompletionSpeed:(CGFloat)arg1 completionCurve:(NSInteger)arg2 ;
-(void)finishInteractiveTransition:(id)arg0 withCompletionSpeed:(CGFloat)arg1 completionCurve:(NSInteger)arg2 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)updateTransition:(id)arg0 withPercentComplete:(CGFloat)arg1 ;


@end


#endif