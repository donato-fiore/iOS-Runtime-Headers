// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCVIDEOSTREAMTRANSMITTER_H
#define VCVIDEOSTREAMTRANSMITTER_H

@protocol OS_dispatch_queue, OS_dispatch_semaphore;


#import "VCVideoTransmitterBase.h"
#import "VCMediaStreamStats.h"
#import "AVCStatisticsCollector.h"

@interface VCVideoStreamTransmitter : VCVideoTransmitterBase {
    *tagHANDLE _videoRTP;
    NSObject<OS_dispatch_queue> *_transmitterQueue;
    *tagVCRealTimeThread _encoderThread;
    BOOL _terminateEncoderThread;
    NSObject<OS_dispatch_semaphore> *_bufferQueueSemaphore;
    *opaqueCMBufferQueue _bufferQueue;
    char * _buffer;
    NSUInteger _bufferSize;
    int _maxPacketCount;
    *int _packetSizes;
    *int _packetFlags;
    NSUInteger _lastKeyFrameSampleBufferSize;
    int _iSMBCount;
    unsigned int _keyFrameIntervalDuration;
    unsigned short _recommendedMTU;
    NSInteger _videoCodecType;
    int _videoSource;
    unsigned int _dwRefreshFrameCounter;
    _opaque_pthread_mutex_t _xMBs;
    int _shouldGenerateKeyFrame;
    VCMediaStreamStats *_stats;
    CGFloat _reportingIntervalStartTime;
    CGFloat _reportingLastUpdateTime;
    unsigned char _lastCameraStatusBits;
    BOOL _enableCVO;
    NSUInteger _cvoExtensionID;
    *opaqueRTCReporting _reportingAgent;
    int _reportingModuleID;
    ? _encoder;
    *tagVCMemoryPool _encodingArgPool;
    BOOL _forceDisableBitrateCap;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _totalPacketsSent;
    NSUInteger _totalBytesSent;
    unsigned int _tilesPerFrame;
    unsigned int _totalKeyFramesSent;
    *__CFAllocator _videoPacketAllocator;
}




-(BOOL)enqueueVideoFrame:(struct opaqueCMSampleBuffer *)arg0 frameTime:(struct ? )arg1 cameraStatusBits:(unsigned char)arg2 ;
-(BOOL)isKeyFrame:(struct opaqueCMSampleBuffer *)arg0 ;
-(BOOL)prependSPSPPS:(*NSUInteger)arg0 dataPointer:(char *)arg1 sampleBuffer:(struct opaqueCMSampleBuffer *)arg2 ;
-(BOOL)setEncodingMode:(int)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(int)transmitEncodedVideoFrame:(char *)arg0 size:(NSUInteger)arg1 timestamp:(unsigned int)arg2 hostTime:(CGFloat)arg3 cameraStatusBits:(unsigned char)arg4 ;
-(int)transmitFrameInGroups:(char *)arg0 numOfPackets:(int)arg1 timestamp:(unsigned int)arg2 hostTime:(CGFloat)arg3 cameraStatusBits:(unsigned char)arg4 ;
-(int)transmitVideoPackets:(char *)arg0 packetSizes:(*int)arg1 startPacket:(int)arg2 packetCount:(int)arg3 lastGroup:(int)arg4 timestamp:(unsigned int)arg5 hostTime:(CGFloat)arg6 cameraStatusBits:(unsigned char)arg7 bytesSent:(*int)arg8 ;
-(struct __CFDictionary *)forceKeyFrameProperties;
-(unsigned int)setTemporaryMaximumBitrate:(unsigned int)arg0 ;
-(void)dealloc;
-(void)encodeVideoFrame:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)gatherRealtimeStats:(struct __CFDictionary *)arg0 ;
-(void)generateKeyFrameWithFIRType:(int)arg0 ;
-(void)handleActiveConnectionChange:(id)arg0 ;
-(void)handleThermalLevelChange:(int)arg0 ;
-(void)initVideoCompressionWithWidth:(unsigned int)arg0 height:(unsigned int)arg1 bitrate:(unsigned int)arg2 keyFrameIntervalDuration:(unsigned int)arg3 ;
-(void)reportingVideoStreamEvent:(unsigned short)arg0 ;
-(void)setFECRatio:(CGFloat)arg0 ;
-(void)setFECRedundancyVector:(struct ? *)arg0 ;
-(void)setKeyFrameOnlyStreamID:(unsigned short)arg0 ;
-(void)setMediaSuggestion:(struct VCRateControlMediaSuggestion *)arg0 ;
-(void)setStreamIDs:(*unsigned short)arg0 numOfStreamIDs:(unsigned char)arg1 repairedStreamIDs:(*unsigned short)arg2 numOfRepairedStreamIDs:(unsigned char)arg3 ;
-(void)setTargetBitrate:(unsigned int)arg0 ;
-(void)startVideo;
-(void)stopVideo;
-(void)transmitEncodedVideoFrame:(struct opaqueCMSampleBuffer *)arg0 cameraStatusBits:(unsigned char)arg1 ;
-(void)updateSendStatisticsWithTimestamp:(unsigned int)arg0 frameSize:(unsigned int)arg1 packetsInFrame:(unsigned int)arg2 ;
-(void)updateWindowState:(int)arg0 isLocal:(BOOL)arg1 windowRect:(struct CGRect )arg2 ;


@end


#endif