// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLXPCAGENT_H
#define PLXPCAGENT_H

@class PLAgent, PLXPCListenerOperatorComposition, PLNSNotificationOperatorComposition, PLXPCResponderOperatorComposition, PLEntry, NSMutableDictionary, NSDate;



@interface PLXPCAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *ADDListener; // ivar: _ADDListener
@property (retain) PLXPCListenerOperatorComposition *AVConferenceXPCListener; // ivar: _AVConferenceXPCListener
@property (retain) PLXPCListenerOperatorComposition *AccessoriesXPCListener; // ivar: _AccessoriesXPCListener
@property (retain) PLXPCListenerOperatorComposition *AccessoryMotionXPCListener; // ivar: _AccessoryMotionXPCListener
@property (retain) PLXPCListenerOperatorComposition *AirDropXPCListener; // ivar: _AirDropXPCListener
@property (retain) PLXPCListenerOperatorComposition *AirPlayDiscoveryModeXPCListener; // ivar: _AirPlayDiscoveryModeXPCListener
@property (retain) PLXPCListenerOperatorComposition *AirTrafficAssetDownloadXPCListener; // ivar: _AirTrafficAssetDownloadXPCListener
@property (retain) PLXPCListenerOperatorComposition *AppAccessoriesXPCListener; // ivar: _AppAccessoriesXPCListener
@property (retain) PLXPCListenerOperatorComposition *AppActivationPerformanceActivationDataXPCListener; // ivar: _AppActivationPerformanceActivationDataXPCListener
@property (retain) PLXPCListenerOperatorComposition *AppActivationPerformanceCPUStatisticsXPCListener; // ivar: _AppActivationPerformanceCPUStatisticsXPCListener
@property (retain) PLXPCListenerOperatorComposition *AppActivationPerformanceMemoryStatisticsXPCListener; // ivar: _AppActivationPerformanceMemoryStatisticsXPCListener
@property (retain) PLXPCListenerOperatorComposition *AppActivationPerformancePowerStateStatisticsXPCListener; // ivar: _AppActivationPerformancePowerStateStatisticsXPCListener
@property (retain) PLXPCListenerOperatorComposition *AppActivationPerformanceProcessDataXPCListener; // ivar: _AppActivationPerformanceProcessDataXPCListener
@property (retain) PLXPCListenerOperatorComposition *AppleBacklightBrightnessXPCListener; // ivar: _AppleBacklightBrightnessXPCListener
@property (retain) PLXPCListenerOperatorComposition *AttentionPollingXPCListener; // ivar: _AttentionPollingXPCListener
@property (retain) PLXPCListenerOperatorComposition *AttentionSamplingXPCListener; // ivar: _AttentionSamplingXPCListener
@property (retain) PLXPCListenerOperatorComposition *AttentionServiceXPCListener; // ivar: _AttentionServiceXPCListener
@property (retain) PLXPCListenerOperatorComposition *AudioRoutingXPCListener; // ivar: _AudioRoutingXPCListener
@property (retain) PLXPCListenerOperatorComposition *AvailabilityModesXPCListener; // ivar: _AvailabilityModesXPCListener
@property (retain) PLXPCListenerOperatorComposition *BackgroundTransfer; // ivar: _BackgroundTransfer
@property (retain) PLXPCListenerOperatorComposition *CKKSSyncingEventXPCListener; // ivar: _CKKSSyncingEventXPCListener
@property (retain) PLXPCListenerOperatorComposition *CacheDeleteXPCListener; // ivar: _CacheDeleteXPCListener
@property (retain) PLXPCListenerOperatorComposition *CarPlayScreensXPCListener; // ivar: _CarPlayScreensXPCListener
@property (retain) PLXPCListenerOperatorComposition *CarPlayXPCListener; // ivar: _CarPlayXPCListener
@property (retain) PLXPCListenerOperatorComposition *CloudKitXPCListener; // ivar: _CloudKitXPCListener
@property (retain) PLXPCListenerOperatorComposition *CommuteRefreshXPCListener; // ivar: _CommuteRefreshXPCListener
@property (retain) PLXPCListenerOperatorComposition *CoreDuetKnowledgeSyncXPCListener; // ivar: _CoreDuetKnowledgeSyncXPCListener
@property (retain) PLXPCListenerOperatorComposition *DACalendarItemsDownloadedXPCListener; // ivar: _DACalendarItemsDownloadedXPCListener
@property (retain) PLXPCListenerOperatorComposition *DACalendarItemsUploadedXPCListener; // ivar: _DACalendarItemsUploadedXPCListener
@property (retain) PLXPCListenerOperatorComposition *DASyncStartXPCListener; // ivar: _DASyncStartXPCListener
@property (retain) PLXPCListenerOperatorComposition *DRMaxRateListener; // ivar: _DRMaxRateListener
@property (retain) PLXPCListenerOperatorComposition *DeepScanReasonsXPCListener; // ivar: _DeepScanReasonsXPCListener
@property (retain) PLXPCListenerOperatorComposition *DosimetryXPCListener; // ivar: _DosimetryXPCListener
@property (retain) PLXPCListenerOperatorComposition *EnhancedDiscoveryXPCListener; // ivar: _EnhancedDiscoveryXPCListener
@property (retain) PLXPCListenerOperatorComposition *FocusFiltersXPCListener; // ivar: _FocusFiltersXPCListener
@property (retain) PLXPCListenerOperatorComposition *FrameCountXPCListener; // ivar: _FrameCountXPCListener
@property (retain) PLXPCListenerOperatorComposition *InCallServiceXPCListener; // ivar: _InCallServiceXPCListener
@property (retain) PLXPCListenerOperatorComposition *KeyboardSessionXPCListener; // ivar: _KeyboardSessionXPCListener
@property (retain) PLXPCListenerOperatorComposition *LocationVehicularDetectionXPCListener; // ivar: _LocationVehicularDetectionXPCListener
@property (retain) PLXPCListenerOperatorComposition *MXDiscoveryLevelXPCListener; // ivar: _MXDiscoveryLevelXPCListener
@property (retain) PLXPCListenerOperatorComposition *MachineTranslationXPCListener; // ivar: _MachineTranslationXPCListener
@property (retain) PLXPCListenerOperatorComposition *MailFetchXPCListener; // ivar: _MailFetchXPCListener
@property (retain) PLNSNotificationOperatorComposition *MemoryWarningListener; // ivar: _MemoryWarningListener
@property (retain) PLXPCListenerOperatorComposition *MobileBackupEventsXPCListener; // ivar: _MobileBackupEventsXPCListener
@property (retain) PLXPCListenerOperatorComposition *MobileBackupStatisticsXPCListener; // ivar: _MobileBackupStatisticsXPCListener
@property (retain) PLXPCListenerOperatorComposition *MotionWakeReasonXPCListener; // ivar: _MotionWakeReasonXPCListener
@property (retain) PLXPCListenerOperatorComposition *NanoMailSessionXPCListener; // ivar: _NanoMailSessionXPCListener
@property (retain) PLXPCListenerOperatorComposition *NanoSiriXPCListener; // ivar: _NanoSiriXPCListener
@property (retain) PLXPCListenerOperatorComposition *NavdXPCListener; // ivar: _NavdXPCListener
@property (retain) PLXPCListenerOperatorComposition *NetworkRelayBTLinkAssertionXPCListener; // ivar: _NetworkRelayBTLinkAssertionXPCListener
@property (retain) PLXPCListenerOperatorComposition *NetworkRelayTerminusBTWakeXPCListener; // ivar: _NetworkRelayTerminusBTWakeXPCListener
@property (retain) PLXPCListenerOperatorComposition *NetworkRelayWiFiAssertionXPCListener; // ivar: _NetworkRelayWiFiAssertionXPCListener
@property (retain) PLXPCListenerOperatorComposition *NetworkRelayXPCListener; // ivar: _NetworkRelayXPCListener
@property (retain) PLXPCListenerOperatorComposition *ODHNXPCListener; // ivar: _ODHNXPCListener
@property (retain) PLXPCListenerOperatorComposition *ODOffXPCListener; // ivar: _ODOffXPCListener
@property (retain) PLXPCListenerOperatorComposition *ODOnXPCListener; // ivar: _ODOnXPCListener
@property (retain) PLXPCListenerOperatorComposition *OctagonTrustEventXPCListener; // ivar: _OctagonTrustEventXPCListener
@property (retain) PLXPCListenerOperatorComposition *PasskeyAuthenticationXPCListener; // ivar: _PasskeyAuthenticationXPCListener
@property (retain) PLXPCListenerOperatorComposition *PeekXPCListener; // ivar: _PeekXPCListener
@property (retain) PLXPCListenerOperatorComposition *PopXPCListener; // ivar: _PopXPCListener
@property (retain) PLXPCListenerOperatorComposition *PortraitHighlightsResultXPCListener; // ivar: _PortraitHighlightsResultXPCListener
@property (retain) PLXPCListenerOperatorComposition *RapidSecurityResponseXPCListener; // ivar: _RapidSecurityResponseXPCListener
@property (retain) PLXPCListenerOperatorComposition *RapportReceivedMessageXPCListener; // ivar: _RapportReceivedMessageXPCListener
@property NSInteger SOSKVSEntries; // ivar: _SOSKVSEntries
@property (retain) PLXPCListenerOperatorComposition *SOSKVSRateLimitingEventXPCListener; // ivar: _SOSKVSRateLimitingEventXPCListener
@property (retain) PLXPCListenerOperatorComposition *SafariFetcherXPCListener; // ivar: _SafariFetcherXPCListener
@property (retain) PLXPCListenerOperatorComposition *SafariViewServiceXPCListener; // ivar: _SafariViewServiceXPCListener
@property (retain) PLXPCListenerOperatorComposition *SecItemXPCListener; // ivar: _SecItemXPCListener
@property (retain) PLXPCListenerOperatorComposition *SecondaryDisplayXPCListener; // ivar: _SecondaryDisplayXPCListener
@property (retain) PLXPCListenerOperatorComposition *ShortcutsTriggerFiredXPCListener; // ivar: _ShortcutsTriggerFiredXPCListener
@property (retain) PLXPCListenerOperatorComposition *SiriXPCListener; // ivar: _SiriXPCListener
@property (retain) PLXPCListenerOperatorComposition *SleepLockXPCListener; // ivar: _SleepLockXPCListener
@property (retain) PLXPCListenerOperatorComposition *SleepModeXPCListener; // ivar: _SleepModeXPCListener
@property (retain) PLXPCListenerOperatorComposition *SpatialAudioXPCListener; // ivar: _SpatialAudioXPCListener
@property (retain) PLXPCListenerOperatorComposition *SpotlightHighlightsResultXPCListener; // ivar: _SpotlightHighlightsResultXPCListener
@property (retain) PLXPCListenerOperatorComposition *SpotlightIndexesXPCListener; // ivar: _SpotlightIndexesXPCListener
@property (retain) PLXPCListenerOperatorComposition *SpotlightQosXPCListener; // ivar: _SpotlightQosXPCListener
@property (retain) PLXPCListenerOperatorComposition *SpotlightQueriesXPCListener; // ivar: _SpotlightQueriesXPCListener
@property (retain) PLXPCListenerOperatorComposition *SpotlightWatchdogFiredXPCListener; // ivar: _SpotlightWatchdogFiredXPCListener
@property (retain) PLXPCListenerOperatorComposition *SymptomsNetworkAdvisory; // ivar: _SymptomsNetworkAdvisory
@property (retain) PLXPCListenerOperatorComposition *ThermalHiPXPCListener; // ivar: _ThermalHiPXPCListener
@property (retain) PLXPCListenerOperatorComposition *ThermalLevelXPCListener; // ivar: _ThermalLevelXPCListener
@property (retain) PLXPCListenerOperatorComposition *ThermalSensorsXPCListener; // ivar: _ThermalSensorsXPCListener
@property (retain) PLXPCListenerOperatorComposition *UIKitActivityXPCListener; // ivar: _UIKitActivityXPCListener
@property (retain) PLXPCListenerOperatorComposition *UIKitAlertXPCListener; // ivar: _UIKitAlertXPCListener
@property (retain) PLXPCListenerOperatorComposition *UIKitEclipseXPCListener; // ivar: _UIKitEclipseXPCListener
@property (retain) PLXPCListenerOperatorComposition *UIKitKeyboardXPCListener; // ivar: _UIKitKeyboardXPCListener
@property (retain) PLXPCListenerOperatorComposition *UbiquityAccountStatisticsXPCListener; // ivar: _UbiquityAccountStatisticsXPCListener
@property (retain) PLXPCListenerOperatorComposition *WeatherNotificationStateXPCListener; // ivar: _WeatherNotificationStateXPCListener
@property (retain) PLXPCListenerOperatorComposition *WeatherNotificationXPCListener; // ivar: _WeatherNotificationXPCListener
@property (retain) PLXPCListenerOperatorComposition *WebAppXPCListener; // ivar: _WebAppXPCListener
@property (retain) PLXPCListenerOperatorComposition *WirelessSyncStartEventXPCListener; // ivar: _WirelessSyncStartEventXPCListener
@property (retain) PLXPCListenerOperatorComposition *WirelessSyncStopEventXPCListener; // ivar: _WirelessSyncStopEventXPCListener
@property NSInteger accessoryUARPEntryCount; // ivar: _accessoryUARPEntryCount
@property (retain) PLXPCListenerOperatorComposition *accessoryUARPListener; // ivar: _accessoryUARPListener
@property (retain) PLXPCListenerOperatorComposition *activeStylusXPCListener; // ivar: _activeStylusXPCListener
@property (retain) PLXPCResponderOperatorComposition *entryRequestResponder; // ivar: _entryRequestResponder
@property (retain) PLXPCListenerOperatorComposition *keyboardTrackpadXPCListener; // ivar: _keyboardTrackpadXPCListener
@property (retain) PLEntry *lastDosimetryEntry; // ivar: _lastDosimetryEntry
@property int lastLinearBrightness; // ivar: _lastLinearBrightness
@property (retain) NSMutableDictionary *localCache; // ivar: _localCache
@property (retain) PLXPCListenerOperatorComposition *passiveStylusXPCListener; // ivar: _passiveStylusXPCListener
@property NSInteger peekCount; // ivar: _peekCount
@property CGFloat peekDuration; // ivar: _peekDuration
@property (retain) NSDate *peekStartTime; // ivar: _peekStartTime
@property NSInteger peekpopProcessID; // ivar: _peekpopProcessID
@property NSInteger popCount; // ivar: _popCount
@property (retain) PLXPCListenerOperatorComposition *siriFalseAlarm; // ivar: _siriFalseAlarm
@property (retain) PLXPCResponderOperatorComposition *taskModeQueryResponder; // ivar: _taskModeQueryResponder
@property (retain) PLXPCListenerOperatorComposition *telNotificationXPCListener; // ivar: _telNotificationXPCListener
@property (retain) PLXPCListenerOperatorComposition *testMarkerXPCListener; // ivar: _testMarkerXPCListener
@property (retain) PLXPCListenerOperatorComposition *watchPresenceXPCListener; // ivar: _watchPresenceXPCListener


+(BOOL)shouldLogiOSWatchOSOnly;
+(id)defaults;
+(id)entryAggregateDefinitionKeyboardTime;
+(id)entryAggregateDefinitionKeyboardWordsAndCharacters;
+(id)entryAggregateDefinitionTouchEvents;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitionAVConference;
+(id)entryEventBackwardDefinitionActiveStylus;
+(id)entryEventBackwardDefinitionAttentionPolling;
+(id)entryEventBackwardDefinitionAttentionSampling;
+(id)entryEventBackwardDefinitionAttentionService;
+(id)entryEventBackwardDefinitionCKKSSyncing;
+(id)entryEventBackwardDefinitionDRMaxRate;
+(id)entryEventBackwardDefinitionEnergyTelemetry;
+(id)entryEventBackwardDefinitionFrameCount;
+(id)entryEventBackwardDefinitionKeyboardSession;
+(id)entryEventBackwardDefinitionODHN;
+(id)entryEventBackwardDefinitionODOff;
+(id)entryEventBackwardDefinitionODOn;
+(id)entryEventBackwardDefinitionPassiveStylus;
+(id)entryEventBackwardDefinitionPeekPop;
+(id)entryEventBackwardDefinitionSiriFalseAlarm;
+(id)entryEventBackwardDefinitionSpotlightQos;
+(id)entryEventBackwardDefinitionTrackpadResidencies;
+(id)entryEventBackwardDefinitionUbiquityAccountStatistics;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionAccessory;
+(id)entryEventForwardDefinitionAccessoryMotion;
+(id)entryEventForwardDefinitionAirDrop;
+(id)entryEventForwardDefinitionAppAccessory;
+(id)entryEventForwardDefinitionAppleBacklightBrightness;
+(id)entryEventForwardDefinitionAudioRouting;
+(id)entryEventForwardDefinitionCarPlay;
+(id)entryEventForwardDefinitionCarPlayScreens;
+(id)entryEventForwardDefinitionEnhancedDiscovery;
+(id)entryEventForwardDefinitionInCallService;
+(id)entryEventForwardDefinitionMXDiscoveryLevel;
+(id)entryEventForwardDefinitionNetworkRelay;
+(id)entryEventForwardDefinitionNetworkRelayWiFiAssertion;
+(id)entryEventForwardDefinitionPasskeyAuthentication;
+(id)entryEventForwardDefinitionPreferredLink;
+(id)entryEventForwardDefinitionRapidSecurityResponse;
+(id)entryEventForwardDefinitionSOSKVSRateLimitingEvent;
+(id)entryEventForwardDefinitionSafariFetcher;
+(id)entryEventForwardDefinitionSecondaryDisplay;
+(id)entryEventForwardDefinitionSiri;
+(id)entryEventForwardDefinitionSleepMode;
+(id)entryEventForwardDefinitionSpatialAudio;
+(id)entryEventForwardDefinitionTelephonyState;
+(id)entryEventForwardDefinitionThermalHiP;
+(id)entryEventForwardDefinitionThermalLevel;
+(id)entryEventForwardDefinitionThermalSensors;
+(id)entryEventForwardDefinitionUARPStatus;
+(id)entryEventForwardDefinitionUIKitActivity;
+(id)entryEventForwardDefinitionUIKitAlert;
+(id)entryEventForwardDefinitionUIKitEclipse;
+(id)entryEventForwardDefinitionUIKitKeyboard;
+(id)entryEventForwardDefinitionWatchPresence;
+(id)entryEventForwardDefinitionWebApp;
+(id)entryEventForwardDefinitionWirelessSync;
+(id)entryEventForwardDefinitions;
+(id)entryEventForwardDefinitionsDosimetry;
+(id)entryEventIntervalDefinitionAirTrafficAssetDownload;
+(id)entryEventIntervalDefinitionCoreDuetKnowledgeSync;
+(id)entryEventIntervalDefinitionRapportReceivedMessage;
+(id)entryEventIntervalDefinitionSpotlightIndexes;
+(id)entryEventIntervalDefinitionSpotlightQueries;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitioPortraitHighlightsResult;
+(id)entryEventPointDefinitionADD;
+(id)entryEventPointDefinitionAirPlayDiscoveryMode;
+(id)entryEventPointDefinitionAppActivationPerformanceActivationData;
+(id)entryEventPointDefinitionAppActivationPerformanceCPUStatistics;
+(id)entryEventPointDefinitionAppActivationPerformanceMemoryStatistics;
+(id)entryEventPointDefinitionAppActivationPerformancePowerStateStatistics;
+(id)entryEventPointDefinitionAppActivationPerformanceProcessData;
+(id)entryEventPointDefinitionAvailabilityModes;
+(id)entryEventPointDefinitionCKKSSyncingRateLimit;
+(id)entryEventPointDefinitionCacheDelete;
+(id)entryEventPointDefinitionCloudKit;
+(id)entryEventPointDefinitionCommuteRefresh;
+(id)entryEventPointDefinitionDACalendarItemsDownloaded;
+(id)entryEventPointDefinitionDACalendarItemsUploaded;
+(id)entryEventPointDefinitionDASyncStart;
+(id)entryEventPointDefinitionDeepScanReasons;
+(id)entryEventPointDefinitionFocusFilters;
+(id)entryEventPointDefinitionJetsam;
+(id)entryEventPointDefinitionLocationVehicularDetection;
+(id)entryEventPointDefinitionMachineTranslation;
+(id)entryEventPointDefinitionMailFetch;
+(id)entryEventPointDefinitionMobileBackupEvents;
+(id)entryEventPointDefinitionMobileBackupStatistics;
+(id)entryEventPointDefinitionMotionWakeReason;
+(id)entryEventPointDefinitionNanoMailSession;
+(id)entryEventPointDefinitionNavd;
+(id)entryEventPointDefinitionNavdGeoNetworkActivity;
+(id)entryEventPointDefinitionNavdMapsNavigationStateEvent;
+(id)entryEventPointDefinitionNavdMapsWidgetSession;
+(id)entryEventPointDefinitionNetworkEnergyModel;
+(id)entryEventPointDefinitionNetworkRelayBTLinkAssertion;
+(id)entryEventPointDefinitionOctagonTrust;
+(id)entryEventPointDefinitionSecItem;
+(id)entryEventPointDefinitionShortcutsTriggerFired;
+(id)entryEventPointDefinitionSiriActivication;
+(id)entryEventPointDefinitionSleepLock;
+(id)entryEventPointDefinitionSpotlightHighlightsResult;
+(id)entryEventPointDefinitionSpotlightWatchdogFired;
+(id)entryEventPointDefinitionTerminusBTWake;
+(id)entryEventPointDefinitionTestMarkers;
+(id)entryEventPointDefinitionWeatherNotification;
+(id)entryEventPointDefinitionWeatherNotificationState;
+(id)entryEventPointDefinitions;
+(void)load;
-(BOOL)shouldLogAppActivationData;
-(NSInteger)eventNameStringToEnum:(id)arg0 ;
-(NSInteger)mapPixelsToBucket:(NSUInteger)arg0 ;
-(NSInteger)modeTypeStringToEnum:(id)arg0 ;
-(id)entryRequestResponseForPayload:(id)arg0 ;
-(id)init;
-(int)mapAvailabilityModeSemanticType:(NSInteger)arg0 ;
-(void)createAccessoryAccountingEventWithName:(id)arg0 isStartEvent:(BOOL)arg1 ;
-(void)createAirDropAccountingEvent:(id)arg0 ;
-(void)createInCallServiceAccountingEvent:(id)arg0 ;
-(void)handleCKKSSyncingEvent:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)initTaskOperatorDependancies;
-(void)log;
-(void)logEventAggregateTelNotification:(id)arg0 ;
-(void)logEventBackwardAVConference:(id)arg0 ;
-(void)logEventBackwardActiveStylus:(id)arg0 ;
-(void)logEventBackwardAttentionPolling:(id)arg0 ;
-(void)logEventBackwardAttentionSampling:(id)arg0 ;
-(void)logEventBackwardAttentionService:(id)arg0 ;
-(void)logEventBackwardDRMaxRate:(id)arg0 ;
-(void)logEventBackwardEnergyTelemetry:(id)arg0 ;
-(void)logEventBackwardFrameCount:(id)arg0 ;
-(void)logEventBackwardKeyboardSession:(id)arg0 ;
-(void)logEventBackwardKeyboardTrackpad:(id)arg0 ;
-(void)logEventBackwardNamePeek:(id)arg0 ;
-(void)logEventBackwardNamePop:(id)arg0 ;
-(void)logEventBackwardNameSpotlightQos:(id)arg0 ;
-(void)logEventBackwardODHN:(id)arg0 ;
-(void)logEventBackwardODOff:(id)arg0 ;
-(void)logEventBackwardODOn:(id)arg0 ;
-(void)logEventBackwardPassiveStylus:(id)arg0 ;
-(void)logEventBackwardSiriFalseAlarm:(id)arg0 ;
-(void)logEventBackwardUbiquityAccountStatistics:(id)arg0 ;
-(void)logEventForwardAccessory:(id)arg0 ;
-(void)logEventForwardAccessoryMotion:(id)arg0 ;
-(void)logEventForwardAirDrop:(id)arg0 ;
-(void)logEventForwardAppAccessory:(id)arg0 ;
-(void)logEventForwardAppleBackklightBrightness:(id)arg0 ;
-(void)logEventForwardAudioRouting:(id)arg0 ;
-(void)logEventForwardCarPlay:(id)arg0 ;
-(void)logEventForwardCarPlayScreens:(id)arg0 ;
-(void)logEventForwardDosimetry:(id)arg0 ;
-(void)logEventForwardEnhancedDiscovery:(id)arg0 ;
-(void)logEventForwardInCallService:(id)arg0 ;
-(void)logEventForwardMXDiscoveryLevel:(id)arg0 ;
-(void)logEventForwardNetworkRelay:(id)arg0 ;
-(void)logEventForwardNetworkRelayWiFiAssertion:(id)arg0 ;
-(void)logEventForwardPasskeyAuthentication:(id)arg0 ;
-(void)logEventForwardRapidSecurityResponse:(id)arg0 ;
-(void)logEventForwardSOSKVSRateLimitingEvent:(id)arg0 ;
-(void)logEventForwardSafariFetcherStatus:(id)arg0 ;
-(void)logEventForwardSecondaryDisplay:(id)arg0 ;
-(void)logEventForwardSiri:(id)arg0 ;
-(void)logEventForwardSleepMode:(id)arg0 ;
-(void)logEventForwardSpatialAudio:(id)arg0 ;
-(void)logEventForwardThermalHiP:(id)arg0 ;
-(void)logEventForwardThermalLevel:(id)arg0 ;
-(void)logEventForwardThermalSensors:(id)arg0 ;
-(void)logEventForwardUIKitActivity:(id)arg0 ;
-(void)logEventForwardUIKitAlert:(id)arg0 ;
-(void)logEventForwardUIKitEclipse:(id)arg0 ;
-(void)logEventForwardUIKitKeyboard:(id)arg0 ;
-(void)logEventForwardWatchPresence:(id)arg0 ;
-(void)logEventForwardWebApp:(id)arg0 ;
-(void)logEventForwardWirelessSync:(id)arg0 ;
-(void)logEventFowardUARPStatus:(id)arg0 ;
-(void)logEventIntervalAirTrafficAssetDownload:(id)arg0 ;
-(void)logEventIntervalCoreDuetKnowledgeSync:(id)arg0 ;
-(void)logEventIntervalNameSpotlightIndexes:(id)arg0 ;
-(void)logEventIntervalNameSpotlightQueries:(id)arg0 ;
-(void)logEventIntervalRapportReceivedMessage:(id)arg0 ;
-(void)logEventPointADD:(id)arg0 ;
-(void)logEventPointAirPlayDiscoveryMode:(id)arg0 ;
-(void)logEventPointAppActivationPerformanceActivationData:(id)arg0 ;
-(void)logEventPointAppActivationPerformanceCPUStatistics:(id)arg0 ;
-(void)logEventPointAppActivationPerformanceMemoryStatistics:(id)arg0 ;
-(void)logEventPointAppActivationPerformancePowerStateStatistics:(id)arg0 ;
-(void)logEventPointAppActivationPerformanceProcessData:(id)arg0 ;
-(void)logEventPointAvailabilityModes:(id)arg0 ;
-(void)logEventPointBackgroundTransfer:(id)arg0 ;
-(void)logEventPointCacheDelete:(id)arg0 ;
-(void)logEventPointCloudKit:(id)arg0 ;
-(void)logEventPointCommuteRefreshSession:(id)arg0 ;
-(void)logEventPointDACalendarItemsDownloaded:(id)arg0 ;
-(void)logEventPointDACalendarItemsUploaded:(id)arg0 ;
-(void)logEventPointDASyncStart:(id)arg0 ;
-(void)logEventPointDeepScanReasons:(id)arg0 ;
-(void)logEventPointFocusFilters:(id)arg0 ;
-(void)logEventPointJetsam:(NSUInteger)arg0 ;
-(void)logEventPointLocationVehicularDetectionSession:(id)arg0 ;
-(void)logEventPointMachineTranslation:(id)arg0 ;
-(void)logEventPointMailFetch:(id)arg0 ;
-(void)logEventPointMobileBackupEvents:(id)arg0 ;
-(void)logEventPointMobileBackupStatistics:(id)arg0 ;
-(void)logEventPointMotionWakeReasonSession:(id)arg0 ;
-(void)logEventPointNamePortraitHighlightsResult:(id)arg0 ;
-(void)logEventPointNameSpotlightHighlightsResult:(id)arg0 ;
-(void)logEventPointNameSpotlightWatchdogFired:(id)arg0 ;
-(void)logEventPointNanoMailSession:(id)arg0 ;
-(void)logEventPointNavd:(id)arg0 ;
-(void)logEventPointNavdGeoNetworkActivity:(id)arg0 ;
-(void)logEventPointNavdMapsNavigationStateEvent:(id)arg0 ;
-(void)logEventPointNavdMapsWidgetSession:(id)arg0 ;
-(void)logEventPointNetworkRelayBTLinkAssertion:(id)arg0 ;
-(void)logEventPointNetworkRelayTerminusBTWake:(id)arg0 ;
-(void)logEventPointNetworkSymptomsAdviosry:(id)arg0 ;
-(void)logEventPointOctagonTrustEvent:(id)arg0 ;
-(void)logEventPointSecItemSession:(id)arg0 ;
-(void)logEventPointShortcutsTriggerFired:(id)arg0 ;
-(void)logEventPointSiriActivation:(id)arg0 ;
-(void)logEventPointSleepLock:(id)arg0 ;
-(void)logEventPointTestMarker:(id)arg0 ;
-(void)logEventPointWeatherNotification:(id)arg0 ;
-(void)logEventPointWeatherNotificationState:(id)arg0 ;
-(void)logNetworkActivity:(id)arg0 withEntryKey:(id)arg1 ;


@end


#endif