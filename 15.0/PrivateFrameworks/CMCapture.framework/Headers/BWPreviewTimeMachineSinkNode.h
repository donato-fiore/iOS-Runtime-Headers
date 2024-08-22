// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWPREVIEWTIMEMACHINESINKNODE_H
#define BWPREVIEWTIMEMACHINESINKNODE_H

@class NSMutableArray, NSString;
@protocol BWPreviewTimeMachineProcessor, OS_dispatch_queue;


#import "BWSinkNode.h"
#import "BWFigVideoCaptureDevice.h"
#import "FigStateMachine.h"
#import "FigCaptureImageMotionDetector.h"

@interface BWPreviewTimeMachineSinkNode : BWSinkNode <BWPreviewTimeMachineProcessor>

 {
    BWFigVideoCaptureDevice *_device;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSMutableArray *_timeMachineFrames;
    os_unfair_lock_s _timeMachineLock;
    int _timeMachineCapacity;
    FigStateMachine *_stateMachine;
    ? _earliestAllowedPTS;
    ? _requestedSuspendPTSRange;
    id *_suspendCompletionHandler;
    FigCaptureImageMotionDetector *_motionDetector;
    BOOL _faceMotionDetectionEnabled;
    BOOL _smartCameraMotionDetectionEnabled;
    BOOL _haveFrameRotationAndMirror;
    int _frameRotationDegrees;
    BOOL _frameMirrored;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property ? earliestAllowedPTS;
@property (readonly) ? frameDimensions;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)_computeMotionDetectionFaceRectForSampleBuffers:(id)arg0 faceMotionRectOut:(struct CGRect *)arg1 ;
-(id)initWithCaptureDevice:(id)arg0 processingQueuePriority:(unsigned int)arg1 timeMachineCapacity:(int)arg2 smartCameraMotionDetectionEnabled:(BOOL)arg3 sinkID:(id)arg4 ;
-(id)nodeSubType;
-(void)_setupStateMachine;
-(void)_trimToTimeRange:(struct ? )arg0 ;
-(void)dealloc;
-(void)detectMotionOnStoredFramesWithSmartCameraDiagnostics:(id)arg0 completionHandler:(id)arg1 ;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)resume;
-(void)suspendWithPTSRange:(struct ? )arg0 completionHandler:(id)arg1 ;


@end


#endif