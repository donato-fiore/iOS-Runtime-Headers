// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLOATINGLOWENDHARDWAREMODIFIER_H
#define SBFLOATINGLOWENDHARDWAREMODIFIER_H



#import "SBSwitcherModifier.h"

@interface SBFloatingLowEndHardwareModifier : SBSwitcherModifier {
    NSUInteger _options;
    BOOL _floatingSwitcherVisible;
    BOOL _floatingAppVisibleOverSplitView;
    BOOL _floatingAppVisibleOverExclusiveForegroundApp;
    BOOL _shouldDimAndBlockTouches;
    NSInteger _floatingConfiguration;
}




-(BOOL)_shouldDimAndBlockTouchesToAppsUnderFloating;
-(BOOL)switcherDimmingViewBlocksTouches;
-(BOOL)wantsSwitcherDimmingView;
-(CGFloat)switcherDimmingAlpha;
-(NSInteger)_stashedFloatingConfigurationForFloatingConfiguration:(NSInteger)arg0 ;
-(id)handleTapOutsideToDismissEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 ;


@end


#endif