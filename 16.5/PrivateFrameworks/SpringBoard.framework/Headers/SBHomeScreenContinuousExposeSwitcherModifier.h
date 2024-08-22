// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHOMESCREENCONTINUOUSEXPOSESWITCHERMODIFIER_H
#define SBHOMESCREENCONTINUOUSEXPOSESWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBStripContinuousExposeSwitcherModifier.h"
#import "SBHomeScreenSwitcherModifier.h"

@interface SBHomeScreenContinuousExposeSwitcherModifier : SBSwitcherModifier {
    SBStripContinuousExposeSwitcherModifier *_stripModifier;
    SBHomeScreenSwitcherModifier *_homeScreenModifier;
}




-(BOOL)isContainerStatusBarVisible;
-(BOOL)isLayoutRoleSelectable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isResizeGrabberVisibleForAppLayout:(id)arg0 ;
-(BOOL)isScrollEnabled;
-(BOOL)shouldAllowContentViewTouchesForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)continuousExposeStripProgress;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleOpacityForIndex:(NSUInteger)arg0 ;
-(NSInteger)shadowStyleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSInteger)touchBehaviorForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)init;
-(id)responseForProposedChildResponse:(id)arg0 childModifier:(id)arg1 event:(id)arg2 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct SBSwitcherGradientWallpaperAttributes )wallpaperGradientAttributesForIndex:(NSUInteger)arg0 ;


@end


#endif