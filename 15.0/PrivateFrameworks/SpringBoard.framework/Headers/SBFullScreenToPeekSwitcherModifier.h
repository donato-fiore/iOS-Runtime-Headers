// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFULLSCREENTOPEEKSWITCHERMODIFIER_H
#define SBFULLSCREENTOPEEKSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBFullScreenToPeekSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromFloatingAppLayout;
    SBAppLayout *_toFloatingAppLayout;
    NSInteger _peekConfiguration;
    NSInteger _animationPhase;
    BOOL _resizedEnoughToUnblur;
}




-(BOOL)_isPeekingAppLayout:(id)arg0 ;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)wantsDockBehaviorAssertion;
-(BOOL)wantsDockWindowLevelAssertion;
-(CGFloat)_firstPhaseScale;
-(CGFloat)blurDelayForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)dockProgress;
-(CGFloat)dockWindowLevel;
-(CGFloat)homeScreenAlpha;
-(CGFloat)homeScreenBackdropBlurProgress;
-(CGFloat)homeScreenDimmingAlpha;
-(CGFloat)homeScreenScale;
-(CGFloat)scaleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)wallpaperScale;
-(NSInteger)homeScreenBackdropBlurType;
-(NSUInteger)dockWindowLevelPriority;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleResizeProgressEvent:(id)arg0 ;
-(id)handleSceneReadyEvent:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 fromAppLayout:(id)arg1 toAppLayout:(id)arg2 fromFloatingAppLayout:(id)arg3 toFloatingAppLayout:(id)arg4 peekConfiguration:(NSInteger)arg5 ;
-(id)resizeProgressNotificationsForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)transitionDidEnd;
-(id)transitionWillBegin;
-(id)transitionWillUpdate;
-(struct CGRect )_firstStageFrameForPeekingAppLayoutWithInitialFrame:(struct CGRect )arg0 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif