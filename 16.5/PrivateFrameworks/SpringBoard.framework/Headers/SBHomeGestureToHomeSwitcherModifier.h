// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHOMEGESTURETOHOMESWITCHERMODIFIER_H
#define SBHOMEGESTURETOHOMESWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"

@interface SBHomeGestureToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    BOOL _showingOrAnimatingCardsForFlyIn;
}




-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(NSUInteger)transactionCompletionOptions;
-(id)appLayoutsToCacheSnapshots;
-(id)initWithTransitionID:(id)arg0 showingOrAnimatingCardsForFlyIn:(BOOL)arg1 ;
-(id)visibleAppLayouts;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif