// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKSPECTRUMANALOGCOLOREDITOPTION_H
#define NTKSPECTRUMANALOGCOLOREDITOPTION_H



#import "NTKFaceColorEditOption.h"

@interface NTKSpectrumAnalogColorEditOption : NTKFaceColorEditOption

@property (readonly, nonatomic) NSUInteger color;


+(id)__orderedValuesForDevice:(id)arg0 ;
+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)_snapshotKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)domain;
+(id)optionWithColor:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(BOOL)isPrideOption;
-(BOOL)optionExistsInDevice:(id)arg0 ;
-(NSInteger)swatchStyle;
-(id)_valueToFaceBundleStringDict;
-(id)localizedName;
-(id)pigmentEditOption;


@end


#endif