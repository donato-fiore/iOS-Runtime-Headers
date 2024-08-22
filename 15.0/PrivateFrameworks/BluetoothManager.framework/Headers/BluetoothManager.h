// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLUETOOTHMANAGER_H
#define BLUETOOTHMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface BluetoothManager : NSObject {
    *BTLocalDeviceImpl _localDevice;
    *BTSessionImpl _session;
    int _available;
    int _state;
    BOOL _airplaneMode;
    BOOL _audioConnected;
    BOOL _scanningEnabled;
    BOOL _scanningInProgress;
    unsigned int _scanningServiceMask;
    *BTDiscoveryAgentImpl _discoveryAgent;
    *BTPairingAgentImpl _pairingAgent;
    *BTAccessoryManagerImpl _accessoryManager;
    NSMutableDictionary *_btAddrDict;
    NSMutableDictionary *_btDeviceDict;
}


@property (nonatomic) BOOL blacklistEnabled; // ivar: _blacklistEnabled


+(id)sharedInstance;
+(int)lastInitError;
+(void)setSharedInstanceQueue:(id)arg0 ;
-(BOOL)_attach;
-(BOOL)_setup:(struct BTSessionImpl *)arg0 ;
-(BOOL)audioConnected;
-(BOOL)available;
-(BOOL)connectable;
-(BOOL)connected;
-(BOOL)devicePairingEnabled;
-(BOOL)deviceScanningEnabled;
-(BOOL)deviceScanningInProgress;
-(BOOL)enabled;
-(BOOL)isAnyoneAdvertising;
-(BOOL)isAnyoneScanning;
-(BOOL)isDiscoverable;
-(BOOL)isServiceSupported:(unsigned int)arg0 ;
-(BOOL)powered;
-(BOOL)setEnabled:(BOOL)arg0 ;
-(BOOL)setPowered:(BOOL)arg0 ;
-(BOOL)wasDeviceDiscovered:(id)arg0 ;
-(id)addDeviceIfNeeded:(struct BTDeviceImpl *)arg0 ;
-(id)connectedDeviceNamesThatMayBeBlacklisted;
-(id)connectedDevices;
-(id)connectingDevices;
-(id)deviceFromAddressString:(id)arg0 ;
-(id)deviceFromIdentifier:(id)arg0 ;
-(id)init;
-(id)localAddress;
-(id)pairedDevices;
-(id)pairedNonAppleHAEDevices;
-(int)bluetoothState;
-(int)maskLocalDeviceEvents:(unsigned int)arg0 ;
-(int)powerState;
-(struct BTAccessoryManagerImpl *)_accessoryManager;
-(void)_advertisingChanged;
-(void)_cleanup:(BOOL)arg0 ;
-(void)_connectabilityChanged;
-(void)_connectedStatusChanged;
-(void)_discoveryStateChanged;
-(void)_notifyFirstDeviceUnlockCompleted;
-(void)_pairedStatusChanged;
-(void)_postNotification:(id)arg0 ;
-(void)_postNotificationWithArray:(id)arg0 ;
-(void)_powerChanged;
-(void)_removeDevice:(id)arg0 ;
-(void)_restartScan;
-(void)_scanForServices:(unsigned int)arg0 withMode:(int)arg1 ;
-(void)_setScanState:(int)arg0 ;
-(void)_updateAirplaneModeStatus;
-(void)_updateBlacklistMode;
-(void)_updateBluetoothState;
-(void)acceptSSP:(NSInteger)arg0 forDevice:(id)arg1 ;
-(void)bluetoothStateAction;
-(void)bluetoothStateActionWithCompletion:(id)arg0 ;
-(void)cancelPairing;
-(void)connectDevice:(id)arg0 ;
-(void)connectDevice:(id)arg0 withServices:(unsigned int)arg1 ;
-(void)dealloc;
-(void)disconnectDevice:(id)arg0 ;
-(void)disconnectDevicePhysicalLink:(id)arg0 ;
-(void)enableTestMode;
-(void)endVoiceCommand:(id)arg0 ;
-(void)postNotification:(id)arg0 ;
-(void)postNotificationName:(id)arg0 object:(id)arg1 ;
-(void)postNotificationName:(id)arg0 object:(id)arg1 error:(id)arg2 ;
-(void)resetDeviceScanning;
-(void)scanForConnectableDevices:(unsigned int)arg0 ;
-(void)scanForServices:(unsigned int)arg0 ;
-(void)setAudioConnected:(BOOL)arg0 ;
-(void)setConnectable:(BOOL)arg0 ;
-(void)setDevicePairingEnabled:(BOOL)arg0 ;
-(void)setDeviceScanningEnabled:(BOOL)arg0 ;
-(void)setDiscoverable:(BOOL)arg0 ;
-(void)setPincode:(id)arg0 forDevice:(id)arg1 ;
-(void)showPowerPrompt;
-(void)startVoiceCommand:(id)arg0 ;
-(void)unpairDevice:(id)arg0 ;


@end


#endif