// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBALWAYSONTELEMETRYMETRICS_H
#define SBALWAYSONTELEMETRYMETRICS_H

@class NSMutableDictionary, NSMutableSet, NSNumber;

#import <Foundation/Foundation.h>

#import "_SBMachContinuousStopwatch.h"

@interface SBAlwaysOnTelemetryMetrics : NSObject {
    NSMutableDictionary *_stopWatches;
    NSMutableDictionary *_stateChangeCounts;
    _SBMachContinuousStopwatch *_activeStopWatch;
    NSMutableSet *_presentationSources;
    NSUInteger _invalidatedFramesUpTo2mStale;
    NSUInteger _invalidatedFramesUpTo3mStale;
    NSUInteger _invalidatedFramesUpTo4mStale;
    NSUInteger _invalidatedFramesUpTo5mStale;
    NSUInteger _invalidatedFramesUpTo6mStale;
    NSUInteger _discardedFramesUpTo2mStale;
    NSUInteger _discardedFramesUpTo3mStale;
    NSUInteger _discardedFramesUpTo4mStale;
    NSUInteger _discardedFramesUpTo5mStale;
    NSUInteger _discardedFramesUpTo6mStale;
    NSUInteger _renderedFramesLessThan1Min;
    NSUInteger _renderedFrames1to2Min;
    NSUInteger _renderedFrames2to3Min;
    NSUInteger _renderedFrames3to4Min;
    NSUInteger _renderedFrames4to5Min;
    NSUInteger _renderedFrames5to6Min;
    NSUInteger _renderedFramesMoreThan6Min;
    NSUInteger _renderedFrameCount;
    NSUInteger _renderedPartialMinuteCount;
    NSNumber *_minimumAPL;
    NSNumber *_maximumAPL;
    NSNumber *_averageAPL;
    NSNumber *_minimumAPLDimming;
    NSNumber *_maximumAPLDimming;
    NSNumber *_averageAPLDimming;
}




-(id)dataForAnalyticsEvent:(id)arg0 ;
-(id)dataForPowerlogEvent:(id)arg0 ;
-(id)init;
-(void)accumulateDiscardHistogram:(id)arg0 ;
-(void)accumulateInvalidationHistogram:(id)arg0 ;
-(void)accumulatePresentationSources:(id)arg0 ;
-(void)accumulateRenderHistogram:(id)arg0 ;
-(void)setBacklightState:(NSInteger)arg0 ;


@end


#endif