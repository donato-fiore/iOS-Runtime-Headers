// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICENVIRONMENTMONITOR_H
#define ICENVIRONMENTMONITOR_H

@class NSHashTable, NWPathEvaluator, CoreTelephonyClient, CTXPCServiceSubscriptionContext, NSDictionary, CWFInterface, CWFLinkQualityMetric, NWNetworkOfInterestManager, NSMutableSet, NSString;
@protocol NWNetworkOfInterestManagerDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICEnvironmentMonitor : NSObject <NWNetworkOfInterestManagerDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_observers;
    os_unfair_recursive_lock_s _observersLock;
    *__CTServerConnection _telephonyServerConnectionRef;
    NWPathEvaluator *_networkPathEvaluator;
    int _thermalNotificationToken;
    CoreTelephonyClient *_telephonyClient;
    CTXPCServiceSubscriptionContext *_dataSubscriptionContext;
    NSDictionary *_cellSignalInfo;
    *void _symptomPresentationFeedDyLibHandle;
    CWFInterface *_wifiInterface;
    CWFLinkQualityMetric *_wifiLinkQualityMetric;
    NWNetworkOfInterestManager *_noiManager;
    NSInteger _cellularLinkQuality;
    NSMutableSet *_networksOfInterest;
    int _batteryNotificationToken;
    int _powerSourceNotificationToken;
}


@property (readonly, nonatomic, getter=isCharging) BOOL charging; // ivar: _isCharging
@property (readonly, nonatomic) CGFloat currentBatteryLevel; // ivar: _currentBatteryLevel
@property (readonly, nonatomic, getter=isCurrentNetworkLinkExpensive) BOOL currentNetworkLinkExpensive; // ivar: _currentNetworkLinkExpensive
@property (readonly, nonatomic, getter=isCurrentNetworkLinkHighQuality) BOOL currentNetworkLinkHighQuality; // ivar: _currentNetworkLinkHighQuality
@property (readonly, nonatomic) NSUInteger currentThermalLevel; // ivar: _currentThermalLevel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEthernetWired) BOOL ethernetWired; // ivar: _ethernetWired
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger lastKnownNetworkType; // ivar: _lastKnownNetworkType
@property (readonly, nonatomic, getter=isNetworkConstrained) BOOL networkConstrained; // ivar: _networkConstrained
@property (readonly, nonatomic) NSInteger networkType; // ivar: _networkType
@property (readonly, nonatomic, getter=isRemoteServerLikelyReachable) BOOL remoteServerLikelyReachable; // ivar: _isRemoteServerLikelyReachable
@property (readonly, nonatomic, getter=isRemoteServerReachable) BOOL remoteServerReachable; // ivar: _remoteServerReachable
@property (readonly, nonatomic) NSDictionary *signalInfo;
@property (readonly, nonatomic) NSDictionary *signalStrength;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *telephonyOperatorName; // ivar: _telephonyOperatorName
@property (readonly, copy, nonatomic) NSString *telephonyRegistrationStatus; // ivar: _telephonyRegistrationStatus
@property (readonly, copy, nonatomic) NSString *telephonyStatusIndicator; // ivar: _telephonyStatusIndicator
@property (readonly, nonatomic, getter=isWiFiActive) BOOL wiFiActive; // ivar: _isWiFiActive
@property (readonly, nonatomic, getter=isWiFiAssociated) BOOL wifiAssociated; // ivar: _wifiAssociated


+(id)sharedMonitor;
-(BOOL)_networkConstrained;
-(NSInteger)_currentCellularLinkQuality;
-(NSInteger)_currentNetworkType;
-(NSInteger)_networkTypeFromTelephonyStatusIndicator:(id)arg0 ;
-(id)init;
-(void)_handleApplicationDidEnterForegroundNotification:(id)arg0 ;
-(void)_handleCTServerConnectionNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)_onQueue_loadInitialThermalLevel;
-(void)_onQueue_updateNetworkReachabilityAndNotifyObservers:(BOOL)arg0 ;
-(void)_onQueue_updateTelephonyStateAndNotifyObservers:(BOOL)arg0 ;
-(void)_onQueue_updateThermalLevelWithToken:(int)arg0 ;
-(void)_updatePowerStateNotifyingObservers:(BOOL)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)cellMonitorUpdate:(id)arg0 info:(id)arg1 ;
-(void)currentDataSimChanged:(id)arg0 ;
-(void)dealloc;
-(void)didStartTrackingNOI:(id)arg0 ;
-(void)didStopTrackingAllNOIs:(id)arg0 ;
-(void)didStopTrackingNOI:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif