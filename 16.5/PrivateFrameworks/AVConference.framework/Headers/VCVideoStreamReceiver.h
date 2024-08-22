// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCVIDEOSTREAMRECEIVER_H
#define VCVIDEOSTREAMRECEIVER_H

@class NSString;
@protocol VCMediaStreamSyncDestination, OS_dispatch_queue;


#import "VCVideoReceiverBase.h"
#import "VCVideoStreamRateAdaptation.h"
#import "VideoAttributes.h"
#import "VCMediaStreamStats.h"

@interface VCVideoStreamReceiver : VCVideoReceiverBase <VCMediaStreamSyncDestination>

 {
    *tagHANDLE _hRTP;
    *OpaqueCMMemoryPool _blockBufferMemoryPool;
    *__CFAllocator _blockBufferMemoryPoolAllocator;
    *OpaqueVTDecompressionSession _decompressionSession;
    _opaque_pthread_mutex_t _decompressionSessionMutex;
    BOOL _receivedFirstPacket;
    BOOL _receivedFirstRemoteFrame;
    unsigned short _lastSequenceNumber;
    int _sequenceNumberOutOfOrder;
    unsigned char _firSequenceNumber;
    CGFloat _lastFIRArrivalTime;
    VCVideoStreamRateAdaptation *_rateAdaptation;
    *opaqueCMBufferQueue _videoQueue;
    unsigned int _mostRecentTimestamp;
    unsigned int _lastVideoTimestamp;
    unsigned int _videoTimestampWrapCount;
    *opaqueCMFormatDescription _formatDescription;
    NSObject<OS_dispatch_queue> *_videoStreamReceiverQueue;
    *OpaqueFigThread _networkReceiveThread;
    BOOL _runNetworkReceiveThread;
    int _sRecvReset;
    *VideoPacketBuffer_t _videoPacketBuffer;
    VideoAttributes *_remoteVideoAttributes;
    int _remoteVideoCamera;
    BOOL _remoteVideoMirrored;
    BOOL _enableCVO;
    NSUInteger _cvoExtensionID;
    NSUInteger _lastKeyFrameSampleBufferSize;
    ? _lastFrameTime;
    ? _lastDisplayTime;
    VCMediaStreamStats *_stats;
    CGFloat _reportingIntervalStartTime;
    CGFloat _reportingLastUpdateTime;
    unsigned int _receivedBytes;
    unsigned int _videoStallDurationMillis;
    CGFloat _videoStallStartTime;
    *opaqueRTCReporting _reportingAgent;
    int _reportingModuleID;
    BOOL _enableReceiveBitstreamDump;
    *OpaqueVCTransportStreamRunLoop _runLoop;
    *void _rtcpContext;
    *unk _rtcpPacketsCallback;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)networkReceivePackets;
-(BOOL)canDequeue:(struct opaqueCMBufferQueue *)arg0 forTimestamp:(unsigned int)arg1 ;
-(BOOL)handleRemoteVideoAttributesChange:(struct __CVBuffer *)arg0 ;
-(BOOL)startSynchronization:(id)arg0 ;
-(id)initWithConfig:(struct tagVCVideoStreamReceiverConfig *)arg0 ;
-(id)syncSource;
-(int)decodeFrame:(struct opaqueCMSampleBuffer *)arg0 showFrame:(BOOL)arg1 ;
-(int)processVideoRTCP;
-(int)processVideoRTP;
-(int)scheduleDecodeForFrameWithBuffer:(struct VCVideoReceiverSampleBuffer_t *)arg0 timestamp:(unsigned int)arg1 hostTime:(CGFloat)arg2 showFrame:(BOOL)arg3 ;
-(int)showDecodedFrame:(struct __CVBuffer *)arg0 atTime:(struct ? )arg1 ;
-(int)startNetworkReceiveThread;
-(int)stopNetworkReceiveThread;
-(struct tagVCVideoPacketBufferConfig )newVideoPacketBufferConfig:(struct _RTPMediaPacket *)arg0 ;
-(void)createDecodeSession:(struct opaqueCMFormatDescription *)arg0 ;
-(void)dealloc;
-(void)dequeueAndDecodeForTimestamp:(unsigned int)arg0 ;
-(void)gatherRealtimeStats:(struct __CFDictionary *)arg0 ;
-(void)handleActiveConnectionChange:(id)arg0 ;
-(void)handleAlarmForTimeStamp:(unsigned int)arg0 ;
-(void)pauseVideo;
// -(void)processReceptionReportBlock:(struct tagRTCP_RRB *)arg0 blockCount:(unsigned int)arg1 arrivalNTPTime:(unk)arg2  ;
-(void)reportingVideoStreamEvent:(unsigned short)arg0 ;
-(void)rtcpSendIntervalElapsed;
-(void)scheduleDecodeForTimestamp:(unsigned int)arg0 ;
-(void)scheduleVideoDecode:(unsigned int)arg0 ;
-(void)setEnableCVO:(BOOL)arg0 cvoExtensionID:(NSUInteger)arg1 ;
-(void)setEnableRateAdaptation:(BOOL)arg0 maxBitrate:(unsigned int)arg1 minBitrate:(unsigned int)arg2 adaptationInterval:(CGFloat)arg3 ;
-(void)setSyncSource:(id)arg0 ;
-(void)startVideo;
-(void)stopSynchronization;
-(void)stopVideo;
-(void)teardownDecodeSession:(BOOL)arg0 ;
-(void)updateSequenceNumber:(unsigned short)arg0 ;
-(void)updateSourcePlayoutTimestamp:(struct ? *)arg0 ;
-(void)updateVideoStallStatus:(BOOL)arg0 ;


@end


#endif