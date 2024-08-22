// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIUSAGEMONITOR_H
#define WIFIUSAGEMONITOR_H

@class NSMutableDictionary, NSDate, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WiFiUsageInterfaceStats.h"
#import "WiFiUsageRangingSession.h"

@interface WiFiUsageMonitor : NSObject

@property (retain) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property BOOL cellularFallbackEnabled; // ivar: _cellularFallbackEnabled
@property BOOL cellularOutrankingEnabled; // ivar: _cellularOutrankingEnabled
@property BOOL companionConnected; // ivar: _companionConnected
@property *void completionContext; // ivar: _completionContext
@property (copy) id *completionHandler; // ivar: _completionHandler
@property BOOL controlCenterEnabled; // ivar: _controlCenterEnabled
@property BOOL deviceCharging; // ivar: _deviceCharging
@property BOOL deviceLocked; // ivar: _deviceLocked
@property BOOL displayOn; // ivar: _displayOn
@property NSUInteger hidCount; // ivar: _hidCount
@property (retain) WiFiUsageInterfaceStats *ifStatsAtLastLqmUpdate; // ivar: _ifStatsAtLastLqmUpdate
@property BOOL inActiveA2dp; // ivar: _inActiveA2dp
@property BOOL inActiveAwdl; // ivar: _inActiveAwdl
@property BOOL inActiveCall; // ivar: _inActiveCall
@property BOOL inActiveRoam; // ivar: _inActiveRoam
@property BOOL inActiveScan; // ivar: _inActiveScan
@property BOOL inActiveSco; // ivar: _inActiveSco
@property BOOL inMediaPlayback; // ivar: _inMediaPlayback
@property BOOL inMotion; // ivar: _inMotion
@property BOOL inVehicle; // ivar: _inVehicle
@property (retain) NSMutableDictionary *interfaceLqmWindows; // ivar: _interfaceLqmWindows
@property (retain) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property BOOL isSystemAwake; // ivar: _isSystemAwake
@property (retain) NSDate *lasLQMAnalysisForSlowWiFiDNSFailureTime; // ivar: _lasLQMAnalysisForSlowWiFiDNSFailureTime
@property (copy, nonatomic) id *lqmAnalysisCompletionHandler; // ivar: _lqmAnalysisCompletionHandler
@property (retain) NSMutableArray *pendingLqmAnalysis; // ivar: _pendingLqmAnalysis
@property BOOL poweredOn; // ivar: _poweredOn
@property (nonatomic) BOOL privacyRestrictionDisabled; // ivar: _privacyRestrictionDisabled
@property (retain) WiFiUsageRangingSession *rangingSession; // ivar: _rangingSession
@property (retain, nonatomic) NSString *secondaryInterfaceName; // ivar: _secondaryInterfaceName
@property (retain) NSMutableDictionary *usageSessions; // ivar: _usageSessions
@property BOOL xctest; // ivar: _xctest


+(id)sharedInstance;
-(BOOL)submitAnalytics:(id)arg0 ;
-(id)init;
-(id)lastBssSessionInfoForInterface:(id)arg0 ;
-(id)lastRangingSessionMetric;
-(id)summaryForInterface:(id)arg0 ;
-(void)addFaultEvent:(NSUInteger)arg0 forInterface:(id)arg1 ;
-(void)addRangingRttSampleWithRssi:(NSInteger)arg0 rtt:(NSInteger)arg1 snr:(NSUInteger)arg2 flags:(NSUInteger)arg3 channel:(NSUInteger)arg4 coreId:(NSUInteger)arg5 bitErrorRate:(NSUInteger)arg6 phyError:(NSUInteger)arg7 andPeerSnr:(NSUInteger)arg8 andPeerCoreId:(NSUInteger)arg9 andPeerBitErrorRate:(NSUInteger)arg10 andPeerPhyError:(NSUInteger)arg11 ;
-(void)addSoftApClientEvent:(BOOL)arg0 identifier:(id)arg1 isAppleClient:(BOOL)arg2 isInstantHotspot:(BOOL)arg3 isAutoHotspot:(BOOL)arg4 isHidden:(BOOL)arg5 ;
-(void)addSoftApCoexEvent:(NSUInteger)arg0 deniedUnii1ChannelMap:(NSUInteger)arg1 deniedUnii2aChannelMap:(NSUInteger)arg2 deniedUnii2cChannelMap:(NSUInteger)arg3 deniedUnii3ChannelMap:(NSUInteger)arg4 ;
-(void)addTriggerDisconnectEvent:(id)arg0 isAlerted:(BOOL)arg1 isConfirmed:(BOOL)arg2 isExecuted:(BOOL)arg3 ;
-(void)enableXCTestNotifications;
-(void)initializeDeviceLockState:(BOOL)arg0 displayState:(BOOL)arg1 motionState:(BOOL)arg2 vehicularState:(BOOL)arg3 callState:(BOOL)arg4 mediaState:(BOOL)arg5 chargingState:(BOOL)arg6 companionConnectionState:(BOOL)arg7 andSecondaryInterfaceName:(id)arg8 ;
-(void)linkTestEvent:(id)arg0 forInterface:(id)arg1 ;
-(void)notifyNetworkQualityResults:(id)arg0 forInterface:(id)arg1 ;
-(void)rangingCompletedWithValidCount:(NSUInteger)arg0 resultStatus:(NSInteger)arg1 resultFlags:(NSUInteger)arg2 ;
-(void)rangingSessionRequestedWithSelfPreferredChannel:(NSUInteger)arg0 selfMainChannel:(NSUInteger)arg1 selfChannelFlags:(NSUInteger)arg2 peerPreferredChannel:(NSUInteger)arg3 peerMainChannel:(NSUInteger)arg4 peerChannelFlags:(NSUInteger)arg5 requester:(id)arg6 ;
-(void)rangingStartedWithNumMeasurements:(NSUInteger)arg0 ;
-(void)receiveKernelLQMRollingWindow:(id)arg0 ForInterface:(id)arg1 ;
-(void)receivedBssTransitionRequest:(id)arg0 candidateListIncluded:(BOOL)arg1 isAbridged:(BOOL)arg2 disassociationImminent:(BOOL)arg3 bssTerminationIncluded:(BOOL)arg4 essDisassociationImminent:(BOOL)arg5 ;
-(void)sentBssTransitionResponse:(id)arg0 status:(NSInteger)arg1 terminationDelayRequested:(BOOL)arg2 ;
-(void)setAwdlState:(BOOL)arg0 inMode:(NSInteger)arg1 ;
-(void)setBluetoothState:(BOOL)arg0 connectedDeviceCount:(NSUInteger)arg1 inA2dp:(BOOL)arg2 inSco:(BOOL)arg3 ;
-(void)setCallState:(BOOL)arg0 ;
-(void)setCellularFallbackState:(BOOL)arg0 forInterface:(id)arg1 ;
-(void)setCellularOutrankingState:(BOOL)arg0 forInterface:(id)arg1 ;
-(void)setCompanionConnectionState:(BOOL)arg0 ;
-(void)setControlCenterState:(BOOL)arg0 withKnownLocation:(BOOL)arg1 forInterface:(id)arg2 ;
-(void)setCurrentApplicationName:(id)arg0 withAttributes:(id)arg1 ;
-(void)setDeviceInitializationFailureReason:(id)arg0 timeSinceBoot:(CGFloat)arg1 ;
-(void)setDeviceLockState:(BOOL)arg0 ;
-(void)setDisplayState:(BOOL)arg0 ;
-(void)setJoinEvent:(BOOL)arg0 withReason:(NSUInteger)arg1 lastDisconnectReason:(NSInteger)arg2 lastJoinFailure:(NSInteger)arg3 andNetworkDetails:(id)arg4 forInterface:(id)arg5 ;
-(void)setLinkEvent:(BOOL)arg0 isInvoluntary:(BOOL)arg1 linkChangeReason:(NSInteger)arg2 linkChangeSubreason:(NSInteger)arg3 withNetworkDetails:(id)arg4 forInterface:(id)arg5 ;
-(void)setMediaState:(BOOL)arg0 ;
-(void)setMotionState:(BOOL)arg0 andVehicularState:(BOOL)arg1 ;
-(void)setPowerBudget:(NSInteger)arg0 andThermalIndex:(NSInteger)arg1 forInterface:(id)arg2 ;
-(void)setPowerState:(BOOL)arg0 forInterface:(id)arg1 ;
-(void)setRoamingConfiguration:(NSInteger)arg0 withChannelList:(id)arg1 forInterface:(id)arg2 ;
-(void)setRoamingState:(BOOL)arg0 flags:(NSUInteger)arg1 scannedChannelCount:(NSUInteger)arg2 withReason:(NSUInteger)arg3 asString:(id)arg4 andStatus:(NSUInteger)arg5 asString:(id)arg6 andLatency:(NSUInteger)arg7 andOriginRSSI:(NSInteger)arg8 andTargetRssi:(NSInteger)arg9 forInterface:(id)arg10 ;
-(void)setScanningState:(BOOL)arg0 client:(NSUInteger)arg1 neighborBSS:(id)arg2 otherBSS:(id)arg3 forInterface:(id)arg4 ;
-(void)setSoftApState:(BOOL)arg0 requester:(id)arg1 status:(id)arg2 changeReason:(id)arg3 channelNumber:(NSUInteger)arg4 countryCode:(NSUInteger)arg5 isHidden:(BOOL)arg6 isInfraConnected:(BOOL)arg7 isAwdlUp:(BOOL)arg8 lowPowerModeDuration:(CGFloat)arg9 compatibilityMode:(BOOL)arg10 ;
-(void)setSystemWakeState:(BOOL)arg0 wokenByWiFi:(BOOL)arg1 ;
-(void)startLQMAnalysis:(id)arg0 ;
-(void)startMonitoringWiFiInterface:(id)arg0 ;
-(void)updateBeaconInfo:(id)arg0 andParsedIE:(id)arg1 forInterface:(id)arg2 ;
-(void)updateLQMWindowCriteria;
-(void)updateLinkQuality:(id)arg0 forInterface:(id)arg1 ;
-(void)updateRoamCache:(id)arg0 forInterface:(id)arg1 ;
-(void)updateSleepPowerStats:(CGFloat)arg0 unassociatedDuration:(CGFloat)arg1 associatedDuration:(CGFloat)arg2 roamingDuration:(CGFloat)arg3 ;
-(void)updateWowState:(BOOL)arg0 lpasState:(BOOL)arg1 lowPowerState:(BOOL)arg2 batterySaverState:(BOOL)arg3 ;


@end


#endif