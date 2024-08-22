// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDATAAGGREGATIONRESULT_H
#define HDDATAAGGREGATIONRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "HDDataAggregationState.h"

@interface HDDataAggregationResult : NSObject

@property (readonly, copy, nonatomic) HDDataAggregationState *aggregationState; // ivar: _aggregationState
@property (readonly, copy, nonatomic) NSArray *consumedSensorData; // ivar: _consumedSensorData
@property (readonly, copy, nonatomic) id *persistenceHandler; // ivar: _persistenceHandler


-(id)initWithResultingAggregationState:(id)arg0 consumedSensorData:(id)arg1 persistenceHandler:(id)arg2 ;


@end


#endif