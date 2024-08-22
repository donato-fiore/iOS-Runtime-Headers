// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWIMAGEQUEUESINKNODE_H
#define BWIMAGEQUEUESINKNODE_H

@class NSMutableArray, CAContext;
@protocol OS_os_transaction, OS_dispatch_queue, BWImageQueueSinkNodePreviewTapDelegate;


#import "BWSinkNode.h"
#import "BWStats.h"
#import "BWFigVideoCaptureDevice.h"

@interface BWImageQueueSinkNode : BWSinkNode {
    unsigned int _imageQueueCapacity;
    unsigned int _imageQueueWidth;
    unsigned int _imageQueueHeight;
    unsigned int _imageQueueRequiredFreeSlots;
    *_CAImageQueue _imageQueue;
    unsigned int _imageQueueSlot;
    NSUInteger _imageQueueCurrentFreeSlots;
    int _syncStrategy;
    BOOL _resetPreviewSynchronizerOnNextFrame;
    *OpaqueBWPreviewSynchronizer _previewSynchronizer;
    CGFloat _lastDisplaySamplingTime;
    CGFloat _lastDisplayVSyncInterval;
    CGFloat _lastHarmonicFractionalVSyncInterval;
    CGFloat _lastFramePTS;
    CGFloat _lastDisplayTime;
    CGFloat _lateFrameIntervalStartPTS;
    CGFloat _previousFrameDuration;
    NSUInteger _framesSinceLastHarmonicCompensation;
    BOOL _CAVSyncIntervalWorkaroundEnabled;
    BOOL _highLatencyJitterHandlingEnabled;
    BOOL _fasterLatencyRecoveryEnabled;
    BOOL _driftCompensationTimestampFilteringEnabled;
    NSUInteger _numFramesReceived;
    NSObject<OS_os_transaction> *_holdingBuffersForClientAssertion;
    NSMutableArray *_sharedSurfaces;
    *NSUInteger _sharedBufferIDs;
    NSUInteger _sharedSurfaceCount;
    BOOL _useGlobalIOSurfaces;
    *OpaqueFigSimpleMutex _surfaceRegistrationMutex;
    NSMutableArray *_bufferIDsInQueue;
    **_EnqueuedBufferContext _enqueuedBufferContexts;
    NSUInteger _enqueuedBufferContextCount;
    NSMutableArray *_previewPTSHistory;
    *OpaqueFigSimpleMutex _previewPTSHistoryMutex;
    NSObject<OS_dispatch_queue> *_previewPTSHistoryQueue;
    ? _firstFramePTS;
    NSInteger _firstFrameHostTime;
    BOOL _didCallFirstFrameAtHostTimeCallback;
    BOOL _didCallFirstFrameCallback;
    BOOL _fenceSupportEnabled;
    BOOL _fencePortGenerationIDWillChange;
    int _framesSinceLastFenceIDWillChange;
    int _framesSinceLastFence;
    NSInteger _lastFencedGenerationID;
    int _savedSyncStrategy;
    CAContext *_imageQueueContext;
    int _maxLossyCompressionLevel;
    BWStats *_frameDisplayLatencyStats;
}


@property (retain, nonatomic) BWFigVideoCaptureDevice *captureDevice; // ivar: _captureDevice
@property (readonly, nonatomic) *_CAImageQueue imageQueue;
@property (readonly, nonatomic) unsigned int imageQueueSlot;
@property (nonatomic) NSObject<BWImageQueueSinkNodePreviewTapDelegate> *previewTapDelegate; // ivar: _previewTapDelegate


+(void)initialize;
-(BOOL)fenceSupportEnabled;
-(BOOL)hasNonLiveConfigurationChanges;
-(id)initWithHFRSupport:(BOOL)arg0 ispJitterCompensationEnabled:(BOOL)arg1 sinkID:(id)arg2 ;
-(id)nodeSubType;
-(int)maxLossyCompressionLevel;
-(int)syncStrategy;
-(struct ? )previewPTSAtHostTime:(NSUInteger)arg0 ;
-(struct ? )previewPTSDisplayedAtHostTime:(NSUInteger)arg0 allowingExtrapolation:(BOOL)arg1 ;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)fencePortGenerationIDWillChange;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)inputConnectionWillBeEnabled;
-(void)makeCurrentConfigurationLive;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)registerSurfacesFromSourcePool:(id)arg0 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setFenceSupportEnabled:(BOOL)arg0 ;
-(void)setMaxLossyCompressionLevel:(int)arg0 ;
-(void)setSyncStrategy:(int)arg0 ;


@end


#endif