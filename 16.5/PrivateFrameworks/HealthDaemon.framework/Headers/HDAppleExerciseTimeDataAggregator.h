// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDAPPLEEXERCISETIMEDATAAGGREGATOR_H
#define HDAPPLEEXERCISETIMEDATAAGGREGATOR_H



#import "HDPassiveDataAggregator.h"

@interface HDAppleExerciseTimeDataAggregator : HDPassiveDataAggregator



-(Class)sensorDatumClass;
-(id)dataObjectsFromSensorDatum:(id)arg0 error:(*id)arg1 ;
-(id)objectType;


@end


#endif