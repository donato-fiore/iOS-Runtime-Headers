// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBGRIDSWIPEUPGESTURESWITCHERMODIFIER_H
#define SBGRIDSWIPEUPGESTURESWITCHERMODIFIER_H



#import "SBGestureSwitcherModifier.h"
#import "SBDismissSiriSwitcherModifier.h"

@interface SBGridSwipeUpGestureSwitcherModifier : SBGestureSwitcherModifier {
    CGPoint _translation;
    BOOL _isApplyingContentViewScaleToSwitcherViewBounds;
    SBDismissSiriSwitcherModifier *_dismissSiriModifier;
}


@property (readonly, nonatomic) BOOL delayCompletionUntilTransitionBegins; // ivar: _delayCompletionUntilTransitionBegins


-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(CGFloat)contentViewScale;
-(NSInteger)finalResponseForGestureEvent:(id)arg0 ;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 delayCompletionUntilTransitionBegins:(BOOL)arg1 ;
-(id)visibleAppLayouts;
-(struct CGPoint )scrollViewContentOffset;
-(struct CGRect )switcherViewBounds;
-(void)_applyPrototypeSettings;
-(void)_performBlockByApplyContentViewScaleToSwitcherViewBounds:(id)arg0 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif