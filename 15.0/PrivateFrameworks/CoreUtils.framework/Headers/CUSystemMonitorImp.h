// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUSYSTEMMONITORIMP_H
#define CUSYSTEMMONITORIMP_H

@class NSMutableSet, NSData, TUCallCenter, CXCallObserver, NSArray, CLLocationManager, NSString, CoreTelephonyClient, RTRoutineManager, NSMutableArray;
@protocol FMFSessionDelegate, CXCallObserverDelegate, CLLocationManagerDelegate, CoreTelephonyClientDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "CUBluetoothClient.h"
#import "CUSystemMonitor.h"
#import "CUNetInterfaceMonitor.h"
#import "CUWiFiManager.h"

@interface CUSystemMonitorImp : NSObject <FMFSessionDelegate, CXCallObserverDelegate, CLLocationManagerDelegate, CoreTelephonyClientDelegate>

 {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableSet *_monitors;
    ? _bluetoothAddress48;
    NSData *_bluetoothAddressData;
    CUBluetoothClient *_bluetoothClient;
    TUCallCenter *_callCenter;
    CXCallObserver *_callObserver;
    int _activeCallCount;
    unsigned int _callFlags;
    ? _callInfo;
    BOOL _callStatusObserving;
    int _connectedCallCount;
    int _familyBuddyToken;
    BOOL _familyFailed;
    NSArray *_familyMembers;
    BOOL _familyObserving;
    CUSystemMonitor *_familyPrimaryIPMonitor;
    int _familyUpdatedToken;
    CLLocationManager *_locationManager;
    unsigned int _locationVisitsFlags;
    BOOL _manateeAvailable;
    BOOL _manateeObserving;
    int _fmfDevicesChangedToken;
    int _meDeviceChangedToken;
    int _meDeviceRetryToken;
    NSString *_meDeviceFMFDeviceID;
    NSString *_meDeviceIDSDeviceID;
    NSString *_meDeviceName;
    BOOL _meDeviceIsMe;
    BOOL _meDeviceValid;
    CUNetInterfaceMonitor *_netInterfaceMonitor;
    unsigned int _netFlags;
    ? _primaryIPv4Addr;
    ? _primaryIPv6Addr;
    NSString *_primaryNetworkSignature;
    int _powerSourceToken;
    BOOL _powerUnlimited;
    NSString *_primaryAppleID;
    BOOL _primaryAppleIDActive;
    BOOL _primaryAppleIDIsHSA2;
    int _primaryAppleIDNotifyToken;
    BOOL _primaryAppleIDObserving;
    CoreTelephonyClient *_regionCTClient;
    *__CTServerConnection _regionCTServerCnx;
    NSString *_regionISOCountryCode;
    NSString *_regionMobileCountryCode;
    RTRoutineManager *_regionRoutineManager;
    NSString *_regionRoutineCountry;
    int _regionRoutineNotifyToken;
    NSString *_regionRoutineState;
    ? _rotatingIdentifier48;
    NSData *_rotatingIdentifierData;
    NSObject<OS_dispatch_source> *_rotatingIdentifierTimer;
    BOOL _screenLocked;
    int _screenLockedToken;
    BOOL _screenOn;
    int _screenBlankedToken;
    BOOL _screenSaverActive;
    BOOL _scChangesPending;
    *__SCDynamicStore _scDynamicStore;
    NSMutableArray *_scInitialKeys;
    NSString *_scKeySystemName;
    NSString *_scPatternNetInterfaceIPv4;
    NSString *_scPatternNetInterfaceIPv6;
    NSArray *_scNotificationKeys;
    NSArray *_scNotificationPatterns;
    NSString *_systemName;
    int _systemLockState;
    int _systemLockStateToken;
    BOOL _firstUnlocked;
    int _firstUnlockToken;
    NSObject<OS_dispatch_source> *_firstUnlockTimer;
    CUWiFiManager *_wifiManager;
    unsigned int _wifiFlags;
    int _wifiState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasMonitorPassingTest:(id)arg0 ;
-(id)_primaryAppleIDAccount;
-(id)init;
-(int)_activeCallCountUnached;
-(int)_connectedCallCountUnached;
-(struct ? )_callInfoUncached;
-(unsigned int)_callFlagsUncached;
-(void)_bluetoothAddressMonitorStart;
-(void)_bluetoothAddressMonitorStop;
-(void)_callCenterStatusChanged:(id)arg0 ;
-(void)_callInfoChanged;
-(void)_callMonitorStart;
-(void)_callMonitorStop;
-(void)_familyGetMembers:(BOOL)arg0 ;
-(void)_familyMonitorStart;
-(void)_familyMonitorStop;
-(void)_familyNetworkChanged;
-(void)_familyUpdated:(id)arg0 ;
-(void)_firstUnlockMonitorCheck:(BOOL)arg0 ;
-(void)_firstUnlockMonitorStart;
-(void)_firstUnlockMonitorStop;
// -(void)_invokeBlock:(id)arg0 passingTest:(unk)arg1  ;
-(void)_locationVisitUpdate:(id)arg0 arrived:(BOOL)arg1 ;
-(void)_locationVisitsMonitorStart;
-(void)_locationVisitsMonitorStop;
-(void)_locationsOfInterestDidChange:(BOOL)arg0 ;
-(void)_manateeChanged:(id)arg0 ;
-(void)_manateeMonitorStart;
-(void)_manateeMonitorStop;
-(void)_meDeviceCheckCompletion:(id)arg0 error:(id)arg1 firstCheck:(BOOL)arg2 ;
-(void)_meDeviceCheckStart:(BOOL)arg0 ;
-(void)_meDeviceMonitorStart;
-(void)_meDeviceMonitorStop;
-(void)_netInterfaceMonitorStart;
-(void)_netInterfaceMonitorStop;
-(void)_powerUnlimitedMonitorStart;
-(void)_powerUnlimitedMonitorStop;
-(void)_primaryAppleIDChanged2:(BOOL)arg0 ;
-(void)_primaryAppleIDChanged:(id)arg0 ;
-(void)_primaryAppleIDMonitorStart;
-(void)_primaryAppleIDMonitorStop;
-(void)_regionMonitorGet;
-(void)_regionMonitorStart;
-(void)_regionMonitorStop;
-(void)_regionMonitorUpdateLocationsOfInterest:(id)arg0 ;
-(void)_regionMonitorUpdateMCC:(id)arg0 ;
-(void)_rotatingIdentifierMonitorStart;
-(void)_rotatingIdentifierMonitorStop;
-(void)_rotatingIdentifierTimerFired;
-(void)_screenChanged:(BOOL)arg0 ;
-(void)_screenLockedChanged;
-(void)_screenLockedMonitorStart;
-(void)_screenLockedMonitorStop;
-(void)_screenOnMonitorStart;
-(void)_screenOnMonitorStartiOS;
-(void)_screenOnMonitorStop;
-(void)_screenSaverMonitorStart;
-(void)_screenSaverMonitorStop;
-(void)_systemConfigChanged:(id)arg0 initial:(BOOL)arg1 ;
-(void)_systemConfigNetInterfaceChanged:(id)arg0 initial:(BOOL)arg1 ;
-(void)_systemConfigSystemNameChanged:(BOOL)arg0 ;
-(void)_systemConfigUpdateKeyPtr:(*id)arg0 name:(id)arg1 enabled:(BOOL)arg2 creator:(id)arg3 ;
-(void)_systemConfigUpdateNotifications;
-(void)_systemLockStateMonitorStart;
-(void)_systemLockStateMonitorStop;
-(void)_systemLockStateUpdate:(BOOL)arg0 ;
-(void)_update;
-(void)_wifiMonitorStart;
-(void)_wifiMonitorStateChanged:(BOOL)arg0 ;
-(void)_wifiMonitorStop;
-(void)addMonitor:(id)arg0 completion:(id)arg1 ;
-(void)callObserver:(id)arg0 callChanged:(id)arg1 ;
-(void)cellMonitorUpdate:(id)arg0 info:(id)arg1 ;
-(void)locationManager:(id)arg0 didArrive:(id)arg1 completion:(id)arg2 ;
-(void)locationManager:(id)arg0 didDepart:(id)arg1 completion:(id)arg2 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManager:(id)arg0 didVisit:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)removeMonitor:(id)arg0 ;
-(void)updateWithQueue:(id)arg0 completion:(id)arg1 ;


@end


#endif