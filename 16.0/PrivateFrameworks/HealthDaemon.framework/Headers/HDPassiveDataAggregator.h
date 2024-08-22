// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDPASSIVEDATAAGGREGATOR_H
#define HDPASSIVEDATAAGGREGATOR_H



#import "HDDataAggregator.h"

@interface HDPassiveDataAggregator : HDDataAggregator



-(Class)sensorDatumClass;
-(id)dataObjectsFromSensorDatum:(id)arg0 error:(*id)arg1 ;
-(void)dataCollector:(id)arg0 didCollectSensorData:(id)arg1 device:(id)arg2 ;


@end


#endif