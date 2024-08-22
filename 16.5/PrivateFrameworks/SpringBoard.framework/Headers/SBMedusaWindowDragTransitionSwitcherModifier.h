// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMEDUSAWINDOWDRAGTRANSITIONSWITCHERMODIFIER_H
#define SBMEDUSAWINDOWDRAGTRANSITIONSWITCHERMODIFIER_H

@class NSSet, NSMutableSet;


#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBMedusaWindowDragTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    SBAppLayout *_toFloatingAppLayout;
    SBAppLayout *_discardedAppLayout;
    NSInteger _discardedLayoutRole;
    NSUInteger _finalWindowDragDestination;
    BOOL _isGoingToHomeScreenPeek;
    NSSet *_initiallyBlurredDisplayItems;
    NSMutableSet *_waitingForSceneUpdateForDisplayItems;
    BOOL _hasAddedChildTransitionModifiers;
}




-(BOOL)_goingToHomeScreenPeekFromSplitView;
-(BOOL)_minimizingCenterWindow;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(CGFloat)backgroundOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)homeScreenDimmingAlpha;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutContainingAppLayout:(id)arg0 ;
-(id)appLayoutToAttachSlideOverTongue;
-(id)handleSceneReadyEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 selectedAppLayout:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 toFloatingAppLayout:(id)arg4 toHomeScreenPeek:(BOOL)arg5 toAppExposeBundleIdentifier:(id)arg6 initiallyBlurredDisplayItems:(id)arg7 windowDragDestination:(NSUInteger)arg8 ;
-(id)topMostLayoutElements;
-(id)transitionDidEnd;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif