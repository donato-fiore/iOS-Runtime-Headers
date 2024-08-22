// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKZEUSCOLOREDITOPTION_H
#define NTKZEUSCOLOREDITOPTION_H

@class NSString;
@protocol NTKPigmentEditOptionConvertible;


#import "NTKEnumeratedEditOption.h"

@interface NTKZeusColorEditOption : NTKEnumeratedEditOption <NTKPigmentEditOptionConvertible>



@property (readonly, nonatomic) NSUInteger color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)colorCodeForColorName:(id)arg0 ;
+(id)__orderedValuesForDevice:(id)arg0 ;
+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)_snapshotKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)colorNameForColorValue:(NSUInteger)arg0 ;
+(id)domain;
+(id)optionWithColor:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(BOOL)optionExistsInDevice:(id)arg0 ;
-(NSInteger)swatchStyle;
-(id)_valueToFaceBundleStringDict;
-(id)localizedName;
-(id)pigmentEditOption;


@end


#endif