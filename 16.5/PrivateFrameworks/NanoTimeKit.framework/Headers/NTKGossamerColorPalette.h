// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKGOSSAMERCOLORPALETTE_H
#define NTKGOSSAMERCOLORPALETTE_H

@class UIColor, NSArray, NSNumber, NSString;
@protocol NTKGossamerColorPalette;


#import "NTKFaceColorPalette.h"

@interface NTKGossamerColorPalette : NTKFaceColorPalette <NTKGossamerColorPalette>

 {
    BOOL _isDirty;
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
    UIColor *_accentColor;
    UIColor *_topAccentColor;
    UIColor *_centerAccentColor;
    UIColor *_bottomAccentColor;
    UIColor *_topApproximateBackgroundColor;
    UIColor *_centerApproximateBackgroundColor;
    UIColor *_bottomApproximateBackgroundColor;
    NSArray *_backgroundGradientColors;
    UIColor *_swatchComplicationPlaceholderColor;
    NSNumber *_scaleFactor;
    NSNumber *_monochromeFraction;
    NSNumber *_imageViewFraction;
    NSNumber *_editingComplicationsFraction;
    NSNumber *_foregroundGradientFraction;
    NSNumber *_tintedFraction;
    UIColor *_modularCompactDialBackgroundColor;
    UIColor *_modularCompactDialForegroundPrimaryColor;
    UIColor *_modularCompactDialForegroundSecondaryColor;
    UIColor *_modularCompactDialSecondHandColor;
    UIColor *_modularCompactDialDigitalTimeColor;
    UIColor *_infographModularDateLabelColor;
    UIColor *_infographModularDateAccentColor;
    UIColor *_infographModularTimeLabelColor;
    UIColor *_xLargeSmallTimeTritiumOutlineColor;
    UIColor *_xLargeLargeTimeTritiumOutlineColor;
    UIColor *_xLargeLargeTimeTritiumFillColor;
}


@property (readonly, nonatomic) UIColor *accentColor;
@property (nonatomic) ? approximateComplicationPositions; // ivar: _approximateComplicationPositions
@property (readonly, nonatomic) NSArray *backgroundGradientColors;
@property (readonly, nonatomic) UIColor *backgroundOffGradientBottomColor;
@property (readonly, nonatomic) UIColor *backgroundOffGradientMidColor;
@property (readonly, nonatomic) UIColor *backgroundOffGradientTopColor;
@property (nonatomic) NSUInteger backgroundStyle; // ivar: _backgroundStyle
@property (readonly, nonatomic) UIColor *bottomAccentColor;
@property (readonly, nonatomic) UIColor *bottomApproximateBackgroundColor;
@property (readonly, nonatomic) UIColor *centerAccentColor;
@property (readonly, nonatomic) UIColor *centerApproximateBackgroundColor;
@property (readonly, nonatomic) UIColor *dateLabelAccentColor;
@property (readonly, nonatomic) UIColor *dateLabelTextColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIColor *dialColor;
@property (readonly, nonatomic) UIColor *digitalTimeLabelColor;
@property (readonly, nonatomic) NSNumber *editingComplicationsFraction;
@property (readonly, nonatomic) UIColor *foregroundColor;
@property (readonly, nonatomic) NSNumber *foregroundGradientFraction;
@property (readonly, nonatomic) UIColor *gradientBottomColor;
@property (readonly, nonatomic) UIColor *gradientMidColor;
@property (readonly, nonatomic) UIColor *gradientTopColor;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIColor *hourMinuteHandFillColor;
@property (readonly, nonatomic) UIColor *hourMinuteHandStrokeColor;
@property (readonly, nonatomic) UIColor *hourTickColor;
@property (readonly, nonatomic) NSNumber *imageViewFraction;
@property (nonatomic) BOOL isEditingComplications; // ivar: _isEditingComplications
@property (nonatomic) BOOL isSwatchPreview; // ivar: _isSwatchPreview
@property (readonly, nonatomic) UIColor *largeTimeTritiumFillColor;
@property (readonly, nonatomic) UIColor *largeTimeTritiumOutlineColor;
@property (readonly, nonatomic) UIColor *minuteTickColor;
@property (readonly, nonatomic) NSNumber *monochromeFraction;
@property (readonly, nonatomic) UIColor *rangeDarkColor;
@property (readonly, nonatomic) UIColor *rangeLightColor;
@property (readonly, nonatomic) NSNumber *scaleFactor;
@property (readonly, nonatomic) UIColor *secondHandColor;
@property (readonly, nonatomic) UIColor *secondTickActiveColor;
@property (readonly, nonatomic) UIColor *secondTickInactiveColor;
@property (readonly, nonatomic) UIColor *smallTimeTritiumOutlineColor;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *swatchComplicationPlaceholderColor;
@property (readonly, nonatomic) UIColor *timeLabelColor;
@property (readonly, nonatomic) NSNumber *tintedFraction;
@property (readonly, nonatomic) UIColor *topAccentColor;
@property (readonly, nonatomic) UIColor *topApproximateBackgroundColor;


+(CGFloat)contentScaleForTintedBackground;
-(BOOL)isCuratedColor;
-(NSInteger)curatedNumber;
-(id)_starlightBackgroundColors;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identifier;
-(id)init;
-(id)swatchImageForSize:(struct CGSize )arg0 ;
-(void)_setApproximateComplicationBackgroundColors;
-(void)configurationDidChange:(id)arg0 ;
-(void)resolveColorsIfNeeded;


@end


#endif