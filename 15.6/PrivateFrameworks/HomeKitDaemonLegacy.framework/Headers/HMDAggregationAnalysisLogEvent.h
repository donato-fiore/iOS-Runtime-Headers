// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDAGGREGATIONANALYSISLOGEVENT_H
#define HMDAGGREGATIONANALYSISLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMDAWDLogEvent, HMMCoreAnalyticsLogging;


#import "HMDEventCountersManager.h"

@interface HMDAggregationAnalysisLogEvent : HMMLogEvent <HMDAWDLogEvent, HMMCoreAnalyticsLogging>



@property NSUInteger acceptedXPCRequestsCount; // ivar: _acceptedXPCRequestsCount
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (getter=isActiveDay) BOOL activeDay; // ivar: _activeDay
@property NSUInteger activeDaysPerMonthCount; // ivar: _activeDaysPerMonthCount
@property NSUInteger averageLatencyBT; // ivar: _averageLatencyBT
@property NSUInteger averageLatencyIDS; // ivar: _averageLatencyIDS
@property NSUInteger averageLatencyIP; // ivar: _averageLatencyIP
@property NSUInteger cameraRecordingReachabilityChangedCount; // ivar: _cameraRecordingReachabilityChangedCount
@property NSUInteger cameraRecordingReachabilityOfflineDuration; // ivar: _cameraRecordingReachabilityOfflineDuration
@property NSUInteger cameraStreamStartFailureCount; // ivar: _cameraStreamStartFailureCount
@property NSUInteger cameraStreamStartSuccessCount; // ivar: _cameraStreamStartSuccessCount
@property NSUInteger cloudSyncDecryptionFailedCount; // ivar: _cloudSyncDecryptionFailedCount
@property NSUInteger cloudSyncFetchCount; // ivar: _cloudSyncFetchCount
@property BOOL cloudSyncLastDecryptionFailed; // ivar: _cloudSyncLastDecryptionFailed
@property BOOL cloudSyncMaximumDelayReached; // ivar: _cloudSyncMaximumDelayReached
@property NSUInteger cloudSyncPushCount; // ivar: _cloudSyncPushCount
@property NSUInteger cloudSyncUploadCount; // ivar: _cloudSyncUploadCount
@property NSUInteger cloudSyncUploadErrorCount; // ivar: _cloudSyncUploadErrorCount
@property NSInteger countOfDaysSinceLastActive; // ivar: _countOfDaysSinceLastActive
@property NSUInteger currentDeviceStartedLegacyElectionCount; // ivar: _currentDeviceStartedLegacyElectionCount
@property (copy, nonatomic) NSString *dataSyncState; // ivar: _dataSyncState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSUInteger erroredXPCRequestsCount; // ivar: _erroredXPCRequestsCount
@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // ivar: _eventCountersManager
@property (readonly, nonatomic) NSString *eventName;
@property NSUInteger fetchCameraClipVideoSegmentAssetCount; // ivar: _fetchCameraClipVideoSegmentAssetCount
@property NSUInteger filteredXPCNotificationsCount; // ivar: _filteredXPCNotificationsCount
@property NSUInteger hapBTLEConnectionPerReasonsCount; // ivar: _hapBTLEConnectionPerReasonsCount
@property NSUInteger hapBTLEConnectionsCount; // ivar: _hapBTLEConnectionsCount
@property NSUInteger hapBTLEDiscoveriesCount; // ivar: _hapBTLEDiscoveriesCount
@property NSUInteger hapIPInvalidationCount; // ivar: _hapIPInvalidationCount
@property NSUInteger hapIPReceivedHTTPEventCount; // ivar: _hapIPReceivedHTTPEventCount
@property NSUInteger hapIPReceivedHTTPResponsesCount; // ivar: _hapIPReceivedHTTPResponsesCount
@property NSUInteger hapIPSentHTTPRequestsCount; // ivar: _hapIPSentHTTPRequestsCount
@property (readonly) NSUInteger hash;
@property NSUInteger homeDataBytesFetched; // ivar: _homeDataBytesFetched
@property NSUInteger homeDataBytesPushed; // ivar: _homeDataBytesPushed
@property NSUInteger homeHubReachabilityChangedCount; // ivar: _homeHubReachabilityChangedCount
@property NSUInteger ipAccessoryReachabilityChangedCount; // ivar: _ipAccessoryReachabilityChangedCount
@property NSUInteger jetsamReasonHighwaterCount; // ivar: _jetsamReasonHighwaterCount
@property NSUInteger jetsamReasonOtherCount; // ivar: _jetsamReasonOtherCount
@property NSUInteger jetsamReasonProcessLimitCount; // ivar: _jetsamReasonProcessLimitCount
@property NSUInteger legacyCloudSyncPushCount; // ivar: _legacyCloudSyncPushCount
@property NSUInteger legacyHomeDataBytesFetched; // ivar: _legacyHomeDataBytesFetched
@property NSUInteger legacyHomeDataBytesPushed; // ivar: _legacyHomeDataBytesPushed
@property NSUInteger numAccessoriesAdded; // ivar: _numAccessoriesAdded
@property NSUInteger numReadFirstPartyApp; // ivar: _numReadFirstPartyApp
@property NSUInteger numReadInternalRequested; // ivar: _numReadInternalRequested
@property NSUInteger numReadSiri; // ivar: _numReadSiri
@property NSUInteger numReadThirdPartyApp; // ivar: _numReadThirdPartyApp
@property NSUInteger numReadUnknownSource; // ivar: _numReadUnknownSource
@property NSUInteger numReadWriteFailureBT; // ivar: _numReadWriteFailureBT
@property NSUInteger numReadWriteFailureIDS; // ivar: _numReadWriteFailureIDS
@property NSUInteger numReadWriteFailureIP; // ivar: _numReadWriteFailureIP
@property NSUInteger numReadWriteSuccessBT; // ivar: _numReadWriteSuccessBT
@property NSUInteger numReadWriteSuccessIDS; // ivar: _numReadWriteSuccessIDS
@property NSUInteger numReadWriteSuccessIP; // ivar: _numReadWriteSuccessIP
@property NSUInteger numScenesAdded; // ivar: _numScenesAdded
@property NSUInteger numScenesUserRun; // ivar: _numScenesUserRun
@property NSUInteger numShortcutsAdded; // ivar: _numShortcutsAdded
@property NSUInteger numShortcutsRun; // ivar: _numShortcutsRun
@property NSUInteger numTriggersAdded; // ivar: _numTriggersAdded
@property NSUInteger numTriggersFired; // ivar: _numTriggersFired
@property NSUInteger numWriteFirstPartyApp; // ivar: _numWriteFirstPartyApp
@property NSUInteger numWriteInternalRequested; // ivar: _numWriteInternalRequested
@property NSUInteger numWriteSiri; // ivar: _numWriteSiri
@property NSUInteger numWriteThirdPartyApp; // ivar: _numWriteThirdPartyApp
@property NSUInteger numWriteUnknownSource; // ivar: _numWriteUnknownSource
@property NSUInteger peakConcurrentBLEAccessoryUpdateApply; // ivar: _peakConcurrentBLEAccessoryUpdateApply
@property NSUInteger peakConcurrentBLEAccessoryUpdateStaging; // ivar: _peakConcurrentBLEAccessoryUpdateStaging
@property NSUInteger peakConcurrentIPAccessoryUpdateApply; // ivar: _peakConcurrentIPAccessoryUpdateApply
@property NSUInteger peakConcurrentIPAccessoryUpdateStaging; // ivar: _peakConcurrentIPAccessoryUpdateStaging
@property NSUInteger peakConcurrentThreadAccessoryUpdateApply; // ivar: _peakConcurrentThreadAccessoryUpdateApply
@property NSUInteger peakConcurrentThreadAccessoryUpdateStaging; // ivar: _peakConcurrentThreadAccessoryUpdateStaging
@property NSUInteger processCrashCount; // ivar: _processCrashCount
@property NSUInteger processJetsamCount; // ivar: _processJetsamCount
@property NSUInteger processLaunchCount; // ivar: _processLaunchCount
@property NSUInteger processMemoryPressureStateCriticalCount; // ivar: _processMemoryPressureStateCriticalCount
@property NSUInteger processMemoryPressureStateWarningCount; // ivar: _processMemoryPressureStateWarningCount
@property NSUInteger remoteMessagesReceivedCount; // ivar: _remoteMessagesReceivedCount
@property NSUInteger remoteMessagesSentCount; // ivar: _remoteMessagesSentCount
@property NSUInteger rxIDSMessagesCount; // ivar: _rxIDSMessagesCount
@property NSUInteger rxIDSProxyMessagesCount; // ivar: _rxIDSProxyMessagesCount
@property NSUInteger rxLoxyMessagesCount; // ivar: _rxLoxyMessagesCount
@property NSUInteger rxRapportMessagesCount; // ivar: _rxRapportMessagesCount
@property NSUInteger rxSecureMessagesCount; // ivar: _rxSecureMessagesCount
@property NSUInteger sampledAverageProcessMemoryUsageMB; // ivar: _sampledAverageProcessMemoryUsageMB
@property NSUInteger sampledPeakProcessMemoryUsageMB; // ivar: _sampledPeakProcessMemoryUsageMB
@property NSUInteger sentXPCNotificationsCount; // ivar: _sentXPCNotificationsCount
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly) Class superclass;
@property NSUInteger txIDSMessagesCount; // ivar: _txIDSMessagesCount
@property NSUInteger txIDSProxyMessagesCount; // ivar: _txIDSProxyMessagesCount
@property NSUInteger txLoxyMessagesCount; // ivar: _txLoxyMessagesCount
@property NSUInteger txRapportMessagesCount; // ivar: _txRapportMessagesCount
@property NSUInteger txSecureMessagesCount; // ivar: _txSecureMessagesCount
@property NSUInteger v2ElectionCoordinationMeshLeaderChangedCount; // ivar: _v2ElectionCoordinationMeshLeaderChangedCount
@property NSUInteger v2ElectionCoordinationMeshLeaderElectedCount; // ivar: _v2ElectionCoordinationMeshLeaderElectedCount
@property NSUInteger v2ElectionCoordinationMeshUpdateCount; // ivar: _v2ElectionCoordinationMeshUpdateCount
@property BOOL v2ElectionCurrentDeviceInSecondaryCoordinationMesh; // ivar: _v2ElectionCurrentDeviceInSecondaryCoordinationMesh
@property NSUInteger v2ElectionPrimaryResidentChangedCount; // ivar: _v2ElectionPrimaryResidentChangedCount
@property NSUInteger v2ElectionPrimaryResidentElectionRunCount; // ivar: _v2ElectionPrimaryResidentElectionRunCount


+(BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
-(id)alertMessageForRadarDialog;
-(id)alertMessageForRadarDialogWithCloudSyncBytesThreshold:(NSUInteger)arg0 remoteMessageCountThreshold:(NSUInteger)arg1 ;
-(id)initWithDataSyncStateDescription:(id)arg0 eventCountersManager:(id)arg1 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;
-(void)submitAtDate:(id)arg0 ;


@end


#endif