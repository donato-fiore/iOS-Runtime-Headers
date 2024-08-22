// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STREAMGROUPSTATS_H
#define STREAMGROUPSTATS_H

@class NSString;

#import <Foundation/Foundation.h>

#import "VCHistogram.h"

@interface StreamGroupStats : NSObject

@property unsigned int accumulatedMediaQueueFlushCount; // ivar: _accumulatedMediaQueueFlushCount
@property CGFloat accumulatedTotalMediaQueueSize; // ivar: _accumulatedTotalMediaQueueSize
@property NSUInteger assembledFramesWithRTXPacketsCount; // ivar: _assembledFramesWithRTXPacketsCount
@property unsigned int audioErasureCount; // ivar: _audioErasureCount
@property unsigned int audioStreamSwitchCount; // ivar: _audioStreamSwitchCount
@property unsigned int avSyncOffsetSamplesCount; // ivar: _avSyncOffsetSamplesCount
@property int avSyncOffsetSum; // ivar: _avSyncOffsetSum
@property CGFloat averageJitterBufferDelay; // ivar: _averageJitterBufferDelay
@property unsigned int averageJitterBufferDelayCount; // ivar: _averageJitterBufferDelayCount
@property CGFloat avgJBTargetSizeChanges; // ivar: _avgJBTargetSizeChanges
@property unsigned int avgJBTargetSizeChangesCount; // ivar: _avgJBTargetSizeChangesCount
@property CGFloat currentStallTime; // ivar: _currentStallTime
@property NSUInteger failedToAssembleFramesWithRTXPacketsCount; // ivar: _failedToAssembleFramesWithRTXPacketsCount
@property (retain) NSString *firstMKIReceived; // ivar: _firstMKIReceived
@property (retain) NSString *firstMediaReceived; // ivar: _firstMediaReceived
@property (retain) NSString *firstRemoteVideoFrameDecoded; // ivar: _firstRemoteVideoFrameDecoded
@property BOOL isRTXTelemetryAvailable; // ivar: _isRTXTelemetryAvailable
@property BOOL isVideoDegraded; // ivar: _isVideoDegraded
@property CGFloat lastReceivedVideoStallTime; // ivar: _lastReceivedVideoStallTime
@property NSUInteger lateFramesScheduledWithRTXCount; // ivar: _lateFramesScheduledWithRTXCount
@property int maxAVSyncOffset; // ivar: _maxAVSyncOffset
@property unsigned int maxAudioErasureCount; // ivar: _maxAudioErasureCount
@property CGFloat maxJBTargetSizeChanges; // ivar: _maxJBTargetSizeChanges
@property CGFloat maxMediaQueueSize; // ivar: _maxMediaQueueSize
@property unsigned int maxVideoStallCount; // ivar: _maxVideoStallCount
@property int minAVSyncOffset; // ivar: _minAVSyncOffset
@property unsigned int minVideoFrameRate; // ivar: _minVideoFrameRate
@property NSUInteger nacksFulfilled; // ivar: _nacksFulfilled
@property NSUInteger nacksFulfilledOnTime; // ivar: _nacksFulfilledOnTime
@property (readonly) VCHistogram *nacksPLRWithRTX; // ivar: _nacksPLRWithRTX
@property (readonly) VCHistogram *nacksPLRWithoutRTX; // ivar: _nacksPLRWithoutRTX
@property (readonly) VCHistogram *nacksRTXLateTime; // ivar: _nacksRTXLateTime
@property (readonly) VCHistogram *nacksRTXMediaBitRate; // ivar: _nacksRTXMediaBitRate
@property (readonly) VCHistogram *nacksRTXResponseTime; // ivar: _nacksRTXResponseTime
@property (readonly) VCHistogram *nacksRTXRetransmittedMediaBitRate; // ivar: _nacksRTXRetransmittedMediaBitRate
@property NSUInteger nacksSent; // ivar: _nacksSent
@property unsigned int perfTimerEventCount; // ivar: _perfTimerEventCount
@property unsigned int significantVideoStallCount; // ivar: _significantVideoStallCount
@property unsigned int tickCount; // ivar: _tickCount
@property (retain) NSString *timeToSeeFirstRemoteVideoFrame; // ivar: _timeToSeeFirstRemoteVideoFrame
@property CGFloat totalAudioErasureTime; // ivar: _totalAudioErasureTime
@property unsigned int totalMediaQueueSizeReportsCount; // ivar: _totalMediaQueueSizeReportsCount
@property NSUInteger uniqueNacksSent; // ivar: _uniqueNacksSent
@property CGFloat videoDegradedMaxLength; // ivar: _videoDegradedMaxLength
@property CGFloat videoDegradedStartTime; // ivar: _videoDegradedStartTime
@property unsigned int videoDegradedTotalCounter; // ivar: _videoDegradedTotalCounter
@property CGFloat videoDegradedTotalTime; // ivar: _videoDegradedTotalTime
@property CGFloat videoStalledMaxLength; // ivar: _videoStalledMaxLength
@property CGFloat videoStalledTotalTime; // ivar: _videoStalledTotalTime
@property unsigned int videoStreamSwitchCount; // ivar: _videoStreamSwitchCount


-(id)init;
-(void)dealloc;


@end


#endif