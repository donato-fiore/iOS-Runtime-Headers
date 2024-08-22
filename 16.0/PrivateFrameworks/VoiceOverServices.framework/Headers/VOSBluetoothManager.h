// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VOSBLUETOOTHMANAGER_H
#define VOSBLUETOOTHMANAGER_H

@class NSMutableDictionary, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface VOSBluetoothManager : NSObject {
    *BTLocalDeviceImpl _localDevice;
    *BTSessionImpl _session;
    NSInteger _available;
    BOOL _audioConnected;
    BOOL _scanningEnabled;
    *BTDiscoveryAgentImpl _discoveryAgent;
    *BTPairingAgentImpl _pairingAgent;
    NSMutableDictionary *_btAddrDict;
    NSMutableDictionary *_btDeviceDict;
    BOOL _wantsScanningEnabled;
    BOOL _wantsDiscoveryEnabled;
    NSDictionary *_brailleDriverDeviceDetectionInfo;
}


@property (nonatomic) unsigned int authorizedServices; // ivar: _authorizedServices
@property (readonly, nonatomic) NSArray *connectingDevices;
@property (readonly, nonatomic) NSArray *pairedBrailleDevices;
@property (readonly, nonatomic) NSArray *pairedDevices;


+(id)sharedInstance;
+(int)lastInitError;
-(BOOL)_attach:(id)arg0 ;
-(BOOL)_onlySensorsConnected;
-(BOOL)_setup:(struct BTSessionImpl *)arg0 ;
-(BOOL)audioConnected;
-(BOOL)available;
-(BOOL)connectable;
-(BOOL)connected;
-(BOOL)devicePairingEnabled;
-(BOOL)deviceScanningEnabled;
-(BOOL)enabled;
-(BOOL)isAnyoneScanning;
-(BOOL)isDiscoverable;
-(BOOL)isServiceSupported:(unsigned int)arg0 ;
-(BOOL)isValidBrailleDevice:(id)arg0 ;
-(BOOL)powered;
-(BOOL)setEnabled:(BOOL)arg0 ;
-(BOOL)setPowered:(BOOL)arg0 ;
-(BOOL)wasDeviceDiscovered:(id)arg0 ;
-(NSInteger)powerState;
-(id)addDeviceIfNeeded:(struct BTDeviceImpl *)arg0 ;
-(id)alertControllerWithVOSBluetoothResult:(NSUInteger)arg0 device:(id)arg1 buttonHandler:(id)arg2 ;
-(id)deviceForAddressString:(id)arg0 ;
-(id)init;
-(unsigned int)authorizedServicesForDevice:(id)arg0 ;
-(void)_cleanup:(BOOL)arg0 ;
-(void)_connectabilityChanged;
-(void)_connectedStatusChanged;
-(void)_discoveryStateChanged;
-(void)_postNotification:(id)arg0 ;
-(void)_postNotificationWithArray:(id)arg0 ;
-(void)_powerChanged;
-(void)_removeDevice:(id)arg0 ;
-(void)_restartScan;
-(void)_setDiscoveryAgentScanning:(BOOL)arg0 ;
-(void)acceptSSP:(int)arg0 forDevice:(id)arg1 ;
-(void)cancelPairing;
-(void)connectDevice:(id)arg0 ;
-(void)connectDevice:(id)arg0 withServices:(unsigned int)arg1 ;
-(void)dealloc;
-(void)postNotification:(id)arg0 ;
-(void)postNotificationName:(id)arg0 object:(id)arg1 ;
-(void)postNotificationName:(id)arg0 object:(id)arg1 error:(id)arg2 ;
-(void)resetDeviceScanning;
-(void)setAudioConnected:(BOOL)arg0 ;
-(void)setConnectable:(BOOL)arg0 ;
-(void)setDevicePairingEnabled:(BOOL)arg0 ;
-(void)setDeviceScanningEnabled:(BOOL)arg0 ;
-(void)setDiscoverable:(BOOL)arg0 ;
-(void)setPincode:(id)arg0 forDevice:(id)arg1 ;
-(void)unpairDevice:(id)arg0 ;


@end


#endif