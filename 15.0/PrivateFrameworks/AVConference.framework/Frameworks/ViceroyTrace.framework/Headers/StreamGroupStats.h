// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STREAMGROUPSTATS_H
#define STREAMGROUPSTATS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface StreamGroupStats : NSObject

@property unsigned int audioErasureCount; // ivar: _audioErasureCount
@property unsigned int audioStreamSwitchCount; // ivar: _audioStreamSwitchCount
@property unsigned int avSyncOffsetSamplesCount; // ivar: _avSyncOffsetSamplesCount
@property int avSyncOffsetSum; // ivar: _avSyncOffsetSum
@property CGFloat averageJitterBufferDelay; // ivar: _averageJitterBufferDelay
@property unsigned int averageJitterBufferDelayCount; // ivar: _averageJitterBufferDelayCount
@property CGFloat avgJBTargetSizeChanges; // ivar: _avgJBTargetSizeChanges
@property unsigned int avgJBTargetSizeChangesCount; // ivar: _avgJBTargetSizeChangesCount
@property CGFloat currentStallTime; // ivar: _currentStallTime
@property (retain) NSString *firstRemoteVideoFrameDecoded; // ivar: _firstRemoteVideoFrameDecoded
@property BOOL isVideoDegraded; // ivar: _isVideoDegraded
@property CGFloat lastReceivedVideoStallTime; // ivar: _lastReceivedVideoStallTime
@property int maxAVSyncOffset; // ivar: _maxAVSyncOffset
@property unsigned int maxAudioErasureCount; // ivar: _maxAudioErasureCount
@property CGFloat maxJBTargetSizeChanges; // ivar: _maxJBTargetSizeChanges
@property unsigned int maxVideoStallCount; // ivar: _maxVideoStallCount
@property int minAVSyncOffset; // ivar: _minAVSyncOffset
@property unsigned int minVideoFrameRate; // ivar: _minVideoFrameRate
@property unsigned int perfTimerEventCount; // ivar: _perfTimerEventCount
@property unsigned int significantVideoStallCount; // ivar: _significantVideoStallCount
@property unsigned int tickCount; // ivar: _tickCount
@property (retain) NSString *timeToSeeFirstRemoteVideoFrame; // ivar: _timeToSeeFirstRemoteVideoFrame
@property CGFloat totalAudioErasureTime; // ivar: _totalAudioErasureTime
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