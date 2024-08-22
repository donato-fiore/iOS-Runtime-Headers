// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHOMESCREENCONTINUOUSEXPOSESWITCHERMODIFIER_H
#define SBHOMESCREENCONTINUOUSEXPOSESWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBHomeScreenSwitcherModifier.h"
#import "SBGridLayoutSwitcherModifier.h"

@interface SBHomeScreenContinuousExposeSwitcherModifier : SBSwitcherModifier {
    SBHomeScreenSwitcherModifier *_homeScreenModifier;
    SBGridLayoutSwitcherModifier *_gridLayoutModifier;
}




-(BOOL)isContainerStatusBarVisible;
-(BOOL)isLayoutRoleSelectable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isScrollEnabled;
-(BOOL)shouldAllowContentViewTouchesForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleOpacityForIndex:(NSUInteger)arg0 ;
-(NSInteger)shadowStyleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSInteger)touchBehaviorForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)appLayoutsToCacheSnapshots;
-(id)init;
-(id)topMostLayoutElements;
-(struct CGPoint )scrollViewContentOffset;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct SBSwitcherGradientWallpaperAttributes )wallpaperGradientAttributesForIndex:(NSUInteger)arg0 ;


@end


#endif