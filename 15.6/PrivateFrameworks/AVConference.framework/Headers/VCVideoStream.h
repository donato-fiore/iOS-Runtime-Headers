// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCVIDEOSTREAM_H
#define VCVIDEOSTREAM_H

@class NSString, NSNumber;
@protocol VCVideoReceiverDelegate, VCMediaStreamSyncDestination, VCVideoSink, VCVideoCaptureClient, VCVideoCaptureConverterDelegate, AVCRateControllerDelegate, VCRedundancyControllerDelegate, VCStreamSychronizationDelegate, OS_dispatch_queue, OS_dispatch_semaphore, VCVideoReceiverFeedbackDelegate, VCSessionParticipantLocalVideoStreamDelegate;


#import "VCMediaStream.h"
#import "VCImageQueue.h"
#import "VCVideoRule.h"
#import "VCVideoCaptureConverter.h"
#import "AVCRateController.h"
#import "AVCStatisticsCollector.h"
#import "VCRedundancyControllerVideo.h"
#import "VCVideoReceiverBase.h"
#import "VCVideoTransmitterBase.h"

@interface VCVideoStream : VCMediaStream <VCVideoReceiverDelegate, VCMediaStreamSyncDestination, VCVideoSink, VCVideoCaptureClient, VCVideoCaptureConverterDelegate, AVCRateControllerDelegate, VCRedundancyControllerDelegate, VCStreamSychronizationDelegate>

 {
    NSInteger _type;
    NSObject<OS_dispatch_queue> *_lastDecodedFrameQueue;
    _opaque_pthread_mutex_t _remoteLayerLock;
    _opaque_pthread_mutex_t _localLayerLock;
    unsigned int _uplinkOperatingBitrate;
    *__CVBuffer _cachedRemoteVideoFrame;
    VCImageQueue *_remoteQueue;
    VCVideoRule *_videoRule;
    int _reportingModuleID;
    unsigned int _reportingDefaultRealtimePeriod;
    NSObject<OS_dispatch_semaphore> *_bufferQueueSemaphore;
    *opaqueCMBufferQueue _bufferQueue;
    VCVideoCaptureConverter *_captureConverter;
    unsigned char _lastMediaPriority;
    uint8_t _isVideoCaptureRegistered;
    int _captureSource;
    unsigned int _tilesPerFrame;
    unsigned int _initialTargetBitrate;
    *OpaqueFigCFWeakReference _weakStream;
    AVCRateController *_vcrcRateController;
    AVCStatisticsCollector *_statisticsCollector;
    VCRedundancyControllerVideo *_redundancyController;
    int _lastDisplayedFromImageQueueCount;
    int _lastDroppedFromImageQueueCount;
    CGFloat _lastDecodedVideoFrameTime;
    CGFloat _lastStatisticsCollectorVideoStallTotalUpdateTime;
    BOOL _isRemoteMediaStalled;
    CGFloat _lastMediaStallReportTime;
    int _networkInterfaceType;
    int _channelSequenceCountWithInactiveSlots;
    float _synchronizationTimeOffset;
    unsigned int _rtpTimestampRate;
    unsigned int _rttScaleFactor;
    unsigned short _temporalScalingBaseLayerStreamID;
    ? _lastSentFrameHostTimeBeforeStop;
    unsigned int _lastSentFrameRTPTimestampBeforeStop;
}


@property (nonatomic) unsigned int customHeight; // ivar: _customHeight
@property (nonatomic) unsigned int customWidth; // ivar: _customWidth
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didReceiveFirstFrame; // ivar: _didReceiveFirstFrame
@property (nonatomic) CGFloat fecRatio; // ivar: _fecRatio
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCompoundStreamIDsIncreased; // ivar: _isCompoundStreamIDsIncreased
@property (nonatomic) BOOL isServerBasedBandwidthProbingEnabled; // ivar: _isServerBasedBandwidthProbingEnabled
@property (readonly, nonatomic) BOOL isTemporalScalingEnabled; // ivar: _isTemporalScalingEnabled
@property (readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
@property CGFloat lastSentAudioHostTime;
@property unsigned int lastSentAudioSampleTime;
@property (readonly) unsigned int networkMTU;
@property (nonatomic) unsigned int screenDisplayID; // ivar: _screenDisplayID
@property (readonly, nonatomic) NSNumber *sendingStreamID; // ivar: _sendingStreamID
@property (nonatomic) BOOL shouldEnableFaceZoom; // ivar: _shouldEnableFaceZoom
@property (nonatomic) BOOL shouldEnableMLEnhance; // ivar: _shouldEnableMLEnhance
@property (readonly) Class superclass;
@property (nonatomic) float synchronizationTimeOffset;
@property (nonatomic) unsigned int targetBitrateChangeCounter;
@property (nonatomic) unsigned int targetMediaBitrate;
@property (retain, nonatomic) NSNumber *targetStreamID; // ivar: _targetStreamID
@property (readonly) VCVideoReceiverBase *videoReceiver; // ivar: _videoReceiver
@property (nonatomic, getter=getVideoReceiverFeedbackDelegate) NSObject<VCVideoReceiverFeedbackDelegate> *videoReceiverFeedbackDelegate;
@property (nonatomic) NSObject<VCSessionParticipantLocalVideoStreamDelegate> *videoStreamDelegate; // ivar: _videoStreamDelegate
@property (readonly) VCVideoTransmitterBase *videoTransmitter; // ivar: _videoTransmitter


+(BOOL)shouldUseRandomRTPTimestampWithType:(NSInteger)arg0 ;
+(id)capabilities;
+(id)newFeatureListStringsWithConfiguration:(id)arg0 ;
+(id)supportedVideoPayloads;
-(?)cleaunpReceiverConfig;
-(?)setupFeatureListStringsForReceiverConfigstreamConfig;
-(?)setupMultiwayVideoReceiverConfigforTransportStream;
-(?)setupMultiwayVideoReceiverStreamSwitchInfoforTransportStream;
-(?)setupMultiwayVideoReceiverTemporalScalingConfigforTransportStream;
-(?)videoReceiverConfigWithVideoStreamConfig;
-(?)videoStreamReceiverConfigWithDumpIDreportingAgent;
-(BOOL)isFECGeneratorEnabled;
-(BOOL)isScreenConfig:(id)arg0 ;
-(BOOL)isTransportIPv6;
-(BOOL)onConfigureStreamWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)onVideoFrame:(struct opaqueCMSampleBuffer *)arg0 frameTime:(struct ? )arg1 attribute:(struct ? )arg2 ;
-(BOOL)registerForVideoCapture;
-(BOOL)setEncodingMode:(int)arg0 ;
-(BOOL)setRTPPayloads:(*int)arg0 numPayloads:(int)arg1 withError:(*id)arg2 ;
-(BOOL)startSynchronization:(id)arg0 ;
-(BOOL)updateStreamConfigForAirPlaySidecar:(id)arg0 ;
-(BOOL)useUEPForVideoConfig:(int)arg0 ;
-(BOOL)validateStreamConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateVideoStreamConfigurations:(id)arg0 ;
-(BOOL)vcVideoReceiver:(id)arg0 didReceiveSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 isFirstFrame:(BOOL)arg2 ;
-(BOOL)videoReceiver:(id)arg0 didReceiveRemoteFrame:(struct __CVBuffer *)arg1 atTime:(struct ? )arg2 remoteVideoAttributes:(id)arg3 remoteScreenAttributes:(id)arg4 isFirstFrame:(BOOL)arg5 ;
-(CGFloat)lastReceivedRTCPPacketTime;
-(CGFloat)lastReceivedRTPPacketTime;
-(CGFloat)rtcpHeartbeatLeeway;
-(id)clientCaptureRule;
-(id)getReceiveStatsCollectorWithStreamConfig:(id)arg0 ;
-(id)getTransmitMediaControllerWithStreamConfig:(id)arg0 ;
-(id)getTransmitStatsCollectorWithStreamConfig:(id)arg0 ;
-(id)init;
-(id)initWithTransportSessionID:(unsigned int)arg0 ssrc:(unsigned int)arg1 streamToken:(NSInteger)arg2 ;
-(id)newVideoTransmitterConfigWithVideoStreamConfig:(id)arg0 ;
-(id)supportedPayloads;
-(int)getReportingClientType;
-(int)operatingModeForVideoStreamType:(NSInteger)arg0 ;
-(int)reportVideoStreamType;
-(struct __CFDictionary *)getClientSpecificUserInfo;
-(struct __CFString *)getReportingClientName;
-(unsigned int)getMaxTemporalBitrateForStreamIDs:(id)arg0 ;
-(unsigned int)vcVideoReceiver:(id)arg0 receivedTMMBR:(unsigned int)arg1 ;
-(void)avConferencePreviewError:(id)arg0 ;
-(void)avConferenceScreenCaptureError:(id)arg0 ;
-(void)cacheRemoteVideoFrame:(struct __CVBuffer *)arg0 ;
-(void)cameraAvailabilityDidChange:(BOOL)arg0 ;
-(void)cleanupBeforeReconfigure:(id)arg0 ;
-(void)collectChannelSequenceMetrics:(id)arg0 ;
-(void)collectImageQueuePerformanceMetrics:(struct __CFDictionary *)arg0 ;
-(void)collectRxChannelMetrics:(struct ? *)arg0 ;
-(void)collectRxChannelMetrics:(struct ? *)arg0 interval:(float)arg1 ;
-(void)collectTxChannelMetrics:(struct ? *)arg0 ;
-(void)collectVideoConfigMetrics:(struct __CFDictionary *)arg0 ;
-(void)collectVideoStreamStartMetrics:(struct __CFDictionary *)arg0 ;
-(void)converter:(id)arg0 didConvertFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(struct ? )arg2 cameraStatusBits:(unsigned char)arg3 ;
-(void)dealloc;
-(void)deregisterForVideoCapture;
-(void)destroyVideoModules;
-(void)destroyVideoReceiver;
-(void)destroyVideoTransmitter;
-(void)gatherRealtimeStats:(struct __CFDictionary *)arg0 ;
-(void)generateKeyFrameWithFIRType:(int)arg0 ;
-(void)handleActiveConnectionChange:(id)arg0 ;
-(void)handleNWConnectionNotification:(struct ifnet_interface_advisory *)arg0 ;
-(void)handleNWConnectionPacketEvent:(struct packet_id *)arg0 eventType:(int)arg1 ;
-(void)handleVTPSendFailedWithData:(*void)arg0 ;
-(void)initVideoTransmitter;
-(void)initializeInterfaceType;
-(void)initializeInterfaceTypeForNWConnection;
-(void)initializeInterfaceTypeForSocket;
-(void)onCallIDChanged;
-(void)onPauseWithCompletionHandler:(id)arg0 ;
-(void)onRTCPTimeout;
-(void)onRTPTimeout;
-(void)onResumeWithCompletionHandler:(id)arg0 ;
-(void)onSendRTCPPacket;
-(void)onStartWithCompletionHandler:(id)arg0 ;
-(void)onStopWithCompletionHandler:(id)arg0 ;
-(void)overrideConfigWithDefaults;
-(void)rateController:(id)arg0 targetBitrateDidChange:(unsigned int)arg1 rateChangeCounter:(unsigned int)arg2 ;
-(void)redundancyController:(id)arg0 redundancyIntervalDidChange:(CGFloat)arg1 ;
-(void)redundancyController:(id)arg0 redundancyPercentageDidChange:(unsigned int)arg1 ;
-(void)reportTransportInfo;
-(void)reportingAlgosVideoStreamEvent:(unsigned short)arg0 ;
-(void)reportingVideoStreamEvent:(unsigned short)arg0 ;
-(void)reportingVideoStreamEvent:(unsigned short)arg0 newVideoAttributes:(id)arg1 ;
-(void)reportingVideoStreamEvent:(unsigned short)arg0 newVideoAttributes:(id)arg1 currentStreamID:(id)arg2 ;
-(void)requestLastDecodedFrame;
-(void)resetRemoteMediaStalled;
-(void)sendLastRemoteVideoFrame:(struct __CVBuffer *)arg0 ;
-(void)setFECRedundancyVector:(struct ? *)arg0 ;
-(void)setMediaSuggestion:(struct VCRateControlMediaSuggestion *)arg0 ;
-(void)setPeerSubscribedStreamIDs:(id)arg0 ;
-(void)setStreamIDs:(id)arg0 repairStreamIDs:(id)arg1 ;
-(void)setTransmitterStreamIDs:(id)arg0 repairStreamIDs:(id)arg1 ;
-(void)setupCompoundStreamIDsWithStreamIDs:(id)arg0 ;
-(void)setupReportingAgent;
-(void)setupVideoReceiver:(id)arg0 withTransmitterHandle:(struct tagHANDLE *)arg1 ;
-(void)setupVideoStream;
-(void)sourceFrameRateDidChange:(unsigned int)arg0 ;
-(void)startVCRCWithStreamConfig:(id)arg0 ;
-(void)stopSynchronization;
-(void)stopVCRC;
-(void)submitStatisticsCollectorVideoStallUpdateWithTime:(CGFloat)arg0 ;
-(void)submitStatisticsCollectorVideoStallUpdateWithType:(int)arg0 currentTime:(CGFloat)arg1 stallDuration:(CGFloat)arg2 idsParticipantID:(NSUInteger)arg3 ;
-(void)thermalLevelDidChange:(int)arg0 ;
-(void)updateSourcePlayoutTimestamp:(struct ? *)arg0 ;
-(void)updateVideoConfig:(id)arg0 ;
-(void)updateVideoReceiver:(id)arg0 ;
-(void)updateWindowState:(int)arg0 isLocal:(BOOL)arg1 windowRect:(struct CGRect )arg2 ;
-(void)vcVideoReceiver:(id)arg0 didSwitchFromStreamID:(unsigned short)arg1 toStreamID:(unsigned short)arg2 ;
-(void)vcVideoReceiver:(id)arg0 downlinkQualityDidChange:(id)arg1 ;
-(void)vcVideoReceiver:(id)arg0 requestKeyFrameGenerationWithStreamID:(unsigned short)arg1 firType:(int)arg2 ;
-(void)vcVideoReceiverRequestKeyFrame:(id)arg0 rtcpPSFBType:(unsigned int)arg1 ;


@end


#endif