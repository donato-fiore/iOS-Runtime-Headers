// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKPALETTECOLOREDITOPTION_H
#define NTKPALETTECOLOREDITOPTION_H

@class NSString;
@protocol NTKPigmentEditOptionConvertible;


#import "NTKEnumeratedEditOption.h"

@interface NTKPaletteColorEditOption : NTKEnumeratedEditOption <NTKPigmentEditOptionConvertible>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger paletteColor;
@property (readonly) Class superclass;


+(NSUInteger)colorValueForColorName:(id)arg0 ;
+(id)__orderedValuesForDevice:(id)arg0 ;
+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)_orderedValuesRestrictedByDevice:(id)arg0 ;
+(id)_snapshotKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)colorNameForColorValue:(NSUInteger)arg0 ;
+(id)optionByValidatingValueOfInvalidOption:(id)arg0 ;
+(id)optionWithPaletteColor:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(void)colorName:(*id)arg0 collectionName:(*id)arg1 forColorValue:(NSUInteger)arg2 ;
-(BOOL)optionExistsInDevice:(id)arg0 ;
-(NSInteger)swatchStyle;
-(id)_valueToFaceBundleStringDict;
-(id)localizedName;
-(id)pigmentEditOption;


@end


#endif