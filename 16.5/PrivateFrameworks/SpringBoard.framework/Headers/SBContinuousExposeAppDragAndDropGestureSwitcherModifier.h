// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSEAPPDRAGANDDROPGESTURESWITCHERMODIFIER_H
#define SBCONTINUOUSEXPOSEAPPDRAGANDDROPGESTURESWITCHERMODIFIER_H

@class NSString;


#import "SBGestureSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBDisplayItem.h"
#import "SBContinuousExposeDragAndDropToAppTransitionSwitcherModifier.h"

@interface SBContinuousExposeAppDragAndDropGestureSwitcherModifier : SBGestureSwitcherModifier {
    SBAppLayout *_initialAppLayout;
    SBAppLayout *_appLayout;
    SBDisplayItem *_displayItemThatWouldBeEvictedIfAny;
    SBAppLayout *_dropTransitionFromAppLayout;
    SBContinuousExposeDragAndDropToAppTransitionSwitcherModifier *_transitionModifier;
    NSInteger _dropAction;
    NSString *_draggedSceneIdentifier;
    BOOL _hasPlatterized;
    BOOL _hasPreviewLifted;
    NSInteger _draggedSceneOriginalLayoutRole;
    CGRect _platterFrame;
    CGPoint _location;
    BOOL _shouldPushInFullScreenContent;
    BOOL _isResizing;
    BOOL _hasResizedEnoughToUnblur;
    BOOL _isBlurring;
    BOOL _isBlurred;
    BOOL _needsBlurBecauseFramesWillMismatch;
    BOOL _gestureEnded;
}




-(BOOL)_shouldPushInFullScreenContentForEvent:(id)arg0 ;
-(BOOL)_showResizeUI;
-(BOOL)completesWhenChildrenComplete;
-(BOOL)isContentStatusBarVisibleForIndex:(NSUInteger)arg0 ;
-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isResizeGrabberVisibleForAppLayout:(id)arg0 ;
-(BOOL)switcherHitTestsAsOpaque;
-(CGFloat)backgroundOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)homeScreenDimmingAlpha;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleBlurProgressEvent:(id)arg0 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleResizeProgressEvent:(id)arg0 ;
-(id)handleSceneReadyEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 appLayout:(id)arg1 displayItemThatWouldBeEvicted:(id)arg2 ;
-(id)resizeProgressNotificationsForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)topMostLayoutRolesForAppLayout:(id)arg0 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(void)_recomputeBlurStateWithCompletion:(id)arg0 ;


@end


#endif