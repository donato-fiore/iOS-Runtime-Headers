// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFORCEPRESSTOHOMESWITCHERMODIFIER_H
#define SBFORCEPRESSTOHOMESWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBSwitcherModifier.h"

@interface SBForcePressToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    NSInteger _startingEnvironmentMode;
    CGFloat _initalPanThreshold;
    SBSwitcherModifier *_multitaskingModifier;
}




-(BOOL)isContainerStatusBarVisible;
-(BOOL)isContentStatusBarVisibleForIndex:(NSUInteger)arg0 ;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(CGFloat)_switcherCardScale;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(id)appLayoutsToCacheSnapshots;
-(id)initWithTransitionID:(id)arg0 selectedAppLayout:(id)arg1 effectiveStartingEnvironmentMode:(NSInteger)arg2 initialPanThreshold:(CGFloat)arg3 multitaskingModifier:(id)arg4 ;
-(id)visibleAppLayouts;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif