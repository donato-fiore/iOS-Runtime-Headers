// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NURENDERJOBSTATISTICSHISTORY_H
#define NURENDERJOBSTATISTICSHISTORY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "NURenderJobStatisticsHistogram.h"

@interface NURenderJobStatisticsHistory : NSObject {
    CGFloat _prevCreatedTime;
    NSUInteger _creationsHead;
    NSUInteger _creationsSize;
    CGFloat _prevDeliveredTime;
    NSUInteger _deliveriesHead;
    NSUInteger _deliveriesSize;
}


@property (readonly) NSUInteger canceledJobsCount; // ivar: _canceledJobsCount
@property (readonly) NSUInteger deliveredJobsCount; // ivar: _deliveredJobsCount
@property (readonly) NURenderJobStatisticsHistogram *histogram; // ivar: _histogram
@property (readonly) NSUInteger jobCount; // ivar: _jobCount
@property (readonly) NSString *jobRequestName; // ivar: _jobRequestName
@property (readonly) NSUInteger rollingHistoryMaxSize; // ivar: _rollingHistoryMaxSize
@property (readonly) *CGFloat timeBetweenJobCreations; // ivar: _timeBetweenJobCreations
@property (readonly) *CGFloat timeBetweenJobDeliveries; // ivar: _timeBetweenJobDeliveries
@property (readonly) CGFloat totalTimeExecuting; // ivar: _totalTimeExecuting
@property (readonly) CGFloat totalTimeExecutingComplete; // ivar: _totalTimeExecutingComplete
@property (readonly) CGFloat totalTimeExecutingPrepare; // ivar: _totalTimeExecutingPrepare
@property (readonly) CGFloat totalTimeExecutingRender; // ivar: _totalTimeExecutingRender


+(CGFloat)totalSchedulerTimeExecuting;
+(CGFloat)totalSchedulerTimeExecutingComplete;
+(CGFloat)totalSchedulerTimeExecutingPrepare;
+(CGFloat)totalSchedulerTimeExecutingRender;
+(NSUInteger)totalSchedulerCanceledJobCount;
+(NSUInteger)totalSchedulerDeliveredJobCount;
+(NSUInteger)totalSchedulerJobCount;
+(void)setTotalSchedulerCanceledJobCount:(NSUInteger)arg0 ;
+(void)setTotalSchedulerDeliveredJobCount:(NSUInteger)arg0 ;
+(void)setTotalSchedulerJobCount:(NSUInteger)arg0 ;
+(void)setTotalSchedulerTimeExecuting:(CGFloat)arg0 ;
+(void)setTotalSchedulerTimeExecutingComplete:(CGFloat)arg0 ;
+(void)setTotalSchedulerTimeExecutingPrepare:(CGFloat)arg0 ;
+(void)setTotalSchedulerTimeExecutingRender:(CGFloat)arg0 ;
-(id)description;
-(id)initHistoryForJobsWithName:(id)arg0 rollingHistoryMaxSize:(NSUInteger)arg1 ;
-(void)addStatisticsToHistory:(id)arg0 wasCanceled:(BOOL)arg1 ;
-(void)dealloc;
-(void)recordJobCreated;


@end


#endif