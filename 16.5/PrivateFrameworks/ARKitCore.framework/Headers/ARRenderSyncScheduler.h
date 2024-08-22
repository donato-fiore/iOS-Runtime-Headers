// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARRENDERSYNCSCHEDULER_H
#define ARRENDERSYNCSCHEDULER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "ARDisplayLink.h"
#import "ARRollingNumberSeries.h"

@interface ARRenderSyncScheduler : NSObject {
    ARDisplayLink *_displayLink;
    ARRollingNumberSeries *_latencies;
    NSMutableArray *_blocks;
    os_unfair_lock_s _lock;
    BOOL _initialLatencyReached;
    BOOL _reportAdjustments;
}


@property NSUInteger excessiveCallbackOptions; // ivar: _excessiveCallbackOptions
@property NSInteger expectedFramesPerSecond;
@property CGFloat inputJitterBufferInterval; // ivar: _inputJitterBufferInterval
@property BOOL schedulingActive; // ivar: _schedulingActive
@property CGFloat vsyncOffset;


-(NSUInteger)_callbackActionForBlockWithLatency:(CGFloat)arg0 ;
-(id)init;
-(id)initWithExpectedFramesPerSecond:(NSInteger)arg0 ;
-(void)_callback;
-(void)_tryNextBlockWithTotalTried:(NSUInteger)arg0 ;
-(void)submitBlock:(id)arg0 ;


@end


#endif