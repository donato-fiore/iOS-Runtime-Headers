// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIUSAGESESSIONLQM_H
#define WIFIUSAGESESSIONLQM_H

@class NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WiFiUsageSessionLQM : NSObject <NSCopying>



@property (nonatomic) NSInteger avgBeaconPer; // ivar: _avgBeaconPer
@property (nonatomic) NSUInteger avgDecodingAttemptsPerSecond; // ivar: _avgDecodingAttemptsPerSecond
@property (nonatomic) NSInteger avgInterference; // ivar: _avgInterference
@property (nonatomic) NSInteger avgNoise; // ivar: _avgNoise
@property (nonatomic) NSInteger avgOtherCca; // ivar: _avgOtherCca
@property (nonatomic) NSInteger avgRssi; // ivar: _avgRssi
@property (nonatomic) NSUInteger avgRxBadFcsPerSecond; // ivar: _avgRxBadFcsPerSecond
@property (nonatomic) NSUInteger avgRxBytesOverRxFrames; // ivar: _avgRxBytesOverRxFrames
@property (nonatomic) NSUInteger avgRxFramesPerSecond; // ivar: _avgRxFramesPerSecond
@property (nonatomic) NSUInteger avgRxRateOverLinkTheoreticalMaxPercentage; // ivar: _avgRxRateOverLinkTheoreticalMaxPercentage
@property (nonatomic) NSUInteger avgRxRetriesOverRxFrames; // ivar: _avgRxRetriesOverRxFrames
@property (nonatomic) NSUInteger avgRxStartPortion; // ivar: _avgRxStartPortion
@property (nonatomic) NSInteger avgSelfCca; // ivar: _avgSelfCca
@property (nonatomic) NSInteger avgSnr; // ivar: _avgSnr
@property (nonatomic) NSInteger avgTotalCca; // ivar: _avgTotalCca
@property (nonatomic) NSUInteger avgTxBytesOverTxFrames; // ivar: _avgTxBytesOverTxFrames
@property (nonatomic) NSUInteger avgTxFailsOverTxFrames; // ivar: _avgTxFailsOverTxFrames
@property (nonatomic) NSUInteger avgTxFramesPerSecond; // ivar: _avgTxFramesPerSecond
@property (nonatomic) NSUInteger avgTxRateOverLinkTheoreticalMaxPercentage; // ivar: _avgTxRateOverLinkTheoreticalMaxPercentage
@property (nonatomic) NSUInteger avgTxRetriesOverTxFrames; // ivar: _avgTxRetriesOverTxFrames
@property (retain, nonatomic) NSDate *initializationTime; // ivar: _initializationTime
@property (nonatomic) NSInteger interference40to50; // ivar: _interference40to50
@property (nonatomic) NSInteger interference50to60; // ivar: _interference50to60
@property (nonatomic) NSInteger interference60to70; // ivar: _interference60to70
@property (nonatomic) NSInteger interference70to75; // ivar: _interference70to75
@property (nonatomic) NSInteger interference75to80; // ivar: _interference75to80
@property (nonatomic) NSInteger interference80to85; // ivar: _interference80to85
@property (nonatomic) NSInteger interference85to90; // ivar: _interference85to90
@property (nonatomic) NSInteger interferenceGt90; // ivar: _interferenceGt90
@property (nonatomic) NSInteger interferenceLt40; // ivar: _interferenceLt40
@property (nonatomic) NSInteger lastRssi; // ivar: _lastRssi
@property (retain, nonatomic) NSDate *lastUpdatedTime; // ivar: _lastUpdatedTime
@property (nonatomic) NSInteger maxBeaconPer; // ivar: _maxBeaconPer
@property (nonatomic) NSUInteger maxDecodingAttemptsPerSecond; // ivar: _maxDecodingAttemptsPerSecond
@property (nonatomic) NSInteger maxInterference; // ivar: _maxInterference
@property (nonatomic) NSInteger maxNoise; // ivar: _maxNoise
@property (nonatomic) NSInteger maxOtherCca; // ivar: _maxOtherCca
@property (nonatomic) NSInteger maxRssi; // ivar: _maxRssi
@property (nonatomic) NSUInteger maxRxBadFcsPerSecond; // ivar: _maxRxBadFcsPerSecond
@property (nonatomic) NSUInteger maxRxBytesOverRxFrames; // ivar: _maxRxBytesOverRxFrames
@property (nonatomic) NSUInteger maxRxFramesPerSecond; // ivar: _maxRxFramesPerSecond
@property (nonatomic) NSUInteger maxRxRateOverLinkTheoreticalMaxPercentage; // ivar: _maxRxRateOverLinkTheoreticalMaxPercentage
@property (nonatomic) NSUInteger maxRxRetriesOverRxFrames; // ivar: _maxRxRetriesOverRxFrames
@property (nonatomic) NSUInteger maxRxStartPortion; // ivar: _maxRxStartPortion
@property (nonatomic) NSInteger maxSelfCca; // ivar: _maxSelfCca
@property (nonatomic) NSInteger maxSnr; // ivar: _maxSnr
@property (nonatomic) NSInteger maxTotalCca; // ivar: _maxTotalCca
@property (nonatomic) NSUInteger maxTxBytesOverTxFrames; // ivar: _maxTxBytesOverTxFrames
@property (nonatomic) NSUInteger maxTxFailsOverTxFrames; // ivar: _maxTxFailsOverTxFrames
@property (nonatomic) NSUInteger maxTxFramesPerSecond; // ivar: _maxTxFramesPerSecond
@property (nonatomic) NSUInteger maxTxRateOverLinkTheoreticalMaxPercentage; // ivar: _maxTxRateOverLinkTheoreticalMaxPercentage
@property (nonatomic) NSUInteger maxTxRetriesOverTxFrames; // ivar: _maxTxRetriesOverTxFrames
@property (nonatomic) NSInteger minBeaconPer; // ivar: _minBeaconPer
@property (nonatomic) NSUInteger minDecodingAttemptsPerSecond; // ivar: _minDecodingAttemptsPerSecond
@property (nonatomic) NSInteger minInterference; // ivar: _minInterference
@property (nonatomic) NSInteger minNoise; // ivar: _minNoise
@property (nonatomic) NSInteger minOtherCca; // ivar: _minOtherCca
@property (nonatomic) NSInteger minRssi; // ivar: _minRssi
@property (nonatomic) NSUInteger minRxBadFcsPerSecond; // ivar: _minRxBadFcsPerSecond
@property (nonatomic) NSUInteger minRxBytesOverRxFrames; // ivar: _minRxBytesOverRxFrames
@property (nonatomic) NSUInteger minRxFramesPerSecond; // ivar: _minRxFramesPerSecond
@property (nonatomic) NSUInteger minRxRateOverLinkTheoreticalMaxPercentage; // ivar: _minRxRateOverLinkTheoreticalMaxPercentage
@property (nonatomic) NSUInteger minRxRetriesOverRxFrames; // ivar: _minRxRetriesOverRxFrames
@property (nonatomic) NSUInteger minRxStartPortion; // ivar: _minRxStartPortion
@property (nonatomic) NSInteger minSelfCca; // ivar: _minSelfCca
@property (nonatomic) NSInteger minSnr; // ivar: _minSnr
@property (nonatomic) NSInteger minTotalCca; // ivar: _minTotalCca
@property (nonatomic) NSUInteger minTxBytesOverTxFrames; // ivar: _minTxBytesOverTxFrames
@property (nonatomic) NSUInteger minTxFailsOverTxFrames; // ivar: _minTxFailsOverTxFrames
@property (nonatomic) NSUInteger minTxFramesPerSecond; // ivar: _minTxFramesPerSecond
@property (nonatomic) NSUInteger minTxRateOverLinkTheoreticalMaxPercentage; // ivar: _minTxRateOverLinkTheoreticalMaxPercentage
@property (nonatomic) NSUInteger minTxRetriesOverTxFrames; // ivar: _minTxRetriesOverTxFrames
@property (nonatomic) NSInteger otherCca40to50; // ivar: _otherCca40to50
@property (nonatomic) NSInteger otherCca50to60; // ivar: _otherCca50to60
@property (nonatomic) NSInteger otherCca60to70; // ivar: _otherCca60to70
@property (nonatomic) NSInteger otherCca70to75; // ivar: _otherCca70to75
@property (nonatomic) NSInteger otherCca75to80; // ivar: _otherCca75to80
@property (nonatomic) NSInteger otherCca80to85; // ivar: _otherCca80to85
@property (nonatomic) NSInteger otherCca85to90; // ivar: _otherCca85to90
@property (nonatomic) NSInteger otherCcaGt90; // ivar: _otherCcaGt90
@property (nonatomic) NSInteger otherCcaLt40; // ivar: _otherCcaLt40
@property (nonatomic) NSInteger rssi40to50; // ivar: _rssi40to50
@property (nonatomic) NSInteger rssi50to60; // ivar: _rssi50to60
@property (nonatomic) NSInteger rssi60to65; // ivar: _rssi60to65
@property (nonatomic) NSInteger rssi65to70; // ivar: _rssi65to70
@property (nonatomic) NSInteger rssi70to75; // ivar: _rssi70to75
@property (nonatomic) NSInteger rssi75to80; // ivar: _rssi75to80
@property (nonatomic) NSInteger rssi80to85; // ivar: _rssi80to85
@property (nonatomic) NSInteger rssi85to90; // ivar: _rssi85to90
@property (nonatomic) NSInteger rssiGt40; // ivar: _rssiGt40
@property (nonatomic) NSInteger rssiLt90; // ivar: _rssiLt90
@property (nonatomic) NSInteger selfCca40to50; // ivar: _selfCca40to50
@property (nonatomic) NSInteger selfCca50to60; // ivar: _selfCca50to60
@property (nonatomic) NSInteger selfCca60to70; // ivar: _selfCca60to70
@property (nonatomic) NSInteger selfCca70to75; // ivar: _selfCca70to75
@property (nonatomic) NSInteger selfCca75to80; // ivar: _selfCca75to80
@property (nonatomic) NSInteger selfCca80to85; // ivar: _selfCca80to85
@property (nonatomic) NSInteger selfCca85to90; // ivar: _selfCca85to90
@property (nonatomic) NSInteger selfCcaGt90; // ivar: _selfCcaGt90
@property (nonatomic) NSInteger selfCcaLt40; // ivar: _selfCcaLt40
@property (nonatomic) NSInteger totalCca40to50; // ivar: _totalCca40to50
@property (nonatomic) NSInteger totalCca50to60; // ivar: _totalCca50to60
@property (nonatomic) NSInteger totalCca60to70; // ivar: _totalCca60to70
@property (nonatomic) NSInteger totalCca70to75; // ivar: _totalCca70to75
@property (nonatomic) NSInteger totalCca75to80; // ivar: _totalCca75to80
@property (nonatomic) NSInteger totalCca80to85; // ivar: _totalCca80to85
@property (nonatomic) NSInteger totalCca85to90; // ivar: _totalCca85to90
@property (nonatomic) NSInteger totalCcaGt90; // ivar: _totalCcaGt90
@property (nonatomic) NSInteger totalCcaLt40; // ivar: _totalCcaLt40
@property (nonatomic) NSUInteger totalDecodingAttempts; // ivar: _totalDecodingAttempts
@property (nonatomic) NSUInteger totalRxBadFcs; // ivar: _totalRxBadFcs
@property (nonatomic) NSUInteger totalRxFrames; // ivar: _totalRxFrames
@property (nonatomic) NSUInteger totalRxStartPortion; // ivar: _totalRxStartPortion
@property (nonatomic) NSUInteger totalTxFrames; // ivar: _totalTxFrames


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)eventDictionary:(BOOL)arg0 isInternalInstall:(BOOL)arg1 ;
-(id)initWithLQMSample:(id)arg0 forInterface:(id)arg1 ;
-(void)reset;
-(void)updateLinkQuality:(id)arg0 ;


@end


#endif