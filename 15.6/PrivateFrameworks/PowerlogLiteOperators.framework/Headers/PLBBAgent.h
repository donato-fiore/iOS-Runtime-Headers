// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBBAGENT_H
#define PLBBAGENT_H

@class PLAgent, PLABMClient, PLEntryNotificationOperatorComposition, PLNSNotificationOperatorComposition, PLTimer, TUCallCenter, PLCFNotificationOperatorComposition, NSMutableDictionary, NSString, NSMutableArray, NSNumber, NSDate, CoreTelephonyClient;
@protocol PLBasebandLogChannelDelegate, PLABMClientMessageDelegate, CoreTelephonyClientDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientCellularUsagePolicyDelegate, OS_dispatch_queue;


#import "PLBasebandLogChannel.h"
#import "PLTelephonyConnection.h"
#import "PLBBTelephonyActivityMsg.h"
#import "PLBBTelephonyRegMsg.h"

@interface PLBBAgent : PLAgent <PLBasebandLogChannelDelegate, PLABMClientMessageDelegate, CoreTelephonyClientDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientCellularUsagePolicyDelegate>

 {
    *IONotificationPort ioNotifyPort;
    unsigned int notificationRef;
    unsigned int baseband_service;
    PLBasebandLogChannel *streamingChannel;
    PLBasebandLogChannel *cachedChannel;
}


@property (retain) PLABMClient *abmClient; // ivar: _abmClient
@property BOOL agentInited; // ivar: _agentInited
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // ivar: _batteryLevelChanged
@property (retain) PLNSNotificationOperatorComposition *bbICEModelLTEMetricsNotification; // ivar: _bbICEModelLTEMetricsNotification
@property (retain) PLTimer *cacheCommitTimer; // ivar: _cacheCommitTimer
@property (retain) TUCallCenter *callCenter; // ivar: _callCenter
@property (retain) PLEntryNotificationOperatorComposition *canSleepNotification; // ivar: _canSleepNotification
@property (retain) PLCFNotificationOperatorComposition *cfNotifyBBReport; // ivar: _cfNotifyBBReport
@property (retain) PLCFNotificationOperatorComposition *cfNotifyBBReport30s; // ivar: _cfNotifyBBReport30s
@property BOOL changed; // ivar: _changed
@property (retain) PLTimer *channelReconnectTimer; // ivar: _channelReconnectTimer
@property (readonly, nonatomic) PLTelephonyConnection *connection; // ivar: _connection
@property (retain) NSMutableDictionary *currentCallList; // ivar: _currentCallList
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PLEntryNotificationOperatorComposition *didNotSleepNotification; // ivar: _didNotSleepNotification
@property (retain) NSMutableArray *dsdsActivityMsgs; // ivar: _dsdsActivityMsgs
@property (retain) NSMutableArray *dsdsRegMsgs; // ivar: _dsdsRegMsgs
@property (readonly) NSUInteger hash;
@property (retain) NSNumber *inDCH; // ivar: _inDCH
@property (retain) NSNumber *inUTBF; // ivar: _inUTBF
@property BOOL isBBDataStandard; // ivar: _isBBDataStandard
@property BOOL isBBOOS; // ivar: _isBBOOS
@property BOOL isFirstTimeAccountingOOS; // ivar: _isFirstTimeAccountingOOS
@property (retain) NSDate *lastBBActivityTimestamp; // ivar: _lastBBActivityTimestamp
@property CGFloat lastBBProtoPower; // ivar: _lastBBProtoPower
@property CGFloat lastGWPower; // ivar: _lastGWPower
@property (retain) NSDate *lastModeledOOSTimestamp; // ivar: _lastModeledOOSTimestamp
@property CGFloat lastOOSPower; // ivar: _lastOOSPower
@property (retain) NSDate *lastOOSTimestamp; // ivar: _lastOOSTimestamp
@property (retain) NSDate *lastReportRequestDate; // ivar: _lastReportRequestDate
@property (retain) NSNumber *lastReportedSignal; // ivar: _lastReportedSignal
@property BOOL lteCurrentState; // ivar: _lteCurrentState
@property CGFloat oosCDMAPower; // ivar: _oosCDMAPower
@property CGFloat oosGWPower; // ivar: _oosGWPower
@property CGFloat oosHDRPower; // ivar: _oosHDRPower
@property (retain) NSString *operatorName; // ivar: _operatorName
@property (retain) NSString *simStatus; // ivar: _simStatus
@property (readonly) PLEntryNotificationOperatorComposition *sleepEntryNotifications; // ivar: _sleepEntryNotifications
@property (readonly) Class superclass;
@property (retain) PLBBTelephonyActivityMsg *telActMsgHelper; // ivar: _telActMsgHelper
@property (retain) PLBBTelephonyRegMsg *telRegMsgHelper; // ivar: _telRegMsgHelper
@property (retain) PLEntryNotificationOperatorComposition *telephonyActivityNotification; // ivar: _telephonyActivityNotification
@property (retain) CoreTelephonyClient *telephonyClient; // ivar: _telephonyClient
@property (retain) NSObject<OS_dispatch_queue> *telephonyClientQueue; // ivar: _telephonyClientQueue
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener; // ivar: _thermalMonitorListener
@property CGFloat totalOosCDMAScanEnergy; // ivar: _totalOosCDMAScanEnergy
@property CGFloat totalOosGWScanEnergy; // ivar: _totalOosGWScanEnergy
@property CGFloat totalOosHDRScanEnergy; // ivar: _totalOosHDRScanEnergy
@property (readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications; // ivar: _wakeEntryNotifications


+(id)defaults;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventForwardSDM;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneBBReport;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryIceMsgLite;
+(id)getBBAgent;
+(id)getNameBBReport;
+(id)humanReadableStateFromKey:(id)arg0 ;
+(id)indexToRat:(NSUInteger)arg0 ;
+(void)load;
-(BOOL)isChangedAndSetAirplaneMode;
-(BOOL)isEarfcnHighBand:(int)arg0 ;
-(BOOL)isTimeToRequestReport;
-(BOOL)setupChannel:(id)arg0 withLogCodes:(id)arg1 andEvents:(id)arg2 andExtracode:(id)arg3 ;
-(CGFloat)translateChannelRBsToChannelBW:(CGFloat)arg0 ;
-(NSInteger)getSubsIdFromCTContext:(id)arg0 ;
-(float)translateTransBW:(int)arg0 ;
-(id)humanReadableDataActiveString;
-(id)humanReadableDataIndicator:(id)arg0 ;
-(id)humanReadableRegistrationStatus:(id)arg0 ;
-(id)humanReadableSimStatusString;
-(id)init;
-(id)setupIOKitNotifications;
-(id)translateCallStatus:(int)arg0 ;
-(void)accountVoicePower:(id)arg0 state:(id)arg1 ;
-(void)bootStateChange:(id)arg0 ;
-(void)callStatusChanged:(id)arg0 ;
-(void)cancelCacheCommitTimer;
-(void)cellChanged:(id)arg0 cell:(id)arg1 ;
-(void)channel:(id)arg0 hasDataAvailable:(id)arg1 ;
-(void)channelDidBecomeInvalid:(id)arg0 ;
-(void)checkKICEChannelTimeout;
-(void)commitBBCacheWithClientInfo:(NSInteger)arg0 ;
-(void)connectionStateChanged:(id)arg0 connection:(int)arg1 dataConnectionStatusInfo:(id)arg2 ;
-(void)createOOSAccountingEvent:(id)arg0 ;
-(void)dataStatus:(id)arg0 dataStatusInfo:(id)arg1 ;
-(void)dealloc;
-(void)displayStatusChanged:(id)arg0 status:(id)arg1 ;
-(void)eventToCommitCacheOccurred;
-(void)eventToFlushCacheOccurred;
-(void)flushBBCacheWithClientInfo:(NSInteger)arg0 ;
-(void)handlePLBasebandEventNotification:(id)arg0 ;
-(void)handlePostCDRXCapability;
-(void)initCacheCommitTimer;
-(void)initOperatorDependancies;
-(void)loadOOSModelValues;
-(void)log;
-(void)logBasebandConfig;
-(void)logDSDSEventForwardSDMwithSubsId:(NSInteger)arg0 SDMEnable:(BOOL)arg1 ;
-(void)logDSDSEventForwardTelephonyRegistrationWithKVPairs:(id)arg0 subsId:(NSInteger)arg1 andOperator:(id)arg2 ;
-(void)logDSDSEventPointTelephonyActivityWithSubsId:(NSInteger)arg0 context:(id)arg1 callStatus:(id)arg2 simStatus:(id)arg3 signalInfo:(id)arg4 RATselection:(id)arg5 andCurrCampedRAT:(id)arg6 ;
-(void)logEntries:(id)arg0 withGroupID:(id)arg1 ;
-(void)logEntry:(id)arg0 ;
-(void)logEventNoneBBReportBy:(NSInteger)arg0 withAction:(NSInteger)arg1 ;
-(void)logMessage:(id)arg0 andState:(id)arg1 ;
-(void)logOperatorName;
-(void)logTelephonyActivity;
-(void)logTelephonyActivityAtInit;
-(void)logTelephonyActivityDSDSAtInit;
-(void)logTelephonyRegMsgWith:(id)arg0 ;
-(void)logTelephonyRegistrationAtInit;
-(void)logTelephonyRegistrationDSDSAtInit;
-(void)metricMessage:(id)arg0 ;
-(void)modelBB16Power:(id)arg0 ;
-(void)modelGPSPower:(id)arg0 ;
-(void)modelLTESLEEPMGRPower:(id)arg0 ;
-(void)modelMav10BBHWPower:(id)arg0 ;
-(void)modelMavBBHWOtherPerRATPower:(id)arg0 ;
-(void)modelMavPower:(id)arg0 ;
-(void)modelOOSPower:(id)arg0 ;
-(void)modelPLEntry:(id)arg0 ;
-(void)modelScanPower:(id)arg0 ;
-(void)modelStateTransitionPower:(id)arg0 rat:(id)arg1 state:(id)arg2 ;
-(void)operatorNameChanged:(id)arg0 name:(id)arg1 ;
-(void)postCDRXCapability:(BOOL)arg0 ;
-(void)processTimeUpdateInfoDict:(id)arg0 ;
-(void)ratSelectionChanged:(id)arg0 selection:(id)arg1 ;
-(void)reconnectTimerFired;
-(void)refreshBBReport;
-(void)refreshRequestHandler;
-(void)registerForAirplaneModeChange;
-(void)registerForICEModelMetricsNotifications:(id)arg0 ;
-(void)registerForMAVModelMetricsNotifications:(id)arg0 ;
-(void)scheduleFlushPostCacheCommit;
-(void)scheduleReconnect;
-(void)setOpName:(id)arg0 ;
-(void)setupBBChannelsWithAction:(NSInteger)arg0 ;
-(void)setupKICEChannels;
-(void)setupKICEChannelsForDebug;
-(void)setupMavABMChannel;
-(void)setupTelephonyActivityChannels;
-(void)setupTelephonyRegistrationChannels;
-(void)setupTimeUpdateChannel;
-(void)signalStrengthChanged:(id)arg0 info:(id)arg1 ;
-(void)simStatusDidChange:(id)arg0 status:(id)arg1 ;
-(void)smartDataModeChanged:(id)arg0 userEnabled:(BOOL)arg1 ;
-(void)telephonyActivityNotificationCB_Agent:(id)arg0 withName:(struct __CFString *)arg1 ;
-(void)triggerMessage:(id)arg0 ;
-(void)wakeMessage:(id)arg0 ;


@end


#endif