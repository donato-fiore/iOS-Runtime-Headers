// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHRCARDIOFITNESSANALYTICSCLIENTSIGNALSOURCE_H
#define HKHRCARDIOFITNESSANALYTICSCLIENTSIGNALSOURCE_H

@class HKHealthStore;


#import "HKHRCardioFitnessAnalyticsSignalSource.h"

@interface HKHRCardioFitnessAnalyticsClientSignalSource : HKHRCardioFitnessAnalyticsSignalSource {
    HKHealthStore *_healthStore;
}




-(NSInteger)bucketedAgeWithError:(*id)arg0 ;
-(id)biologicalSexStringWithError:(*id)arg0 ;
-(id)initWithHealthStore:(id)arg0 ;


@end


#endif