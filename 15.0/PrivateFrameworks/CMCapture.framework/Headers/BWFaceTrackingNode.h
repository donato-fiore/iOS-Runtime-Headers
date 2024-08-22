// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
    BOOL _frontCamera;
    int _orientation;
    BOOL _mirrored;
    int _faceTrackingMachThreadPriority;
    int _pearlModuleType;
    int _faceTrackingMaxFaces;
    BOOL _faceTrackingUsesFaceRecognition;
    BOOL _faceTrackingPlusEnabled;
    BOOL _addMesh;
    BOOL _addDebugInfo;
}




+(void)initialize;
-(BOOL)faceTrackingPlusEnabled;
-(BOOL)frontCamera;
-(BOOL)mirroringEnabled;
-(BOOL)usesFaceRecognition;
-(id)initWithProcessingSession:(id)arg0 figThreadPriority:(unsigned int)arg1 pearlModuleType:(int)arg2 queueDepth:(int)arg3 ;
-(id)nodeSubType;
-(id)nodeType;
-(int)_setupCVA;
-(int)maxFaces;
-(int)orientation;
-(void)_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_startProcessingSampleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setFaceTrackingPlusEnabled:(BOOL)arg0 ;
-(void)setFrontCamera:(BOOL)arg0 ;
-(void)setMaxFaces:(int)arg0 ;
-(void)setMirrored:(BOOL)arg0 ;
-(void)setOrientation:(int)arg0 ;
-(void)setUsesFaceRecognition:(BOOL)arg0 ;


@end


#endif