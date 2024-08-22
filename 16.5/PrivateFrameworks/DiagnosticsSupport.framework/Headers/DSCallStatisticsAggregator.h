// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSCALLSTATISTICSAGGREGATOR_H
#define DSCALLSTATISTICSAGGREGATOR_H

@class NSMutableArray, NSCondition, NSDate;

#import <Foundation/Foundation.h>


@interface DSCallStatisticsAggregator : NSObject {
    ? _totals;
    ? _accumulated;
}


@property (retain, nonatomic) NSMutableArray *callLog; // ivar: _callLog
@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (nonatomic) BOOL futureDateDetected; // ivar: _futureDateDetected
@property (nonatomic) BOOL generationComplete; // ivar: _generationComplete
@property (retain, nonatomic) NSCondition *generationLock; // ivar: _generationLock
@property (nonatomic) NSInteger missingDaysRemaining; // ivar: _missingDaysRemaining
@property (nonatomic) BOOL outOfOrderDateDetected; // ivar: _outOfOrderDateDetected
@property (readonly, nonatomic) NSDate *referenceDate; // ivar: _referenceDate


-(BOOL)_isDateInRange:(id)arg0 ;
-(NSInteger)_getDaysBetween:(id)arg0 and:(id)arg1 ;
-(id)_getAndValidateDateFromLogLine:(id)arg0 ;
-(id)getSynchronousResult;
-(id)init;
-(void)_fillCallLogWithMissingDays:(NSInteger)arg0 fromDate:(id)arg1 ;
-(void)_flushAccumulatedLogDataWithDate:(id)arg0 ;
-(void)_resetAccumulator;
-(void)beginAggregation;
-(void)cancel;


@end


#endif