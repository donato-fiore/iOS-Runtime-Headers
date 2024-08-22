// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUTWIFIMANAGER_H
#define CUTWIFIMANAGER_H

@class NSString, NSHashTable, NSDictionary, NSRecursiveLock, NSMutableSet, NSNumber, NSRunLoop, NSThread;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUTWiFiManager : NSObject

@property (readonly, nonatomic) BOOL autoAssociateWiFi;
@property (nonatomic) BOOL autoAssociateWiFiAsForegroundClient; // ivar: _shouldAutoAssociateAsForeground
@property (nonatomic) *void currentNetwork; // ivar: _currentNetwork
@property (readonly, nonatomic) NSString *currentSSID;
@property (retain, nonatomic) NSHashTable *delegateMap; // ivar: _delegateMap
@property (nonatomic) *void dynamicStore; // ivar: _dynamicStore
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *incomingCallbacksQueue; // ivar: _incomingCallbacksQueue
@property (readonly, nonatomic) BOOL isHostingWiFiHotSpot; // ivar: _isHostingHotSpot
@property BOOL isPrimaryCellularCached; // ivar: _isPrimaryCellularCached
@property (readonly, nonatomic) BOOL isWiFiAssociated;
@property (readonly, nonatomic) BOOL isWiFiCaptive;
@property (readonly, nonatomic) BOOL isWiFiEnabled; // ivar: _isWifiEnabled
@property (readonly, nonatomic) BOOL isWoWEnabled; // ivar: _isWakeOnWiFiEnabled
@property (readonly, nonatomic) BOOL isWoWSupported; // ivar: _isWakeOnWiFiSupported
@property (copy, nonatomic) NSDictionary *lastWiFiPowerInfo; // ivar: _lastWiFiPowerInfo
@property (nonatomic) int linkToken; // ivar: _linkToken
@property (retain, nonatomic) NSRecursiveLock *lock; // ivar: _lock
@property (nonatomic) *__CFRunLoopSource runLoopSource; // ivar: _runLoopSource
@property (retain, nonatomic) NSMutableSet *wiFiAutoAssociationTokens; // ivar: _wiFiAutoAssociationTokens
@property (readonly, nonatomic) NSNumber *wiFiScaledRSSI;
@property (readonly, nonatomic) NSNumber *wiFiScaledRate;
@property (readonly, nonatomic) NSNumber *wiFiSignalStrength;
@property (nonatomic) *void wifiDevice; // ivar: _wifiDevice
@property (nonatomic) *void wifiManager; // ivar: _wifiManager
@property (retain, nonatomic) NSRunLoop *wifiRunLoop; // ivar: _wifiRunLoop
@property (retain, nonatomic) NSThread *wifiThread; // ivar: _wifiThread
@property (readonly, nonatomic) BOOL willTryToAutoAssociateWiFiNetwork;
@property (readonly, nonatomic) BOOL willTryToSearchForWiFiNetwork;
@property (retain, nonatomic) NSHashTable *wowClients; // ivar: _wowClients


+(id)sharedInstance;
-(BOOL)_isPrimaryCellular;
-(BOOL)hasWiFiAutoAssociationClientToken:(id)arg0 ;
-(BOOL)hasWoWClient:(id)arg0 ;
-(CGFloat)_wifiMeasurementErrorForInterval:(CGFloat)arg0 ;
-(id)_ssidFromNetwork:(struct __WiFiNetwork *)arg0 ;
-(id)init;
-(void)_adjustWiFiAutoAssociation;
-(void)_adjustWiFiAutoAssociationLocked;
-(void)_adjustWoWState;
-(void)_createDynamicStore;
-(void)_handleDeviceAttachedCallback;
-(void)_handleDevicePowerCallback;
-(void)_handleHostAPStateChangedCallback;
-(void)_handlePotentialDeviceChange:(struct __WiFiDeviceClient *)arg0 ;
-(void)_performBackgroundInit;
-(void)_performCurrentNetworkBlock:(id)arg0 ;
// -(void)_performCurrentNetworkBlock:(id)arg0 withDevice:(unk)arg1  ;
// -(void)_performCurrentNetworkBlock:(id)arg0 withDevice:(unk)arg1 async:(struct __WiFiDeviceClient *)arg2  ;
-(void)_performDeviceBlock:(id)arg0 ;
// -(void)_performDeviceBlock:(id)arg0 useCache:(unk)arg1  ;
-(void)_performPowerReading;
-(void)_setupWifiNotifications;
-(void)_threadedMain;
-(void)_updateInitialWiFiState;
-(void)_updateIsWiFiAssociatedAsync:(BOOL)arg0 ;
-(void)_updateIsWiFiEnabled;
-(void)addDelegate:(id)arg0 ;
-(void)addWiFiAutoAssociationClientToken:(id)arg0 ;
-(void)addWoWClient:(id)arg0 ;
-(void)currentWiFiNetworkPowerUsageWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)removeDelegate:(id)arg0 ;
-(void)removeWiFiAutoAssociationClientToken:(id)arg0 ;
-(void)removeWoWClient:(id)arg0 ;
-(void)showNetworkOptions;


@end


#endif