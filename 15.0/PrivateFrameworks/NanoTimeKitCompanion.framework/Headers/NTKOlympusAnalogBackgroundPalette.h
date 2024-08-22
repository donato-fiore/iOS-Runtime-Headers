// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKOLYMPUSANALOGBACKGROUNDPALETTE_H
#define NTKOLYMPUSANALOGBACKGROUNDPALETTE_H

@class UIColor, NSString;
@protocol NTKVictoryAnalogBackgroundColorPalette;

#import <Foundation/Foundation.h>

#import "NTKOlympusColorPalette.h"

@interface NTKOlympusAnalogBackgroundPalette : NSObject <NTKVictoryAnalogBackgroundColorPalette>



@property (readonly, nonatomic) UIColor *analogDotColor;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isMulticolor;
@property (readonly, nonatomic) UIColor *numbersColor;
@property (retain, nonatomic) NTKOlympusColorPalette *olympusPalette; // ivar: _olympusPalette
@property (readonly) Class superclass;
@property (retain, nonatomic) NTKOlympusColorPalette *tritiumPalette; // ivar: _tritiumPalette


-(BOOL)hasWhiteElements;
-(CGFloat)smallDotsColorBrightness;
-(CGFloat)smallNumbersColorBrightness;
-(id)_softBlackColor;
-(id)dotMarkerAlpha;
-(id)dotMarkerColorAtIndex:(id)arg0 ;
-(id)initWithOlympusColorPalette:(id)arg0 ;
-(id)initWithOlympusColorPalette:(id)arg0 alternatePalette:(id)arg1 ;
-(id)logo;
-(id)logoColor;
-(id)numberColorAtIndex:(id)arg0 ;
-(id)tritiumBackgroundColor;
-(id)tritiumLargeNumbers;
-(id)tritiumLargeNumbersOutline;
-(id)tritiumNumbersColorAtIndex:(id)arg0 ;
-(id)tritiumOutlineNumbers;
-(id)tritiumOutlineNumbersColorAtIndex:(id)arg0 ;
-(id)tritiumSmallNumbers;


@end


#endif