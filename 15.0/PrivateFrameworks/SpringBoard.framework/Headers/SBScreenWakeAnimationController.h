// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSCREENWAKEANIMATIONCONTROLLER_H
#define SBSCREENWAKEANIMATIONCONTROLLER_H

@class SBFLockScreenDateView, NSMutableSet, NSString;
@protocol SBFScreenWakeAnimationControlling, SBFScreenWakeAnimationTarget;

#import <Foundation/Foundation.h>

#import "SBAppStatusBarSettingsAssertion.h"

@interface SBScreenWakeAnimationController : NSObject <SBFScreenWakeAnimationControlling>

 {
    CGFloat _originalDateLeftEdge;
    CGFloat _originalDateBottomEdge;
    CGFloat _finalTimeAlpha;
    CGFloat _finalStatusBarAlpha;
    id<SBFScreenWakeAnimationTarget> *_target;
    SBFLockScreenDateView *_realDateView;
    BOOL _preparingToAnimateWake;
    BOOL _animatingForWake;
    BOOL _animatingForSleep;
    BOOL _insideWakeCompletionBlock;
    BOOL _insideSleepCompletionBlock;
    int _animationToken;
    id *_wakeCompletionBlock;
    id *_sleepCompletionBlock;
    BOOL _animatingWallpaper;
    BOOL _animatingContent;
    BOOL _animatingBacklight;
    BOOL _ignoringInteractionEvents;
    BOOL _waitingForScreenUnblank;
    NSInteger _lastBacklightChangeSource;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    NSMutableSet *_temporaryDisabledReasons;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)_animationSpeedForBacklightChangeSource:(NSInteger)arg0 isWake:(BOOL)arg1 ;
+(CGFloat)backlightFadeDurationForSource:(NSInteger)arg0 isWake:(BOOL)arg1 ;
+(id)sharedInstance;
-(BOOL)interruptSleepAnimationIfNeeded;
-(BOOL)isSleepAnimationInProgress;
-(BOOL)isWakeAnimationInProgress;
-(BOOL)isWakeAnimationInProgressForSource:(NSInteger)arg0 ;
-(id)_animationSettingsForBacklightChangeSource:(NSInteger)arg0 isWake:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_cleanupAnimationWhenInterruptingWaking:(BOOL)arg0 ;
-(void)_handleAnimationCompletionIfNecessaryForWaking:(BOOL)arg0 ;
-(void)_runCompletionHandlerForWake:(BOOL)arg0 reason:(id)arg1 ;
-(void)_setInteractionEventsIgnored:(BOOL)arg0 ;
-(void)_setLastBacklightChangeSource:(NSInteger)arg0 ;
-(void)_setRelevantLockScreenViewsHidden:(BOOL)arg0 ;
-(void)_startWakeAnimationsForWaking:(BOOL)arg0 animationSettings:(id)arg1 ;
-(void)_startWakeFromUnblankNotification;
-(void)_startWakeIfNecessary;
-(void)dealloc;
-(void)prepareToWakeForSource:(NSInteger)arg0 timeAlpha:(CGFloat)arg1 statusBarAlpha:(CGFloat)arg2 target:(id)arg3 completion:(id)arg4 ;
-(void)setScreenWakeTemporarilyDisabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)sleepForSource:(NSInteger)arg0 completion:(id)arg1 ;
-(void)sleepForSource:(NSInteger)arg0 target:(id)arg1 completion:(id)arg2 ;


@end


#endif