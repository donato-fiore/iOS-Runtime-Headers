// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUWIFIMANAGER_H
#define CUWIFIMANAGER_H

@class NSArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CURetrier.h"

@interface CUWiFiManager : NSObject {
    BOOL _activateCalled;
    BOOL _activated;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    *LogCategory _ucat;
    BOOL _updating;
    NSArray *_trafficPeersCurrent;
    BOOL _wifiAutoJoinDisabled;
    BOOL _wifiCriticalSetup;
    BOOL _wifiCriticalState;
    *__WiFiManagerClient _wifiManager;
    BOOL _wifiManagerSetup;
    *__WiFiDeviceClient _wifiDevice;
    BOOL _wifiDeviceSetup;
    *__WiFiNetwork _wifiNetworkDisabled;
    CURetrier *_wifiRetrier;
    BOOL _wifiStateMonitorSetup;
    BOOL _infraDisabledChanged;
    BOOL _trafficPeerChanged;
    BOOL _wakeOnWirelessEnabledChanged;
}


@property (nonatomic) unsigned int controlFlags; // ivar: _controlFlags
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) BOOL infraDisabled; // ivar: _infraDisabled
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSArray *trafficPeers; // ivar: _trafficPeers
@property (nonatomic) BOOL wakeOnWirelessEnabled; // ivar: _wakeOnWirelessEnabled
@property (readonly, nonatomic) unsigned int wifiFlags; // ivar: _wifiFlags
@property (readonly, nonatomic) int wifiState; // ivar: _wifiState
@property (copy, nonatomic) id *wifiStateChangedHandler; // ivar: _wifiStateChangedHandler


-(id)init;
-(void)_activateSafeInvokeBlock:(id)arg0 ;
-(void)_interrupted;
-(void)_invalidated;
-(void)_update;
-(void)_updateInfraDisabled;
-(void)_updateTrafficPeers;
-(void)_updateTrafficPeersWithService:(unsigned int)arg0 ;
-(void)_updateWakeOnWireless;
-(void)_wifiAutoJoinNotification:(id)arg0 ;
-(void)_wifiEnsureStarted;
-(void)_wifiEnsureStopped;
-(void)activate;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)performUpdate:(id)arg0 ;


@end


#endif