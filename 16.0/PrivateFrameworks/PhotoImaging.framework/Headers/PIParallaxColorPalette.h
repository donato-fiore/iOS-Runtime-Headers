// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPARALLAXCOLORPALETTE_H
#define PIPARALLAXCOLORPALETTE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PIParallaxColorPalette : NSObject

@property (readonly, copy, nonatomic) NSArray *primaryColors; // ivar: _primaryColors
@property (readonly, copy, nonatomic) NSArray *secondaryColors; // ivar: _secondaryColors
@property (readonly, nonatomic) NSArray *suggestions; // ivar: _suggestions


+(id)_loadColorsFromValues:(id)arg0 mode:(id)arg1 error:(*id)arg2 ;
+(id)_paletteWithConfigurationDictionary:(id)arg0 error:(*id)arg1 ;
+(id)_serializeColors:(id)arg0 mode:(id)arg1 ;
+(id)colorBGPalette;
+(id)colorWashDuotonePalette;
+(id)colorWashSinglePalette;
+(id)customPalette;
+(id)loadPaletteFromURL:(id)arg0 error:(*id)arg1 ;
+(id)loadPaletteWithName:(id)arg0 ;
-(BOOL)writeToURL:(id)arg0 mode:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)_lookupColor:(id)arg0 ;
-(id)initWithColors:(id)arg0 ;
-(id)initWithPrimaryColors:(id)arg0 secondaryColors:(id)arg1 ;
-(id)paletteColorForColor:(id)arg0 ;
-(id)suggestionForColor:(id)arg0 ;


@end


#endif