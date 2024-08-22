// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFULLSCREENTOSPLITVIEWSWITCHERMODIFIER_H
#define SBFULLSCREENTOSPLITVIEWSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBFullScreenToSplitViewSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_existingAppLayout;
    SBAppLayout *_incomingAppLayout;
}




-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isWallpaperRequiredForSwitcher;
-(CGFloat)backgroundOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)blurDelayForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)homeScreenDimmingAlpha;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSInteger)wallpaperStyle;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleSceneReadyEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 fromAppLayout:(id)arg1 toAppLayout:(id)arg2 ;
-(id)topMostLayoutElements;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;


@end


#endif