// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCURATEDCOLOREDITOPTION_H
#define NTKCURATEDCOLOREDITOPTION_H



#import "NTKFaceColorEditOption.h"

@interface NTKCuratedColorEditOption : NTKFaceColorEditOption



+(id)_curatedColorValuesForDevice:(id)arg0 ;
+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)_snapshotKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)curatedColorValuesForDevice:(id)arg0 ;
-(id)_valueToFaceBundleStringDict;


@end


#endif