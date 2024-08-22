// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REUPNEXTPERIODOFDAYPREDICTOR_H
#define REUPNEXTPERIODOFDAYPREDICTOR_H

@class NSDateInterval;


#import "REObservableSingleton.h"

@interface REUpNextPeriodOfDayPredictor : REObservableSingleton

@property (readonly, nonatomic) NSUInteger currentPeriodOfDay;
@property (readonly, nonatomic) NSDateInterval *intervalForCurrentPeriodOfDay;


-(id)dateIntervalForNextPeriodOfDay:(NSUInteger)arg0 ;
-(id)dateIntervalForPreviousPeriodOfDay:(NSUInteger)arg0 ;


@end


#endif