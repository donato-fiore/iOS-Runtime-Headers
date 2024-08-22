// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCRATECONTROLALGORITHMSTABILIZEDNOWRD_H
#define VCRATECONTROLALGORITHMSTABILIZEDNOWRD_H



#import "VCRateControlAlgorithmBase.h"

@interface VCRateControlAlgorithmStabilizedNOWRD : VCRateControlAlgorithmBase {
    unsigned short _echoedTimestamp;
    unsigned short _previousTimestamp;
    unsigned short _queuingDelayTimestamp;
    unsigned int _receiveTimestamp;
    unsigned int _timestampWrapAroundCounter;
    unsigned int _lastRateChangeCounter;
    unsigned int _newOWRDSampleCollected;
    BOOL _isRemoteBandwidthEstimationStable;
    ? _history;
    int _currentHistorySize;
    int _currentHistoryIndex;
    CGFloat _previousNOWRD;
    CGFloat _firstOWRDFrozenTime;
    CGFloat _sendBitrateLimitedStartTime;
    CGFloat _rampUpFrozenDuration;
    CGFloat _extendedRampUpFrozenExitTime;
    CGFloat _stabilizationTime;
    CGFloat _rateChangeSystemTime;
    CGFloat _lastRampDownTimeDueToFeedback;
    CGFloat _lastRampDownTimeDueToBaseband;
    CGFloat _lastPositiveOWRDTime;
    CGFloat _lastAllowRampUpTime;
    BOOL _isRampUpSettling;
    BOOL _isStable;
    BOOL _isFirstTimestampArrived;
    CGFloat _inVideoBitrate;
    CGFloat _outVideoBitrate;
    CGFloat _inAudioBitrate;
    CGFloat _outAudioBitrate;
    unsigned int _fastRampDownBitrateRange;
    unsigned int _consecutiveRampDown;
    CGFloat _lastTimeStartRampingDown;
    CGFloat _rampUpSettleDuration;
    BOOL _shouldSuppressRampDown;
    unsigned int _rampDownSuppressionBitrateThreshold;
    CGFloat _basebandNotificationArrivalTime;
    unsigned int _basebandAverageBitrate;
    unsigned int _basebandTotalQueueDepth;
    CGFloat _basebandExpectedQueuingDelay;
    CGFloat _basebandNormalizedBDCD;
    CGFloat _basebandNormalizedQueuingDelay;
    CGFloat _basebandLTEOrGreaterRATSwitchTime;
    int _basebandRadioTechnology;
    BOOL _isWaitingForBasebandRampDown;
    CGFloat _lastBasebandRampDownTime;
    CGFloat _lastHighNBDCDTime;
    int _basebandAdditionalTiersForRampUp;
    BOOL _basebandAdaptationEnabled;
    unsigned int _packetReceivedVideo;
    unsigned int _packetBurstLoss;
    unsigned int _roundTripTimeTick;
    CGFloat _roundTripTimeMinEnvelope;
    CGFloat _previousRoundTripTime;
    CGFloat _lastNetworkUnstableTime;
    BOOL _withBTCoex;
}




-(BOOL)checkNetworkSaturationWithRoundTripTime:(CGFloat)arg0 minRoundTripTime:(CGFloat)arg1 packetLossRate:(CGFloat)arg2 owrd:(CGFloat)arg3 ;
-(BOOL)doRateControlWithBasebandStatistics:(struct ? )arg0 ;
-(BOOL)doRateControlWithNWStatistics:(struct ? )arg0 ;
-(BOOL)doRateControlWithStatistics:(struct ? )arg0 ;
-(BOOL)doRateControlWithVCRCStatistics:(struct ? )arg0 ;
-(BOOL)isBasebandNotificationOutOfKeyFrameCoolDownTime;
-(BOOL)isBasebandRATGreaterOrSameAsLTE:(int)arg0 ;
-(BOOL)isBitrateOscillatingWithCurrentTierIndex:(int)arg0 ;
-(BOOL)isNetworkSaturated;
-(BOOL)isRoundTripTimeDecreasingOrLessThanMinEnvelope;
-(BOOL)shouldEnableBasebandAdaptationWithBasebandStatistics:(struct ? )arg0 previousBasebandRAT:(int)arg1 ;
-(BOOL)shouldFastRampUp;
-(BOOL)shouldRampDown;
-(BOOL)shouldRampDownDueToBaseband;
-(BOOL)shouldRampDownDueToNOWRD;
-(BOOL)shouldRampDownDueToNOWRDAcc;
-(BOOL)shouldRampUp;
-(BOOL)shouldRampUpDueToBaseband;
-(BOOL)shouldUnblockRampUpAfterTimeOut;
-(BOOL)updateInternalStatistics:(struct ? )arg0 ;
-(BOOL)updateParametersForRampDownSuppression;
-(CGFloat)getRampUpFrozenDuration;
-(CGFloat)getRampUpSettleDuration;
-(CGFloat)worstRecentRoundTripTime;
-(id)init;
-(int)basebandAdditionalTiersForRampUp;
-(int)rampDownTier;
-(int)rampDownTierDueToBaseband:(CGFloat)arg0 ;
-(int)rampUpTier;
-(unsigned int)getRampDownSuppressionBitrateThresholdWithRTT;
-(unsigned int)worstRecentBurstLoss;
-(void)calculateCongestionMetricsFromOWRD:(CGFloat)arg0 time:(CGFloat)arg1 ;
-(void)calculatePacketLossWithReceivedPacketCount:(unsigned int)arg0 receivedPacketCountVideo:(unsigned int)arg1 packetBurstLoss:(unsigned short)arg2 packetLossSample:(CGFloat)arg3 ;
-(void)calculateRoundTripTimeWithSample:(CGFloat)arg0 ;
-(void)checkCongestionStatus;
-(void)checkMediaQueueBitrates;
-(void)checkStabilizationWithEchoedTimestamp:(unsigned short)arg0 queuingDelay:(unsigned short)arg1 ;
-(void)configure:(struct VCRateControlAlgorithmConfig )arg0 restartRequired:(BOOL)arg1 ;
-(void)printRateControlInfoToLogDump;
-(void)resetRampingStatus;
-(void)runRateControlStateTransition;
-(void)setBitrateUnstable;
-(void)setLocalBandwidthEstimation:(unsigned int)arg0 ;
-(void)stateEnter;
-(void)stateExit;
-(void)updateCongestionStatusWhenRampDown:(CGFloat)arg0 ;
-(void)updateCongestionStatusWhenRampUp;
-(void)updateInternalStatus;
-(void)updateVCRateControlHistory;


@end


#endif