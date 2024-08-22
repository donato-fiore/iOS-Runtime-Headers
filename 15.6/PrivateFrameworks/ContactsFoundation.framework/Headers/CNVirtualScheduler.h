// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVIRTUALSCHEDULER_H
#define CNVIRTUALSCHEDULER_H

@class NSString;
@protocol CNScheduler;

#import <Foundation/Foundation.h>

#import "CNQueue.h"

@interface CNVirtualScheduler : NSObject <CNScheduler>



@property (readonly) NSUInteger clock; // ivar: _clock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPerforming; // ivar: _isPerforming
@property (readonly, nonatomic) BOOL isStarted; // ivar: _isStarted
@property (readonly, nonatomic) NSUInteger nextSchedulableTick; // ivar: _nextSchedulableTick
@property (readonly, nonatomic) CNQueue *queue; // ivar: _queue
@property (readonly, nonatomic) NSUInteger stopTime; // ivar: _stopTime
@property (readonly) Class superclass;
@property (readonly) CGFloat timestamp;


+(NSUInteger)timeWithDelay:(CGFloat)arg0 fromClock:(NSUInteger)arg1 ;
+(id)providerWithScheduler:(id)arg0 ;
-(BOOL)_performJobs;
-(BOOL)hasJobsScheduled;
// -(id)_scheduleBlock:(id)arg0 atTime:(unk)arg1  ;
-(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
// -(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 qualityOfService:(unk)arg2  ;
-(id)init;
-(id)performCancelableBlock:(id)arg0 ;
// -(id)performCancelableBlock:(id)arg0 qualityOfService:(unk)arg1  ;
-(void)advanceBy:(NSUInteger)arg0 ;
-(void)advanceTo:(NSUInteger)arg0 ;
-(void)performBlock:(id)arg0 ;
// -(void)performBlock:(id)arg0 qualityOfService:(unk)arg1  ;
-(void)start;
-(void)stop;


@end


#endif