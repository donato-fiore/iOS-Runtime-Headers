// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASSYSTEMSTATE_H
#define SASSYSTEMSTATE_H

@class NSMutableSet, SUICApplicationStateHelper, CXCallObserver, CARAutomaticDNDStatus, CARSessionStatus, NSArray, NSString, FBSDisplayLayoutMonitor, NSHashTable, AFNotifyObserver;
@protocol SASEmptyProtocol, CXCallObserverDelegate, CARSessionObserving;

#import <Foundation/Foundation.h>

#import "SASLockStateMonitor.h"

@interface SASSystemState : NSObject <SASEmptyProtocol, CXCallObserverDelegate, CARSessionObserving>



@property (nonatomic) BOOL accessibilityShortcutEnabled; // ivar: _accessibilityShortcutEnabled
@property (retain, nonatomic) NSMutableSet *activeCalls; // ivar: _activeCalls
@property (retain, nonatomic) SUICApplicationStateHelper *applicationStateHelper; // ivar: _applicationStateHelper
@property (retain, nonatomic) CXCallObserver *callObserver; // ivar: _callObserver
@property (retain, nonatomic) CARAutomaticDNDStatus *carAutomaticDNDStatus; // ivar: _carAutomaticDNDStatus
@property (nonatomic) int carPlayConnectionState; // ivar: _carPlayConnectionState
@property (nonatomic) NSUInteger carPlayEnhancedSiriCharacteristics; // ivar: _carPlayEnhancedSiriCharacteristics
@property (nonatomic) NSInteger carPlayEnhancedVoiceTriggerMode; // ivar: _carPlayEnhancedVoiceTriggerMode
@property (retain, nonatomic) CARSessionStatus *carPlaySessionStatus; // ivar: _carPlaySessionStatus
@property (retain, nonatomic) NSArray *currentCarPlaySupportedOEMAppIdList; // ivar: _currentCarPlaySupportedOEMAppIdList
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *displayLayoutMonitor; // ivar: _displayLayoutMonitor
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *listeners; // ivar: _listeners
@property (retain, nonatomic) SASLockStateMonitor *lockStateMonitor; // ivar: _lockStateMonitor
@property (retain, nonatomic) AFNotifyObserver *observerBluetoothGuestConnected; // ivar: _observerBluetoothGuestConnected
@property (retain, nonatomic) AFNotifyObserver *observerWirelessSplitter; // ivar: _observerWirelessSplitter
@property (nonatomic) BOOL rightHandDrive; // ivar: _rightHandDrive
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *vehicleManufacturer; // ivar: _vehicleManufacturer
@property (retain, nonatomic) NSString *vehicleModel; // ivar: _vehicleModel
@property (retain, nonatomic) NSString *vehicleName; // ivar: _vehicleName


+(id)new;
+(id)sharedSystemState;
-(BOOL)_deviceIsUnlocked;
-(BOOL)_internalAlwaysEyesFreeEnabled;
-(BOOL)_mapsAppIsVisibleOnLockscreen;
-(BOOL)carDNDActive;
-(BOOL)carDNDActiveOrEyesFreeAndShouldHaveFullScreenPresentation;
-(BOOL)carPlaySupportsAnyEnhancedSiriCharacteristics;
-(BOOL)carPlaySupportsEnhancedSiriCharacteristic:(NSUInteger)arg0 ;
-(BOOL)deviceIsBlocked;
-(BOOL)deviceIsPasscodeLocked;
-(BOOL)deviceScreenIsOn;
-(BOOL)hasIncomingCall;
-(BOOL)hasUnlockedSinceBoot;
-(BOOL)isATV;
-(BOOL)isConnectedToCarPlay;
-(BOOL)isConnectedToEyesFreeDevice;
-(BOOL)isConnectedToTrustedCarPlay;
-(BOOL)isGuestConnected;
-(BOOL)isInActiveCall;
-(BOOL)isPad;
-(BOOL)isRightHandDrive;
-(BOOL)isWirelessSplitterOn;
-(BOOL)siriIsEnabled;
-(BOOL)siriIsRestricted;
-(BOOL)siriIsSupported;
-(BOOL)smartCoverClosed;
-(NSInteger)_enhancedVoiceTriggerModeFromConfiguration:(id)arg0 ;
-(NSUInteger)carDNDStatus;
-(id)_initForTesting;
-(id)currentSpokenLanguageCode;
-(id)foregroundAppInfosForPresentationIdentifier:(NSInteger)arg0 ;
-(id)init;
-(void)_fetchOEMAppContext;
-(void)_fetchVehicleInformation;
-(void)_pairedVehiclesDidChange:(id)arg0 ;
-(void)_updateAccessibilityState;
-(void)_updateCarPlayConnectionState;
-(void)addStateChangeListener:(id)arg0 ;
-(void)callObserver:(id)arg0 callChanged:(id)arg1 ;
-(void)monitorCarSessions;
-(void)monitorLockState;
-(void)removeStateChangeListener:(id)arg0 ;
-(void)sessionDidConnect:(id)arg0 ;
-(void)sessionDidDisconnect:(id)arg0 ;


@end


#endif