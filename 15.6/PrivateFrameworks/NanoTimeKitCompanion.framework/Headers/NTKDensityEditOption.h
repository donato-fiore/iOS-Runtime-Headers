// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKDENSITYEDITOPTION_H
#define NTKDENSITYEDITOPTION_H



#import "NTKEnumeratedEditOption.h"

@interface NTKDensityEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) NSUInteger density;


+(id)_nameLocalizationKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)_snapshotKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)optionWithDensity:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(NSInteger)swatchStyle;
-(id)_valueToFaceBundleStringDict;


@end


#endif