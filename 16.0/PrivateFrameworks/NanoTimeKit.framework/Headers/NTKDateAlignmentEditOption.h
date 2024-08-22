// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKDATEALIGNMENTEDITOPTION_H
#define NTKDATEALIGNMENTEDITOPTION_H



#import "NTKEnumeratedEditOption.h"

@interface NTKDateAlignmentEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) NSUInteger alignment;


+(id)_nameLocalizationKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)_snapshotKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)optionWithAlignment:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(id)_valueToFaceBundleStringDict;


@end


#endif