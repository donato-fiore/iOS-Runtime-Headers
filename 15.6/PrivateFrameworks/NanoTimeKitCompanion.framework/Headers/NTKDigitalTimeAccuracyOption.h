// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKDIGITALTIMEACCURACYOPTION_H
#define NTKDIGITALTIMEACCURACYOPTION_H



#import "NTKEnumeratedEditOption.h"

@interface NTKDigitalTimeAccuracyOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) NSUInteger accuracy;


+(NSInteger)indexForAccuracy:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)_nameLocalizationKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)_snapshotKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)optionWithAccuracy:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(id)_valueToFaceBundleStringDict;


@end


#endif