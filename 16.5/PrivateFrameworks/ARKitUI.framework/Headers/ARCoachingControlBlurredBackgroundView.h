// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARCOACHINGCONTROLBLURREDBACKGROUNDVIEW_H
#define ARCOACHINGCONTROLBLURREDBACKGROUNDVIEW_H

@class UIVisualEffectView;



@interface ARCoachingControlBlurredBackgroundView : UIVisualEffectView

@property (nonatomic) NSInteger backgroundStyle; // ivar: _backgroundStyle
@property (nonatomic) NSInteger controlStyle; // ivar: _controlStyle
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected


+(id)disabledEffectsForARStyle;
+(id)disabledEffectsForStudioStyle;
+(id)disabledSelectedEffects;
+(id)highlightedEffectsForARStyle;
+(id)highlightedEffectsForStudioStyle;
+(id)normalEffectsForARDarkStyle;
+(id)normalEffectsForARStyle;
+(id)normalEffectsForDarkModeStyle;
+(id)normalEffectsForStudioStyle;
+(id)selectedEffects;
+(id)selectedEffectsForARDarkStyle;
+(id)selectedEffectsForDarkModeStyle;
-(id)initWithFrame:(struct CGRect )arg0 backgroundStyle:(NSInteger)arg1 controlStyle:(NSInteger)arg2 ;
-(void)updateBackgroundEffects;


@end


#endif