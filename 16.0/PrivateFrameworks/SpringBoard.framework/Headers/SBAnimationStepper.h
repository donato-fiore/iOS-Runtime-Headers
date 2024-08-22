// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBANIMATIONSTEPPER_H
#define SBANIMATIONSTEPPER_H

@class BSAnimationSettings, NSMutableSet, CADisplayLink, NSString, NSArray;
@protocol CAAnimationDelegate, SBUIAnimationStepping;

#import <Foundation/Foundation.h>


@interface SBAnimationStepper : NSObject <CAAnimationDelegate, SBUIAnimationStepping>

 {
    BSAnimationSettings *_animationSettings;
    NSMutableSet *_views;
    NSMutableSet *_finishedAnimatingViews;
    CADisplayLink *_displayLink;
    id *_completion;
    CGFloat _percentage;
    BOOL _invalidated;
    BOOL _completed;
    BOOL _finishingForward;
    BOOL _finishingBackward;
    BOOL _animatingToStepPercent;
    CGFloat _animatedSteppingTimestamp;
    CGFloat _animatedSteppingStartPercent;
    CGFloat _animatedSteppingTargetPercent;
    CGFloat _finishBackwardTimestamp;
    CGFloat _finishBackwardDuration;
    CGFloat _finishBackwardPercentage;
}


@property (nonatomic) BOOL adjustsDurationForLongestAnimation; // ivar: _adjustsDurationForLongestAnimation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGFloat finishSpeed; // ivar: _finishSpeed
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat stepPercentage;
@property (readonly, nonatomic, getter=isStepped) BOOL stepped;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *views;


-(CGFloat)_nextCommitTime;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithAnimationSettings:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_adjustDurationForLongestAnimation;
-(void)_checkForCompletion;
-(void)_displayLinkFired:(id)arg0 ;
-(void)_displayLinkFiredForBackwardToStart:(id)arg0 ;
-(void)_makeSubviewTree:(id)arg0 fromView:(id)arg1 ;
-(void)_updateAnimationSteppingTarget:(CGFloat)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)finishSteppingBackwardToStart;
-(void)finishSteppingBackwardToStartWithCompletion:(id)arg0 ;
-(void)finishSteppingForwardToEnd;
-(void)finishSteppingForwardToEndWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)startSteppingAnimationsInView:(id)arg0 ;


@end


#endif