// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDACTIVEQUANTITYDATAAGGREGATOR_H
#define HDACTIVEQUANTITYDATAAGGREGATOR_H

@class HKQuantityType;


#import "HDActiveDataAggregator.h"

@interface HDActiveQuantityDataAggregator : HDActiveDataAggregator

@property (readonly, copy, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType


-(Class)sensorDatumClass;
-(id)aggregateForState:(id)arg0 collector:(id)arg1 device:(id)arg2 requestedAggregationDate:(id)arg3 mode:(NSInteger)arg4 options:(NSUInteger)arg5 error:(*id)arg6 ;
-(id)description;
-(id)initForQuantityType:(id)arg0 dataCollectionManager:(id)arg1 ;
-(id)objectType;


@end


#endif