// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKBIGNUMERALSANALOGCOLOREDITOPTION_H
#define NTKBIGNUMERALSANALOGCOLOREDITOPTION_H



#import "NTKFaceColorEditOption.h"

@interface NTKBigNumeralsAnalogColorEditOption : NTKFaceColorEditOption

@property (readonly, nonatomic) NSUInteger color;


+(id)__orderedValuesForDevice:(id)arg0 ;
+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)_snapshotKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)optionWithColor:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)pigmentFaceDomain;
-(BOOL)isPrideOption;
-(BOOL)optionExistsInDevice:(id)arg0 ;
-(id)_valueToFaceBundleStringDict;
-(id)pigmentEditOption;


@end


#endif