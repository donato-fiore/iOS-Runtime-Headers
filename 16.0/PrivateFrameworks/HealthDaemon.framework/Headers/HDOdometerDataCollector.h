// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDODOMETERDATACOLLECTOR_H
#define HDODOMETERDATACOLLECTOR_H

@class HKQuantityType;


#import "HDCoreMotionDataCollector.h"

@interface HDOdometerDataCollector : HDCoreMotionDataCollector {
    HKQuantityType *_distanceType;
}




-(BOOL)canResumeCollectionFromLastSensorDatum;
-(CGFloat)queue_differenceFromDatum:(id)arg0 toDatum:(id)arg1 type:(id)arg2 ;
-(Class)coreMotionDatumClass;
-(NSUInteger)queue_targetCollectionTypeForRequestedCollectionType:(NSUInteger)arg0 ;
-(id)collectedTypes;
-(id)initWithProfile:(id)arg0 collectedDistanceType:(id)arg1 ;
-(id)persistentIdentifier;
-(id)queue_newDataSource;


@end


#endif