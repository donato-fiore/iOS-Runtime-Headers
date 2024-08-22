// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCRATECONTROLALGORITHMBASE_H
#define VCRATECONTROLALGORITHMBASE_H

@class NSString;
@protocol VCRateControlAlgorithm;

#import <Foundation/Foundation.h>

#import "VCRateControlMediaController.h"

@interface VCRateControlAlgorithmBase : NSObject <VCRateControlAlgorithm>

 {
    uint8_t _paused;
    CGFloat _pauseStartTime;
    int _state;
    int _rampUpStatus;
    int _rampDownStatus;
    int _currentTierIndex;
    int _previousTierIndex;
    CGFloat _targetBitrateContinuous;
    unsigned int _rateControlCounter;
    CGFloat _rateControlTime;
    CGFloat _rampUpFrozenTime;
    unsigned int _consecutiveRampDown;
    CGFloat _lastTimeStartRampingDown;
    CGFloat _lastCongestionTime;
    CGFloat _lastRampDownTimeDueToFeedback;
    CGFloat _lastRampDownTimeDueToBaseband;
    CGFloat _lastNoOvershootBWEstimationTime;
    CGFloat _firstBelowNoRampUpBandwidthTime;
    BOOL _belowNoRampUpBandwidth;
    BOOL _isOvershoot;
    ? _owrdList;
    BOOL _isOWRDListReady;
    BOOL _isOWRDConstant;
    CGFloat _nowrd;
    CGFloat _nowrdShort;
    CGFloat _nowrdAcc;
    CGFloat _lastOWRDChangeTime;
    ? _lossEventBuffer;
    unsigned int _lossEventBufferIndex;
    CGFloat _lastLossEventRampDownTime;
    CGFloat _firstLossEventRampDownTime;
    int _packetLossRateBadTrendCount;
    unsigned int _lossEventBandwidthLimit;
    unsigned int _lossEventBandwidthConfidence;
    CGFloat _previousPacketLossRate;
    CGFloat _packetLossRateThreshold;
    CGFloat _packetLossRateAvgLong;
    CGFloat _packetLossRateAvgLongPrevious;
    CGFloat _packetLossRateAvgLongAtLBAStart;
    CGFloat _packetLossRateAvgLongAtLBAExit;
    BOOL _shouldConsiderVideoInLossEvent;
    *void _logDump;
    *void _logBasebandDump;
    BOOL _isPeriodicLoggingEnabled;
}


@property (readonly, nonatomic) unsigned int actualBitrate; // ivar: _actualBitrate
@property (readonly, nonatomic) VCRateControlAlgorithmConfig config; // ivar: _config
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didMBLRampDown; // ivar: _didMBLRampDown
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCongested; // ivar: _isCongested
@property (readonly, nonatomic) BOOL isFirstInitialRampUpDone; // ivar: _isFirstInitialRampUpDone
@property (nonatomic) BOOL isFirstTimestampArrived; // ivar: _isFirstTimestampArrived
@property (readonly, nonatomic) BOOL isLossBasedAdaptationOn;
@property (readonly, nonatomic) BOOL isNewRateSentOut; // ivar: _isNewRateSentOut
@property (readonly, nonatomic) BOOL isSendBitrateLimited; // ivar: _isSendBitrateLimited
@property (nonatomic) unsigned int localBandwidthEstimation; // ivar: _localBandwidthEstimation
@property (retain, nonatomic) VCRateControlMediaController *mediaController; // ivar: _mediaController
@property (readonly, nonatomic) unsigned int mostBurstLoss; // ivar: _mostBurstLoss
@property (readonly, nonatomic) CGFloat owrd; // ivar: _owrd
@property (readonly, nonatomic) CGFloat packetLossRate; // ivar: _packetLossRate
@property (readonly, nonatomic) CGFloat packetLossRateAudio; // ivar: _packetLossRateAudio
@property (readonly, nonatomic) CGFloat packetLossRateVideo; // ivar: _packetLossRateVideo
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic) unsigned int rateChangeCounter; // ivar: _rateChangeCounter
@property (nonatomic) unsigned int rateSharingCount; // ivar: _rateSharingCount
@property (readonly, nonatomic) unsigned int remoteBandwidthEstimation; // ivar: _remoteBandwidthEstimation
@property (readonly, nonatomic) CGFloat roundTripTime; // ivar: _roundTripTime
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int targetBitrate; // ivar: _targetBitrate
@property (readonly, nonatomic) unsigned int totalPacketReceived; // ivar: _totalPacketReceived
@property (readonly, nonatomic) unsigned int worstRecentBurstLoss; // ivar: _worstRecentBurstLoss
@property (readonly, nonatomic) CGFloat worstRecentRoundTripTime; // ivar: _worstRecentRoundTripTime


-(BOOL)allowRampUpWithContinuousTargetBitrate;
-(BOOL)doRateControlWithStatistics:(struct ? )arg0 ;
-(BOOL)keepOvershootingRampDownBandwidth;
-(BOOL)recentlyGoAboveRampUpBandwidth;
-(BOOL)shouldBlockRampUpDueToLossEventThreshold;
-(BOOL)shouldRampDownDueToConsecutiveLoss;
-(BOOL)shouldRampDownDueToLossEvent;
-(BOOL)shouldRampDownDueToLossThreshold;
-(CGFloat)getDoubleTimeFromTimestamp:(unsigned int)arg0 timestampTick:(unsigned int)arg1 wrapAroundCounter:(unsigned int)arg2 ;
-(CGFloat)lossEventOverThresholdRatio;
-(CGFloat)rampUpTargetBitrateContinuousWithBandwidthDiff:(int)arg0 ;
-(id)init;
-(int)lossEventIncreasingCount;
-(unsigned short)getTimestampFromMicroTime:(CGFloat)arg0 ;
-(void)calculateCongestionMetricsFromOWRD:(CGFloat)arg0 time:(CGFloat)arg1 ;
-(void)checkBandwidthOvershootWithRemoteBandwidthEstimation:(unsigned int)arg0 ;
-(void)checkPaused;
-(void)configure:(struct VCRateControlAlgorithmConfig )arg0 restartRequired:(BOOL)arg1 ;
-(void)dealloc;
-(void)enableBasebandDump:(*void)arg0 ;
-(void)enableLogDump:(*void)arg0 enablePeriodicLogging:(BOOL)arg1 ;
-(void)logToDumpFilesWithString:(id)arg0 ;
-(void)resetLossEventBandwidthLimit;
-(void)resetLossEventBuffer;
-(void)stateChangeTo:(int)arg0 ;
-(void)stateEnter;
-(void)stateExit;
-(void)updateCongestionStatusWhenRampDown:(CGFloat)arg0 ;
-(void)updateCongestionStatusWhenRampUp;
-(void)updateLossEvent;
-(void)updateLossEventBandwidthLimit:(unsigned int)arg0 ;


@end


#endif