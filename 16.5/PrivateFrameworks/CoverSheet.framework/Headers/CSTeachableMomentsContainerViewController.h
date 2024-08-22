// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSTEACHABLEMOMENTSCONTAINERVIEWCONTROLLER_H
#define CSTEACHABLEMOMENTSCONTAINERVIEWCONTROLLER_H

@class NSMutableDictionary, NSString, NSTimer, UITapGestureRecognizer;
@protocol CAAnimationDelegate, UIGestureRecognizerDelegate, SBUIBiometricResource, SBDashBoardHomeAffordanceAnimationViewProviding;


#import "CSCoverSheetViewControllerBase.h"
#import "CSHomeAffordanceViewController.h"
#import "CSTeachableMomentsContainerView.h"

@interface CSTeachableMomentsContainerViewController : CSCoverSheetViewControllerBase <CAAnimationDelegate, UIGestureRecognizerDelegate>



@property (nonatomic) NSUInteger animationState; // ivar: _animationState
@property (nonatomic) BOOL authenticated; // ivar: _authenticated
@property (retain, nonatomic) NSObject<SBUIBiometricResource> *biometricResource; // ivar: _biometricResource
@property (retain, nonatomic) NSMutableDictionary *cachedLegibilityLabels; // ivar: _cachedLegibilityLabels
@property (nonatomic) BOOL controlCenterCoachingIsHidden; // ivar: _controlCenterCoachingIsHidden
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger effectiveAnimationState; // ivar: _effectiveAnimationState
@property (retain, nonatomic) NSTimer *fireOffAnimationTimer; // ivar: _fireOffAnimationTimer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITapGestureRecognizer *homeAffordanceClickGestureRecognizer; // ivar: _homeAffordanceClickGestureRecognizer
@property (readonly, nonatomic) CSHomeAffordanceViewController *homeAffordanceViewController; // ivar: _homeAffordanceViewController
@property (nonatomic, getter=isScreenOn) BOOL screenOn; // ivar: _screenOn
@property (readonly) Class superclass;
@property (readonly, nonatomic) CSTeachableMomentsContainerView *teachableMomentsContainerView;
@property (nonatomic) BOOL updateTextLabelOnNextAnimation; // ivar: _updateTextLabelOnNextAnimation
@property (weak, nonatomic) NSObject<SBDashBoardHomeAffordanceAnimationViewProviding> *viewProvider; // ivar: _viewProvider


+(id)_animationKeyForKeyPath:(id)arg0 iteration:(NSUInteger)arg1 reset:(BOOL)arg2 ;
// +(void)_addRepeatedAnimationWithProvider:(id)arg0 toLayer:(unk)arg1  ;
-(BOOL)_shouldTeachAboutControlCenter;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)handleEvent:(id)arg0 ;
-(NSUInteger)currentState;
-(id)_controlCenterGlyphAlphaAnimationWithDuration:(CGFloat)arg0 beginTime:(CGFloat)arg1 ;
-(id)_controlCenterGrabberAlphaAnimationWithDuration:(CGFloat)arg0 beginTime:(CGFloat)arg1 ;
-(id)_controlCenterGrabberPositionAnimationWithDuration:(CGFloat)arg0 beginTime:(CGFloat)arg1 ;
-(id)_homeAffordancePositionAnimationWithDuration:(CGFloat)arg0 beginTime:(CGFloat)arg1 ;
-(id)_textAlphaAnimationWithDuration:(CGFloat)arg0 beginTime:(CGFloat)arg1 ;
-(id)_textPositionAnimationWithDuration:(CGFloat)arg0 beginTime:(CGFloat)arg1 ;
-(id)init;
-(void)_addControlCenterGlyphAnimation;
-(void)_addControlCenterGlyphResetAnimation;
-(void)_addControlCenterGrabberAnimation;
-(void)_addControlCenterGrabberResetAnimation;
-(void)_addHomeAffordanceAnimation;
-(void)_addHomeAffordanceResetAnimation;
-(void)_addResetAnimationForKeyPath:(id)arg0 onLayer:(id)arg1 ;
-(void)_addTextAnimation;
-(void)_addTextResetAnimation;
-(void)_cancelTimerAndResetAnimation;
-(void)_contentSizeCategoryChanged;
-(void)_homeAffordanceClickRecognized:(id)arg0 ;
-(void)_moveUpTimerForFiringAfterDelay:(CGFloat)arg0 ;
-(void)_removeNormalAnimationsForKeyPath:(id)arg0 onLayer:(id)arg1 ;
-(void)_removeResetAnimationForKeyPath:(id)arg0 onLayer:(id)arg1 ;
-(void)_setControlCenterTutorsHidden:(BOOL)arg0 ;
-(void)_setupTimer;
-(void)_setupTimerWithDelay:(CGFloat)arg0 ;
-(void)_updateEffectiveAnimationState;
-(void)_updateLegibilitySettings;
-(void)_updateText:(id)arg0 ;
-(void)_updateTextLabel;
-(void)_updateTextLabelIfNeeded;
-(void)aggregateAppearance:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif