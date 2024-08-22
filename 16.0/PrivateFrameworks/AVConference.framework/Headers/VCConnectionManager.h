// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCCONNECTIONMANAGER_H
#define VCCONNECTIONMANAGER_H

@class NSMutableArray, NSString, NSMutableDictionary;
@protocol VCConnectionHealthMonitorDelegate, VCWifiAssistManagerDelegate, VCLinkProbingHandlerDelegate, VCCoreMotionManagerDelegate, OS_dispatch_queue, VCConnectionProtocol, VCConnectionManagerDelegate;

#import <Foundation/Foundation.h>

#import "VCWifiAssistManager.h"
#import "VCWRMHandler.h"
#import "VCDuplicationHandler.h"
#import "VCConnectionSelector.h"
#import "VCLinkProbingHandler.h"
#import "VCCoreMotionManager.h"
#import "VCConnectionHealthMonitor.h"
#import "AVCStatisticsCollector.h"
#import "VCStatsRecorder.h"

@interface VCConnectionManager : NSObject <VCConnectionHealthMonitorDelegate, VCWifiAssistManagerDelegate, VCLinkProbingHandlerDelegate, VCCoreMotionManagerDelegate>

 {
    BOOL _isStarted;
    int _connectionSelectionVersion;
    _opaque_pthread_rwlock_t _stateRWlock;
    NSMutableArray *_connectionArray;
    *opaqueRTCReporting _reportingAgent;
    BOOL _isInitialConnectionEstablished;
    id *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    *unk _duplicationCallback;
    BOOL _enableDuplication;
    CGFloat _lastConnectionUnstableTime;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    *void _duplicationContext;
    BOOL _duplicationPending;
    BOOL _isPrimaryLocalUsingCell;
    VCWifiAssistManager *_vcWifiAssist;
    BOOL _hasAssertedCell;
    ? _localConnectionStats;
    ? _remoteConnectionStats;
    VCWRMHandler *_wrmHandler;
    VCDuplicationHandler *_duplicationHandler;
    VCConnectionSelector *_connectionSelector;
    CGFloat _lastDefaultCheckTime;
    CGFloat _lastTransitionToFECTime;
    CGFloat _lastiRATCheckTime;
    CGFloat _iRATNotificationRequestTime;
    int _localWRMLinkTypeFromDefaults;
    BOOL _allowRequestForWRMNotification;
    BOOL _forceHandoverToCell;
    BOOL _disableRemoteInterfaceInference;
    *unk _wrmStatusUpdateCallback;
    *unk _wrmRequestNotificationCallback;
    *void _wrmCallbacksContext;
    ? _connectionSelectionPolicy;
    int _localRATTypeOverride;
    int _localWRMAlertFromDefaults;
    VCLinkProbingHandler *_linkProbingHandler;
    *tagVCNWConnectionMonitor _nwMonitor;
    int _mediaHealthStatisticsHandlerIndex;
    NSObject<OS_dispatch_queue> *_nwConnectionMonitorQueue;
    VCCoreMotionManager *_coreMotionManager;
    BOOL _isNWConnectionMonitorEnabled;
    BOOL _ignoreNWConnectionMonitorNotification;
    NSString *_nwMonitorInterfaceName;
    ? _lastNWStatistics;
    id<VCConnectionProtocol> *_lastActivePrimaryConnection;
    NSMutableDictionary *_mediaDegradedHistories;
    NSMutableDictionary *_mediaDegradedHistoryIndices;
    NSMutableDictionary *_aggregateStallTimeDuration;
    BOOL _isDuplicationAllowedForMediaDegraded;
    int _endToEndConnectionStatisticsHandlerIndex;
    int _serverBasedConnectionStatisticsHandlerIndex;
    BOOL _isVideoExpected;
    BOOL _isPrimaryLinkUsable;
    BOOL _resetMediaHealthStats;
    int _wrmPendingBitrateCapDelta;
    BOOL _isWRMNotificationPending;
    ? _savedWRMNotification;
    unsigned int _downlinkTargetBitrate;
    unsigned int _downlinkTargetCellBitrateCap;
    BOOL _useMediaDrivenDuplicationFeatureFlag;
    CGFloat _mediaDegradedThreshold;
    BOOL _enableCoreMotionDetection;
    BOOL _previousNoRemoteInProgress;
    NSInteger _initialSentBytes;
    NSInteger _initialReceivedBytes;
    BOOL _dropLinkRecommendation;
    unsigned char _linkPreferSuggestion;
    unsigned char _linkConfidenceScore;
    unsigned char _linkPreferDecision;
    BOOL _reportLinkPreferSuggestion;
    unsigned char _linkIPPreference;
    BOOL _useIDSLinkSuggestionFeatureFlag;
    NSObject<OS_dispatch_queue> *_reportingQueue;
    uint8_t _sendSuccessCountSinceLastCheck;
    uint8_t _sendFailureCountSinceLastCheck;
}


@property (readonly) NSUInteger budgetConsumingCellularRxBytes; // ivar: _budgetConsumingCellularRxBytes
@property (readonly) NSUInteger budgetConsumingCellularTxBytes; // ivar: _budgetConsumingCellularTxBytes
@property unsigned int callID; // ivar: _callID
@property BOOL cellPrimaryInterfaceChangeEnabled; // ivar: _cellPrimaryInterfaceChangeEnabled
@property (readonly) int connectionCount;
@property (retain, nonatomic) NSObject<VCConnectionProtocol> *connectionForDuplication; // ivar: _connectionForDuplication
@property (readonly, nonatomic) VCConnectionHealthMonitor *connectionHealthMonitor; // ivar: _connectionHealthMonitor
@property (readonly, copy) NSString *debugDescription;
@property NSObject<VCConnectionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property BOOL duplicateImportantPktsEnabled; // ivar: _duplicateImportantPktsEnabled
@property BOOL duplicationEnhancementEnabled; // ivar: _duplicationEnhancementEnabled
@property BOOL fastMediaDuplicationEnabled; // ivar: _fastMediaDuplicationEnabled
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=setiRATDuplicationEnabled:) BOOL iRATDuplicationEnabled; // ivar: _iRATDuplicationEnabled
@property BOOL isAudioOnly; // ivar: _isAudioOnly
@property (nonatomic) BOOL isDuplicationAllowed; // ivar: _isDuplicationAllowed
@property (readonly) BOOL isLocalCellularInterfaceUsed;
@property (nonatomic) BOOL isOneToOneModeEnabled; // ivar: _isOneToOneModeEnabled
@property BOOL isOneToOneRemoteParticipantAdded; // ivar: _isOneToOneRemoteParticipantAdded
@property (readonly) BOOL isPreWarmStateEnabled; // ivar: _isPreWarmStateEnabled
@property (nonatomic) BOOL isRemoteMediaQualityDegraded; // ivar: _isRemoteMediaQualityDegraded
@property (retain, nonatomic) NSObject<VCConnectionProtocol> *lastPrimaryConnectionInUse; // ivar: _lastPrimaryConnectionInUse
@property (readonly) unsigned char linkProbingCapabilityVersion; // ivar: _linkProbingCapabilityVersion
@property BOOL lowNetworkModeEnabled; // ivar: _lowNetworkModeEnabled
@property (readonly) NSUInteger mediaCellularRxBytes; // ivar: _mediaCellularRxBytes
@property (readonly) NSUInteger mediaCellularTxBytes; // ivar: _mediaCellularTxBytes
@property (readonly) NSUInteger mediaExcessiveCellularRxBytes; // ivar: _mediaExcessiveCellularRxBytes
@property (readonly) NSUInteger mediaExcessiveCellularTxBytes; // ivar: _mediaExcessiveCellularTxBytes
@property (readonly) NSUInteger mediaWifiRxBytes; // ivar: _mediaWifiRxBytes
@property (readonly) NSUInteger mediaWifiTxBytes; // ivar: _mediaWifiTxBytes
@property CGFloat noRemoteDuplicationThresholdFast; // ivar: _noRemoteDuplicationThresholdFast
@property (readonly) CGFloat noRemotePacketInterval; // ivar: _noRemotePacketInterval
@property BOOL optIntoExistingSubscribedStreams; // ivar: _optIntoExistingSubscribedStreams
@property (nonatomic, setter=setPreferRelayOverP2PEnabled:) BOOL preferRelayOverP2PEnabled; // ivar: _preferRelayOverP2PEnabled
@property unsigned char preferredLocalInterfaceForDuplication; // ivar: _preferredLocalInterfaceForDuplication
@property unsigned char preferredRemoteInterfaceForDuplication; // ivar: _preferredRemoteInterfaceForDuplication
@property (readonly) CGFloat primaryConnHealthAllowedDelay;
@property (retain, nonatomic) NSObject<VCConnectionProtocol> *primaryConnection; // ivar: _primaryConnection
@property unsigned int realRATType; // ivar: _realRATType
@property int relayServerProvider; // ivar: _relayServerProvider
@property (nonatomic) unsigned char remoteLinkProbingCapabilityVersion; // ivar: _remoteLinkProbingCapabilityVersion
@property (readonly) CGFloat remoteNoRemotePacketInterval; // ivar: _remoteNoRemotePacketInterval
@property (nonatomic) BOOL remotePreWarmStateEnabled; // ivar: _remotePreWarmStateEnabled
@property (retain, nonatomic) NSObject<VCConnectionProtocol> *secondaryConnection; // ivar: _secondaryConnection
@property (readonly) unsigned int sendFailureCountSinceLastCheck;
@property (readonly) unsigned int sendSuccessCountSinceLastCheck;
@property (readonly) NSUInteger signalingExcessiveCellularRxBytes; // ivar: _signalingExcessiveCellularRxBytes
@property (readonly) NSUInteger signalingExcessiveCellularTxBytes; // ivar: _signalingExcessiveCellularTxBytes
@property (nonatomic) BOOL startConnectionHealthMonitoring; // ivar: _startConnectionHealthMonitoring
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // ivar: _statisticsCollector
@property (readonly, nonatomic) VCStatsRecorder *statsRecorder; // ivar: _statsRecorder
@property (readonly) Class superclass;
@property BOOL supportDuplication; // ivar: _supportDuplication
@property (nonatomic) BOOL useMediaDrivenDuplication; // ivar: _useMediaDrivenDuplication


-(BOOL)areAllLinkProbingTriggersInactive;
-(BOOL)isBetterConnection:(id)arg0 asPrimary:(BOOL)arg1 ;
-(BOOL)isBetterPrimaryConnectionAvailable;
-(BOOL)isConnectedOnIPv6ForActiveConnectionWithQuality:(int)arg0 ;
-(BOOL)isConnectedOnRelayForActiveConnectionWithQuality:(int)arg0 ;
-(BOOL)isDuplicationAllowedForParticipantID:(id)arg0 bucketsToSum:(int)arg1 threshold:(CGFloat)arg2 ;
-(BOOL)isDuplicationConnectionCandidate:(id)arg0 ;
-(BOOL)isDuplicationEnabled;
-(BOOL)isInterfaceOnCellularForActiveConnectionWithQuality:(int)arg0 forLocalInterface:(BOOL)arg1 ;
-(BOOL)isOptimalConnection:(id)arg0 asPrimary:(BOOL)arg1 interfaceMask:(int)arg2 ;
-(BOOL)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 ;
-(BOOL)shouldDropCurrentPrimaryConnectionWithConnectionStats:(struct ? *)arg0 ;
-(BOOL)shouldDuplicatePacket:(BOOL)arg0 ;
-(BOOL)shouldUseServerBasedConnection:(id)arg0 isEndToEnd:(BOOL)arg1 ;
-(char *)reasonStringWithDuplicationReason:(unsigned char)arg0 ;
-(id)activeConnectionRegistry;
-(id)connectionForQualityInternal:(int)arg0 ;
-(id)copyConnectionForQuality:(int)arg0 ;
-(id)copyConnectionWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 isPrimary:(*BOOL)arg1 ;
-(id)init;
-(id)suggestedLinkTypeCombo;
-(int)addConnection:(id)arg0 ;
-(int)getCellularMTUForActiveConnectionWithQuality:(int)arg0 ;
-(int)getCellularTechForActiveConnectionWithQuality:(int)arg0 forLocalInterface:(BOOL)arg1 ;
-(int)getConnectionSelectionVersionFromFrameworkVersion:(id)arg0 ;
-(int)getConnectionTypeForActiveConnectionWithQuality:(int)arg0 forLocalInterface:(BOOL)arg1 ;
-(int)getNumberOfConnectionsInternal;
-(int)processConnectionHealthFromControlInfo:(*void)arg0 ;
-(int)processRemoteWRMSuggestion:(int)arg0 isRemoteDuplicating:(BOOL)arg1 ;
-(int)processWRMNotification:(struct ? *)arg0 ;
-(int)removeConnection:(id)arg0 ;
-(int)setConnectionHealthOnControlInfo:(*void)arg0 ;
-(int)setWRMNotification:(struct ? *)arg0 ;
-(int)setWRMUpdateCallback:(*unk)arg0 requestNotificationCallback:(*unk)arg1 withContext:(*void)arg2 completionHandler:(id)arg3 ;
-(struct ? )processDuplicationStateUpdateEvent:(struct ? )arg0 didLocalHandover:(BOOL)arg1 timeDurationMs:(unsigned int)arg2 linkType:(int)arg3 wrmCallbackScenario:(unsigned char)arg4 ;
-(struct ? *)getConnectionSelectionPolicy;
-(struct tagVCSourceDestinationInfo *)createSourceDestinationInfoListWithForceDuplication:(BOOL)arg0 isEndToEnd:(BOOL)arg1 ;
-(unsigned int)getByteCountWithIndex:(unsigned char)arg0 isOutgoing:(BOOL)arg1 ;
-(unsigned int)getPacketCountWithIndex:(unsigned char)arg0 isOutgoing:(BOOL)arg1 ;
-(void)addDuplicationSelectionLogicTelemetryForConnection:(id)arg0 suggestedLinkTypeCombo:(id)arg1 payload:(id)arg2 ;
-(void)addLinkProbingTelemetry:(id)arg0 ;
-(void)addMediaHealthStatsHistoryEntryForParticipantID:(id)arg0 ;
-(void)addTelemetryForConnection:(id)arg0 dictionary:(id)arg1 ;
-(void)aggregateStallTimeDuration:(struct ? *)arg0 idsParticipantID:(id)arg1 ;
-(void)alertStateUpdated:(BOOL)arg0 isLocal:(BOOL)arg1 ;
-(void)applyLinkFlags:(unsigned short)arg0 isCellular:(BOOL)arg1 ;
-(void)applyLinkRecommendation;
-(void)applyRemoteLinkFlags:(unsigned short)arg0 isCellular:(BOOL)arg1 ;
-(void)checkActivelyRequestWRMRecommendation:(CGFloat)arg0 isLocalUsingCellular:(BOOL)arg1 ;
-(void)checkAndUpdatePrimaryConnection;
-(void)checkForCachedWRMNotification;
-(void)checkMediaQualityDegradedForParticipantID:(id)arg0 ;
-(void)checkWRMSuggestionDefaultValue;
-(void)checklocalRATTypeOverrideDefaultValue:(BOOL)arg0 ;
-(void)checkpointPrimaryConnection:(id)arg0 ;
-(void)configureNWConnectionMonitor:(id)arg0 ;
-(void)connectionHealthDidUpdate:(int)arg0 isLocalConnection:(BOOL)arg1 ;
-(void)dealloc;
-(void)deregisterPeriodicTask;
-(void)destroyNWMonitor;
-(void)destroyNWMonitorInternal;
-(void)didChangeWifiAssistAvailable:(BOOL)arg0 reason:(unsigned char)arg1 ;
-(void)didUpdateMotionActivity:(id)arg0 ;
-(void)disableRemotePreferredInterfaceInference:(BOOL)arg0 ;
-(void)duplicationStateUpdateWithEvent:(struct ? )arg0 ;
-(void)flushLinkProbingStatusWithOptions:(id)arg0 ;
-(void)getSentBytes:(*NSInteger)arg0 receivedBytes:(*NSInteger)arg1 ;
-(void)periodicTask:(*void)arg0 ;
-(void)primaryConnectionChanged:(id)arg0 oldPrimaryConnection:(id)arg1 ;
-(void)processWRMCoexMetrics:(id)arg0 ;
-(void)promoteSecondaryConnectionToPrimary:(id)arg0 ;
-(void)queryProbingResultsWithOptions:(id)arg0 ;
-(void)registerPeriodicTask;
-(void)registerStatisticsHandlers;
-(void)removeMediaHealthStatsHistoryEntryForParticipantID:(id)arg0 ;
-(void)renewNWMonitor;
-(void)reportActiveConnectionOneToOne:(id)arg0 isAudioOnly:(BOOL)arg1 ;
-(void)reportConnection:(id)arg0 isInitialConnection:(BOOL)arg1 ;
-(void)reportConnectionUpdateWithRespCode:(unsigned short)arg0 ;
-(void)reportConnectionUpdateWithResponseCode:(unsigned short)arg0 delay:(CGFloat)arg1 ;
-(void)reportFirstActiveConnectionOneToOne:(id)arg0 remoteOSVersion:(id)arg1 redState:(BOOL)arg2 isAudioOnly:(BOOL)arg3 ;
-(void)reportLinkProbingStatsWithDuplicationJustStarted:(BOOL)arg0 ;
-(void)reportLinkSuggestion;
-(void)reportNoPacketUpdateUsingCurrentTime:(CGFloat)arg0 lastReceivedPacketTime:(CGFloat)arg1 ;
-(void)requestWRMNotification;
-(void)reselectPrimaryConnection;
-(void)resetConnectionStatTimers;
-(void)resetMediaByteCounters;
-(void)resetMediaHealthStats;
-(void)setActiveLinkProbingEnabled:(BOOL)arg0 ;
-(void)setConnectionPause:(BOOL)arg0 isLocalConnection:(BOOL)arg1 ;
-(void)setConnectionSelectionVersionWithLocalFrameworkVersion:(id)arg0 remoteFrameworkVersion:(id)arg1 ;
-(void)setDefaultLinkProbingCapabilityVersionForDeviceRole:(int)arg0 ;
-(void)setDuplicationCallback:(*unk)arg0 withContext:(*void)arg1 ;
-(void)setDuplicationDownlinkCellBitrateCap:(unsigned int)arg0 currentBitrate:(unsigned int)arg1 ;
-(void)setDuplicationEnabled:(BOOL)arg0 ;
-(void)setDuplicationEnabledInternal:(BOOL)arg0 ;
-(void)setPreWarmState:(BOOL)arg0 ;
-(void)setReportingAgent:(struct opaqueRTCReporting *)arg0 ;
-(void)setVCNWConnectionMonitorStatisticsHandler;
-(void)setupConnectionHealthMonitor;
-(void)setupConnectionHealthMonitorMultiway;
-(void)sourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 isSourceOnCellular:(*BOOL)arg1 isSourceIPv6:(*BOOL)arg2 ;
-(void)start;
-(void)startActiveProbingWithOptions:(id)arg0 ;
-(void)stop;
-(void)stopActiveProbingWithOptions:(id)arg0 ;
-(void)synchronizeParticipantGenerationCounter:(unsigned char)arg0 ;
-(void)unregisterStatisticsHandlers;
-(void)updateAllBitrateCapsForConnection:(id)arg0 ;
-(void)updateCellularExcessiveBytesWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 bytes:(int)arg1 isMediaData:(BOOL)arg2 isOutgoing:(BOOL)arg3 ;
-(void)updateCellularMTU:(int)arg0 ;
-(void)updateCellularTech:(int)arg0 forLocalInterface:(BOOL)arg1 ;
-(void)updateConnectionForDuplication;
-(void)updateConnectionHealthWithVCStatisticsMessage:(struct ? )arg0 ;
-(void)updateConnectionSelectionPolicyWithPreferE2E:(BOOL)arg0 ;
-(void)updateConnectionStatsWithIndicatorNoPacket:(struct ? *)arg0 ;
-(void)updateConnectionStatsWithIndicatorNone:(struct ? *)arg0 ;
-(void)updateConnectionStatsWithIndicatorOnlyPrimaryNoPacket:(struct ? *)arg0 ;
-(void)updateConnectionStatsWithIndicatorPrimaryImproved:(struct ? *)arg0 ;
-(void)updateDuplicationStateWithEventType:(unsigned char)arg0 ;
-(void)updateLinkPreferSuggestion:(id)arg0 ;
-(void)updateMediaDegradedHistoryWithCurrentAudioErasure:(CGFloat)arg0 idsParticipantID:(id)arg1 ;
-(void)updateMediaDegradedHistoryWithCurrentVideoStallDuration:(CGFloat)arg0 idsParticipantID:(id)arg1 ;
-(void)updateMediaDegradedHistoryWithValue:(CGFloat)arg0 idsParticipantID:(id)arg1 ;
-(void)updateMediaHealthStats:(struct ? *)arg0 idsParticipantID:(id)arg1 ;
-(void)updateNegotiatedSettingsOnetoOne:(id)arg0 ;
-(void)updateOneToOneBitrateCapsForConnection:(id)arg0 ;
-(void)updatePacketCountAndByteCountWithIndex:(unsigned char)arg0 packetSize:(int)arg1 numOfStreamId:(int)arg2 isPriorityIncluded:(BOOL)arg3 isOutgoing:(BOOL)arg4 ;
-(void)updateProbingResults:(id)arg0 ;
-(void)updateReceivedBytes:(int)arg0 isOnCell:(BOOL)arg1 isIPv6:(BOOL)arg2 ;
-(void)updateReceivedExcessiveBytes:(int)arg0 isMediaData:(BOOL)arg1 isIPv6:(BOOL)arg2 ;
-(void)updateReceivedPacketsAndBytesWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 bytesReceived:(int)arg1 isMediaData:(BOOL)arg2 shouldCountPacket:(BOOL)arg3 numOfStreamId:(int)arg4 isPriorityIncluded:(BOOL)arg5 ;
-(void)updateSessionStats:(unsigned short)arg0 ;
-(void)updateTransmittedBytes:(int)arg0 isOnCell:(BOOL)arg1 isIPv6:(BOOL)arg2 ;
-(void)updateTransmittedExcessiveBytes:(int)arg0 isMediaData:(BOOL)arg1 isIPv6:(BOOL)arg2 ;
-(void)updateTransmittedPacketsAndBytesWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 bytesSent:(int)arg1 isMediaData:(BOOL)arg2 shouldCountPacket:(BOOL)arg3 numOfStreamId:(int)arg4 isPriorityIncluded:(BOOL)arg5 ;
-(void)updateWRMDuplicationForHandover;
-(void)updateWithRemoteMediaHealthDuplication:(BOOL)arg0 ;
-(void)useCellPrimayInterface:(BOOL)arg0 ;
-(void)useConnectionAsPrimary:(id)arg0 ;


@end


#endif