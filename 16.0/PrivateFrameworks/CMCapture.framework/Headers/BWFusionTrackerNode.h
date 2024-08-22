// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWFUSIONTRACKERNODE_H
#define BWFUSIONTRACKERNODE_H

@class FTCinematicTracker, NSSet;
@protocol OS_dispatch_semaphore, MTLEvent;


#import "BWInferenceNode.h"
#import "BWVideoDepthInferenceConfiguration.h"

@interface BWFusionTrackerNode : BWInferenceNode {
    NSUInteger _framesSinceLastDDR;
    FTCinematicTracker *_cinematicTracker;
    NSObject<OS_dispatch_semaphore> *_backpressureSemaphore;
    id<MTLEvent> *_backpressureEvent;
    NSUInteger _backpressureEventNumber;
    NSSet *_humanPosePreventionSet;
}


@property (readonly, nonatomic) BWVideoDepthInferenceConfiguration *videoDepthConfiguration; // ivar: _videoDepthConfiguration


+(void)initialize;
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg0 ;
-(id)initWithConvEngineSupportWithCaptureDevice:(id)arg0 scheduler:(id)arg1 priority:(unsigned int)arg2 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)dealloc;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)willEmitSampleBufferAlways:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif