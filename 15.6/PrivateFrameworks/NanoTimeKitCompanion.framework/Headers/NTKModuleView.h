// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKMODULEVIEW_H
#define NTKMODULEVIEW_H

@class UIControl, UIView, NSString, CLKDevice, UIColor;
@protocol NTKContainerViewLayoutDelegate, NTKControl, CLKMonochromeComplicationView, CLKMonochromeFilterProvider;


#import "NTKFaceColorScheme.h"

@interface NTKModuleView : UIControl <NTKContainerViewLayoutDelegate, NTKControl, CLKMonochromeComplicationView>

 {
    UIView *_highlightView;
}


@property (retain, nonatomic) NTKFaceColorScheme *colorScheme; // ivar: _colorScheme
@property (nonatomic) CGFloat contentHeight; // ivar: _contentHeight
@property (nonatomic) CGFloat contentHeightOffset; // ivar: _contentHeightOffset
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLKDevice *device; // ivar: _device
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: filterProvider
@property (retain, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat highlightAlpha; // ivar: _highlightAlpha
@property (retain, nonatomic) UIColor *highlightBackgroundColor; // ivar: _highlightBackgroundColor
@property (nonatomic) CGFloat highlightCornerRadius; // ivar: _highlightCornerRadius
@property (retain, nonatomic) UIColor *overrideColor; // ivar: _overrideColor
@property (retain, nonatomic) UIColor *secondaryForegroundColor; // ivar: _secondaryForegroundColor
@property (readonly) Class superclass;


+(CGFloat)_defaultCornerRadiusForDevice:(id)arg0 ;
+(CGFloat)cornerRadiusForComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
-(BOOL)shouldCancelTouchesInScrollview;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewsAndSpacingArrayForSpace:(CGFloat)arg0 view:(id)arg1 ;
-(id)viewsAndSpacingArrayForSpace:(CGFloat)arg0 view:(id)arg1 space:(CGFloat)arg2 view:(id)arg3 ;
-(void)_applyMonochromeTransitionFraction:(CGFloat)arg0 fromFaceColorPalette:(id)arg1 toFaceColorPalette:(id)arg2 ;
-(void)_enumerateAllForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_layoutContentView;
-(void)_updateColors;
-(void)applyColorScheme:(id)arg0 ;
-(void)applyFaceColor:(NSUInteger)arg0 units:(NSUInteger)arg1 ;
-(void)applyFaceColorPalette:(id)arg0 units:(NSUInteger)arg1 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromFaceColor:(NSUInteger)arg1 toFaceColor:(NSUInteger)arg2 units:(NSUInteger)arg3 brightenedUnits:(NSUInteger)arg4 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromFaceColorPalette:(id)arg1 toFaceColorPalette:(id)arg2 units:(NSUInteger)arg3 brightenedUnits:(NSUInteger)arg4 ;
-(void)layoutContainerView:(id)arg0 ;
-(void)layoutSubviews;
-(void)naturalHorizontalLayoutForViewsAndSpacing:(id)arg0 columnAlignmentSpacing:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif