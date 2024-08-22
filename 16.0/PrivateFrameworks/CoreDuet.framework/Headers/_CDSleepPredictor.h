// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDSLEEPPREDICTOR_H
#define _CDSLEEPPREDICTOR_H


#import <Foundation/Foundation.h>


@interface _CDSleepPredictor : NSObject



+(id)array:(id)arg0 filter:(id)arg1 ;
+(id)array:(id)arg0 map:(id)arg1 ;
// +(id)array:(id)arg0 reduce:(id)arg1 withInitialValue:(unk)arg2  ;
+(id)arrayWithObject:(id)arg0 repeated:(NSUInteger)arg1 ;
+(id)fetchDeviceInUseDateIntervalsFromStore:(id)arg0 whichIntersectInterval:(id)arg1 ;
+(id)fetchFirstEventDateIntervalFromStore:(id)arg0 forStream:(id)arg1 sortDateAscending:(BOOL)arg2 intersectingInterval:(id)arg3 ;
+(id)findAllSleepPeriodsInDayStarting:(id)arg0 FromActivityProbabilities:(id)arg1 ;
+(id)findSleepPeriodInDayStarting:(id)arg0 FromActivityProbabilities:(id)arg1 ;
+(id)gatherBitmapHistoryFromStore:(id)arg0 forPeriod:(id)arg1 ;
+(id)generateActivityBitmapFor:(id)arg0 unlockedIntervals:(id)arg1 eventsAvailableInterval:(id)arg2 ;
+(id)indexSetFromUnionOf:(id)arg0 ;
+(id)predicateForInUseVaue;
+(void)mutableArray:(id)arg0 replaceObjectsAtIndexes:(id)arg1 withObjectFromBlock:(id)arg2 ;


@end


#endif