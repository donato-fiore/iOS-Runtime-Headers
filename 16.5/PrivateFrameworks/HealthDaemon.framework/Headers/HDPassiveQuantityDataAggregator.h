// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDPASSIVEQUANTITYDATAAGGREGATOR_H
#define HDPASSIVEQUANTITYDATAAGGREGATOR_H

@class HKQuantityType;


#import "HDPassiveDataAggregator.h"

@interface HDPassiveQuantityDataAggregator : HDPassiveDataAggregator

@property (readonly, copy, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType


-(Class)sensorDatumClass;
-(id)dataObjectsFromSensorDatum:(id)arg0 error:(*id)arg1 ;
-(id)initForQuantityType:(id)arg0 dataCollectionManager:(id)arg1 ;
-(id)objectType;


@end


#endif