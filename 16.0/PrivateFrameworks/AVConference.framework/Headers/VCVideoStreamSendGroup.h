// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCVIDEOSTREAMSENDGROUP_H
#define VCVIDEOSTREAMSENDGROUP_H

@class NSMutableSet, NSMutableDictionary, NSMutableArray, NSString;
@protocol VCMediaStreamDelegate, VCSessionUplinkVideoStreamControllerDelegate, VCRedundancyControllerDelegate, VCMediaCaptureController, VCVideoSink, VCVideoCaptureClient, VCMediaStreamSendSyncSourceDelegate;


#import "VCMediaStreamSendGroup.h"
#import "VCSessionUplinkVideoStreamController.h"
#import "VCRedundancyControllerVideo.h"
#import "VCMoments.h"
#import "VCVideoRule.h"

@interface VCVideoStreamSendGroup : VCMediaStreamSendGroup <VCMediaStreamDelegate, VCSessionUplinkVideoStreamControllerDelegate, VCRedundancyControllerDelegate, VCMediaCaptureController, VCVideoSink, VCVideoCaptureClient, VCMediaStreamSendSyncSourceDelegate>

 {
    int _captureSource;
    uint8_t _videoPriority;
    unsigned char _lastVideoPriority;
    BOOL _videoPriorityEnabled;
    NSInteger _maxSupportedMultiwayVideoResolution;
    CGSize _maxScreenCaptureSize;
    int _maxSupportedCaptureFrameRate;
    NSMutableSet *_videoPayloadTypes;
    VCSessionUplinkVideoStreamController *_uplinkVideoStreamController;
    *tagVCMemoryPool _videoRedundancyPool;
    *opaqueCMSimpleQueue _videoRedundancyChangeEventQueue;
    VCRedundancyControllerVideo *_redundancyController;
    VCMoments *_moments;
    CGFloat _fecRatio;
    VCVideoRule *_captureVideoRule;
    NSMutableDictionary *_pendingActiveUplinkStreams;
    NSMutableArray *_temporalStreamsIDs;
    id *_clientCaptureController;
    unsigned int _activeTemporalTierBitmap;
    id *_videoSinkDelegate;
    BOOL _isStreamInputCaptureSource;
    BOOL _hasPeerSubscribedStreams;
    BOOL _allowSuspendProvisionedStreams;
    unsigned int _totalNumFramesReceived;
    unsigned int _totalNumFramesProcessed;
    BOOL _initTime;
}


@property (nonatomic) int captureFrameRate; // ivar: _captureFrameRate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enableRedundancy:(BOOL)arg0 ;
-(BOOL)generateKeyFrameWithStreamID:(id)arg0 ;
-(BOOL)onVideoFrame:(struct opaqueCMSampleBuffer *)arg0 frameTime:(struct ? )arg1 attribute:(struct ? )arg2 ;
-(BOOL)setupRedundancySettings;
-(BOOL)setupUplinkVideoStreamController;
-(BOOL)shouldCompoundListIgnoreStream:(id)arg0 streamConfig:(id)arg1 activeStreamIds:(id)arg2 ;
-(BOOL)shouldSubscribeToStreamID:(id)arg0 peerSubscribedStreams:(id)arg1 ;
-(BOOL)updateUplinkStreamsForPeerSubscribedStreams:(id)arg0 ;
-(NSInteger)maxCaptureResolution;
-(NSUInteger)maxStreamFrameRate;
-(id)activeStreamKeys;
-(id)captureConfigForScreenShare;
-(id)clientCaptureRule;
-(id)initWithConfig:(id)arg0 ;
-(id)registerForScreenCapture;
-(id)setupRedundancyController;
-(id)startCapture;
-(id)stopCapture;
-(id)streamDescriptionForMediaStreamConfig:(id)arg0 ;
-(id)willStart;
-(int)maxCaptureCameraFrameRate;
-(int)maxCaptureFrameRate;
-(struct CGSize )getCaptureEncodingSize;
-(unsigned int)getPixelFormat;
-(void)avConferencePreviewError:(id)arg0 ;
-(void)cameraAvailabilityDidChange:(BOOL)arg0 ;
-(void)cleanupRedundancySettings;
-(void)collectAndLogChannelMetrics:(struct ? *)arg0 ;
-(void)computeMaxScreenCaptureSize;
-(void)controller:(id)arg0 didChangeActiveVideoStreams:(id)arg1 ;
-(void)dealloc;
-(void)deregisterClientForScreenShare;
-(void)deregisterForScreenCapture;
-(void)deregisterForVideoCapture;
-(void)didStart;
-(void)flushVideoRedundancyEventQueue;
-(void)frameRateIsBeingThrottled:(int)arg0 thermalLevelDidChange:(BOOL)arg1 powerLevelDidChange:(BOOL)arg2 ;
-(void)processVideoEventQueue;
-(void)processVideoPriority;
-(void)redundancyController:(id)arg0 redundancyIntervalDidChange:(CGFloat)arg1 ;
-(void)redundancyController:(id)arg0 redundancyPercentageDidChange:(unsigned int)arg1 ;
-(void)redundancyController:(id)arg0 redundancyVectorDidChange:(struct ? )arg1 ;
-(void)registerClientForScreenShare;
-(void)registerConfigForScreenShare;
-(void)registerForVideoCapture:(int)arg0 ;
-(void)setActiveConnection:(id)arg0 uplinkBitrateCap:(unsigned int)arg1 ;
-(void)setUplinkBitrateCapCell:(unsigned int)arg0 ;
-(void)setUplinkBitrateCapWifi:(unsigned int)arg0 ;
-(void)setupPayloadTypes;
-(void)setupVideoPriority;
-(void)sourceFrameRateDidChange:(unsigned int)arg0 ;
-(void)thermalLevelDidChange:(int)arg0 ;
-(void)updateActiveMediaStreamIDs:(id)arg0 withTargetBitrate:(unsigned int)arg1 mediaBitrates:(id)arg2 ;
-(void)updateBandwidthAllocatorStreamTokenState;
-(void)updateSendSampleRTPTimestamp:(unsigned int)arg0 sampleRate:(CGFloat)arg1 systemTime:(CGFloat)arg2 ;
-(void)updateSuspendedState;
-(void)updateVideoStreamAndProcessFrame:(id)arg0 sampleBuffer:(struct opaqueCMSampleBuffer *)arg1 lastSentAudioHostTime:(CGFloat)arg2 lastSentAudioSampleTime:(unsigned int)arg3 frameTime:(struct ? )arg4 attribute:(struct ? )arg5 ;
-(void)vcMediaStreamDidDecryptionTimeOut:(id)arg0 ;
-(void)vcMediaStreamDidRTCPTimeOut:(id)arg0 ;
-(void)vcMediaStreamDidRTPTimeOut:(id)arg0 ;


@end


#endif