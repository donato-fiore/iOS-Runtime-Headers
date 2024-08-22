// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKBLACKCOMBCOLORPALETTE_H
#define NTKBLACKCOMBCOLORPALETTE_H

@class UIColor, NSString;
@protocol NTKBlackcombColorPalette;


#import "NTKFaceColorPalette.h"
#import "NTKInterpolatedColorPalette.h"

@interface NTKBlackcombColorPalette : NTKFaceColorPalette <NTKBlackcombColorPalette>



@property (readonly, nonatomic) UIColor *background;
@property (readonly, nonatomic) UIColor *complication;
@property (readonly, nonatomic) UIColor *darkBackground;
@property (readonly, nonatomic) UIColor *darkHourMarker;
@property (readonly, nonatomic) UIColor *darkLargeTick;
@property (readonly, nonatomic) UIColor *darkPlatterText;
@property (readonly, nonatomic) UIColor *darkSmallTick;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger dialColorStyle; // ivar: _dialColorStyle
@property (retain, nonatomic) NTKInterpolatedColorPalette *dialColorTransitionalPalette; // ivar: _dialColorTransitionalPalette
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIColor *hourMarker;
@property (readonly, nonatomic) UIColor *largeTick;
@property (readonly, nonatomic) UIColor *lightBackground;
@property (readonly, nonatomic) UIColor *lightHourMarker;
@property (readonly, nonatomic) UIColor *lightLargeTick;
@property (readonly, nonatomic) UIColor *lightPlatterText;
@property (readonly, nonatomic) UIColor *lightSmallTick;
@property (readonly, nonatomic) UIColor *platterText;
@property (readonly, nonatomic) UIColor *primaryColor;
@property (readonly, nonatomic) UIColor *primaryShiftedColor;
@property (readonly, nonatomic) NSInteger richComplicationViewTheme;
@property (readonly, nonatomic) UIColor *secondHand;
@property (readonly, nonatomic) UIColor *secondaryColor;
@property (readonly, nonatomic) UIColor *secondaryShiftedColor;
@property (readonly, nonatomic) UIColor *smallTick;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *swatch;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identifier;
-(id)init;
-(id)transitionalPaletteFromDialColor:(NSUInteger)arg0 toDialColor:(NSUInteger)arg1 ;
-(id)tritiumPalette;


@end


#endif