// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMIXEDGRIDTOFULLSCREENSWITCHERMODIFIER_H
#define SBMIXEDGRIDTOFULLSCREENSWITCHERMODIFIER_H

@class NSArray;


#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBMixedGridSwitcherModifier.h"
#import "SBSwitcherModifier.h"
#import "SBRouteToMixedGridSwitcherModifier.h"

@interface SBMixedGridToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    NSInteger _direction;
    SBAppLayout *_fullScreenAppLayout;
    SBAppLayout *_floatingAppLayout;
    SBMixedGridSwitcherModifier *_mixedGridModifier;
    SBSwitcherModifier *_fullscreenModifier;
    SBRouteToMixedGridSwitcherModifier *_routeToMixedGridModifier;
    NSArray *_appLayoutsBeforeTransition;
}




-(BOOL)_isEffectivelyFullScreen;
-(BOOL)_isIndexActive:(NSUInteger)arg0 ;
-(BOOL)isLayoutRoleDraggable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleEligibleForContentDragSpringLoading:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)blurViewIconScaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(id)_appLayoutToScrollTo;
-(id)_firstFloatingAppLayout:(id)arg0 ;
-(id)_newMixedGridModifier;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)appLayoutToScrollToBeforeTransitioning;
-(id)initWithTransitionID:(id)arg0 direction:(NSInteger)arg1 fullScreenAppLayout:(id)arg2 floatingAppLayout:(id)arg3 floatingConfiguration:(NSInteger)arg4 gridModifier:(id)arg5 fullScreenModifier:(id)arg6 ;
-(id)topMostLayoutElements;
-(id)transitionDidEnd;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(void)_performBlockWhileSimulatingPostPresentationScrollViewContentOffset:(id)arg0 ;


@end


#endif