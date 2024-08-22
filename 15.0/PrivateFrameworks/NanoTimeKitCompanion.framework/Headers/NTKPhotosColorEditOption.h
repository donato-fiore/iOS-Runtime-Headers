// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKPHOTOSCOLOREDITOPTION_H
#define NTKPHOTOSCOLOREDITOPTION_H



#import "NTKFaceColorEditOption.h"

@interface NTKPhotosColorEditOption : NTKFaceColorEditOption

@property (readonly, nonatomic) NSUInteger color;


+(id)__orderedValuesForDevice:(id)arg0 ;
+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)_snapshotKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)optionWithColor:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(id)_valueToFaceBundleStringDict;
-(id)pigmentEditOption;


@end


#endif