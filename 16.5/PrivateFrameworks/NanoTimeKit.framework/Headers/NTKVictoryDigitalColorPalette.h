// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKVICTORYDIGITALCOLORPALETTE_H
#define NTKVICTORYDIGITALCOLORPALETTE_H

@class UIColor, NSString;
@protocol NTKVictoryDigitalColorPalette;


#import "NTKFaceColorPalette.h"

@interface NTKVictoryDigitalColorPalette : NTKFaceColorPalette <NTKVictoryDigitalColorPalette>



@property (readonly, nonatomic) UIColor *alternateComplicationColor;
@property (readonly, nonatomic) UIColor *background;
@property (readonly, nonatomic) UIColor *complication;
@property (readonly, nonatomic) UIColor *complicationPlatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIColor *digits;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIColor *primaryColor;
@property (readonly, nonatomic) UIColor *primaryShiftedColor;
@property (readonly, nonatomic) UIColor *secondaryColor;
@property (readonly, nonatomic) UIColor *secondaryShiftedColor;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *swatch;




@end


#endif