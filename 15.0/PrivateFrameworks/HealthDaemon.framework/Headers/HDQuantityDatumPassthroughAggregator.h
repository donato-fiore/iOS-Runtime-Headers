// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDQUANTITYDATUMPASSTHROUGHAGGREGATOR_H
#define HDQUANTITYDATUMPASSTHROUGHAGGREGATOR_H



#import "HDPassiveDataAggregator.h"

@interface HDQuantityDatumPassthroughAggregator : HDPassiveDataAggregator



+(id)quantityTypeIdentifier;
-(Class)sensorDatumClass;
-(id)dataObjectsFromSensorDatum:(id)arg0 error:(*id)arg1 ;
-(id)objectType;


@end


#endif