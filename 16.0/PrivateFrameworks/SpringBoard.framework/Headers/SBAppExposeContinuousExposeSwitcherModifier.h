// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPEXPOSECONTINUOUSEXPOSESWITCHERMODIFIER_H
#define SBAPPEXPOSECONTINUOUSEXPOSESWITCHERMODIFIER_H

@class NSString;


#import "SBSwitcherModifier.h"

@interface SBAppExposeContinuousExposeSwitcherModifier : SBSwitcherModifier {
    CGPoint _previousContentOffset;
    BOOL _isScrollingForward;
    NSUInteger _numberOfHiddenAppLayouts;
    BOOL _isShowingReopenClosedWindowsButton;
}


@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier


-(BOOL)_canShowReopenClosedWindowsButton;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isLayoutRoleDraggable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isToggleWindowingModeButtonVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)shouldAccessoryDrawShadowForAppLayout:(id)arg0 ;
-(CGFloat)homeScreenAlpha;
-(CGFloat)homeScreenBackdropBlurProgress;
-(CGFloat)homeScreenDimmingAlpha;
-(CGFloat)plusButtonAlpha;
-(CGFloat)reopenClosedWindowsButtonAlpha;
-(CGFloat)reopenClosedWindowsButtonScale;
-(NSInteger)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
-(NSInteger)headerStyleForIndex:(NSUInteger)arg0 ;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)plusButtonStyle;
-(NSInteger)shadowStyleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSInteger)wallpaperStyle;
-(id)_updateReopenClosedWindowsButtonPresence;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(id)appLayoutToScrollToBeforeReopeningClosedWindows;
-(id)handleInsertionEvent:(id)arg0 ;
-(id)handleRemovalEvent:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 ;


@end


#endif