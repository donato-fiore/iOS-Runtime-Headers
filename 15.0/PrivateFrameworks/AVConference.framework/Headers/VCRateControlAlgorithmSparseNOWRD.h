// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCRATECONTROLALGORITHMSPARSENOWRD_H
#define VCRATECONTROLALGORITHMSPARSENOWRD_H



#import "VCRateControlAlgorithmBase.h"

@interface VCRateControlAlgorithmSparseNOWRD : VCRateControlAlgorithmBase {
    CGFloat _pauseStartTime;
    unsigned short _previousTimestamp;
    unsigned int _timestampWrapAroundCounter;
    CGFloat _statisticsArrivalTime;
    CGFloat _previousStatisticsArrivalTime;
    CGFloat _lastCongestionTime;
    CGFloat _lastRampUpTime;
    CGFloat _lastAllowRampUpTime;
    BOOL _isFirstTimestampArrived;
    unsigned int _actualSendBitrate;
    unsigned int _expectedBitrate;
    int _recentTierWindow;
    unsigned int _recentTierWindowSize;
    unsigned int _recentTierWindowIndex;
    unsigned int _totalTierNumbersInWindow;
    CGFloat _recentAverageTier;
    CGFloat _lastTimeDetectNoOscillation;
    BOOL _isTargetBitrateOscillating;
    int _deviationChangeCount;
    unsigned int _totalPacketSent;
    unsigned int _roundTripTimeTick;
    CGFloat _averageRoundTripTime;
    CGFloat _basebandNotificationArrivalTime;
    unsigned int _basebandAverageBitrate;
    unsigned int _basebandTotalQueueDepth;
    CGFloat _basebandExpectedQueuingDelay;
    CGFloat _basebandNormalizedBDCD;
    CGFloat _basebandNormalizedQueuingDelay;
    BOOL _isWaitingForBasebandRampDown;
    CGFloat _lastBasebandRampDownTime;
    CGFloat _lastHighNBDCDTime;
    CGFloat _lastEmergencyBasebandRampDownTime;
    int _basebandAdditionalTiersForRampUp;
    BOOL _basebandAdaptationEnabled;
}




-(BOOL)doRateControlWithBasebandStatistics:(struct ? )arg0 ;
-(BOOL)doRateControlWithStatistics:(struct ? )arg0 ;
-(BOOL)doRateControlWithVCRCStatistics:(struct ? )arg0 ;
-(BOOL)noServerStatsActivityDetected;
-(BOOL)shouldRampDown;
-(BOOL)shouldRampDownDueToBaseband;
-(BOOL)shouldRampUp;
-(BOOL)shouldRampUpDueToBaseband;
-(BOOL)shouldUnblockRampUpAfterTimeOut;
-(BOOL)updateRecentTierWindow;
-(id)init;
-(int)countDeviationChangeInTierWindow;
-(int)rampDownTier;
-(int)rampDownTierDueToBaseband;
-(int)rampUpTier;
-(void)checkActualBitrates;
-(void)checkCongestionStatus;
-(void)checkTargetBitrateOscillation;
-(void)configure:(struct VCRateControlAlgorithmConfig )arg0 restartRequired:(BOOL)arg1 ;
-(void)printRateControlInfoToLogDump;
-(void)resetOscillationDetection;
-(void)resetRampingStatus;
-(void)updateLastEmergencyBasebandRampDownTimeWithTierIndex:(int)arg0 ;


@end


#endif