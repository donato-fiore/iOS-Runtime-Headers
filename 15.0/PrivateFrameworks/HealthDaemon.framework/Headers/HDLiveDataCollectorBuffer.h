// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDLIVEDATACOLLECTORBUFFER_H
#define HDLIVEDATACOLLECTORBUFFER_H

@class NSMutableArray;
@protocol HDSensorDatum;

#import <Foundation/Foundation.h>


@interface HDLiveDataCollectorBuffer : NSObject {
    NSMutableArray *_buffer;
    id<HDSensorDatum> *_lastProcessedDatum;
}


@property (nonatomic) CGFloat bufferAggregationInterval; // ivar: _bufferAggregationInterval
@property (copy, nonatomic) id *objectCreationBlock; // ivar: _objectCreationBlock
@property (copy, nonatomic) id *sensorDatumComparisonBlock; // ivar: _sensorDatumComparisonBlock


-(id)addSensorDatum:(id)arg0 ;
-(id)init;


@end


#endif