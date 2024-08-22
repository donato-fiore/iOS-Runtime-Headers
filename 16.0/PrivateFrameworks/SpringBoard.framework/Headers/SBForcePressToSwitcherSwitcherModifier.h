// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFORCEPRESSTOSWITCHERSWITCHERMODIFIER_H
#define SBFORCEPRESSTOSWITCHERSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBSwitcherModifier.h"

@interface SBForcePressToSwitcherSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    NSInteger _startingEnvironmentMode;
    SBSwitcherModifier *_multitaskingModifier;
}




-(BOOL)isContainerStatusBarVisible;
-(BOOL)isContentStatusBarVisibleForIndex:(NSUInteger)arg0 ;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(CGFloat)containerStatusBarAnimationDuration;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(NSUInteger)_indexOfSelectedAppLayout;
-(id)_appLayoutToScrollToDuringTransition;
-(id)_dismissForEmptySwitcherResponseName;
-(id)_layoutSettings;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToCacheSnapshots;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 selectedAppLayout:(id)arg1 effectiveStartingEnvironmentMode:(NSInteger)arg2 multitaskingModifier:(id)arg3 ;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;


@end


#endif