// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOWENDHARDWARESWITCHERMODIFIER_H
#define SBLOWENDHARDWARESWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"

@interface SBLowEndHardwareSwitcherModifier : SBSwitcherModifier {
    NSUInteger _options;
    BOOL _floatingAppVisibleOverSplitView;
    BOOL _floatingAppVisibleOverExclusiveForegroundApp;
}




-(BOOL)_shouldResignActiveAppsUnderFloatingApp;
-(BOOL)_shouldSimplifyForOpenFolder;
-(BOOL)_shouldSimplifyForWidgetCenterAndLibrary;
-(CGFloat)homeScreenAlpha;
-(CGFloat)homeScreenScale;
-(CGFloat)wallpaperScale;
-(id)appLayoutsToResignActive;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithSimplificationOptions:(NSUInteger)arg0 ;
-(id)keyboardSuppressionMode;


@end


#endif