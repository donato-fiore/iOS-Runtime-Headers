// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MULTIWAYSTREAM_H
#define MULTIWAYSTREAM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "VCHistogram.h"

@interface MultiwayStream : NSObject {
    NSString *_streamID;
    int _interval;
    int _frequency;
    CGFloat _lastReceivedVideoStallTime;
    CGFloat _totalVideoStallTime;
    CGFloat _maxVideoStallTime;
    unsigned short _significantVideoStallCount;
    unsigned short _maxVideoStallCount;
    unsigned short _minVideoFrameRate;
    unsigned short _audioErasureCount;
    unsigned short _maxAudioErasureCount;
    CGFloat _averageFramerateSum;
    unsigned short _averageFramerateReportCounter;
    CGFloat _averageVideoJitterLengthSum;
    unsigned short _averageVideoJitterReportCounter;
    CGFloat _averageJitterBufferDelay;
    unsigned short _totalJitterBufferDelayCnt;
    unsigned short _targetJBSizeAccumulation;
    unsigned short _targetJBSizeChngCnt;
    unsigned short _maxTargetJBSizeChanges;
    int _totalVideoPacketsReceived;
    int _oooPacketCount;
    unsigned int _totalFIRDemandCounter;
    unsigned int _totalFIRCounter;
    unsigned int _videoFrameDecodedButSkippedCounter;
    unsigned int _videoFrameIncompleteNextTSCounter;
    unsigned int _videoFrameTotalIncompleteCounter;
    unsigned int _decodedVideoFrameEnqueueCounter;
    unsigned int _evictedFramesTrackedCount;
    unsigned int _evictedFramesAnalysisValidIntervals;
    unsigned int _evictedFramesRecoveredCount;
    unsigned int _lateFramesScheduledCount;
    CGFloat _evictedFramesAverageLatePacketDelay;
    CGFloat _evictedFramesMaxLatePacketDelay;
    VCHistogram *_evictedFramesLatePacketDelayHist;
    unsigned int _decodeNoShowFrameCount;
    int _maxAVSyncOffset;
    int _minAVSyncOffset;
    int _averageAVSyncOffsetSum;
    unsigned int _averageAVSyncOffsetCounter;
    BOOL _isRTXTelemetryAvailable;
    NSUInteger _nacksSent;
    NSUInteger _nacksFulfilled;
    NSUInteger _nacksFulfilledOnTime;
    NSUInteger _uniqueNacksSent;
    NSUInteger _lateFramesScheduledWithRTXCount;
    NSUInteger _assembledFramesWithRTXPacketsCount;
    NSUInteger _failedToAssembleFramesWithRTXPacketsCount;
    VCHistogram *_nacksRTXResponseTime;
    VCHistogram *_nacksRTXLateTime;
    VCHistogram *_nacksRTXMediaBitRate;
    VCHistogram *_nacksRTXRetransmittedMediaBitRate;
    VCHistogram *_nacksPLRWithRTX;
    VCHistogram *_nacksPLRWithoutRTX;
}


@property (readonly) CGFloat currentStallTime; // ivar: _currentStallTime
@property (readonly) CGFloat totalAudioErasureTime; // ivar: _totalAudioErasureTime


-(BOOL)isRTXTelemetryAvailable;
-(CGFloat)audioErasureTotalTime;
-(CGFloat)averageFramerateSum;
-(CGFloat)averageJBTargetSizeChanges;
-(CGFloat)averageJitterBufferDelay;
-(CGFloat)averageVideoJitterLengthSum;
-(CGFloat)evictedFramesAnalysisValidIntervals;
-(CGFloat)evictedFramesAverageLatePacketDelay;
-(CGFloat)evictedFramesMaxLatePacketDelay;
-(CGFloat)videoStallTotalTime;
-(NSUInteger)assembledFramesWithRTXPacketsCount;
-(NSUInteger)failedToAssembleFramesWithRTXPacketsCount;
-(NSUInteger)lateFramesScheduledWithRTXCount;
-(NSUInteger)nacksFulfilled;
-(NSUInteger)nacksFulfilledOnTime;
-(NSUInteger)nacksSent;
-(id)evictedFramesLatePacketDelayHist;
-(id)initStreamWithID:(id)arg0 ;
-(id)nacksPLRWithRTX;
-(id)nacksPLRWithoutRTX;
-(int)averageAVSyncOffsetSum;
-(int)maxAVSyncOffset;
-(int)minAVSyncOffset;
-(unsigned int)RTPeriod;
-(unsigned int)averageAVSyncOffsetCounter;
-(unsigned int)decodeNoShowFrameCount;
-(unsigned int)decodedVideoFrameEnqueueCounter;
-(unsigned int)evictedFramesRecoveredCount;
-(unsigned int)evictedFramesTrackedCount;
-(unsigned int)lateFramesScheduledCount;
-(unsigned int)oooPacketCount;
-(unsigned int)totalFIRCounter;
-(unsigned int)totalFIRDemandCounter;
-(unsigned int)totalVideoPacketsReceived;
-(unsigned int)videoFrameDecodedButSkippedCounter;
-(unsigned int)videoFrameIncompleteNextTSCounter;
-(unsigned int)videoFrameTotalIncompleteCounter;
-(unsigned short)audioErasureCount;
-(unsigned short)averageFramerateReportCounter;
-(unsigned short)averageVideoJitterReportCounter;
-(unsigned short)maxAudioErasureCount;
-(unsigned short)maxJBTargetSizeChanges;
-(unsigned short)maxVideoStallCount;
-(unsigned short)minVideoFrameRate;
-(unsigned short)significantVideoStallCount;
-(void)dealloc;
-(void)processData:(id)arg0 algosScorer:(id)arg1 timestamp:(CGFloat)arg2 ;
-(void)processRTXData:(id)arg0 ;
-(void)updateMinimumAndMaximumAVSyncOffset:(id)arg0 ;


@end


#endif