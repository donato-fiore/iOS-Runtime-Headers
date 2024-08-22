// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CELLOUTRANKHANDLER_H
#define CELLOUTRANKHANDLER_H

@class NSString, NSDictionary, NSMutableSet, NSMutableDictionary, AnalyticsWorkspace;
@protocol StateWatcherDelegate, WiFiShimDelegate, ConfigurableObjectProtocol, ManagedEventInfoProtocol, DataStallHandlerDelegate;


#import "ExpertSystemHandlerCore.h"
#import "StateWatcher.h"
#import "MiscStateRelay.h"
#import "LocationStateRelay.h"
#import "NetworkAnalyticsStateRelay.h"
#import "DataStallHandler.h"
#import "CoreMediaDownloadMonitor.h"
#import "TrafficMonitor.h"
#import "WiFiShim.h"
#import "WiFiThroughputAdviser.h"
#import "CellOutrankController.h"
#import "COSMEventSummary.h"
#import "CellOutrankHandlerSTM.h"
#import "CellOutrankMetrics.h"
#import "ImpoExpoService.h"

@interface CellOutrankHandler : ExpertSystemHandlerCore <StateWatcherDelegate, WiFiShimDelegate, ConfigurableObjectProtocol, ManagedEventInfoProtocol, DataStallHandlerDelegate>

 {
    unsigned int _administrativeState;
    BOOL _observingSystemSettingsRelay;
    id *_captivityIndeterminateObserver;
    id *_relayReadyObserver;
    id *_wifiEpochObserver;
    BOOL _observingCoreRoutine;
    id *_polledFlowObserver;
    StateWatcher *_stateWatcher;
    MiscStateRelay *_miscStateRelay;
    LocationStateRelay *_locationRelay;
    NetworkAnalyticsStateRelay *_cellRelay;
    NetworkAnalyticsStateRelay *_wifiRelay;
    DataStallHandler *_dataStallHandler;
    CoreMediaDownloadMonitor *_mediaDownloadMonitor;
    TrafficMonitor *_userFlowMonitor;
    WiFiShim *_wifiShim;
    WiFiThroughputAdviser *_wifiThroughputAdviser;
    CellOutrankController *_cellOutrankController;
    int _wrmNotifyToken;
    int _outrankNotifyToken;
    BOOL _cellOutranksWiFi;
    BOOL _nonIdle;
    BOOL _pollingRequested;
    NSInteger _flowRefreshCancelToken;
    NSString *_clearSSID;
    CGFloat _cellWRMDeclareProlongedBadAt;
    CGFloat _wifiDNSDeclareProlongedOutAt;
    BOOL _wifiDNSOut;
    CGFloat _wifiPolledFlowProlongedBadAt;
    BOOL _wifiPolledFlowAssessedBad;
    COSMEventSummary *_eventSummary;
    CellOutrankHandlerSTM *_cellOutrankHandlerSTM;
    unsigned int _currentCOSMState;
    uint8_t _pendingStateChanges;
    unsigned short _randxsubi;
    NSUInteger _cellOutrankLastReport;
    NSUInteger _cellOutrankLastEntryReport;
    NSUInteger _cellOutrankLastExitReport;
    BOOL _lastReportWasOutrank;
    CGFloat _minDampeningInterval;
    CGFloat _maxDampeningInterval;
    CGFloat _cellWRMProlongedBadInterval;
    CGFloat _wifiDNSProlongedOutInterval;
    CGFloat _wifiPolledFlowProlongedBadInterval;
    CGFloat _wifiPollingInterval;
    unsigned int _dataStallThreshold;
    CGFloat _dataStallConsiderationTime;
    BOOL _dataStallForegroundOnly;
    CGFloat _userFlowMonitorMinSamplePeriod;
    CGFloat _userFlowMonitorSamplePeriodThroughputThreshold;
    CellOutrankMetrics *_outrankMetrics;
    NSUInteger _latestReasonFlags;
    NSDictionary *_stateOverridePars;
    NSUInteger _initialWRMStatus;
    CGFloat _initialWRMStatusTimestamp;
    NSUInteger _latestWRMStatus;
    CGFloat _latestWRMStatusTimestamp;
    NSUInteger _previousWRMStatus;
    CGFloat _previousWRMStatusTimestamp;
    NSUInteger _overrideWRMStatus;
    CGFloat _overrideWRMStatusTimestamp;
    NSMutableSet *_reportedABCCases;
    NSMutableSet *_acceptedABCCases;
    NSString *_overrideParsingErrorString;
    NSMutableDictionary *_history;
    AnalyticsWorkspace *_workspace;
    ImpoExpoService *_ieService;
    BOOL _cellPrivateNetworkFeatureFlagEnabled;
}


@property (nonatomic) unsigned int activationIdentifier; // ivar: _activationIdentifier
@property (nonatomic) BOOL cellOutrankIconControl; // ivar: _cellOutrankIconControl
@property (readonly, nonatomic) NSUInteger cellOutrankReportableTransitionFlags;
@property (readonly, nonatomic) int cellOutrankReportableTransitionPrimaryReason;
@property (readonly, nonatomic) BOOL cellOutrankReported;
@property (nonatomic) BOOL cellOutranksWiFi;
@property (nonatomic) unsigned int currentCellOutrankState; // ivar: _currentCellOutrankState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL motionRelaySubscribed; // ivar: _motionRelaySubscribed
@property (nonatomic) BOOL nonIdle;
@property (readonly, nonatomic) BOOL pollingRequested;
@property (readonly) Class superclass;
@property (nonatomic) BOOL systemForeground; // ivar: _systemForeground


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)configureClass:(id)arg0 ;
+(id)internalStateDictionary;
+(id)sharedInstance;
+(void)initialize;
+(void)noteOutrankEvent:(NSUInteger)arg0 ;
-(BOOL)historyAllowsOutrankForSSID:(id)arg0 ;
-(id)_WRMStatusString:(id)arg0 status:(NSUInteger)arg1 timestamp:(CGFloat)arg2 ;
-(id)_getState:(BOOL)arg0 ;
-(id)init;
-(id)internalStateDictionary;
-(int)configureFromPrefs:(id)arg0 ;
-(int)configureInstance:(id)arg0 ;
-(void)_administrativeDisable;
-(void)_administrativeEnable;
-(void)_completeInitialization;
-(void)_dumpState;
-(void)_generateInfoForId:(NSUInteger)arg0 context:(char *)arg1 uuid:(id)arg2 completionBlock:(id)arg3 ;
-(void)_initializeUserFlowMonitor;
-(void)_refreshWifiShimItems;
-(void)_updateWiFi:(id)arg0 ;
-(void)armedStateEntryAction;
-(void)armedStateExitAction;
-(void)checkEnablement;
-(void)checkUniqueStallCountOnInterfaceType:(NSInteger)arg0 stallType:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)entryActionForState:(unsigned int)arg0 ;
-(void)generateInfoForId:(NSUInteger)arg0 context:(char *)arg1 uuid:(id)arg2 completionBlock:(id)arg3 ;
-(void)handleWRMState:(NSUInteger)arg0 ;
-(void)idleStateEntryAction;
-(void)ingestCurrentState;
-(void)initializeHistory;
-(void)newSTMState:(unsigned int)arg0 fromDeviceState:(id)arg1 ;
-(void)noteOutrankEvent:(NSUInteger)arg0 ;
-(void)noteStateChange:(id)arg0 new:(id)arg1 old:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)outrankStateEntryAction;
-(void)outrankStateExitAction;
-(void)queryHomeLOIRefresh:(BOOL)arg0 ;
-(void)reportOutrankABCCase:(id)arg0 singleShot:(BOOL)arg1 ;
-(void)resetHistoryForSSID:(id)arg0 ;
-(void)restoreDefaults;
-(void)setCellOutrankReport:(NSUInteger)arg0 ;
-(void)setConfiguration:(id)arg0 ;
-(void)setHistoryForSSID:(id)arg0 ;
-(void)startObservingLOIChanges;
-(void)stopObservingLOIChanges;
-(void)updateForAssociation:(id)arg0 ;
-(void)wifiShim_CurrentAssociationChanged:(BOOL)arg0 associationInfo:(id)arg1 ;
-(void)wifiShim_InfraAdminDisable:(id)arg0 bssid:(id)arg1 ;


@end


#endif