// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWFACETRACKINGNODE_H
#define BWFACETRACKINGNODE_H

@protocol OS_dispatch_queue, OS_dispatch_semaphore;


#import "BWNode.h"
#import "BWFigCaptureISPProcessingSession.h"

@interface BWFaceTrackingNode : BWNode {
    *CVAFaceTracking _faceTrackingRef;
    BWFigCaptureISPProcessingSession *_processingSession;
    os_unfair_lock_s _processingLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_semaphore> *_processingSemaphore;
    BOOL _processing;
    *opaqueCMSimpleQueue _nextSbufQueue;
    BOOL _setupDone;
    BOOL _structuredLightOccluded;
    int _faceTrackingMachThreadPriority;
    int _pearlModuleType;
    BOOL _addMesh;
    BOOL _addDebugInfo;
}


@property (nonatomic) BOOL faceTrackingPlusEnabled; // ivar: _faceTrackingPlusEnabled
@property (nonatomic) BOOL frontCamera; // ivar: _frontCamera
@property (nonatomic) int maxFaces; // ivar: _faceTrackingMaxFaces
@property (nonatomic) BOOL mirrored; // ivar: _mirrored
@property (nonatomic) float networkFailureThresholdMultiplier; // ivar: _faceTrackingNetworkFailureThresholdMultiplier
@property (nonatomic) int orientation; // ivar: _orientation
@property (nonatomic) BOOL usesFaceRecognition; // ivar: _faceTrackingUsesFaceRecognition


+(void)initialize;
-(id)initWithProcessingSession:(id)arg0 figThreadPriority:(unsigned int)arg1 pearlModuleType:(int)arg2 queueDepth:(int)arg3 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif