// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCRATECONTROLALGORITHMLOWLATENCYNOWRD_H
#define VCRATECONTROLALGORITHMLOWLATENCYNOWRD_H



#import "VCRateControlAlgorithmBase.h"

@interface VCRateControlAlgorithmLowLatencyNOWRD : VCRateControlAlgorithmBase {
    unsigned short _echoedTimestamp;
    unsigned short _previousTimestamp;
    unsigned short _queuingDelayTimestamp;
    unsigned int _receiveTimestamp;
    unsigned int _timestampWrapAroundCounter;
    unsigned int _newOWRDSampleCollected;
    CGFloat _previousNOWRD;
    CGFloat _sendBitrateLimitedStartTime;
    CGFloat _sendBitrateStartTime;
    CGFloat _lastSendDataTime;
    CGFloat _lastRampDownTime;
    CGFloat _lastPositiveOWRDTime;
    BOOL _isRampUpSettling;
    unsigned int _actualSendBitrate;
    unsigned int _instantBitrate;
    unsigned int _fastRampDownBitrateRange;
    unsigned int _maxBurstyLoss;
    unsigned int _nwConnectionMaxThroughput;
    unsigned int _nwConnectionAvgThroughput;
    int _nwConnectionRateTrendSuggestion;
    CGFloat _nwConnectionAvgDelay;
    BOOL _shouldBlockRampUpForNWConnection;
    unsigned int _nwConnectionOverDelayThresholdCount;
    unsigned int _nwConnectionPacketLossPerFrame;
}




-(BOOL)doRateControlWithNWConnectionStatistics:(struct ? )arg0 ;
-(BOOL)doRateControlWithStatistics:(struct ? )arg0 ;
-(BOOL)doRateControlWithVCRCStatistics:(struct ? )arg0 ;
-(BOOL)shouldRampDown;
-(BOOL)shouldRampDownDueToNOWRD;
-(BOOL)shouldRampDownDueToNOWRDAcc;
-(BOOL)shouldRampDownDueToNWConnection;
-(BOOL)shouldRampUp;
-(BOOL)shouldRampUpDueToNWConnection;
-(CGFloat)computeNWConnectionDelayThresholdForRampDown:(BOOL)arg0 ;
-(id)init;
-(int)rampDownTier;
-(int)rampDownTierDueToNWConnection;
-(int)rampUpTier;
-(void)checkCongestionStatus;
-(void)checkRampUpSettlingStatus;
-(void)configure:(struct VCRateControlAlgorithmConfig )arg0 restartRequired:(BOOL)arg1 ;
-(void)printRateControlInfoToLogDump;
-(void)resetRampingStatus;
-(void)setRateChangeCounter;
-(void)updateInternalStatus;
-(void)updateSendBitrateAndCheckIdlePeriod:(unsigned int)arg0 instantBitrate:(unsigned int)arg1 ;


@end


#endif