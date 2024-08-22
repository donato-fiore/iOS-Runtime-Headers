// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDATAAGGREGATIONSTATE_H
#define HDDATAAGGREGATIONSTATE_H

@class HKSample, NSMutableArray;

#import <Foundation/Foundation.h>


@interface HDDataAggregationState : NSObject

@property (readonly, nonatomic) HKSample *openSeries; // ivar: _openSeries
@property (readonly, nonatomic) NSMutableArray *unaggregatedSensorData; // ivar: _unaggregatedSensorData


-(id)init;
-(id)initWithRemainingSensorData:(id)arg0 ;
-(id)initWithRemainingSensorData:(id)arg0 currentSeries:(id)arg1 ;


@end


#endif