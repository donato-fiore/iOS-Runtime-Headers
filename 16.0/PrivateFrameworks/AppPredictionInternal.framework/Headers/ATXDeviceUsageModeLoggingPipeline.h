// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXDEVICEUSAGEMODELOGGINGPIPELINE_H
#define ATXDEVICEUSAGEMODELOGGINGPIPELINE_H

@class BPSPublisher;

#import <Foundation/Foundation.h>


@interface ATXDeviceUsageModeLoggingPipeline : NSObject {
    CGFloat _lastEventTimestamp;
    NSUInteger _lastActivityType;
}


@property (readonly, nonatomic) BPSPublisher *displayIntervalPublisher; // ivar: _displayIntervalPublisher
@property (readonly, nonatomic) BPSPublisher *modeTransitionPublisher; // ivar: _modeTransitionPublisher


-(BOOL)_shouldCoalesceOnInterval:(id)arg0 nextInterval:(id)arg1 ;
-(CGFloat)lastPipelineRunTimestampFromStore;
-(NSUInteger)lastKnownActivityFromStore;
-(id)_coalesceAndFilterDisplayOnIntervals:(id)arg0 ;
-(id)displayIntervalsFromStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)init;
-(id)initWithModeTransitionPublisher:(id)arg0 displayIntervalPublisher:(id)arg1 lastEventTimestamp:(CGFloat)arg2 lastActivityType:(NSUInteger)arg3 ;
-(id)timeMergedPublisherFromEventPublishers:(id)arg0 modeTransitionPublisher:(id)arg1 ;
-(void)logDeviceUsage;
-(void)logDeviceUsageWithXPCActivity:(id)arg0 ;
-(void)persistState;


@end


#endif