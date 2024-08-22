// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUSYSTEMMONITOR_H
#define CUSYSTEMMONITOR_H

@class NSData, NSString, NSArray, NSBundle;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUSystemMonitor : NSObject {
    BOOL _activateCalled;
    BOOL _activateCompleted;
    BOOL _invalidateCalled;
    BOOL _invalidateCalled2;
}


@property (readonly) int activeCallCount;
@property (readonly) ? bluetoothAddress48;
@property (copy) id *bluetoothAddressChangedHandler; // ivar: _bluetoothAddressChangedHandler
@property (readonly, copy) NSData *bluetoothAddressData;
@property (copy) id *callChangedHandler; // ivar: _callChangedHandler
@property (readonly) int callCountIncomingConnected;
@property (readonly) int callCountIncomingUnconnected;
@property (readonly) int callCountOutgoingConnected;
@property (readonly) int callCountOutgoingUnconnected;
@property (readonly) unsigned int callFlags;
@property (readonly) BOOL clamshellMode;
@property (copy) id *clamshellModeChangedHandler; // ivar: _clamshellModeChangedHandler
@property (readonly) int connectedCallCount;
@property (copy) id *consoleUserChangedHandler; // ivar: _consoleUserChangedHandler
@property (readonly) unsigned int consoleUserID;
@property (readonly, copy) NSString *consoleUserName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, copy) NSArray *familyMembers;
@property (copy) id *familyUpdatedHandler; // ivar: _familyUpdatedHandler
@property (copy) id *firstUnlockHandler; // ivar: _firstUnlockHandler
@property (readonly, nonatomic) BOOL firstUnlocked;
@property (readonly, nonatomic) BOOL firstUnlockedSync;
@property (readonly, copy) NSString *foregroundAppBundleID;
@property (copy) id *foregroundAppChangedHandler; // ivar: _foregroundAppChangedHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain) NSBundle *locationVisitsBundle; // ivar: _locationVisitsBundle
@property (copy) id *locationVisitsChangedHandler; // ivar: _locationVisitsChangedHandler
@property (readonly) unsigned int locationVisitsFlags;
@property (readonly) BOOL manateeAvailable;
@property (copy) id *manateeChangedHandler; // ivar: _manateeChangedHandler
@property (readonly) int manateeState;
@property (copy) id *meDeviceChangedHandler; // ivar: _meDeviceChangedHandler
@property (readonly, copy) NSString *meDeviceFMFDeviceID;
@property (readonly, copy) NSString *meDeviceIDSDeviceID;
@property (readonly) BOOL meDeviceIsMe;
@property (readonly, copy) NSString *meDeviceName;
@property (readonly) BOOL meDeviceValid;
@property (readonly) unsigned int motionFlags;
@property (copy) id *motionHandler; // ivar: _motionHandler
@property (readonly) int motionOrientation;
@property (readonly) unsigned int netFlags;
@property (copy) id *netFlagsChangedHandler; // ivar: _netFlagsChangedHandler
@property (copy) id *netInterfacesChangedHandler; // ivar: _netInterfacesChangedHandler
@property (readonly) BOOL powerUnlimited;
@property (copy) id *powerUnlimitedChangedHandler; // ivar: _powerUnlimitedChangedHandler
@property (readonly, copy) NSString *primaryAppleID;
@property (copy) id *primaryAppleIDChangedHandler; // ivar: _primaryAppleIDChangedHandler
@property (readonly) BOOL primaryAppleIDIsHSA2;
@property (copy) id *primaryIPChangedHandler; // ivar: _primaryIPChangedHandler
@property (readonly, nonatomic) unk primaryIPv4Addr;
@property (readonly, nonatomic) unk primaryIPv6Addr;
@property (copy) id *primaryNetworkChangedHandler; // ivar: _primaryNetworkChangedHandler
@property (readonly, copy) NSString *primaryNetworkSignature;
@property (copy) id *regionChangedHandler; // ivar: _regionChangedHandler
@property (readonly, copy) NSString *regionISOCountryCode;
@property (readonly, copy) NSString *regionMobileCountryCode;
@property (readonly, copy) NSString *regionRoutineCountry;
@property (readonly, copy) NSString *regionRoutineState;
@property (readonly) ? rotatingIdentifier48;
@property (copy) id *rotatingIdentifierChangedHandler; // ivar: _rotatingIdentifierChangedHandler
@property (readonly, copy) NSData *rotatingIdentifierData;
@property (readonly) BOOL screenLocked;
@property (copy) id *screenLockedChangedHandler; // ivar: _screenLockedChangedHandler
@property (readonly) BOOL screenLockedSync;
@property (readonly) BOOL screenOn;
@property (copy) id *screenOnChangedHandler; // ivar: _screenOnChangedHandler
@property (readonly) BOOL screenSaverActive;
@property (copy) id *screenSaverChangedHandler; // ivar: _screenSaverChangedHandler
@property (readonly, nonatomic) int systemLockState;
@property (copy) id *systemLockStateChangedHandler; // ivar: _systemLockStateChangedHandler
@property (readonly, nonatomic) int systemLockStateSync;
@property (readonly, copy) NSString *systemName;
@property (copy) id *systemNameChangedHandler; // ivar: _systemNameChangedHandler
@property (copy) id *systemUIChangedHandler; // ivar: _systemUIChangedHandler
@property (readonly) unsigned int systemUIFlags;
@property (readonly, nonatomic) unsigned int wifiFlags;
@property (readonly, nonatomic) int wifiState;
@property (copy) id *wifiStateChangedHandler; // ivar: _wifiStateChangedHandler


-(id)init;
-(void)activateWithCompletion:(id)arg0 ;
-(void)invalidate;


@end


#endif