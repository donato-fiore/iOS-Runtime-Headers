// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKOLYMPUSCOLORPALETTE_H
#define NTKOLYMPUSCOLORPALETTE_H

@class UIColor, NSString;
@protocol NTKOlympusColorPalette, NTKCircularAnalogDialColorPalette;


#import "NTKFaceColorPalette.h"

@interface NTKOlympusColorPalette : NTKFaceColorPalette <NTKOlympusColorPalette, NTKCircularAnalogDialColorPalette>



@property (readonly, nonatomic) UIColor *bezelComplicationColor;
@property (readonly, nonatomic) UIColor *black;
@property (readonly, nonatomic) UIColor *circularDialFillColor;
@property (readonly, nonatomic) UIColor *circularDialSubtickColor;
@property (readonly, nonatomic) UIColor *circularDialTickColor;
@property (readonly, nonatomic) UIColor *cornerComplicationsAccentColor;
@property (readonly, nonatomic) UIColor *customBlack;
@property (readonly, nonatomic) UIColor *darker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger dial; // ivar: _dial
@property (readonly, nonatomic) UIColor *digits;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isMulticolorPalette;
@property (readonly, nonatomic) UIColor *largeHandsColor;
@property (readonly, nonatomic) UIColor *logo;
@property (readonly, nonatomic) UIColor *orangeLogo;
@property (readonly, nonatomic) UIColor *primaryBackgroundColor;
@property (readonly, nonatomic) UIColor *primaryColor;
@property (readonly, nonatomic) UIColor *primaryLogoColor;
@property (readonly, nonatomic) UIColor *primaryOutlineTextColor;
@property (readonly, nonatomic) UIColor *primaryShiftedColor;
@property (readonly, nonatomic) UIColor *primaryTextColor;
@property (readonly, nonatomic) UIColor *secondHandColor;
@property (readonly, nonatomic) UIColor *secondaryBackgroundColor;
@property (readonly, nonatomic) UIColor *secondaryColor;
@property (readonly, nonatomic) UIColor *secondaryLogoColor;
@property (readonly, nonatomic) UIColor *secondaryOutlineTextColor;
@property (readonly, nonatomic) UIColor *secondaryShiftedColor;
@property (readonly, nonatomic) UIColor *secondaryTextColor;
@property (readonly, nonatomic) UIColor *softBlack;
@property (readonly, nonatomic) UIColor *softerBlack;
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *swatch;
@property (readonly, nonatomic) UIColor *ticks;
@property (nonatomic) BOOL useSmallFont; // ivar: _useSmallFont


-(CGFloat)colorBrightness:(id)arg0 ;
-(id)_secondHandForColorName:(id)arg0 ;
-(id)colorForCircularTicksForHour:(NSUInteger)arg0 ;
-(id)colorForCircularTicksForMinute:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identifier;
-(id)init;
-(id)mainColor;


@end


#endif