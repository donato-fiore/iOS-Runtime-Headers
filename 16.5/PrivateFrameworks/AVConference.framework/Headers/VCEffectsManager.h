// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCEFFECTSMANAGER_H
#define VCEFFECTSMANAGER_H

@class NSMutableArray;
@protocol OS_dispatch_queue, VCEffectsManagerDelegate;

#import <Foundation/Foundation.h>


@interface VCEffectsManager : NSObject {
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    BOOL _effectsRegistered;
    _opaque_pthread_mutex_t _loggingLock;
    ? _lastPrintTimestamp;
    ? _lastReceivedTimestamp;
    ? _lastSentTimestamp;
    int _consecutiveDroppedFrameCount;
    int _sentFrameCount;
    int _receivedFrameCount;
    int _droppedFrameCount;
    int _failedFrameCount;
    BOOL _forceDisableEffectsHealthCheck;
    *opaqueVCRemoteImageQueue _receiverQueue;
    *__CFAllocator _bufferAllocator;
    *__CVBuffer _lastReceivedPixelBuffer;
    *__CVBuffer _lastReceivedDepthBuffer;
    int _thermalPressureLevel;
}


@property (nonatomic) NSObject<VCEffectsManagerDelegate> *delegate; // ivar: _delegate
@property (retain) NSMutableArray *effectsArray; // ivar: _effectsArray
@property (readonly, nonatomic) *opaqueVCRemoteImageQueue senderQueue; // ivar: _senderQueue


+(id)sharedManager;
-(BOOL)checkEffectsHealth;
-(BOOL)createAllocators;
-(BOOL)initializeReceiveQueue:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEffectsOn;
-(BOOL)isFaceMeshTrackingEnabled;
-(id)init;
-(void)capturedPixelBuffer:(struct __CVBuffer *)arg0 depthBuffer:(struct __CVBuffer *)arg1 time:(struct ? )arg2 imageData:(id)arg3 toClient:(id)arg4 ;
-(void)capturedPixelBuffer:(struct __CVBuffer *)arg0 depthDataPixelBuffer:(struct __CVBuffer *)arg1 time:(struct ? )arg2 imageData:(id)arg3 ;
-(void)dealloc;
-(void)effectsRegistered:(BOOL)arg0 ;
-(void)encodeProcessedPixelBuffer:(struct __CVBuffer *)arg0 time:(struct ? )arg1 imageData:(id)arg2 processTime:(id)arg3 ;
-(void)flushRemoteQueue;
-(void)registerBlocksForService;
-(void)releaseAllocators;
-(void)remoteQueueOperationHandlerWithError:(int)arg0 operation:(struct FigRemoteOperation *)arg1 ;
-(void)renderPixelBuffer:(struct __CVBuffer *)arg0 time:(struct ? )arg1 ;
-(void)resetEffectsLogging;
-(void)tearDownRemoteQueues;
-(void)updateThermalLevel:(int)arg0 ;


@end


#endif