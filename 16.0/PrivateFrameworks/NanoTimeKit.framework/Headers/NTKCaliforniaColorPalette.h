// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCALIFORNIACOLORPALETTE_H
#define NTKCALIFORNIACOLORPALETTE_H

@class UIColor, NSString;
@protocol NTKCaliforniaColorPalette, NTKCircularAnalogDialColorPalette;


#import "NTKFaceColorPalette.h"

@interface NTKCaliforniaColorPalette : NTKFaceColorPalette <NTKCaliforniaColorPalette, NTKCircularAnalogDialColorPalette>



@property (readonly, nonatomic) UIColor *background;
@property (readonly, nonatomic) UIColor *bezelComplication;
@property (readonly, nonatomic) UIColor *circularBackground;
@property (readonly, nonatomic) UIColor *circularComplication;
@property (readonly, nonatomic) UIColor *circularComplicationSecondary;
@property (readonly, nonatomic) UIColor *clockHands;
@property (readonly, nonatomic) UIColor *clockHandsInlay;
@property (readonly, nonatomic) UIColor *cornerComplication;
@property (readonly, nonatomic) UIColor *cornerComplicationSecondary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIColor *digit;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBlackBackground;
@property (readonly, nonatomic) BOOL isMulticolorPalette;
@property (readonly, nonatomic) UIColor *largeTick;
@property (readonly, nonatomic) UIColor *primaryColor;
@property (readonly, nonatomic) UIColor *primaryShiftedColor;
@property (readonly, nonatomic) NSInteger richComplicationViewTheme;
@property (readonly, nonatomic) UIColor *secondHand;
@property (readonly, nonatomic) UIColor *secondaryColor;
@property (readonly, nonatomic) UIColor *secondaryShiftedColor;
@property (readonly, nonatomic) UIColor *simpleTextComplication;
@property (retain, nonatomic) UIColor *simpleTextComplicationColorValue;
@property (readonly, nonatomic) UIColor *smallTick;
@property (readonly, nonatomic) UIColor *smallTickCircular;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *swatch;


-(BOOL)isLightColor;
-(id)_colorForCircularTicksForMinute:(NSUInteger)arg0 ;
-(id)circularDialFillColor;
-(id)circularDialSubtickColor;
-(id)circularDialTickColor;
-(id)colorForCircularTicksForHour:(NSUInteger)arg0 ;
-(id)colorForCircularTicksForMinute:(NSUInteger)arg0 ;
-(id)colorForHourMarker:(NSUInteger)arg0 ;
-(id)digitColorAtIndex:(NSUInteger)arg0 ;
-(id)init;


@end


#endif