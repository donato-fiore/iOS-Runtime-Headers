// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCPERSISTENTINTERFACEMANAGER_H
#define PCPERSISTENTINTERFACEMANAGER_H

@class NSRecursiveLock, NSMapTable, NSString, NSTimer, CoreTelephonyClient, CTXPCServiceSubscriptionContext;
@protocol CoreTelephonyClientDataDelegate, PCInterfaceMonitorDelegate;

#import <Foundation/Foundation.h>

#import "PCSimpleTimer.h"

@interface PCPersistentInterfaceManager : NSObject <CoreTelephonyClientDataDelegate, PCInterfaceMonitorDelegate>

 {
    NSRecursiveLock *_lock;
    NSMapTable *_delegatesAndQueues;
    *__CFSet _WiFiAutoAssociationDelegates;
    PCSimpleTimer *_WiFiAutoAssociationDisableTimer;
    *__CFSet _wakeOnWiFiDelegates;
    PCSimpleTimer *_wakeOnWiFiDisableTimer;
    *void _interfaceAssertion;
    NSString *_WWANInterfaceName;
    BOOL _isWWANInterfaceUp;
    NSTimer *_inCallWWANOverrideTimer;
    BOOL _isWWANInterfaceDataActive;
    BOOL _ctIsWWANInHomeCountry;
    BOOL _isWWANInterfaceSuspended;
    BOOL _isPowerStateDetectionSupported;
    BOOL _isWWANInterfaceInProlongedHighPowerState;
    BOOL _isWWANInterfaceActivationPermitted;
    CGFloat _lastActivationTime;
    BOOL _isInCall;
    BOOL _isWakeOnWiFiSupported;
    BOOL _isWakeOnWiFiEnabled;
    CoreTelephonyClient *_ctClient;
    CTXPCServiceSubscriptionContext *_currentDataSimContext;
    *void _ctServerConnection;
}


@property (readonly, nonatomic) NSString *WWANInterfaceName;
@property (readonly, nonatomic) BOOL allowBindingToWWAN;
@property (readonly) BOOL areAllNetworkInterfacesDisabled;
@property (readonly, nonatomic) NSString *currentLinkQualityString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL doesWWANInterfaceExist;
@property (readonly, nonatomic) BOOL hasWWANStatusIndicator; // ivar: _hasWWANStatusIndicator
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isInCall;
@property (readonly, nonatomic) BOOL isInternetReachable;
@property (readonly, nonatomic) BOOL isInternetReachableViaWiFi;
@property (readonly) BOOL isPowerStateDetectionSupported;
@property (readonly, nonatomic) BOOL isWWANBetterThanWiFi;
@property (readonly, nonatomic) BOOL isWWANInHomeCountry;
@property (readonly) BOOL isWWANInterfaceActivationPermitted;
@property (readonly) BOOL isWWANInterfaceInProlongedHighPowerState;
@property (readonly, nonatomic) BOOL isWWANInterfaceSuspended;
@property (readonly, nonatomic) BOOL isWWANInterfaceUp;
@property (readonly, nonatomic) BOOL isWakeOnWiFiSupported;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_isCellularCall:(struct __CTCall *)arg0 ;
-(BOOL)_isCurrentDataSimContextLocked:(id)arg0 ;
-(BOOL)_isWiFiUsable;
-(BOOL)_wantsWWANInterfaceAssertion;
-(BOOL)_wantsWakeOnWiFiEnabled;
-(BOOL)_wifiIsPoorLinkQuality;
-(BOOL)_wwanIsPoorLinkQuality;
-(id)_nonCellularMonitor;
-(id)init;
-(void)_adjustWakeOnWiFi;
-(void)_adjustWakeOnWiFiLocked;
-(void)_adjustWiFiAutoAssociation;
-(void)_adjustWiFiAutoAssociationLocked;
-(void)_clearInCallWWANOverrideTimerLocked;
-(void)_createCTConnection;
-(void)_ctConnectionAttempt;
-(void)_inCallWWANOverrideTimerFired;
-(void)_mainThreadCTConnectionAttempt;
-(void)_processCallStatusChanged:(id)arg0 ;
-(void)_processConnectionStatusLocked:(id)arg0 ;
-(void)_processCurrentDataSimChangedLocked:(id)arg0 ;
-(void)_processDataStatusLocked:(id)arg0 ;
-(void)_scheduleCalloutsForSelector:(SEL)arg0 ;
-(void)_updateCTIsWWANInHomeCountry:(BOOL)arg0 isWWANInterfaceDataActive:(BOOL)arg1 ;
-(void)_updateWWANInterfaceAssertions;
-(void)_updateWWANInterfaceAssertionsLocked;
-(void)_updateWWANInterfaceUpState;
-(void)_updateWWANInterfaceUpStateLocked;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)connectionActivationError:(id)arg0 connection:(int)arg1 error:(int)arg2 ;
-(void)connectionStateChanged:(id)arg0 connection:(int)arg1 dataConnectionStatusInfo:(id)arg2 ;
-(void)currentDataSimChanged:(id)arg0 ;
-(void)cutWiFiManagerDeviceAttached:(id)arg0 ;
-(void)dataStatus:(id)arg0 dataStatusInfo:(id)arg1 ;
-(void)dealloc;
-(void)enableWakeOnWiFi:(BOOL)arg0 forDelegate:(id)arg1 ;
-(void)enableWiFiAutoAssociation:(BOOL)arg0 forDelegate:(id)arg1 ;
-(void)handleMachMessage:(*void)arg0 ;
-(void)interfaceLinkQualityChanged:(id)arg0 previousLinkQuality:(int)arg1 ;
-(void)interfaceReachabilityChanged:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif