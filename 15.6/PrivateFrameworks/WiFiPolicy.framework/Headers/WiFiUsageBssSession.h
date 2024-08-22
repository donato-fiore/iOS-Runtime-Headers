// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIUSAGEBSSSESSION_H
#define WIFIUSAGEBSSSESSION_H

@class NSDate, NSString, NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "WiFiUsageNetworkDetails.h"
#import "WiFiUsageBssDetails.h"

@interface WiFiUsageBssSession : NSObject {
    NSUInteger _faultReasonCount;
    NSInteger _maxLinkRssi;
    NSInteger _minLinkRssi;
    NSInteger _avgLinkRssi;
    NSInteger _joinRssi;
    NSInteger _leftRssi;
}


@property (retain, nonatomic) NSDate *a2dpActiveTime; // ivar: _a2dpActiveTime
@property (retain, nonatomic) NSDate *awdlActiveTime; // ivar: _awdlActiveTime
@property (retain, nonatomic) NSString *bssEnvironment; // ivar: _bssEnvironment
@property (nonatomic) NSUInteger bssTransitionAcceptedCount; // ivar: _bssTransitionAcceptedCount
@property (nonatomic) NSUInteger bssTransitionRejectedCount; // ivar: _bssTransitionRejectedCount
@property (nonatomic) NSUInteger bssTransitionRequestCount; // ivar: _bssTransitionRequestCount
@property (retain, nonatomic) NSDate *callStartedTime; // ivar: _callStartedTime
@property (nonatomic) BOOL cellularFallbackEnabled; // ivar: _cellularFallbackEnabled
@property (nonatomic) NSUInteger cellularFallbackStateChangedCount; // ivar: _cellularFallbackStateChangedCount
@property (nonatomic) BOOL cellularOutrankingEnabled; // ivar: _cellularOutrankingEnabled
@property (nonatomic) NSUInteger cellularOutrankingStateChangedCount; // ivar: _cellularOutrankingStateChangedCount
@property (nonatomic) NSUInteger currentChannel; // ivar: _currentChannel
@property (nonatomic) NSUInteger fullScanCount; // ivar: _fullScanCount
@property (retain, nonatomic) NSDate *hidPresentTime; // ivar: _hidPresentTime
@property (nonatomic) NSUInteger highRssiRoamScanCount; // ivar: _highRssiRoamScanCount
@property (nonatomic) CGFloat inA2dpDuration; // ivar: _inA2dpDuration
@property (nonatomic) NSUInteger inA2dpEventCount; // ivar: _inA2dpEventCount
@property (nonatomic) CGFloat inAwdlDuration; // ivar: _inAwdlDuration
@property (nonatomic) NSUInteger inAwdlEventCount; // ivar: _inAwdlEventCount
@property (nonatomic) CGFloat inCallDuration; // ivar: _inCallDuration
@property (nonatomic) NSUInteger inCallEventCount; // ivar: _inCallEventCount
@property (nonatomic) CGFloat inCellularFallbackDuration; // ivar: _inCellularFallbackDuration
@property (nonatomic) CGFloat inCellularOutrankingDuration; // ivar: _inCellularOutrankingDuration
@property (nonatomic) NSUInteger inHidPresentCount; // ivar: _inHidPresentCount
@property (nonatomic) CGFloat inHidPresentDuration; // ivar: _inHidPresentDuration
@property (nonatomic) CGFloat inMotionDuration; // ivar: _inMotionDuration
@property (nonatomic) NSUInteger inMotionEventCount; // ivar: _inMotionEventCount
@property (retain, nonatomic) NSDate *inMotionStartedTime; // ivar: _inMotionStartedTime
@property (nonatomic) CGFloat inPoorCoverageDuration; // ivar: _inPoorCoverageDuration
@property (nonatomic) CGFloat inRoamDuration; // ivar: _inRoamDuration
@property (nonatomic) NSUInteger inRoamEventCount; // ivar: _inRoamEventCount
@property (nonatomic) CGFloat inScanDuration; // ivar: _inScanDuration
@property (nonatomic) NSUInteger inScanEventCount; // ivar: _inScanEventCount
@property (nonatomic) CGFloat inScoDuration; // ivar: _inScoDuration
@property (nonatomic) NSUInteger inScoEventCount; // ivar: _inScoEventCount
@property (nonatomic) CGFloat inVehicleDuration; // ivar: _inVehicleDuration
@property (retain, nonatomic) NSDate *inVehicleEntryTime; // ivar: _inVehicleEntryTime
@property (nonatomic) NSUInteger inVehicleEventCount; // ivar: _inVehicleEventCount
@property (nonatomic) NSUInteger indoorScanCount; // ivar: _indoorScanCount
@property (retain, nonatomic) NSDate *joinedTimestamp; // ivar: _joinedTimestamp
@property (retain, nonatomic) NSDate *lastCellularFallbackStateChangedTime; // ivar: _lastCellularFallbackStateChangedTime
@property (retain, nonatomic) NSDate *lastCellularOutrankingStateChangedTime; // ivar: _lastCellularOutrankingStateChangedTime
@property (nonatomic) NSInteger lastLinkRssi; // ivar: _lastLinkRssi
@property (retain, nonatomic) NSDate *lastLqmUpdateTimestamp; // ivar: _lastLqmUpdateTimestamp
@property (retain, nonatomic) NSDate *lastPoorCoverageEntryTimestamp; // ivar: _lastPoorCoverageEntryTimestamp
@property (nonatomic) NSInteger lastRoamScanRssi; // ivar: _lastRoamScanRssi
@property (nonatomic) NSInteger linkRssi40to50; // ivar: _linkRssi40to50
@property (nonatomic) NSInteger linkRssi50to60; // ivar: _linkRssi50to60
@property (nonatomic) NSInteger linkRssi60to65; // ivar: _linkRssi60to65
@property (nonatomic) NSInteger linkRssi65to70; // ivar: _linkRssi65to70
@property (nonatomic) NSInteger linkRssi70to75; // ivar: _linkRssi70to75
@property (nonatomic) NSInteger linkRssi75to80; // ivar: _linkRssi75to80
@property (nonatomic) NSInteger linkRssi80to85; // ivar: _linkRssi80to85
@property (nonatomic) NSInteger linkRssi85to90; // ivar: _linkRssi85to90
@property (nonatomic) NSInteger linkRssiGt40; // ivar: _linkRssiGt40
@property (nonatomic) NSInteger linkRssiLt90; // ivar: _linkRssiLt90
@property (nonatomic) NSUInteger locationScanCount; // ivar: _locationScanCount
@property (nonatomic) NSUInteger lowRssiRoamScanCount; // ivar: _lowRssiRoamScanCount
@property (nonatomic) NSUInteger max24GHzNeighborCount; // ivar: _max24GHzNeighborCount
@property (nonatomic) NSInteger max24GHzNeighborRssi; // ivar: _max24GHzNeighborRssi
@property (nonatomic) NSUInteger max5GHzNeighborCount; // ivar: _max5GHzNeighborCount
@property (nonatomic) NSInteger max5GHzNeighborRssi; // ivar: _max5GHzNeighborRssi
@property (nonatomic) NSUInteger maxNeighborCount; // ivar: _maxNeighborCount
@property (nonatomic) CGFloat maxRoamLatency; // ivar: _maxRoamLatency
@property (nonatomic) NSUInteger min24GHzNeighborCount; // ivar: _min24GHzNeighborCount
@property (nonatomic) NSInteger min24GHzNeighborRssi; // ivar: _min24GHzNeighborRssi
@property (nonatomic) NSUInteger min5GHzNeighborCount; // ivar: _min5GHzNeighborCount
@property (nonatomic) NSInteger min5GHzNeighborRssi; // ivar: _min5GHzNeighborRssi
@property (nonatomic) NSUInteger minNeighborCount; // ivar: _minNeighborCount
@property (nonatomic) CGFloat minRoamLatency; // ivar: _minRoamLatency
@property (retain, nonatomic) WiFiUsageNetworkDetails *networkDetails; // ivar: _networkDetails
@property (nonatomic) NSUInteger newChannel; // ivar: _newChannel
@property (nonatomic) NSInteger newRssi; // ivar: _newRssi
@property (retain, nonatomic) WiFiUsageBssDetails *originBssDetails; // ivar: _originBssDetails
@property (nonatomic) NSUInteger partialScanCount; // ivar: _partialScanCount
@property (nonatomic) CGFloat poorCoverageAndA2dpDuration; // ivar: _poorCoverageAndA2dpDuration
@property (nonatomic) CGFloat poorCoverageAndAwdlDuration; // ivar: _poorCoverageAndAwdlDuration
@property (nonatomic) CGFloat poorCoverageAndScanDuration; // ivar: _poorCoverageAndScanDuration
@property (nonatomic) CGFloat poorCoverageAndScoDuration; // ivar: _poorCoverageAndScoDuration
@property (retain, nonatomic) NSMutableSet *roam24GHzAllBSSes; // ivar: _roam24GHzAllBSSes
@property (retain, nonatomic) NSMutableSet *roam5GHzAllBSSes; // ivar: _roam5GHzAllBSSes
@property (nonatomic) NSUInteger roamConfig24GHzChannelCount; // ivar: _roamConfig24GHzChannelCount
@property (nonatomic) NSUInteger roamConfig5GHzChannelCount; // ivar: _roamConfig5GHzChannelCount
@property (nonatomic) NSUInteger roamConfigTotalChannelCount; // ivar: _roamConfigTotalChannelCount
@property (nonatomic) NSInteger roamConfigTriggerRssi; // ivar: _roamConfigTriggerRssi
@property (nonatomic) BOOL roamInMotion; // ivar: _roamInMotion
@property (nonatomic) NSUInteger roamIsWNMScoreUsedCount; // ivar: _roamIsWNMScoreUsedCount
@property (nonatomic) NSUInteger roamPingPongNth; // ivar: _roamPingPongNth
@property (nonatomic) NSUInteger roamReasonBeaconLostCount; // ivar: _roamReasonBeaconLostCount
@property (nonatomic) NSUInteger roamReasonBetterCandidateCount; // ivar: _roamReasonBetterCandidateCount
@property (nonatomic) NSUInteger roamReasonBetterConditionCount; // ivar: _roamReasonBetterConditionCount
@property (nonatomic) NSUInteger roamReasonDeauthDisassocCount; // ivar: _roamReasonDeauthDisassocCount
@property (nonatomic) NSUInteger roamReasonHostTriggeredCount; // ivar: _roamReasonHostTriggeredCount
@property (nonatomic) NSUInteger roamReasonInitialAssociationCount; // ivar: _roamReasonInitialAssociationCount
@property (nonatomic) NSUInteger roamReasonLowRssiCount; // ivar: _roamReasonLowRssiCount
@property (nonatomic) NSUInteger roamReasonMiscCount; // ivar: _roamReasonMiscCount
@property (nonatomic) NSUInteger roamReasonReassocRequestedCount; // ivar: _roamReasonReassocRequestedCount
@property (nonatomic) NSUInteger roamReasonSteeredByApCount; // ivar: _roamReasonSteeredByApCount
@property (nonatomic) NSUInteger roamReasonSteeredByBtmCount; // ivar: _roamReasonSteeredByBtmCount
@property (nonatomic) NSUInteger roamReasonSteeredByCsaCount; // ivar: _roamReasonSteeredByCsaCount
@property (nonatomic) NSUInteger roamStatusFailedCount; // ivar: _roamStatusFailedCount
@property (nonatomic) NSUInteger roamStatusNoCandidateCount; // ivar: _roamStatusNoCandidateCount
@property (nonatomic) NSUInteger roamStatusNoQualifiedCandidateCount; // ivar: _roamStatusNoQualifiedCandidateCount
@property (nonatomic) NSUInteger roamStatusSucceededCount; // ivar: _roamStatusSucceededCount
@property (retain, nonatomic) NSDate *roamingActiveTime; // ivar: _roamingActiveTime
@property (retain, nonatomic) NSDate *scanningActiveTime; // ivar: _scanningActiveTime
@property (retain, nonatomic) NSDate *scoActiveTime; // ivar: _scoActiveTime
@property (retain, nonatomic) NSMutableDictionary *sessionInfo; // ivar: _sessionInfo
@property (nonatomic) BOOL supportsAdaptiveFastTransition; // ivar: _supportsAdaptiveFastTransition
@property (nonatomic) BOOL supportsAdaptiveRoaming; // ivar: _supportsAdaptiveRoaming
@property (nonatomic) BOOL supportsBssTransitionManagement; // ivar: _supportsBssTransitionManagement
@property (nonatomic) BOOL supportsFastTransition; // ivar: _supportsFastTransition
@property (nonatomic) BOOL supportsFastlane; // ivar: _supportsFastlane
@property (nonatomic) BOOL supportsNeighborReport; // ivar: _supportsNeighborReport
@property (nonatomic) BOOL supportsNetworkAssurance; // ivar: _supportsNetworkAssurance
@property (retain, nonatomic) WiFiUsageBssDetails *targetBssDetails; // ivar: _targetBssDetails
@property (nonatomic) NSUInteger triggerDisconnectAlertedCount; // ivar: _triggerDisconnectAlertedCount
@property (nonatomic) NSUInteger triggerDisconnectConfirmedCount; // ivar: _triggerDisconnectConfirmedCount
@property (nonatomic) NSUInteger triggerDisconnectExecutedCount; // ivar: _triggerDisconnectExecutedCount
@property (nonatomic) NSUInteger unexpectedBeaconLostRoamScanCount; // ivar: _unexpectedBeaconLostRoamScanCount


-(BOOL)submitAnalytics;
-(id)initWithInterfaceName:(id)arg0 bssEnvironment:(id)arg1 andBssDetails:(id)arg2 andNetworkDetails:(id)arg3 ;
-(void)awdlStateDidChange:(BOOL)arg0 inMode:(NSInteger)arg1 ;
-(void)bluetoothStateDidChange:(BOOL)arg0 connectedDeviceCount:(NSUInteger)arg1 inA2dp:(BOOL)arg2 inSco:(BOOL)arg3 ;
-(void)bssDidChange:(id)arg0 withDetails:(id)arg1 ;
-(void)callStateDidChange:(BOOL)arg0 ;
-(void)cellularFallbackStateDidChange:(BOOL)arg0 ;
-(void)cellularOutrankingStateDidChange:(BOOL)arg0 ;
-(void)faultEventDetected:(NSUInteger)arg0 ;
-(void)linkQualityDidChange:(id)arg0 ;
-(void)motionStateDidChange:(BOOL)arg0 andVehicularState:(BOOL)arg1 ;
-(void)receivedBssTransitionRequestWithCandidateListIncluded:(BOOL)arg0 isAbridged:(BOOL)arg1 disassociationImminent:(BOOL)arg2 bssTerminationIncluded:(BOOL)arg3 essDisassociationImminent:(BOOL)arg4 ;
-(void)reset;
-(void)roamCacheDidUpdate:(id)arg0 ;
-(void)roamingConfigurationDidChange:(NSInteger)arg0 withChannelList:(id)arg1 ;
-(void)roamingStateDidChange:(BOOL)arg0 flags:(NSUInteger)arg1 scannedChannelCount:(NSUInteger)arg2 reason:(NSUInteger)arg3 latency:(NSUInteger)arg4 andStatus:(NSUInteger)arg5 andPingPongNth:(BOOL)arg6 ;
-(void)scanningStateDidChange:(BOOL)arg0 client:(NSUInteger)arg1 neighborBSS:(id)arg2 otherBSS:(id)arg3 ;
-(void)sentBssTransitionResponseWithStatus:(NSInteger)arg0 terminationDelayRequested:(BOOL)arg1 ;
-(void)setJoinRssi:(NSInteger)arg0 ;
-(void)triggerDisconnectAlerted:(BOOL)arg0 confirmed:(BOOL)arg1 executed:(BOOL)arg2 ;
-(void)updateActivityDurations:(id)arg0 ;
-(void)updateRssi:(NSInteger)arg0 timeSinceLastUpdate:(CGFloat)arg1 ;


@end


#endif