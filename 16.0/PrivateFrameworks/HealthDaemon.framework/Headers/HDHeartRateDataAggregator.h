// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEARTRATEDATAAGGREGATOR_H
#define HDHEARTRATEDATAAGGREGATOR_H



#import "HDDataAggregator.h"

@interface HDHeartRateDataAggregator : HDDataAggregator



-(id)configurationForCollector:(id)arg0 ;
-(id)initWithDataCollectionManager:(id)arg0 ;
-(id)objectType;
-(void)dataCollector:(id)arg0 didCollectSensorData:(id)arg1 device:(id)arg2 ;
-(void)dealloc;
-(void)workoutManagerStateChanged:(id)arg0 ;


@end


#endif