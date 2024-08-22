// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCOLORPALETTE_H
#define HFCOLORPALETTE_H

@class NSArray, NSString;
@protocol NAEquatable, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface HFColorPalette : NSObject <NAEquatable, NSCopying, NSMutableCopying>



@property (readonly, copy, nonatomic) NSArray *colors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger paletteType; // ivar: _paletteType
@property (copy, nonatomic) NSArray *rawColors; // ivar: _rawColors
@property (readonly) Class superclass;


+(id)_defaultColorsOfType:(NSUInteger)arg0 ;
+(id)_defaultRGBColors;
+(id)_defaultTemperatureColors;
+(id)defaultColorPaletteOfType:(NSUInteger)arg0 ;
+(id)warmWhiteColor;
-(BOOL)_isNaturalLightPalette;
-(BOOL)isEqual:(id)arg0 ;
-(id)colorPaletteByAdjustingForColorProfile:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithColors:(id)arg0 type:(NSUInteger)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg0 type:(NSUInteger)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)serializedRepresentation;


@end


#endif