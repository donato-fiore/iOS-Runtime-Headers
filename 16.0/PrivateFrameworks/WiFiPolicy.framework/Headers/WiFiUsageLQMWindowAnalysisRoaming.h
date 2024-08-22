// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIUSAGELQMWINDOWANALYSISROAMING_H
#define WIFIUSAGELQMWINDOWANALYSISROAMING_H

@class NSString;


#import "WiFiUsageLQMWindowAnalysis.h"
#import "WiFiUsageSessionPingPongStats.h"

@interface WiFiUsageLQMWindowAnalysisRoaming : WiFiUsageLQMWindowAnalysis

@property (nonatomic) BOOL firstRoamAfterRoamRecommLifted; // ivar: _firstRoamAfterRoamRecommLifted
@property (nonatomic) BOOL isWNMScoreRoam; // ivar: _isWNMScoreRoam
@property (nonatomic) NSInteger latency; // ivar: _latency
@property (nonatomic) NSInteger originRssi; // ivar: _originRssi
@property (retain, nonatomic) WiFiUsageSessionPingPongStats *pingPongStats; // ivar: _pingPongStats
@property (retain, nonatomic) NSString *roamBssSupports; // ivar: _roamBssSupports
@property (nonatomic) ? roamConfigChannels; // ivar: _roamConfigChannels
@property (nonatomic) ? roamConfigCriteria; // ivar: _roamConfigCriteria
@property (nonatomic) NSInteger roamConfigTriggerRssi; // ivar: _roamConfigTriggerRssi
@property (nonatomic) NSUInteger roamFullBandScanCount; // ivar: _roamFullBandScanCount
@property (nonatomic) NSUInteger roamPartialBandScanCount; // ivar: _roamPartialBandScanCount
@property (nonatomic) NSUInteger roamPktsPendingAqm; // ivar: _roamPktsPendingAqm
@property (nonatomic) NSUInteger roamPktsPendingTxSubQ; // ivar: _roamPktsPendingTxSubQ
@property (nonatomic) NSUInteger roamScannedChannelCount; // ivar: _roamScannedChannelCount
@property (nonatomic) NSUInteger roamSuppressionEnabledPerc; // ivar: _roamSuppressionEnabledPerc
@property (nonatomic) CGFloat roamSuppressionWaitForRoamEnd; // ivar: _roamSuppressionWaitForRoamEnd
@property (nonatomic) CGFloat roamSuppressionWaitForRoamStart; // ivar: _roamSuppressionWaitForRoamStart
@property (retain, nonatomic) NSString *roamingReason; // ivar: _roamingReason
@property (retain, nonatomic) NSString *roamingStatus; // ivar: _roamingStatus
@property (nonatomic) NSInteger scanDuration; // ivar: _scanDuration
@property (nonatomic) NSInteger targetRssi; // ivar: _targetRssi


+(BOOL)isWNMRoam:(id)arg0 ;
+(id)bssSupportWithFlags:(id)arg0 ;
-(id)addDimensionsTo:(id)arg0 ;
-(id)initWithRollingWindow:(id)arg0 WithRoamingState:(BOOL)arg1 andReasonString:(id)arg2 andStatus:(NSUInteger)arg3 asString:(id)arg4 andLatency:(NSUInteger)arg5 andRoamData:(id)arg6 andCurrentBSSSession:(id)arg7 andActiveCall:(BOOL)arg8 andPingPongStats:(id)arg9 andTimestamp:(id)arg10 onQueue:(id)arg11 ;


@end


#endif