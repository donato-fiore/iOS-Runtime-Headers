// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EAACCESSORYMANAGER_H
#define EAACCESSORYMANAGER_H

@class NSMutableArray, NSString, NSTimer, NSRecursiveLock, NSArray;
@protocol EABluetoothAccessoryPickerDelegate, ACCExternalAccessoryProviderProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EABluetoothAccessoryPicker.h"

@interface EAAccessoryManager : NSObject <EABluetoothAccessoryPickerDelegate, ACCExternalAccessoryProviderProtocol>

 {
    NSMutableArray *_connectedAccessories;
    NSMutableArray *_sequesteredAccessories;
    NSString *_selectedBluetoothAddress;
    id *_pickerCompletion;
    BOOL _sequesterNewAccessories;
    NSTimer *_pickerTimer;
    NSRecursiveLock *_pickerLock;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSString *_managerInstanceUUID;
    EABluetoothAccessoryPicker *_picker;
}


@property (readonly, nonatomic) NSArray *connectedAccessories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isLoggingEnabled;
+(id)accessoryDictionaryForLogging:(id)arg0 ;
+(id)sharedAccessoryManager;
+(void)accessibilityStartListening;
+(void)accessibilityStopListening;
+(void)registerCapabilities:(unsigned int)arg0 ;
-(BOOL)appDeclaresProtocol:(id)arg0 ;
-(BOOL)areLocationAccessoriesEnabled;
-(BOOL)destinationInformation:(id)arg0 forAccessoryUUID:(id)arg1 ;
-(BOOL)processIDIsUsingAccessory:(struct __CFString *)arg0 ;
-(BOOL)shouldAllowCppRuntime;
-(BOOL)shouldAllowInternalProtocols;
-(id)_findExtraAccessoriesContainedOnlyInEA:(id)arg0 ;
-(id)_findExtraAccessoriesContainedOnlyIniAP:(id)arg0 ;
-(id)_initFromSingletonCreationMethod;
-(id)authCertForLegacyConnectionID:(unsigned int)arg0 ;
-(id)authCertSerialNumberForLegacyConnectionID:(unsigned int)arg0 ;
-(id)availableAccessories;
-(id)currentVehicleInformation:(id)arg0 ;
-(id)init;
-(void)EAAccessoryArrived:(id)arg0 ;
-(void)EAAccessoryLeft:(id)arg0 ;
-(void)_OOBBTPairingCompletionStatusReceived:(id)arg0 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_cameraInfoUpdated:(id)arg0 ;
-(void)_checkForConnectedAccessories:(BOOL)arg0 backgroundTaskIdentifier:(NSUInteger)arg1 ;
-(void)_cleanUpForTaskSuspendWithTaskIdentifier:(NSUInteger)arg0 ;
-(void)_ephemerisURLAvailable:(id)arg0 ;
-(void)_externalAccessoryConnected:(id)arg0 ;
-(void)_externalAccessoryConnectedNotificationHandler:(id)arg0 ;
-(void)_externalAccessoryDisconnected:(id)arg0 ;
-(void)_externalAccessoryReconnected:(id)arg0 ;
-(void)_externalAccessoryUpdated:(id)arg0 ;
-(void)_gpsTimeRequested:(id)arg0 ;
-(void)_handleAccessoryNotificationTimeout:(id)arg0 ;
-(void)_iapServerDied:(id)arg0 ;
-(void)_integrateSequesteredAccessories;
-(void)_locationNmeaDataAvailable:(id)arg0 ;
-(void)_locationPointDataAvailable:(id)arg0 ;
-(void)_nmeaFilteringSupportChanged:(id)arg0 ;
-(void)_notifyObserversThatAccessoryDisconnectedWithUserInfo:(id)arg0 ;
-(void)_pointOfInterestStatusReceived:(id)arg0 ;
-(void)_removeAlliAPAccessoriesFromArray:(id)arg0 notifyClients:(BOOL)arg1 ;
-(void)_timeSyncInfoUpdated:(id)arg0 ;
-(void)_vehicleDataUpdated:(id)arg0 ;
-(void)accessibilityAction:(id)arg0 ;
-(void)accessibilityContextChange:(id)arg0 ;
-(void)accessibilityItemPropertyRequest:(id)arg0 ;
-(void)accessibilitySystemPropertyChange:(id)arg0 ;
-(void)accessibilitySystemPropertyRequest:(id)arg0 ;
-(void)accessoryClosedEASession:(id)arg0 ;
-(void)closeEASessionForEASessionUUID:(id)arg0 ;
-(void)closeInputStreamForEASessionUUID:(id)arg0 ;
-(void)createEASessionForProtocol:(id)arg0 accessoryUUID:(id)arg1 withReply:(id)arg2 ;
-(void)dealloc;
-(void)destinationSharingStatus:(BOOL)arg0 forDestinationUUID:(id)arg1 supportedParams:(id)arg2 forUUID:(id)arg3 ;
-(void)devicePicker:(id)arg0 didSelectAddress:(id)arg1 errorCode:(NSInteger)arg2 ;
-(void)disconnectIPAccessory:(id)arg0 ;
-(void)endSession:(unsigned int)arg0 forConnectionID:(unsigned int)arg1 ;
-(void)handleIncomingExternalAccessoryData:(id)arg0 forEASessionIdentifier:(id)arg1 withReply:(id)arg2 ;
-(void)initialEAAccessoriesAttachedAfterClientConnection:(id)arg0 ;
-(void)initiateConnectionToIPAccessory:(id)arg0 ;
-(void)nmeaSentenceArrived:(id)arg0 forAccessoryUUID:(id)arg1 ;
-(void)openCompleteForSession:(unsigned int)arg0 connectionID:(unsigned int)arg1 ;
-(void)openSessionFromAccessoryToApp:(id)arg0 ;
-(void)openSessionFromAppToAccessory:(id)arg0 ;
-(void)pointOfInterestSelection:(id)arg0 ;
-(void)registerForLocalNotifications;
-(void)requestIAPAccessoryWiFiCredentials:(id)arg0 ;
-(void)resumeEASessionData:(id)arg0 ;
-(void)saveEASession:(id)arg0 forEASessionUUID:(id)arg1 ;
-(void)sendDeviceIdentifierNotification:(id)arg0 usbIdentifier:(id)arg1 forUUID:(id)arg2 ;
-(void)sendGPRMCDataStatus:(BOOL)arg0 ValueV:(BOOL)arg1 ValueX:(BOOL)arg2 forUUID:(id)arg3 ;
-(void)sendNMEAFilterList:(id)arg0 forUUID:(id)arg1 ;
-(void)sendOutgoingEAData:(id)arg0 forSessionUUID:(id)arg1 ;
-(void)sendWiredCarPlayAvailable:(id)arg0 usbIdentifier:(id)arg1 wirelessCarPlayAvailable:(id)arg2 bluetoothIdentifier:(id)arg3 forUUID:(id)arg4 ;
-(void)setAreLocationAccessoriesEnabled:(BOOL)arg0 ;
-(void)setShouldAllowCppRuntime:(BOOL)arg0 ;
-(void)setShouldAllowInternalProtocols:(BOOL)arg0 ;
-(void)showBluetoothAccessoryPickerWithNameFilter:(id)arg0 completion:(id)arg1 ;
-(void)startDestinationSharingForUUID:(id)arg0 options:(NSUInteger)arg1 ;
-(void)startIPAccessoryDiscovery;
-(void)startLocationForConnectedAccessories;
-(void)stopDestinationSharingForUUID:(id)arg0 ;
-(void)stopIPAccessoryDiscovery;
-(void)stopLocationForConnectedAccessories;
-(void)unregisterForLocalNotifications;
-(void)updateAccessoryInfo:(id)arg0 ;
-(void)vehicleStatusUpdate:(id)arg0 forAccessoryUUID:(id)arg1 ;
-(void)wakeAccessoryWithToken:(id)arg0 ;


@end


#endif