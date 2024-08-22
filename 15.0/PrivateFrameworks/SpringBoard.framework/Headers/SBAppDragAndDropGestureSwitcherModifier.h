// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPDRAGANDDROPGESTURESWITCHERMODIFIER_H
#define SBAPPDRAGANDDROPGESTURESWITCHERMODIFIER_H

@class NSString;


#import "SBGestureSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBDragAndDropToAppTransitionSwitcherModifier.h"

@interface SBAppDragAndDropGestureSwitcherModifier : SBGestureSwitcherModifier {
    BOOL _floatingSwitcherVisible;
    SBAppLayout *_initialFullScreenAppLayout;
    SBAppLayout *_fullScreenAppLayout;
    SBAppLayout *_dropTransitionFromAppLayout;
    SBDragAndDropToAppTransitionSwitcherModifier *_transitionModifier;
    NSInteger _dropAction;
    NSString *_draggedSceneIdentifier;
    BOOL _isWindowDrag;
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




-(BOOL)_isDraggingLiveWindow;
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
-(id)initWithGestureID:(id)arg0 floatingSwitcherVisible:(BOOL)arg1 fullScreenAppLayout:(id)arg2 ;
-(id)resizeProgressNotificationsForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(void)_recomputeBlurStateWithCompletion:(id)arg0 ;


@end


#endif