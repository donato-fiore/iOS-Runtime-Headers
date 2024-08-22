// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHOMEGESTURETOZOOMDOWNSWITCHERMODIFIER_H
#define SBHOMEGESTURETOZOOMDOWNSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBSwitcherModifier.h"
#import "SBGestureInitiatedIconZoomAnimationAttributesSwitcherModifier.h"

@interface SBHomeGestureToZoomDownSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_nonGestureInitiatedZoomModifier;
    NSInteger _startingEnvironmentMode;
    SBGestureInitiatedIconZoomAnimationAttributesSwitcherModifier *_animationAttributesModifier;
}




-(BOOL)completesWhenChildrenComplete;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(id)appLayoutsToCacheSnapshots;
-(id)initWithTransitionID:(id)arg0 appLayout:(id)arg1 nonGestureInitiatedZoomModifier:(id)arg2 effectiveStartingEnvironmentMode:(NSInteger)arg3 liftOffVelocity:(struct CGPoint )arg4 adjustAnimationAttributes:(BOOL)arg5 ;
-(id)responseForProposedChildResponse:(id)arg0 childModifier:(id)arg1 event:(id)arg2 ;


@end


#endif