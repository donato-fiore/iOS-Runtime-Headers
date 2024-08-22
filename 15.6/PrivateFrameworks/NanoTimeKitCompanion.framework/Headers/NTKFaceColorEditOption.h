// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKFACECOLOREDITOPTION_H
#define NTKFACECOLOREDITOPTION_H

@class NSString;
@protocol NTKPigmentEditOptionConvertible;


#import "NTKEnumeratedEditOption.h"

@interface NTKFaceColorEditOption : NTKEnumeratedEditOption <NTKPigmentEditOptionConvertible>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger faceColor;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)value:(NSInteger)arg0 existsInDevice:(id)arg1 ;
+(id)__allOrderedColors;
+(id)__orderedValuesForDevice:(id)arg0 ;
+(id)_optionByValidatingValueOfInvalidOption:(id)arg0 ;
+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)_orderedValuesRestrictedByDevice:(id)arg0 ;
+(id)_snapshotKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)_thirdPartyValues;
+(id)optionByValidatingValueOfInvalidOption:(id)arg0 ;
+(id)optionWithFaceColor:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)pigmentFaceDomain;
+(id)standardColorEditOptionsForDevice:(id)arg0 ;
+(id)standardColorValuesForDevice:(id)arg0 ;
+(id)standardColorsWithColorClass:(Class)arg0 forDevice:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)optionExistsInDevice:(id)arg0 ;
-(NSInteger)swatchStyle;
-(id)_valueToFaceBundleStringDict;
-(id)localizedName;
-(id)pigmentEditOption;


@end


#endif