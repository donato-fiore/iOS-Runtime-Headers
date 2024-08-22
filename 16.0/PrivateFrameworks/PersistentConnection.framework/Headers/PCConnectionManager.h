// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCCONNECTIONMANAGER_H
#define PCCONNECTIONMANAGER_H

@class NSString, NSRunLoop;
@protocol PCCarrierBundleHelperDelegate, PCInterfaceMonitorDelegate, PCConnectionManagerDelegate, OS_dispatch_queue, OS_os_log, PCGrowthAlgorithm;

#import <Foundation/Foundation.h>

#import "PCPersistentTimer.h"
#import "PCKeepAliveState.h"

@interface PCConnectionManager : NSObject <PCCarrierBundleHelperDelegate, PCInterfaceMonitorDelegate>

 {
    int _connectionClass;
    id<PCConnectionManagerDelegate> *_delegate;
    NSString *_serviceIdentifier;
    NSString *_duetIdentifier;
    int _prefsStyle;
    int _onlyAllowedStyle;
    BOOL _onlyAllowedStyleSet;
    NSUInteger _guidancePriority;
    NSRunLoop *_delegateRunLoop;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_os_log> *_logObject;
    id<PCGrowthAlgorithm>" _wwanGrowthAlgorithm;
    id<PCGrowthAlgorithm>" _wifiGrowthAlgorithm;
    id<PCGrowthAlgorithm> *_lastScheduledGrowthAlgorithm;
    PCPersistentTimer *_intervalTimer;
    PCPersistentTimer *_reconnectWakeTimer;
    PCPersistentTimer *_delayTimer;
    unsigned int _powerAssertionID;
    CGFloat _onTimeKeepAliveTime;
    CGFloat _lastResumeTime;
    CGFloat _lastStopTime;
    CGFloat _lastStartTime;
    CGFloat _lastReachableTime;
    CGFloat _lastReconnectTime;
    CGFloat _lastScheduledIntervalTime;
    CGFloat _timerGuidance;
    CGFloat _lastElapsedInterval;
    BOOL _operatorMinimumIntervalFallbackAllowed;
    unsigned int _reconnectIteration;
    int _timerGuidanceToken;
    int _pushIsConnectedToken;
    int _prefsChangedToken;
    CGFloat _defaultPollingInterval;
    CGFloat _pollingIntervalOverride;
    BOOL _pollingIntervalOverrideSet;
    BOOL _hasStarted;
    BOOL _isRunning;
    BOOL _inCallback;
    BOOL _isInReconnectMode;
    BOOL _reconnectWithKeepAliveDelay;
    BOOL _forceManualWhenRoaming;
    BOOL _enableNonCellularConnections;
    BOOL _isReachable;
    BOOL _disableEarlyFire;
    BOOL _deviceUnderGoodCondition;
    int _currentGrowthStage;
    id *_duetContextRegistration;
    int _currentAddressFamily;
}


@property (nonatomic) BOOL alwaysWantsInterfaceChangeCallbacks; // ivar: _alwaysWantsInterfaceChangeCallbacks
@property (readonly, nonatomic) NSUInteger countOfGrowthActions;
@property (nonatomic) int currentAddressFamily;
@property (readonly, nonatomic) int currentGrowthStage;
@property (readonly, nonatomic) CGFloat currentKeepAliveInterval;
@property (readonly, nonatomic) PCKeepAliveState *currentKeepAliveState;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PCConnectionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableEarlyFire;
@property (copy, nonatomic) NSString *duetIdentifier;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger interfaceIdentifier; // ivar: _interfaceIdentifier
@property (readonly, nonatomic) BOOL isRunning;
@property (nonatomic) CGFloat keepAliveGracePeriod; // ivar: _keepAliveGracePeriod
@property (readonly, nonatomic) int lastProcessedAction; // ivar: _lastProcessedAction
@property CGFloat maximumKeepAliveInterval;
@property (nonatomic) BOOL minimumIntervalFallbackEnabled; // ivar: _minimumIntervalFallbackEnabled
@property (nonatomic) CGFloat minimumKeepAliveInterval;
@property (nonatomic) CGFloat nonCellularEarlyFireConstantInterval; // ivar: _nonCellularEarlyFireConstantInterval
@property (readonly, nonatomic) CGFloat pollingInterval;
@property (nonatomic) BOOL powerOptimizationsForExpensiveNetworkingDisabled; // ivar: _powerOptimizationsForExpensiveNetworkingDisabled
@property (nonatomic) CGFloat serverStatsExpectedKeepAliveInterval;
@property (nonatomic) CGFloat serverStatsMaxKeepAliveInterval;
@property (nonatomic) CGFloat serverStatsMinKeepAliveInterval;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usingServerStatsAggressively;


+(BOOL)_isCachedKeepAliveIntervalStillValid:(CGFloat)arg0 date:(id)arg1 ;
+(Class)growthAlgorithmClass;
+(id)_keepAliveCachePath;
+(id)intervalCacheDictionaries;
-(BOOL)_hasBudgetRemaining;
-(BOOL)_isPushConnected;
-(BOOL)operatorMinimumIntervalFallbackAllowed;
-(BOOL)shouldClientScheduleReconnectDueToFailure;
-(id)_currentGrowthAlgorithm;
-(id)_getCachedWWANKeepAliveIntervalForAddressFamily:(int)arg0 ;
-(id)_growthAlgorithmOnInterface:(NSInteger)arg0 ;
-(id)_initWithConnectionClass:(int)arg0 interfaceIdentifier:(NSInteger)arg1 guidancePriority:(NSUInteger)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 serviceIdentifier:(id)arg5 ;
-(id)_stringForAction:(int)arg0 ;
-(id)_stringForAddressFamily:(int)arg0 ;
-(id)_stringForEvent:(int)arg0 ;
-(id)_stringForStyle:(int)arg0 ;
-(id)initWithConnectionClass:(int)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 serviceIdentifier:(id)arg3 ;
-(id)initWithConnectionClass:(int)arg0 delegate:(id)arg1 serviceIdentifier:(id)arg2 ;
-(id)initWithConnectionClass:(int)arg0 interfaceIdentifier:(NSInteger)arg1 guidancePriority:(NSUInteger)arg2 delegate:(id)arg3 serviceIdentifier:(id)arg4 ;
-(id)persistentInterfaceManager;
-(int)currentStyle;
-(void)_adjustInterfaceAssertions;
-(void)_adjustMinimumIntervalFallback;
-(void)_adjustPollTimerIfNecessary;
-(void)_callDelegateWithEventAndContext:(id)arg0 ;
-(void)_calloutWithEvent:(int)arg0 context:(id)arg1 ;
-(void)_clearTimers;
-(void)_clearTimersReleasingPowerAssertion:(BOOL)arg0 ;
-(void)_delayTimerFired;
-(void)_deregisterForDeviceConditionsNotifications;
-(void)_handleDeviceConditionChangeCallback;
-(void)_intervalTimerFired;
-(void)_loadPreferencesGeneratingEvent:(BOOL)arg0 ;
-(void)_pauseTimers;
-(void)_preferencesChanged;
-(void)_processDeviceConditionChanges;
-(void)_registerForDeviceConditionsNotifications;
-(void)_releasePowerAssertion;
-(void)_resolveStateWithAction:(int)arg0 ;
-(void)_saveWWANKeepAliveInterval;
-(void)_setTimerGuidance:(CGFloat)arg0 ;
-(void)_setupKeepAliveForReconnect;
-(void)_setupTimerForPollForAdjustment:(BOOL)arg0 ;
-(void)_setupTimerForPushWithKeepAliveInterval:(CGFloat)arg0 ;
-(void)_takePowerAssertionWithTimeout:(CGFloat)arg0 ;
-(void)_validateActionForCurrentStyle:(int)arg0 ;
-(void)cancelPollingIntervalOverride;
-(void)carrierBundleDidChange;
-(void)dealloc;
-(void)interfaceLinkQualityChanged:(id)arg0 previousLinkQuality:(int)arg1 ;
-(void)interfaceManagerInHomeCountryStatusChanged:(id)arg0 ;
-(void)interfaceManagerInternetReachabilityChanged:(id)arg0 ;
-(void)interfaceManagerWWANInterfaceStatusChanged:(id)arg0 ;
-(void)resumeManagerWithAction:(int)arg0 ;
-(void)resumeManagerWithAction:(int)arg0 forceGrow:(BOOL)arg1 ;
-(void)setEnableNonCellularConnections:(BOOL)arg0 ;
-(void)setKeepAliveOverrideOnInterface:(NSInteger)arg0 interval:(CGFloat)arg1 timeout:(CGFloat)arg2 ;
-(void)setOnlyAllowedStyle:(int)arg0 ;
-(void)setOperatorMinimumIntervalFallbackAllowed:(BOOL)arg0 ;
-(void)startManager;
-(void)stopAndResetManager;
-(void)stopManager;


@end


#endif