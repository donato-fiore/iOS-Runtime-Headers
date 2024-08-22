// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSCENERESIZEGESTURESWITCHERMODIFIER_H
#define SBSCENERESIZEGESTURESWITCHERMODIFIER_H

@class UIViewFloatAnimatableProperty, SBFFluidBehaviorSettings;


#import "SBGestureSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBSceneResizeGestureSwitcherModifier : SBGestureSwitcherModifier {
    SBAppLayout *_appLayout;
    NSInteger _startingSpaceConfiguration;
    CGPoint _translation;
    CGPoint _location;
    CGPoint _velocity;
    UIViewFloatAnimatableProperty *_rampingProperty;
    SBFFluidBehaviorSettings *_rampedLayoutSettings;
    CGRect _initialSpaceFrame;
    CGRect _startingFrameForPrimaryItem;
    CGRect _startingFrameForSideItem;
    NSUInteger _timerGenCount;
    CGPoint _lastTranslationThatUpdatedScene;
}




-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldScaleOverlayToFillBoundsAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(BOOL)wantsSceneResizesHostedContextForAppLayout:(id)arg0 ;
-(CGFloat)_maxCardWidthForDismissalAction;
-(CGFloat)_minimumCardWidthForDismissalAction;
-(CGFloat)_normalizedDismissLeftProgress;
-(CGFloat)_normalizedDismissRightProgress;
-(CGFloat)_normalizedHalfHalfProgress;
-(CGFloat)_normalizedHorizontalLocationWithProjection:(BOOL)arg0 ;
-(CGFloat)_normalizedNarrowWideProgress;
-(CGFloat)_normalizedPeekDismissLeftProgress;
-(CGFloat)_normalizedPeekDismissRightProgress;
-(CGFloat)_normalizedProgressBetweenHalfHalfAndWideNarrow;
-(CGFloat)_normalizedProgressBetweenNarrowWideAndHalfHalf;
-(CGFloat)_normalizedWideNarrowProgress;
-(CGFloat)_rubberbandingRange;
-(CGFloat)_switcherWidth;
-(CGFloat)backgroundOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)blurDelayForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(NSInteger)_actionForNormalizedProgress:(CGFloat)arg0 inOrientation:(NSInteger)arg1 ;
-(NSInteger)_configurationForFinalResizeAction:(NSInteger)arg0 ;
-(NSInteger)_currentActionWithProjection:(BOOL)arg0 ;
-(NSInteger)_currentPresentationAction;
-(NSInteger)_presentationActionForNormalizedProgress:(CGFloat)arg0 ;
-(NSUInteger)hiddenContentStatusBarPartsForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)_appLayoutForAction:(NSInteger)arg0 ;
-(id)_handleGestureEventBeganWithEvent:(id)arg0 ;
-(id)_handleGestureEventChangedWithEvent:(id)arg0 ;
-(id)_handleGestureEventEndedWithEvent:(id)arg0 ;
-(id)_responseForGestureUpdateWithPause:(BOOL)arg0 gestureIsEnding:(BOOL)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 appLayout:(id)arg1 spaceConfiguration:(NSInteger)arg2 ;
-(id)keyboardSuppressionMode;
-(id)resizeGrabberLayoutAttributesForAppLayout:(id)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(void)_beginAnimatingRampingProperty;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif