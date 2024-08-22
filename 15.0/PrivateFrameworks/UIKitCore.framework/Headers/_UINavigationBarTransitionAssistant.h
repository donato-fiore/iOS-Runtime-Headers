// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UINAVIGATIONBARTRANSITIONASSISTANT_H
#define _UINAVIGATIONBARTRANSITIONASSISTANT_H

@class NSArray;
@protocol _UINavigationBarDelegatePrivate, UIViewControllerTransitionCoordinator;

#import <Foundation/Foundation.h>

#import "UINavigationBar.h"

@interface _UINavigationBarTransitionAssistant : NSObject {
    NSInteger _animationCount;
}


@property (readonly, nonatomic) NSArray *animationIDs; // ivar: _animationIDs
@property (readonly, nonatomic) BOOL cancelledCleanUp;
@property (readonly, nonatomic) BOOL cancelledTransition; // ivar: _cancelledTransition
@property (readonly, weak, nonatomic) NSObject<_UINavigationBarDelegatePrivate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) BOOL interactive; // ivar: _interactive
@property (readonly, nonatomic) BOOL interruptable; // ivar: _interruptable
@property (readonly, weak, nonatomic) UINavigationBar *navigationBar; // ivar: _navigationBar
@property (nonatomic) BOOL needsLifetimeExtended; // ivar: _needsLifetimeExtended
@property (readonly, nonatomic) BOOL shouldAnimateAlongside;
@property (readonly, nonatomic) BOOL shouldCrossfade;
@property (nonatomic) BOOL shouldHideBackButtonDuringTransition; // ivar: _shouldHideBackButtonDuringTransition
@property (nonatomic) BOOL shouldUpdatePromptAfterTransition; // ivar: _shouldUpdatePromptAfterTransition
@property (readonly, nonatomic) int transition; // ivar: _transition
@property (readonly, weak, nonatomic) NSObject<UIViewControllerTransitionCoordinator> *transitionCoordinator; // ivar: _transitionCoordinator


+(id)popTransitionAssistantForNavigationBar:(id)arg0 delegate:(id)arg1 crossfade:(BOOL)arg2 ;
+(id)pushTransitionAssistantForNavigationBar:(id)arg0 delegate:(id)arg1 crossfade:(BOOL)arg2 ;
-(id)initWithNavigationBar:(id)arg0 delegate:(id)arg1 ;
-(void)_clearAnimationsWithDuration:(CGFloat)arg0 curve:(NSInteger)arg1 reverse:(BOOL)arg2 ;
-(void)_finishTrackingAnimations;
-(void)_getInteractive;
-(void)_getPopDurationAndTransitionAlwaysCrossfade:(BOOL)arg0 ;
-(void)_getPushDurationAndTransitionAlwaysCrossfade:(BOOL)arg0 ;
-(void)_getTransitionCoordinator;
-(void)_startTrackingAnimations;
-(void)cancelInteractiveTransitionPercent:(CGFloat)arg0 completionSpeed:(CGFloat)arg1 completionCurve:(NSInteger)arg2 ;
-(void)decrementAnimationCount;
-(void)finishInteractiveTransitionPercent:(CGFloat)arg0 completionSpeed:(CGFloat)arg1 completionCurve:(NSInteger)arg2 ;
-(void)finishTrackingInteractiveTransition;
-(void)incrementAnimationCount;
-(void)startInteractiveTransition;
-(void)updateInteractiveTransitionPercent:(CGFloat)arg0 ;


@end


#endif