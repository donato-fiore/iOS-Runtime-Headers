// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYMPTOMEXPERTSYSTEMHANDLER_H
#define SYMPTOMEXPERTSYSTEMHANDLER_H

@class NSMutableDictionary, NSArray, NSDate, NSString, AnalyticsConfigurationObserver, NSNumber, NSMutableArray, NSMutableSet, NSXPCConnection, SDRDiagnosticReporter, NSDataDetector;
@protocol ProbeManagerDelegate, CLIPSShimDelegate, SymptomsFileCleanerDelegate, SymptomsAWDObserverDelegate, AnalyticsConfigurationObserverDelegate, CoreTelephonyShimDelegate, OS_dispatch_source;


#import "ExpertSystemHandlerCore.h"
#import "SymptomExpertSystemState.h"
#import "SystemSettingsRelay.h"
#import "PowerStateRelay.h"
#import "NetworkAnalyticsStateRelay.h"
#import "CellFallbackHandler.h"
#import "SystemProperties.h"
#import "CoreTelephonyShim.h"
#import "MotionStateRelay.h"
#import "CLIPSShim.h"
#import "SymptomsFileCleaner.h"
#import "ProbeManager.h"

@interface SymptomExpertSystemHandler : ExpertSystemHandlerCore <ProbeManagerDelegate, CLIPSShimDelegate, SymptomsFileCleanerDelegate, SymptomsAWDObserverDelegate, AnalyticsConfigurationObserverDelegate, CoreTelephonyShimDelegate>

 {
    NSMutableDictionary *_interfaceNameToType;
    SymptomExpertSystemState *currentState;
    NSArray *states;
    id *relayReadyObserver;
    SystemSettingsRelay *settingsRelay;
    PowerStateRelay *powerRelay;
    NetworkAnalyticsStateRelay *cellRelay;
    NetworkAnalyticsStateRelay *wifiRelay;
    CellFallbackHandler *rnfRelay;
    SystemProperties *systemPropsRelay;
    unsigned int administrativeState;
    unsigned int relayObservingState;
    NSMutableDictionary *relayToFacts;
    NSDate *lastWiFiAssociationTime;
    CoreTelephonyShim *ctShim;
    MotionStateRelay *motionRelay;
    ? coreTelephonyRelayContext;
    ? wifiRelayContext;
    ? wifiScalarRelayContext;
    ? cellRelayContext;
    ? cellScalarRelayContext;
    ? systemRelayContext;
    ? systemScalarRelayContext;
    ? systemSymptomRelayContext;
    ? hardwareRelayContext;
    NSString *_airdropID;
    NSUInteger _asyncKVOCount;
    BOOL _pendingEngineRun;
    CLIPSShim *ruleEngine;
    BOOL _loadedCLIPSRulesAndFacts;
    BOOL _failedToLoadDefaultRules;
    BOOL _didScheduleCleanupTask;
    NSString *_pendingOTACLIPSUpdate;
    NSString *_pendingOTACLIPSUpdateVersion;
    NSString *_pendingOTACLIPSUpdateModule;
    NSMutableDictionary *_pendingOTACLIPSUpdates;
    NSUInteger idsNoteMessageCount;
    NSDate *idsNoteMessageLastCLIPSIngestible;
    BOOL _observingAutoBugCaptureEnabled;
    BOOL _observingAutoFeedbackAssistantEnabled;
    BOOL _observingInstalledVisibleProfiles;
}


@property (retain, nonatomic) SymptomsFileCleaner *abcCleaner; // ivar: _abcCleaner
@property (retain, nonatomic) NSString *activeDataSIMOperatorName; // ivar: _activeDataSIMOperatorName
@property (nonatomic) NSUInteger activeDataSIMSignalBars; // ivar: _activeDataSIMSignalBars
@property (retain, nonatomic) AnalyticsConfigurationObserver *analyticsConfigObserver; // ivar: _analyticsConfigObserver
@property (retain, nonatomic) NSNumber *apSleep; // ivar: _apSleep
@property (retain, nonatomic) NSMutableDictionary *awdCLIPSMapping; // ivar: _awdCLIPSMapping
@property (retain, nonatomic) NSMutableArray *awdCLIPSModules; // ivar: _awdCLIPSModules
@property (nonatomic) BOOL carrierSeedBuild; // ivar: _carrierSeedBuild
@property (retain, nonatomic) NSMutableArray *caseSignatures; // ivar: _caseSignatures
@property (retain, nonatomic) NSObject<OS_dispatch_source> *clipsAWDObserverTimer; // ivar: _clipsAWDObserverTimer
@property (retain, nonatomic) NSMutableDictionary *clipsFactsWaitTimers; // ivar: _clipsFactsWaitTimers
@property (retain, nonatomic) NSObject<OS_dispatch_source> *clipsReleaseMemoryTimer; // ivar: _clipsReleaseMemoryTimer
@property (retain, nonatomic) NSObject<OS_dispatch_source> *clipsResetTimer; // ivar: _clipsResetTimer
@property (retain, nonatomic) NSDate *completedInitializationDate; // ivar: _completedInitializationDate
@property (nonatomic) BOOL customerSeedBuild; // ivar: _customerSeedBuild
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *diagSessionExpectedEnd; // ivar: _diagSessionExpectedEnd
@property (nonatomic) NSInteger diagnosingStrobeInterval; // ivar: _diagnosingStrobeInterval
@property (retain, nonatomic) NSString *diagnosticSessionIdentifier; // ivar: _diagnosticSessionIdentifier
@property (retain, nonatomic) NSMutableDictionary *diagnosticSessionOutput; // ivar: _diagnosticSessionOutput
@property (retain, nonatomic) NSMutableSet *filteredCTDumps; // ivar: _filteredCTDumps
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *incomingSymptoms; // ivar: _incomingSymptoms
@property (nonatomic) BOOL internalBuild; // ivar: _internalBuild
@property (nonatomic) BOOL internalOrCarrierSeedBuild; // ivar: _internalOrCarrierSeedBuild
@property (retain, nonatomic) NSString *lastActiveDataSIMOperatorName; // ivar: _lastActiveDataSIMOperatorName
@property (nonatomic) NSUInteger lastActiveDataSIMSignalBars; // ivar: _lastActiveDataSIMSignalBars
@property (retain, nonatomic) NSDate *lastSymptomRun; // ivar: _lastSymptomRun
@property (retain, nonatomic) NSMutableDictionary *libtraceOSLogWhiteList; // ivar: _libtraceOSLogWhiteList
@property (retain, nonatomic) NSObject<OS_dispatch_source> *loadDefaultRulesTimer; // ivar: _loadDefaultRulesTimer
@property (retain, nonatomic) NSObject<OS_dispatch_source> *loggingProfileTimeoutTimer; // ivar: _loggingProfileTimeoutTimer
@property (nonatomic) NSInteger maximumDiagnosingTime; // ivar: _maximumDiagnosingTime
@property (retain, nonatomic) NSMutableDictionary *obfuscations; // ivar: _obfuscations
@property (nonatomic) BOOL observingAWDMetrics; // ivar: _observingAWDMetrics
@property (retain, nonatomic) NSXPCConnection *privateConnection; // ivar: _privateConnection
@property (retain, nonatomic) ProbeManager *probeManager; // ivar: _probeManager
@property (retain, nonatomic) NSMutableArray *processedSymptoms; // ivar: _processedSymptoms
@property (retain, nonatomic) SDRDiagnosticReporter *sdrReporter; // ivar: _sdrReporter
@property NSUInteger stepper; // ivar: _stepper
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDataDetector *urlDetector; // ivar: _urlDetector
@property (nonatomic) BOOL vendorBuild; // ivar: _vendorBuild


+(BOOL)noteSymptom:(id)arg0 ;
+(BOOL)parseEndpoint:(id)arg0 intoURL:(*id)arg1 host:(*id)arg2 scheme:(*id)arg3 path:(*id)arg4 ;
+(id)configureClass:(id)arg0 ;
+(id)internalStateDictionary;
+(id)libtraceInfo:(id)arg0 ;
+(id)sharedInstance;
-(*void)assertFactString:(id)arg0 moduleName:(id)arg1 run:(BOOL)arg2 ;
-(BOOL)didInstallProfileForKey:(id)arg0 ;
-(BOOL)isAWDEventEligibleForCLIPSIngestion:(id)arg0 ;
-(BOOL)loadDefaultRules;
-(BOOL)loadModule:(id)arg0 requiresBasebandModule:(BOOL)arg1 ;
-(BOOL)noteSymptom:(id)arg0 ;
-(BOOL)postAWDEvent:(id)arg0 ;
-(BOOL)urlIsAppleDomain:(id)arg0 ;
-(id)arbitratorDictionaryForSymptom:(id)arg0 procName:(id)arg1 interfaceType:(id)arg2 eventCount:(id)arg3 duration:(id)arg4 ;
-(id)awdCLIPSModuleDictForModule:(id)arg0 ;
-(id)awdObserveModule:(id)arg0 requiredModules:(id)arg1 unloadModule:(id)arg2 ;
-(id)deParamsDictForDiagnosticExtension:(id)arg0 withDEParams:(id)arg1 ;
-(id)getBatteryPercentage:(id)arg0 ;
-(id)getOperatorName;
-(id)getSignalBars;
-(id)init;
-(id)interfaceTypeForName:(id)arg0 ;
-(id)internalStateDictionary;
-(id)obfuscatedEndpoint:(id)arg0 ;
-(id)obfuscatedPrimaryComponent:(id)arg0 obfuscationType:(id)arg1 ;
-(id)obfuscatedSubcomponent:(id)arg0 fromPrimaryEntry:(id)arg1 withKey:(id)arg2 obfuscation:(id)arg3 ;
-(id)pendingOTACLIPSUpdates;
-(id)primaryComponent:(id)arg0 obfuscationType:(id)arg1 ;
-(id)serviceToFactString:(id)arg0 type:(NSInteger)arg1 ;
-(id)symptomDictionaryForSymptom:(id)arg0 domain:(id)arg1 type:(id)arg2 ;
-(id)symptomsAWDObserver;
-(struct _NSRange )rangeOfValueForSlotName:(id)arg0 in:(id)arg1 ;
-(void)_addAllObservers;
-(void)_addExternalRelayObservers;
-(void)_administrativeDisable;
-(void)_administrativeEnable;
-(void)_airplaySymptom:(id)arg0 ;
-(void)_bringStateToDiagnosing;
-(void)_bringStateToIdle;
-(void)_bringStateToRunning;
-(void)_completeInitialization;
-(void)_configdSymptom:(id)arg0 ;
-(void)_dumpState;
-(void)_libnetcoreSymptom:(id)arg0 ;
-(void)_libtraceOSLog:(id)arg0 ;
-(void)_performSeedCleanup;
-(void)_processAnomalousFlowSymptom:(id)arg0 symptomName:(id)arg1 categoryType:(id)arg2 ;
-(void)_processLibnetcoreSymptom:(id)arg0 symptomName:(id)arg1 ;
-(void)_processSymptomsdEnergyBackgroundFullActivityMap:(id)arg0 symptomName:(id)arg1 ;
-(void)_processSymptomsdEnergyBackgroundRRCExcActivity:(id)arg0 symptomName:(id)arg1 ;
-(void)_processSymptomsdExcessiveFailedConnections:(id)arg0 symptomName:(id)arg1 ;
-(void)_processSymptomsdFlowCountExceededThreshold:(id)arg0 symptomName:(id)arg1 ;
-(void)_processSymptomsdMbufPeak:(id)arg0 symptomName:(id)arg1 ;
-(void)_processSymptomsdNoDefaultRoute:(id)arg0 symptomName:(id)arg1 ;
-(void)_processSymptomsdRnfSymptom:(id)arg0 symptomName:(id)arg1 categoryType:(id)arg2 ;
-(void)_processSymptomsdWiFiShimSymptom:(id)arg0 symptomName:(id)arg1 ;
-(void)_processUIPerformanceThunderingHerdCase:(id)arg0 symptomName:(id)arg1 ;
-(void)_removeAllObservers;
-(void)_removeDebuggabilityFolder;
-(void)_removeExternalRelayObservers;
-(void)_symptomsdSymptom:(id)arg0 ;
-(void)_usageUpdaterSymptom:(id)arg0 ;
-(void)addDiagnosticSession:(id)arg0 hasDictionary:(id)arg1 endSession:(id)arg2 ;
-(void)adjustStrobeTimerInterval:(id)arg0 maximum:(id)arg1 ;
-(void)assertFactAndRun:(id)arg0 module:(id)arg1 reply:(id)arg2 ;
-(void)assertFactAsSymptom:(id)arg0 module:(id)arg1 ;
-(void)assertRelayFact:(id)arg0 forRelayKey:(id)arg1 moduleName:(id)arg2 ;
-(void)cancelAllWaitingForFactTimers;
-(void)cancelDiagnosticSession:(id)arg0 ;
-(void)cancelWaitForFactWithTemplateName:(id)arg0 ;
-(void)checkObfuscationsInAllCaseSignatures;
-(void)clipsConsoleOutput:(id)arg0 consoleChannel:(char *)arg1 forEngine:(id)arg2 ;
-(void)coreTelephonyDumpCompletedTo:(id)arg0 folderPrefix:(id)arg1 ;
-(void)coreTelephonyDumpStartedTo:(id)arg0 folderPrefix:(id)arg1 gotFilteredOut:(BOOL)arg2 ;
-(void)deactivateModule:(id)arg0 ;
-(void)dealloc;
-(void)endDiagnosticSession:(id)arg0 ;
-(void)fetchCoreTelephonyLoggingEnabledStatus;
-(void)fileCleanupComplete;
-(void)handleEvent:(id)arg0 ;
-(void)ingestPendingOTAUpdates;
-(void)logSessionEventMessage:(id)arg0 ;
-(void)logSessionEventProbe:(id)arg0 endpoint:(id)arg1 interface:(id)arg2 status:(id)arg3 ;
-(void)logSessionEventSymptom:(id)arg0 process:(id)arg1 endpoint:(id)arg2 interface:(id)arg3 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)observer:(id)arg0 didChangeConfiguration:(id)arg1 type:(id)arg2 ;
-(void)onDisruptiveFlowChange:(id)arg0 ;
-(void)operatorNameChangedForSubscription:(id)arg0 ;
-(void)probeFactString:(id)arg0 module:(id)arg1 goIntoDiagnosing:(BOOL)arg2 run:(BOOL)arg3 ;
-(void)probeOutputFilePaths:(id)arg0 forDiagSessionUUID:(id)arg1 ;
-(void)probeStatusUpdate:(id)arg0 ;
-(void)processIncomingOTAUpdate:(id)arg0 ;
-(void)processRelayStateChange:(id)arg0 key:(id)arg1 relay:(id)arg2 scalar:(BOOL)arg3 ;
-(void)processWiFiAssociationChange:(BOOL)arg0 atTime:(id)arg1 ;
-(void)registerAllCLIPSCallbacks;
-(void)releaseAllRelayFacts;
-(void)requestCoreTelephonyDumpViaDiagnosticExtension:(id)arg0 folderPrefix:(id)arg1 dumpReason:(id)arg2 resetBaseband:(id)arg3 ;
-(void)resetPreviousObfuscations;
-(void)retractFact:(*void)arg0 moduleName:(id)arg1 run:(BOOL)arg2 ;
-(void)retractFacts:(id)arg0 runAfterLastFact:(BOOL)arg1 ;
-(void)retractService:(id)arg0 type:(NSInteger)arg1 ;
-(void)runEngine;
-(void)sendCaseSignaturesToSDRWithSessionID:(id)arg0 ;
-(void)serviceAdded:(id)arg0 type:(NSInteger)arg1 ;
-(void)serviceRemoved:(id)arg0 type:(NSInteger)arg1 ;
-(void)serviceUpdated:(id)arg0 type:(NSInteger)arg1 ;
-(void)setDefaultFacts;
-(void)setValue:(id)arg0 forKey:(id)arg1 toEBFProfiles:(id)arg2 ;
-(void)signalStrengthChangedForSubscription:(id)arg0 ;
-(void)snapshotDiagnosticSessionWithDomain:(id)arg0 type:(id)arg1 subType:(id)arg2 subTypeContext:(id)arg3 processID:(id)arg4 processName:(id)arg5 bundleID:(id)arg6 interfaceType:(id)arg7 threshold:(id)arg8 sessionDuration:(id)arg9 ;
-(void)startAWDObserverTimer;
-(void)startAWDObserving:(id)arg0 ;
-(void)startDiagnosticSessionWithDomain:(id)arg0 type:(id)arg1 subType:(id)arg2 subTypeContext:(id)arg3 processID:(id)arg4 processName:(id)arg5 bundleID:(id)arg6 interfaceType:(id)arg7 threshold:(id)arg8 sessionDuration:(id)arg9 ;
-(void)startDiagnosticSessionWithDomain:(id)arg0 type:(id)arg1 subType:(id)arg2 subTypeContext:(id)arg3 processID:(id)arg4 processName:(id)arg5 bundleID:(id)arg6 interfaceType:(id)arg7 threshold:(id)arg8 sessionDuration:(id)arg9 triggerRemoteCase:(id)arg10 ;
-(void)startLoadDefaultRulesTimer:(CGFloat)arg0 ;
-(void)stopAWDObserving:(id)arg0 ;
-(void)unloadAWDObservedModules;
-(void)unloadModule:(id)arg0 ;
-(void)waitForFactWithTemplateName:(id)arg0 module:(id)arg1 timeout:(id)arg2 ;


@end


#endif