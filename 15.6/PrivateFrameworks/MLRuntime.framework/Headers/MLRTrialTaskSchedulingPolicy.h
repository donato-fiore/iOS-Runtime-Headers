// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLRTRIALTASKSCHEDULINGPOLICY_H
#define MLRTRIALTASKSCHEDULINGPOLICY_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface MLRTrialTaskSchedulingPolicy : NSObject

@property (readonly, nonatomic) NSDate *endAtDate; // ivar: _endAtDate
@property (readonly, nonatomic) NSUInteger maxPerformCount; // ivar: _maxPerformCount
@property (readonly, nonatomic) CGFloat minInterval; // ivar: _minInterval
@property (readonly, nonatomic) NSDate *startAfterDate; // ivar: _startAfterDate
@property (readonly, nonatomic) NSString *taskID; // ivar: _taskID


+(void)initialize;
-(id)description;
-(id)initWithMaxEvaluations:(NSUInteger)arg0 periodicIntervalSeconds:(CGFloat)arg1 startAfterDate:(id)arg2 endAtDate:(id)arg3 taskID:(id)arg4 ;
-(id)initWithTRIMLRuntimeEvaluation:(id)arg0 ;


@end


#endif