// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIUSAGELQMWINDOWANALYSISROAMING_H
#define WIFIUSAGELQMWINDOWANALYSISROAMING_H

@class NSString;


#import "WiFiUsageLQMWindowAnalysis.h"

@interface WiFiUsageLQMWindowAnalysisRoaming : WiFiUsageLQMWindowAnalysis

@property (nonatomic) BOOL isWNMScoreRoam; // ivar: _isWNMScoreRoam
@property (nonatomic) NSInteger latency; // ivar: _latency
@property (nonatomic) NSInteger originRssi; // ivar: _originRssi
@property (retain, nonatomic) NSString *roamBssSupports; // ivar: _roamBssSupports
@property (nonatomic) NSUInteger roamConfig24GHzChannelCount; // ivar: _roamConfig24GHzChannelCount
@property (nonatomic) NSUInteger roamConfig5GHzChannelCount; // ivar: _roamConfig5GHzChannelCount
@property (nonatomic) NSUInteger roamConfigTotalChannelCount; // ivar: _roamConfigTotalChannelCount
@property (nonatomic) NSInteger roamConfigTriggerRssi; // ivar: _roamConfigTriggerRssi
@property (nonatomic) NSUInteger roamPingPongNth; // ivar: _roamPingPongNth
@property (nonatomic) NSUInteger roamScannedChannelCount; // ivar: _roamScannedChannelCount
@property (retain, nonatomic) NSString *roamingReason; // ivar: _roamingReason
@property (retain, nonatomic) NSString *roamingStatus; // ivar: _roamingStatus
@property (nonatomic) NSInteger targetRssi; // ivar: _targetRssi


+(BOOL)isWNMRoam:(NSUInteger)arg0 ;
+(id)bssSupportWithFlags:(NSUInteger)arg0 ;
-(id)addDimensionsTo:(id)arg0 ;
-(id)initWithRollingWindow:(id)arg0 WithRoamingState:(BOOL)arg1 andReasonString:(id)arg2 andStatus:(NSUInteger)arg3 asString:(id)arg4 andLatency:(NSUInteger)arg5 andFlags:(NSUInteger)arg6 andScannedChannelCount:(NSUInteger)arg7 andRoamConfigTriggerRssi:(NSInteger)arg8 andRoamConfig24GHzChannelCount:(NSUInteger)arg9 andRoamConfig5GHzChannelCount:(NSUInteger)arg10 andOriginRSSI:(NSInteger)arg11 andTargetRssi:(NSInteger)arg12 andActiveCall:(BOOL)arg13 andPingPongNth:(NSUInteger)arg14 onQueue:(id)arg15 ;


@end


#endif