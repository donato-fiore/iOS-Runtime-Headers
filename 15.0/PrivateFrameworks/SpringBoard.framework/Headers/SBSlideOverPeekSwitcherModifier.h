// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSLIDEOVERPEEKSWITCHERMODIFIER_H
#define SBSLIDEOVERPEEKSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBAppSwitcherSettings.h"
#import "SBAppLayout.h"
#import "SBActiveAppLayoutFloatingSwitcherModifier.h"

@interface SBSlideOverPeekSwitcherModifier : SBSwitcherModifier {
    SBAppSwitcherSettings *_switcherSettings;
    NSInteger _peekConfiguration;
    SBAppLayout *_peekingAppLayout;
    NSInteger _environmentMode;
    NSInteger _fromFloatingConfiguration;
    SBActiveAppLayoutFloatingSwitcherModifier *_floorModifier;
}




-(BOOL)isHomeScreenContentRequired;
-(BOOL)isLayoutRoleSelectable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldAllowContentViewTouchesForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldConfigureInAppDockHiddenAssertion;
-(BOOL)wantsDockBehaviorAssertion;
-(BOOL)wantsDockWindowLevelAssertion;
-(BOOL)wantsHomeScreenPointerInteractions;
-(CGFloat)dockProgress;
-(CGFloat)dockWindowLevel;
-(CGFloat)homeScreenAlpha;
-(CGFloat)homeScreenBackdropBlurProgress;
-(CGFloat)homeScreenDimmingAlpha;
-(CGFloat)homeScreenScale;
-(NSInteger)dockUpdateMode;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(NSUInteger)dockWindowLevelPriority;
-(NSUInteger)slideOverTongueDirection;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)handleTapAppLayoutEvent:(id)arg0 ;
-(id)initWithAppLayout:(id)arg0 peekConfiguration:(NSInteger)arg1 environmentMode:(NSInteger)arg2 fromFloatingConfiguration:(NSInteger)arg3 ;
-(id)visibleHomeAffordanceLayoutElements;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;


@end


#endif