// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIUSAGESESSION_H
#define WIFIUSAGESESSION_H

@class NSDate, NSMutableSet, NSString, NSNumber;
@protocol NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WiFiUsageBssSession.h"
#import "WiFiUsageInterfaceStats.h"
#import "WiFiUsageSessionLQM.h"
#import "WiFiUsageNetworkDetails.h"

@interface WiFiUsageSession : NSObject <NSCopying>

 {
    NSUInteger _perClientScanCount;
    NSUInteger _faultReasonCount;
}


@property (retain, nonatomic) NSDate *a2dpActiveTime; // ivar: _a2dpActiveTime
@property (retain, nonatomic) NSMutableSet *activeApplications; // ivar: _activeApplications
@property (nonatomic) NSUInteger applicationStateChangedCount; // ivar: _applicationStateChangedCount
@property (nonatomic) CGFloat associatedDuration; // ivar: _associatedDuration
@property (nonatomic) CGFloat associatedSleepDuration; // ivar: _associatedSleepDuration
@property (retain, nonatomic) NSDate *awdlActiveTime; // ivar: _awdlActiveTime
@property (nonatomic) NSUInteger batterySaverStateChangedCount; // ivar: _batterySaverStateChangedCount
@property (retain, nonatomic) NSDate *batterySaverStateEntryTime; // ivar: _batterySaverStateEntryTime
@property (retain, nonatomic) NSDate *callStartedTime; // ivar: _callStartedTime
@property (nonatomic) BOOL cellularFallbackEnabled; // ivar: _cellularFallbackEnabled
@property (nonatomic) NSUInteger cellularFallbackStateChangedCount; // ivar: _cellularFallbackStateChangedCount
@property (nonatomic) BOOL cellularOutrankingEnabled; // ivar: _cellularOutrankingEnabled
@property (nonatomic) NSUInteger cellularOutrankingStateChangedCount; // ivar: _cellularOutrankingStateChangedCount
@property (nonatomic) CGFloat chargingDuration; // ivar: _chargingDuration
@property (nonatomic) NSUInteger chargingEventCount; // ivar: _chargingEventCount
@property (retain, nonatomic) NSDate *chargingStartedTime; // ivar: _chargingStartedTime
@property (nonatomic) CGFloat companionConnectedDuration; // ivar: _companionConnectedDuration
@property (nonatomic) NSUInteger companionConnectionStateChangedCount; // ivar: _companionConnectionStateChangedCount
@property (retain, nonatomic) NSDate *companionConnectionTime; // ivar: _companionConnectionTime
@property (retain, nonatomic) id *completionContext; // ivar: _completionContext
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (nonatomic) BOOL controlCenterEnabled; // ivar: _controlCenterEnabled
@property (nonatomic) NSUInteger controlCenterStateChangedCount; // ivar: _controlCenterStateChangedCount
@property (nonatomic) NSUInteger controlCenterToggleEventCount; // ivar: _controlCenterToggleEventCount
@property (retain, nonatomic) WiFiUsageBssSession *currentBssSession; // ivar: _currentBssSession
@property (nonatomic) NSUInteger displayStateChangedCount; // ivar: _displayStateChangedCount
@property (nonatomic) CGFloat fiveGHzUsageDuration; // ivar: _fiveGHzUsageDuration
@property (retain, nonatomic) NSDate *hidPresentTime; // ivar: _hidPresentTime
@property (retain, nonatomic) WiFiUsageInterfaceStats *ifStatsAtStart; // ivar: _ifStatsAtStart
@property (nonatomic) CGFloat inA2dpDuration; // ivar: _inA2dpDuration
@property (nonatomic) NSUInteger inA2dpEventCount; // ivar: _inA2dpEventCount
@property (nonatomic) CGFloat inAwdlDuration; // ivar: _inAwdlDuration
@property (nonatomic) NSUInteger inAwdlEventCount; // ivar: _inAwdlEventCount
@property (nonatomic) CGFloat inBatterySaverStateDuration; // ivar: _inBatterySaverStateDuration
@property (nonatomic) CGFloat inCallDuration; // ivar: _inCallDuration
@property (nonatomic) NSUInteger inCallEventCount; // ivar: _inCallEventCount
@property (nonatomic) CGFloat inCellularFallbackDuration; // ivar: _inCellularFallbackDuration
@property (nonatomic) CGFloat inCellularOutrankingDuration; // ivar: _inCellularOutrankingDuration
@property (nonatomic) CGFloat inControlCenterAutoJoinDisabledDuration; // ivar: _inControlCenterAutoJoinDisabledDuration
@property (nonatomic) NSUInteger inHidPresentCount; // ivar: _inHidPresentCount
@property (nonatomic) CGFloat inHidPresentDuration; // ivar: _inHidPresentDuration
@property (nonatomic) CGFloat inLowPowerStateDuration; // ivar: _inLowPowerStateDuration
@property (nonatomic) CGFloat inLpasStateDuration; // ivar: _inLpasStateDuration
@property (nonatomic) CGFloat inMotionDuration; // ivar: _inMotionDuration
@property (nonatomic) NSUInteger inMotionEventCount; // ivar: _inMotionEventCount
@property (retain, nonatomic) NSDate *inMotionStartedTime; // ivar: _inMotionStartedTime
@property (nonatomic) CGFloat inRoamDuration; // ivar: _inRoamDuration
@property (nonatomic) NSUInteger inRoamEventCount; // ivar: _inRoamEventCount
@property (nonatomic) CGFloat inScanDuration; // ivar: _inScanDuration
@property (nonatomic) NSUInteger inScanEventCount; // ivar: _inScanEventCount
@property (nonatomic) CGFloat inScoDuration; // ivar: _inScoDuration
@property (nonatomic) NSUInteger inScoEventCount; // ivar: _inScoEventCount
@property (nonatomic) CGFloat inSoftApDuration; // ivar: _inSoftApDuration
@property (nonatomic) NSUInteger inSoftApEventCount; // ivar: _inSoftApEventCount
@property (nonatomic) CGFloat inVehicleDuration; // ivar: _inVehicleDuration
@property (retain, nonatomic) NSDate *inVehicleEntryTime; // ivar: _inVehicleEntryTime
@property (nonatomic) NSUInteger inVehicleEventCount; // ivar: _inVehicleEventCount
@property (nonatomic) CGFloat inWowStateDuration; // ivar: _inWowStateDuration
@property (retain, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (nonatomic) BOOL isDisplayOn; // ivar: _isDisplayOn
@property (nonatomic) BOOL isInHomeScreen; // ivar: _isInHomeScreen
@property (nonatomic) BOOL isInternalInstall; // ivar: _isInternalInstall
@property (nonatomic) BOOL isSessionActive; // ivar: _isSessionActive
@property (nonatomic) BOOL isUnlocked; // ivar: _isUnlocked
@property (nonatomic) NSUInteger joinStateChangedCount; // ivar: _joinStateChangedCount
@property (retain, nonatomic) NSDate *lastBssChangedTime; // ivar: _lastBssChangedTime
@property (retain, nonatomic) NSDate *lastCellularFallbackStateChangedTime; // ivar: _lastCellularFallbackStateChangedTime
@property (retain, nonatomic) NSDate *lastCellularOutrankingStateChangedTime; // ivar: _lastCellularOutrankingStateChangedTime
@property (retain, nonatomic) NSDate *lastControlCenterStateChangedTime; // ivar: _lastControlCenterStateChangedTime
@property (nonatomic) NSInteger lastDisconnectReason; // ivar: _lastDisconnectReason
@property (nonatomic) NSInteger lastDisconnectSubreason; // ivar: _lastDisconnectSubreason
@property (nonatomic) BOOL lastInterfacePrimaryState; // ivar: _lastInterfacePrimaryState
@property (nonatomic) NSInteger lastJoinFailure; // ivar: _lastJoinFailure
@property (nonatomic) NSInteger lastJoinReason; // ivar: _lastJoinReason
@property (retain, nonatomic) NSDate *lastLinkStateChangedTime; // ivar: _lastLinkStateChangedTime
@property (nonatomic) NSInteger lastPowerBudget; // ivar: _lastPowerBudget
@property (retain, nonatomic) NSDate *lastPowerBudgetChangedTime; // ivar: _lastPowerBudgetChangedTime
@property (retain, nonatomic) NSDate *lastPowerStateChangedTime; // ivar: _lastPowerStateChangedTime
@property (retain, nonatomic) NSDate *lastSystemSleepTime; // ivar: _lastSystemSleepTime
@property (retain, nonatomic) NSDate *lastSystemWakeTime; // ivar: _lastSystemWakeTime
@property (nonatomic) NSInteger lastThermalIndex; // ivar: _lastThermalIndex
@property (retain, nonatomic) NSDate *lastUnexpectedLinkDownTime; // ivar: _lastUnexpectedLinkDownTime
@property (nonatomic) NSUInteger linkStateChangedCount; // ivar: _linkStateChangedCount
@property (nonatomic) NSUInteger lockStateChangedCount; // ivar: _lockStateChangedCount
@property (nonatomic) NSUInteger lowPowerStateChangedCount; // ivar: _lowPowerStateChangedCount
@property (retain, nonatomic) NSDate *lowPowerStateEntryTime; // ivar: _lowPowerStateEntryTime
@property (nonatomic) NSUInteger lpasStateChangedCount; // ivar: _lpasStateChangedCount
@property (retain, nonatomic) NSDate *lpasStateEntryTime; // ivar: _lpasStateEntryTime
@property (retain, nonatomic) WiFiUsageSessionLQM *lqm; // ivar: _lqm
@property (nonatomic) CGFloat mediaPlaybackDuration; // ivar: _mediaPlaybackDuration
@property (nonatomic) NSUInteger mediaPlaybackEventCount; // ivar: _mediaPlaybackEventCount
@property (retain, nonatomic) NSDate *mediaStartedTime; // ivar: _mediaStartedTime
@property (nonatomic) NSUInteger neighborBssCount; // ivar: _neighborBssCount
@property (nonatomic) NSUInteger netInterfaceRxBytes; // ivar: _netInterfaceRxBytes
@property (nonatomic) NSUInteger netInterfaceTxBytes; // ivar: _netInterfaceTxBytes
@property (nonatomic) NSUInteger networkChangedCount; // ivar: _networkChangedCount
@property (retain, nonatomic) WiFiUsageNetworkDetails *networkDetails; // ivar: _networkDetails
@property (nonatomic) NSUInteger otherBssCount; // ivar: _otherBssCount
@property (nonatomic) CGFloat powerBudget10Duration; // ivar: _powerBudget10Duration
@property (nonatomic) CGFloat powerBudget20Duration; // ivar: _powerBudget20Duration
@property (nonatomic) CGFloat powerBudget30Duration; // ivar: _powerBudget30Duration
@property (nonatomic) CGFloat powerBudget40Duration; // ivar: _powerBudget40Duration
@property (nonatomic) CGFloat powerBudget50Duration; // ivar: _powerBudget50Duration
@property (nonatomic) CGFloat powerBudget60Duration; // ivar: _powerBudget60Duration
@property (nonatomic) CGFloat powerBudget70Duration; // ivar: _powerBudget70Duration
@property (nonatomic) CGFloat powerBudget80Duration; // ivar: _powerBudget80Duration
@property (nonatomic) CGFloat powerBudget90Duration; // ivar: _powerBudget90Duration
@property (nonatomic) CGFloat powerBudgetMaxDuration; // ivar: _powerBudgetMaxDuration
@property (nonatomic) CGFloat powerBudgetMinDuration; // ivar: _powerBudgetMinDuration
@property (nonatomic) NSUInteger powerStateChangedCount; // ivar: _powerStateChangedCount
@property (nonatomic) NSUInteger powerToggleEventCount; // ivar: _powerToggleEventCount
@property (nonatomic) BOOL poweredOn; // ivar: _poweredOn
@property (nonatomic) CGFloat poweredOnDuration; // ivar: _poweredOnDuration
@property (nonatomic) NSInteger previousDisconnectReason; // ivar: _previousDisconnectReason
@property (nonatomic) NSUInteger primaryInterfaceStateChangeCount; // ivar: _primaryInterfaceStateChangeCount
@property (nonatomic) BOOL privacyRestrictionDisabled; // ivar: _privacyRestrictionDisabled
@property (nonatomic) NSUInteger rangingEventCount; // ivar: _rangingEventCount
@property (nonatomic) NSUInteger rapidLinkTransitionCount; // ivar: _rapidLinkTransitionCount
@property (nonatomic) NSNumber *responsivenessScore; // ivar: _responsivenessScore
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
@property (retain, nonatomic) WiFiUsageInterfaceStats *secondaryIfStatsAtStart; // ivar: _secondaryIfStatsAtStart
@property (retain, nonatomic) NSString *secondaryInterfaceName; // ivar: _secondaryInterfaceName
@property (nonatomic) NSUInteger secondaryInterfaceRxBytes; // ivar: _secondaryInterfaceRxBytes
@property (nonatomic) NSUInteger secondaryInterfaceTxBytes; // ivar: _secondaryInterfaceTxBytes
@property (nonatomic) CGFloat sessionDuration; // ivar: _sessionDuration
@property (retain, nonatomic) NSDate *sessionEndTime; // ivar: _sessionEndTime
@property (nonatomic) NSUInteger sessionPid; // ivar: _sessionPid
@property (retain, nonatomic) NSDate *sessionStartTime; // ivar: _sessionStartTime
@property (nonatomic) CGFloat sessionTimeSinceLastSession; // ivar: _sessionTimeSinceLastSession
@property (nonatomic) CGFloat sleepPowerStatsAssociatedDuration; // ivar: _sleepPowerStatsAssociatedDuration
@property (nonatomic) CGFloat sleepPowerStatsRoamingDuration; // ivar: _sleepPowerStatsRoamingDuration
@property (nonatomic) CGFloat sleepPowerStatsTotalDuration; // ivar: _sleepPowerStatsTotalDuration
@property (nonatomic) CGFloat sleepPowerStatsUnassociatedDuration; // ivar: _sleepPowerStatsUnassociatedDuration
@property (retain, nonatomic) NSDate *softApActiveTime; // ivar: _softApActiveTime
@property (nonatomic) CGFloat systemAwakeDuration; // ivar: _systemAwakeDuration
@property (nonatomic) NSUInteger systemWakeStateChangedCount; // ivar: _systemWakeStateChangedCount
@property (nonatomic) NSUInteger systemWokenByWiFiCount; // ivar: _systemWokenByWiFiCount
@property (nonatomic) CGFloat thermalIndex10Duration; // ivar: _thermalIndex10Duration
@property (nonatomic) CGFloat thermalIndex20Duration; // ivar: _thermalIndex20Duration
@property (nonatomic) CGFloat thermalIndex30Duration; // ivar: _thermalIndex30Duration
@property (nonatomic) CGFloat thermalIndex40Duration; // ivar: _thermalIndex40Duration
@property (nonatomic) CGFloat thermalIndex50Duration; // ivar: _thermalIndex50Duration
@property (nonatomic) CGFloat thermalIndex60Duration; // ivar: _thermalIndex60Duration
@property (nonatomic) CGFloat thermalIndex70Duration; // ivar: _thermalIndex70Duration
@property (nonatomic) CGFloat thermalIndex80Duration; // ivar: _thermalIndex80Duration
@property (nonatomic) CGFloat thermalIndex90Duration; // ivar: _thermalIndex90Duration
@property (nonatomic) CGFloat thermalIndexMaxDuration; // ivar: _thermalIndexMaxDuration
@property (nonatomic) CGFloat thermalIndexMinDuration; // ivar: _thermalIndexMinDuration
@property (nonatomic) NSUInteger triggerDisconnectAlertedCount; // ivar: _triggerDisconnectAlertedCount
@property (nonatomic) NSUInteger triggerDisconnectConfirmedCount; // ivar: _triggerDisconnectConfirmedCount
@property (nonatomic) NSUInteger triggerDisconnectExecutedCount; // ivar: _triggerDisconnectExecutedCount
@property (nonatomic) CGFloat twoFourGHzUsageDuration; // ivar: _twoFourGHzUsageDuration
@property (nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) NSUInteger wowStateChangedCount; // ivar: _wowStateChangedCount
@property (retain, nonatomic) NSDate *wowStateEntryTime; // ivar: _wowStateEntryTime
@property BOOL xctest; // ivar: _xctest


+(id)disconnectReasonString:(NSUInteger)arg0 ;
-(NSInteger)averageCca;
-(NSInteger)averageRssi;
-(NSInteger)averageSnr;
-(NSInteger)lastRssi;
-(NSUInteger)faultReasonCount:(NSUInteger)arg0 ;
-(NSUInteger)totalRxFrames;
-(NSUInteger)totalTxFrames;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)eventDictionary:(BOOL)arg0 isInternalInstall:(BOOL)arg1 ;
-(id)initWithSessionType:(NSUInteger)arg0 andInterfaceName:(id)arg1 ;
-(id)joinReasonString:(NSUInteger)arg0 ;
-(id)lastBssSessionInfo;
-(id)metricName;
-(id)sessionName;
-(id)sessionSummary:(BOOL)arg0 ;
-(void)applicationStateDidChange:(id)arg0 withAttributes:(id)arg1 ;
-(void)awdlStateDidChange:(BOOL)arg0 inMode:(NSInteger)arg1 ;
-(void)bluetoothStateDidChange:(BOOL)arg0 connectedDeviceCount:(NSUInteger)arg1 inA2dp:(BOOL)arg2 inSco:(BOOL)arg3 ;
-(void)callStateDidChange:(BOOL)arg0 ;
-(void)cellularFallbackStateDidChange:(BOOL)arg0 ;
-(void)cellularOutrankingStateDidChange:(BOOL)arg0 ;
-(void)chargingStateDidChange:(BOOL)arg0 ;
-(void)companionStateDidChange:(BOOL)arg0 ;
-(void)controlCenterStateDidChange:(BOOL)arg0 withKnownLocation:(BOOL)arg1 ;
-(void)displayStateDidChange:(BOOL)arg0 ;
-(void)enableXCTestNotifications;
-(void)faultEventDetected:(NSUInteger)arg0 ;
-(void)joinStateDidChange:(id)arg0 withReason:(NSUInteger)arg1 lastDisconnectReason:(NSInteger)arg2 lastJoinFailure:(NSInteger)arg3 andNetworkDetails:(id)arg4 ;
-(void)linkQualityDidChange:(id)arg0 ;
-(void)linkStateDidChange:(BOOL)arg0 isInvoluntary:(BOOL)arg1 linkChangeReason:(NSInteger)arg2 linkChangeSubreason:(NSInteger)arg3 withNetworkDetails:(id)arg4 ;
-(void)lockStateDidChange:(BOOL)arg0 ;
-(void)mediaStateDidChange:(BOOL)arg0 ;
-(void)motionStateDidChange:(BOOL)arg0 andVehicularState:(BOOL)arg1 ;
-(void)powerBudgetDidChange:(NSInteger)arg0 andThermalIndex:(NSInteger)arg1 ;
-(void)powerStateDidChange:(BOOL)arg0 ;
-(void)rangingCompleted;
-(void)receivedBssTransitionRequestWithCandidateListIncluded:(BOOL)arg0 isAbridged:(BOOL)arg1 disassociationImminent:(BOOL)arg2 bssTerminationIncluded:(BOOL)arg3 essDisassociationImminent:(BOOL)arg4 ;
-(void)roamCacheDidUpdate:(id)arg0 ;
-(void)roamingConfigurationDidChange:(NSInteger)arg0 withChannelList:(id)arg1 ;
-(void)roamingStateDidChange:(BOOL)arg0 flags:(NSUInteger)arg1 scannedChannelCount:(NSUInteger)arg2 reason:(NSUInteger)arg3 latency:(NSUInteger)arg4 andStatus:(NSUInteger)arg5 ;
-(void)scanningStateDidChange:(BOOL)arg0 client:(NSUInteger)arg1 neighborBSS:(id)arg2 otherBSS:(id)arg3 ;
-(void)secondaryInterfaceNameDidChange:(id)arg0 ;
-(void)sentBssTransitionResponseWithStatus:(NSInteger)arg0 terminationDelayRequested:(BOOL)arg1 ;
-(void)sessionDidEnd;
-(void)sessionDidStart;
-(void)softApStateDidChange:(BOOL)arg0 requester:(id)arg1 status:(id)arg2 changeReason:(id)arg3 channelNumber:(NSUInteger)arg4 countryCode:(NSUInteger)arg5 isHidden:(BOOL)arg6 isInfraConnected:(BOOL)arg7 isAwdlUp:(BOOL)arg8 lowPowerModeDuration:(CGFloat)arg9 compatibilityMode:(BOOL)arg10 ;
-(void)summarizeSession;
-(void)systemWakeStateDidChange:(BOOL)arg0 wokenByWiFi:(BOOL)arg1 ;
-(void)triggerDisconnectAlerted:(BOOL)arg0 confirmed:(BOOL)arg1 executed:(BOOL)arg2 ;
-(void)updateApProfile:(id)arg0 ;
-(void)updateSleepPowerStats:(CGFloat)arg0 unassociatedDuration:(CGFloat)arg1 associatedDuration:(CGFloat)arg2 roamingDuration:(CGFloat)arg3 ;
-(void)updateWowState:(BOOL)arg0 lpasState:(BOOL)arg1 lowPowerState:(BOOL)arg2 batterySaverState:(BOOL)arg3 ;


@end


#endif