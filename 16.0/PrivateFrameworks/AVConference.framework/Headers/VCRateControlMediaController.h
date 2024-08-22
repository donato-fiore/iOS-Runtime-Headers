// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCRATECONTROLMEDIACONTROLLER_H
#define VCRATECONTROLMEDIACONTROLLER_H


#import <Foundation/Foundation.h>

#import "SenderLargeFrameInfo.h"
#import "VCRateControlServerBag.h"
#import "AVCStatisticsCollector.h"

@interface VCRateControlMediaController : NSObject {
    id *_mediaControllerDelegate;
    BOOL _isVideoStoppedByBaseband;
    BOOL _isVideoPausedByUser;
    BOOL _isBasebandFlushing;
    BOOL _isAudioStall;
    CGFloat _lastAudioFractionChangeTime;
    CGFloat _lastAudioEnoughRateTime;
    unsigned char _videoPayloadType;
    unsigned int _videoRefreshFrameTimestamp;
    unsigned int _videoRefreshFramePacketCount;
    SenderLargeFrameInfo *_senderLargeFrameInfo;
    unsigned int _probingLargeFrameSizeCap;
    CGFloat _minProbingSpacingAggressive;
    CGFloat _lastBasebandFlushAudioTime;
    CGFloat _lastBasebandFlushVideoTime;
    unsigned short _videoFlushTransactionID;
    unsigned int _audioStallBitrate;
    CGFloat _lastAudioStallFlushTime;
    unsigned int _basebandAverageBitrate;
    unsigned int _basebandAverageBitrateShort;
    unsigned int _basebandTotalQueueDepth;
    unsigned int _basebandFlushableQueueDepth;
    CGFloat _basebandExpectedQueuingDelay;
    CGFloat _basebandNBDCD;
    CGFloat _lastBasebandHighNBDCDTime;
    BOOL _isBasebandQueuingDelayHigh;
    *void _logBasebandDump;
    *void _logBWEDump;
}


@property (nonatomic) unsigned int afrcRemoteEstimatedBandwidth; // ivar: _afrcRemoteEstimatedBandwidth
@property (nonatomic) BOOL allowVideoStop; // ivar: _allowVideoStop
@property (nonatomic) int audioFractionTier; // ivar: _audioFractionTier
@property (nonatomic) unsigned int audioSendingBitrate; // ivar: _audioSendingBitrate
@property (nonatomic) int basebandFlushCount; // ivar: _basebandFlushCount
@property (readonly, nonatomic) int basebandFlushedAudioCount; // ivar: _basebandFlushedAudioCount
@property (readonly, nonatomic) int basebandFlushedVideoCount; // ivar: _basebandFlushedVideoCount
@property (nonatomic) BOOL enableAggressiveProbingSequence; // ivar: _enableAggressiveProbingSequence
@property (nonatomic) BOOL isAudioOnly; // ivar: _isAudioOnly
@property (readonly, nonatomic) BOOL isInThrottlingMode; // ivar: _isInThrottlingMode
@property (nonatomic) BOOL isRTPFlushBasebandFromVCRateControl; // ivar: _isRTPFlushBasebandFromVCRateControl
@property (nonatomic) BOOL isRateLimitedMaxTimeExceeded; // ivar: _isRateLimitedMaxTimeExceeded
@property (nonatomic) BOOL isRemoteAudioPaused; // ivar: _isRemoteAudioPaused
@property (nonatomic) BOOL isSenderProbingEnabled; // ivar: _isSenderProbingEnabled
@property (readonly, nonatomic) BOOL isVideoStopped;
@property (readonly, nonatomic) BOOL isVideoStoppedByVCRateControl; // ivar: _isVideoStoppedByVCRateControl
@property (nonatomic) CGFloat lastBasebandFlushCountChangeTime; // ivar: _lastBasebandFlushCountChangeTime
@property (readonly, nonatomic) CGFloat lastVideoKeyFrameTime; // ivar: _lastVideoKeyFrameTime
@property (readonly, nonatomic) CGFloat lastVideoRefreshFrameTime; // ivar: _lastVideoRefreshFrameTime
@property (nonatomic) *tagHANDLE mediaQueue; // ivar: _hMediaQueue
@property (nonatomic) unsigned int minTargetBitrate; // ivar: _minTargetBitrate
@property (readonly, nonatomic) unsigned int probingLargeFrameSize; // ivar: _probingLargeFrameSize
@property (readonly, nonatomic) unsigned int probingSequencePacketCount; // ivar: _probingSequencePacketCount
@property (readonly, nonatomic) unsigned int probingSequencePacketSize; // ivar: _probingSequencePacketSize
@property (retain, nonatomic) VCRateControlServerBag *serverBag; // ivar: _serverBag
@property (nonatomic) BOOL shouldDisableLargeFrameRequestsWhenInitialRampUp; // ivar: _shouldDisableLargeFrameRequestsWhenInitialRampUp
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // ivar: _statisticsCollector
@property (nonatomic) unsigned int targetBitrate; // ivar: _targetBitrate
@property (nonatomic) unsigned int videoSendingBitrate; // ivar: _videoSendingBitrate


-(BOOL)didMediaGetFlushedWithPayloadType:(unsigned char)arg0 transactionID:(unsigned short)arg1 packetDropped:(unsigned short)arg2 sequenceNumberArray:(*unsigned short)arg3 ;
-(BOOL)increaseFlushCountForAudioStall:(int)arg0 audioStallBitrate:(unsigned int)arg1 ;
-(BOOL)increaseFlushCountForVideoRefresh:(int)arg0 transactionID:(unsigned short)arg1 ;
-(BOOL)isProbingLargeFrameRequiredAtTime:(CGFloat)arg0 ;
-(BOOL)rampDownAudioFraction;
-(BOOL)rampUpAudioFraction;
-(id)initWithMediaQueue:(struct tagHANDLE *)arg0 delegate:(id)arg1 ;
-(void)computePacketLossWithRemoteInfo:(struct VCRCMediaPLPFromRemoteInfo *)arg0 ;
-(void)dealloc;
-(void)decreaseFlushCount:(int)arg0 ;
-(void)enableBWELogDump:(*void)arg0 ;
-(void)enableBasebandLogDump:(*void)arg0 ;
-(void)getMediaQueueInVideoBitrate:(*CGFloat)arg0 outVideoBitrate:(*CGFloat)arg1 inAudioBitrate:(*CGFloat)arg2 outAudioBitrate:(*CGFloat)arg3 ;
-(void)getMediaQueueRateChangeCounter:(*unsigned int)arg0 rateChangeTime:(*CGFloat)arg1 ;
-(void)increaseBasebandFlushCountInternallyWithSuggestion:(struct VCRateControlMediaSuggestion *)arg0 ;
-(void)pauseVideoByUser:(BOOL)arg0 ;
-(void)printLargeFrameStatsAtTime:(CGFloat)arg0 timestamp:(unsigned int)arg1 timeSinceLastProbingSequence:(CGFloat)arg2 frameSize:(unsigned int)arg3 wastedBytes:(unsigned int)arg4 fecRatio:(CGFloat)arg5 isFrameRequested:(BOOL)arg6 ;
-(void)recordVideoRefreshFrameWithTimestamp:(unsigned int)arg0 payloadType:(unsigned char)arg1 packetCount:(unsigned int)arg2 isKeyFrame:(BOOL)arg3 ;
-(void)resumeVideoByVCRateControl;
-(void)scheduleProbingSequenceAtTime:(CGFloat)arg0 ;
-(void)scheduleProbingSequenceWithFrameSize:(unsigned int)arg0 paddingBytes:(unsigned int)arg1 timestamp:(unsigned int)arg2 fecRatio:(CGFloat)arg3 isProbingSequenceScheduled:(*BOOL)arg4 ;
-(void)stopVideoByVCRateControl;
-(void)updateAudioStallInMediaSuggestion:(struct VCRateControlMediaSuggestion *)arg0 isSuggestionNeeded:(*BOOL)arg1 atTime:(CGFloat)arg2 ;
-(void)updateBasebandSuggestionWithStatistics:(struct ? )arg0 ;
-(void)updateLargeFrameSizeWithBandwidth:(unsigned int)arg0 ;
-(void)updateProbingLargeFrameSizeCap;


@end


#endif