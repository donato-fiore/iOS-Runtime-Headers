// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHEARTEVENTDATAAGGREGATOR_H
#define HDHEARTEVENTDATAAGGREGATOR_H



#import "HDPassiveDataAggregator.h"

@interface HDHeartEventDataAggregator : HDPassiveDataAggregator



-(BOOL)didPersistObjects:(id)arg0 lastDatum:(id)arg1 collector:(id)arg2 error:(*id)arg3 ;
-(Class)sensorDatumClass;
-(id)_categoryType;
-(id)dataObjectsFromSensorDatum:(id)arg0 error:(*id)arg1 ;
-(id)objectType;


@end


#endif