// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHOMESCREENZOOMSWITCHERMODIFIER_H
#define SBHOMESCREENZOOMSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"

@interface SBHomeScreenZoomSwitcherModifier : SBTransitionSwitcherModifier {
    NSInteger _direction;
}




-(BOOL)_isEffectivelyHome;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isWallpaperRequiredForSwitcher;
-(CGFloat)homeScreenAlpha;
-(CGFloat)homeScreenBackdropBlurProgress;
-(CGFloat)homeScreenDimmingAlpha;
-(CGFloat)homeScreenScale;
-(CGFloat)wallpaperScale;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 direction:(NSInteger)arg1 ;


@end


#endif