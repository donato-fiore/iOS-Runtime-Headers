// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFISHIM_H
#define WIFISHIM_H

@class NSDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WiFiShim : NSObject {
    *__WiFiManagerClient _wifiManager;
    *__WiFiDeviceClient _wifiDevice;
    BOOL _registeredForCallbacks;
    unsigned char _lqmCallbackRegistrationAttempts;
    CGFloat _lqmCallbackLastRegistered;
    id *_tdObserver;
}


@property (nonatomic) BOOL apIsAwake; // ivar: _apIsAwake
@property (nonatomic) *__WiFiDeviceClient awdlDevice; // ivar: _awdlDevice
@property (nonatomic) char awdlLinkState; // ivar: _awdlLinkState
@property (readonly) BOOL awdlLinkUp; // ivar: _awdlLinkUp
@property (retain, nonatomic) NSDictionary *awdlStateDict; // ivar: _awdlStateDict
@property (retain, nonatomic) NSObject<OS_dispatch_source> *awdlTimer; // ivar: _awdlTimer
@property (nonatomic) NSInteger awdlTimerCount; // ivar: _awdlTimerCount
@property (retain, nonatomic) NSMutableSet *delegates; // ivar: _delegates
@property (nonatomic) BOOL hasAssociation; // ivar: _hasAssociation
@property (retain, nonatomic) NSString *lastBssid; // ivar: _lastBssid
@property (retain, nonatomic) NSString *lastSsid; // ivar: _lastSsid
@property (nonatomic) CGFloat lqmAsystoleLastCalled; // ivar: _lqmAsystoleLastCalled
@property (nonatomic) unsigned char lqmBradycardia; // ivar: _lqmBradycardia
@property (nonatomic) CGFloat lqmBradycardiaLastCalled; // ivar: _lqmBradycardiaLastCalled
@property (nonatomic) CGFloat lqmCallbackLastTimestamp; // ivar: _lqmCallbackLastTimestamp
@property (nonatomic) unsigned char lqmCallbackThreshold; // ivar: _lqmCallbackThreshold
@property (retain, nonatomic) NSObject<OS_dispatch_source> *lqmCallbackTimer; // ivar: _lqmCallbackTimer
@property (nonatomic) BOOL lqmCallbackTimerResumed; // ivar: _lqmCallbackTimerResumed
@property (nonatomic) unsigned char lqmCallbacks; // ivar: _lqmCallbacks
@property (nonatomic) int lqmEventInterval; // ivar: _lqmEventInterval
@property (nonatomic) BOOL monitorLQMBradycardia; // ivar: _monitorLQMBradycardia
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedInstance;
-(BOOL)_shouldRegisterForLQMCallbacks;
-(BOOL)isHotSpotOnInterfaceWithName:(id)arg0 ;
-(BOOL)manualJoinInfoForNetwork:(struct __WiFiNetwork *)arg0 ;
-(BOOL)toggleLQMIntervalOn:(id)arg0 toFast:(BOOL)arg1 ;
-(NSInteger)phyModeForInterfaceWithName:(id)arg0 ;
-(id)associationInfoForWiFiNetwork:(struct __WiFiNetwork *)arg0 ;
-(id)awdlPeerList;
-(id)bssidForInterfaceWithName:(id)arg0 ;
-(id)getAWDLPeerList;
-(id)init;
-(id)refreshAssociationInfo;
-(id)ssidForInterfaceWithName:(id)arg0 ;
-(struct __WiFiDeviceClient *)wifiDevice;
-(struct __WiFiManagerClient *)wifiManager;
-(void)_delayedRegisterForLQMCallbacks;
-(void)_registerForLQMCallbacks;
-(void)_setAWDLLinkUp:(BOOL)arg0 ;
-(void)_setLQMEventInterval:(int)arg0 ;
-(void)_triggerDisconnectEdge:(id)arg0 ;
-(void)_unregisterForLQMCallbacks;
-(void)_wifiDevicesRefresh;
-(void)addDelegate:(id)arg0 ;
-(void)changeLQMMonitoring;
-(void)checkForLQMAsystole;
-(void)checkForLQMBradycardia;
-(void)checkForLQMCallbackRegistration;
-(void)dealloc;
-(void)handleAWDLStateChange:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)processAsystoleDeclaration;
-(void)registerForCallbacks;
-(void)removeDelegate:(id)arg0 ;
-(void)resumeLQMCallbackMonitoring;
-(void)setAWDLDevice:(struct __WiFiDeviceClient *)arg0 ;
-(void)setWifiDevice:(struct __WiFiDeviceClient *)arg0 ;
-(void)suspendLQMCallbackMonitoring;
-(void)unregisterForCallbacks;


@end


#endif