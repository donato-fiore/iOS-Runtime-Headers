// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NOBACKHAULHANDLER_H
#define NOBACKHAULHANDLER_H

@class NSMutableArray, NSArray, NSString, NSMutableDictionary, AnalyticsWorkspace, CARAutomaticDNDStatus;
@protocol ICMPPingProbeDelegate, ManagedEventInfoProtocol, OS_dispatch_source;


#import "ExpertSystemHandlerCore.h"
#import "NoBackhaulHandlerState.h"
#import "NetworkAnalyticsStateRelay.h"
#import "CellFallbackHandler.h"
#import "CellOutrankHandler.h"
#import "PowerStateRelay.h"
#import "ImpoExpoService.h"
#import "AWDAgent.h"

@interface NoBackhaulHandler : ExpertSystemHandlerCore <ICMPPingProbeDelegate, ManagedEventInfoProtocol>

 {
    unsigned int _administrativeState;
    NSMutableArray *_pendingEventDescriptions;
    NoBackhaulHandlerState *_currentState;
    NSArray *_states;
    NetworkAnalyticsStateRelay *_cellRelay;
    NetworkAnalyticsStateRelay *_wifiRelay;
    CellFallbackHandler *_rnfRelay;
    CellOutrankHandler *_outrankRelay;
    PowerStateRelay *_powerRelay;
    NSMutableArray *_tcpProgressProbes;
    NSString *_clearSSID;
    NSString *_obscuredSSID;
    NSMutableDictionary *_history;
    NSMutableDictionary *_multiplier;
    AnalyticsWorkspace *_workspace;
    ImpoExpoService *_ieService;
    NSObject<OS_dispatch_source> *maintenanceTimer;
    AWDAgent *_awdAgent;
    BOOL _observingSystemSettingsRelay;
    id *_foregroundObserver;
    id *_wifiEpochObserver;
    id *_relayReadyObserver;
    NSUInteger networkBlacklistTime;
    NSUInteger defRoutePacketsIn;
    id *_foregroundAppObserver;
    BOOL _verifyDefaultGateway;
    NSMutableDictionary *_activeICMPProbes;
    NSMutableDictionary *_icmpProbeStates;
    NSInteger _pingCount;
    NSInteger _pingSuccessCount;
    CGFloat _interPingInterval;
    NSInteger _pingBurstCount;
    CGFloat _interBurstInterval;
    CGFloat _pingTimeout;
    NSUInteger _pingPayloadSize;
    CARAutomaticDNDStatus *_automaticDNDStatus;
    NSUInteger _cellUsageAtBrokenEntry;
    NSUInteger _totalCellUsageInBroken;
}


@property (nonatomic) unsigned int activationIdentifier; // ivar: _activationIdentifier
@property (nonatomic) BOOL callInForeground; // ivar: _callInForeground
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dndWhileDriving; // ivar: _dndWhileDriving
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL noBackhaulActivated; // ivar: _noBackhaulActivated
@property (nonatomic) NSUInteger stepper; // ivar: _stepper
@property (readonly) Class superclass;
@property (nonatomic) BOOL systemForeground; // ivar: _systemForeground


+(NSInteger)_nwInterfaceTypeFromAPSDQualifier:(NSUInteger)arg0 ;
+(id)configureClass:(id)arg0 ;
+(id)internalStateDictionary;
+(id)sharedInstance;
-(BOOL)_nudgeState;
-(BOOL)activeEntryAction:(id)arg0 ;
-(BOOL)activeExitAction:(id)arg0 ;
-(BOOL)brokenEntryAction:(id)arg0 ;
-(BOOL)brokenExitAction:(id)arg0 ;
-(BOOL)dampeningCheck;
-(BOOL)idleEntryAction:(id)arg0 ;
-(BOOL)idleExitAction:(id)arg0 ;
-(BOOL)noteSymptom:(id)arg0 ;
-(BOOL)positiveEntryAction:(id)arg0 ;
-(BOOL)positiveExitAction:(id)arg0 ;
-(BOOL)processSymptom:(id)arg0 ;
-(BOOL)subscribeCarKitNotifications;
-(id)_currentState;
-(id)_states;
-(id)init;
-(id)initTestInstanceWithCellRelay:(id)arg0 wifiRelay:(id)arg1 rnfRelay:(id)arg2 powerRelay:(id)arg3 outrankRelay:(id)arg4 ;
-(id)internalStateDictionary;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)_administrativeDisable;
-(void)_administrativeEnable;
-(void)_assessProgressFromBaseline:(struct xtcpprogress_indicators *)arg0 toMetrics:(struct xtcpprogress_indicators *)arg1 ;
-(void)_bringStateToIdle;
-(void)_captureProgressFor:(id)arg0 since:(id)arg1 interval:(NSUInteger)arg2 capWindowTo:(NSUInteger)arg3 iteration:(NSUInteger)arg4 renewTest:(id)arg5 ;
-(void)_completeInitialization;
-(void)_dumpState;
-(void)_fetchDampeningHistory;
-(void)_idempotentInitializationFromIdle;
-(void)_idempotentInitializationFromIdleWithCellRelay:(id)arg0 wifiRelay:(id)arg1 rnfRelay:(id)arg2 powerRelay:(id)arg3 outrankRelay:(id)arg4 ;
-(void)_performConnectivityTestToDefaultGateways:(id)arg0 ;
-(void)_postUpwards:(NSUInteger)arg0 ;
-(void)_setClearSSID:(id)arg0 ;
-(void)_setObscuredSSID:(id)arg0 ;
-(void)_startMaintenanceTimerFor:(id)arg0 delay:(NSUInteger)arg1 interval:(NSUInteger)arg2 capWindowTo:(NSUInteger)arg3 ;
-(void)_stopMaintenanceTimer;
-(void)_updateSSID:(id)arg0 ;
-(void)addPendingEventDescription:(id)arg0 ;
-(void)apsdFailing:(BOOL)arg0 onInterface:(NSInteger)arg1 ;
-(void)changedSSIDto:(id)arg0 ;
-(void)clientFeedback:(BOOL)arg0 ;
-(void)dampeningReset;
-(void)dampeningSetPrecedent;
-(void)dealloc;
-(void)drainPendingEventDescriptions;
-(void)generateInfoForId:(NSUInteger)arg0 context:(char *)arg1 uuid:(id)arg2 completionBlock:(id)arg3 ;
-(void)icmpPingProbe:(id)arg0 completedIterations:(NSUInteger)arg1 successfulCount:(NSUInteger)arg2 withError:(id)arg3 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)reportAutoBugCaptureCaseWithDomain:(id)arg0 type:(id)arg1 subtype:(id)arg2 subtypeContext:(id)arg3 events:(id)arg4 ;
-(void)resumedDefRouteProgress;


@end


#endif