// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CELLFALLBACKHANDLER_H
#define CELLFALLBACKHANDLER_H

@class NSArray, NSDate, NWUsageTargetSelector, CTCarrierSpaceClient, NSMutableDictionary, NSString, NSDictionary;
@protocol CTCarrierSpaceClientDelegate, ConfigurableObjectProtocol, SymptomAdditionalProtocol, ManagedEventInfoProtocol, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "State.h"
#import "NetworkAnalyticsStateRelay.h"
#import "MotionStateRelay.h"
#import "SystemSettingsRelay.h"
#import "AWDAgent.h"
#import "AWDUsageDeltaTracker.h"
#import "CanUseAppsCache.h"

@interface CellFallbackHandler : NSObject <CTCarrierSpaceClientDelegate, ConfigurableObjectProtocol, SymptomAdditionalProtocol, ManagedEventInfoProtocol>

 {
    State *currentState;
    NSArray *states;
    NetworkAnalyticsStateRelay *cellRelay;
    NetworkAnalyticsStateRelay *wifiRelay;
    id *relayReadyObserver;
    id *iccidObserver;
    id *polledFlowObserver;
    id *appsActivityObserver;
    int notifyToken;
    NSObject<OS_dispatch_source> *motionTimer;
    unsigned int motionDetectorState;
    MotionStateRelay *motionRelay;
    SystemSettingsRelay *settingsRelay;
    unsigned int administrativeState;
    AWDAgent *awdAgent;
    NSUInteger appBlacklistsSettleTime;
    NSUInteger appBlacklistsFreePassCellMax;
    NSUInteger appBlacklistsFreePassFlowMax;
    CGFloat appBlacklistsRNFToCellRatio;
    BOOL nonDefaultAppBlacklistsRNFToCellRatio;
    BOOL highCapacityCellPlan;
    BOOL nonDefaultHighCapacityCellPlan;
    *void cellFallbackObserver;
    BOOL cellFallbackInUse;
    NSObject<OS_dispatch_source> *mptcpObserver;
    BOOL mptcpInUse;
    BOOL needExtendedSignatures;
    BOOL useAllTCPStats;
    NSObject<OS_dispatch_source> *cellFallbackTimer;
    NSObject<OS_dispatch_source> *elevatedStateTimer;
    NSObject<OS_dispatch_source> *wrongUsageGracePeriodTimer;
    NSDate *lastCellFallbackTime;
    NSUInteger lastCellFallbackUsageMarker;
    NWUsageTargetSelector *targetFlowsRNF;
    NWUsageTargetSelector *targetFlowsCell;
    CTCarrierSpaceClient *cellPlanObserver;
    NSUInteger appPolicyCheckedCount;
    NSUInteger appPolicyDeniedCount;
    NSObject<OS_dispatch_source> *timerTriggerDisconnect;
    AWDUsageDeltaTracker *usageTriggerDisconnect;
    CanUseAppsCache *appsCache;
    NSMutableDictionary *overdraftLedger;
    NSMutableDictionary *blockedRenewalLedger;
    NSMutableDictionary *dynamicBlacklist;
    NSObject<OS_dispatch_source> *boostedTimer;
    unsigned int boostedState;
    NSString *_currentDataSimICCID;
    BOOL hasMDMProfile;
    NSUInteger currentPolicy;
    NSDictionary *mdmProfile;
    NSObject<OS_dispatch_source> *rnfTestIdleTimer;
    id *rnfTestAbortReply;
}


@property (readonly, nonatomic) unsigned int activationIdentifier; // ivar: _activationIdentifier
@property (readonly) BOOL adminDisabled;
@property BOOL boosted; // ivar: _boosted
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSInteger fallbackAdvice; // ivar: _fallbackAdvice
@property (readonly) NSUInteger hash;
@property BOOL internalBuild; // ivar: _internalBuild
@property BOOL rnfActivated; // ivar: _rnfActivated
@property BOOL runningRNFTest; // ivar: _runningRNFTest
@property (readonly) Class superclass;
@property BOOL wifiCallUnderway; // ivar: _wifiCallUnderway


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(float)appPolicyDenialsScore;
+(id)configureClass:(id)arg0 ;
+(id)internalStateDictionary;
+(id)mdmProfilePath;
+(id)sharedInstance;
+(int)awdWifiAssistPolicyForRNFPolicy:(NSUInteger)arg0 ;
+(void)canUseApps:(id)arg0 replyQueue:(id)arg1 reply:(id)arg2 ;
+(void)requestBoost:(unsigned int)arg0 ;
+(void)startRunningRNFTest;
+(void)stopRunningRNFTestWithReply:(id)arg0 ;
-(BOOL)_idempotentInitializationFromIdle;
-(BOOL)_idempotentInitializationFromIdleWithCellRelay:(id)arg0 wifiRelay:(id)arg1 motionRelay:(id)arg2 ;
-(BOOL)_isAppName:(id)arg0 withState:(NSInteger)arg1 inListType:(NSInteger)arg2 ;
-(BOOL)highCapacityCellPlan;
-(BOOL)noteSymptom:(id)arg0 ;
-(CGFloat)appBlacklistsRNFToCellRatio;
-(NSUInteger)appBlacklistsSettleTime;
-(NSUInteger)lookUpDataUsagePolicyForICCID:(id)arg0 fromPolicies:(id)arg1 ;
-(float)_appPolicyDenialsScore;
-(id)_createAndInitializeAWDMetricForAppQuery:(id)arg0 verdictCode:(int)arg1 reasonCode:(int)arg2 ;
-(id)_currentState;
-(id)_states;
-(id)init;
-(id)initTestInstanceWithCellRelay:(id)arg0 wifiRelay:(id)arg1 motionRelay:(id)arg2 ;
-(id)internalStateDictionary;
-(int)_motionToAwdCode;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)RNFTestAbortWaitForIdleUntil:(CGFloat)arg0 reply:(id)arg1 ;
-(void)_administrativeDisable;
-(void)_administrativeEnable;
-(void)_bringStateToIdle;
-(void)_canUseApps:(id)arg0 replyQueue:(id)arg1 reply:(id)arg2 ;
-(void)_completeInitialization;
-(void)_dumpState;
-(void)_peekIntoCellPlan;
-(void)_setDataUsagePolicy:(NSUInteger)arg0 ;
-(void)_setDefaultDataUsageParameters;
-(void)_setPolicyVerdictLedgerGivenAsk:(id)arg0 exceptions:(id)arg1 verdict:(id)arg2 explain:(id)arg3 ;
-(void)_setUnlimitedDataUsageParameters;
-(void)_setUnlimitedDataUsagePolicy:(BOOL)arg0 ;
-(void)_toggleElevatedState;
-(void)_trackCellUsageAfterTriggerDisconnectWithNewSeries:(BOOL)arg0 ;
-(void)_updateCellFallbackState;
-(void)_updateMptcpState;
-(void)applyDataUsagePolicyForICCID:(id)arg0 givenPolicies:(id)arg1 ;
-(void)commonInit;
-(void)dataPlanMetricsDidChange;
-(void)dealloc;
-(void)generateInfoForId:(NSUInteger)arg0 context:(char *)arg1 uuid:(id)arg2 completionBlock:(id)arg3 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)postAdminChangeUpwards:(BOOL)arg0 ;
-(void)postHasAdviceNotification:(BOOL)arg0 ;
-(void)postMotionDetector:(unsigned int)arg0 ;
-(void)postSpeculativeTelemetryForKey:(id)arg0 oldValue:(id)arg1 newValue:(id)arg2 ;
-(void)postUpwards:(NSInteger)arg0 ;
-(void)postUpwards:(NSInteger)arg0 appsWithStates:(id)arg1 always:(BOOL)arg2 ;
-(void)processRefreshedRNFDataUsageWithGrace:(BOOL)arg0 ;
-(void)requestBoost:(unsigned int)arg0 ;
-(void)rnfTestAbortCFSMWentIdleReply:(BOOL)arg0 ;
-(void)startElevatedStateWatchdogWithPeriod:(NSUInteger)arg0 ;
-(void)stopElevatedStateWatchdog;
-(void)stopRNFTestIdleTimer;
-(void)stopWrongUsageGracePeriodTimer;
-(void)updateFallbackAdvice:(NSInteger)arg0 ;


@end


#endif