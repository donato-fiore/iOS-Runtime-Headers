// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKANALOGDIALSHAPEEDITOPTION_H
#define NTKANALOGDIALSHAPEEDITOPTION_H



#import "NTKEnumeratedEditOption.h"

@interface NTKAnalogDialShapeEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) NSUInteger dialShape;


+(id)_nameLocalizationKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)_orderedValuesRestrictedByDevice:(id)arg0 ;
+(id)_snapshotKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)optionWithShape:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(NSInteger)swatchStyle;
-(NSUInteger)_value;
-(id)_valueToFaceBundleStringDict;


@end


#endif