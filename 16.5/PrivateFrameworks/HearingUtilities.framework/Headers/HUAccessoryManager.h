// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUACCESSORYMANAGER_H
#define HUACCESSORYMANAGER_H

@class NSArray, CBCentralManager, NSString, NSMutableDictionary;
@protocol CBCentralManagerDelegate, CBPeripheralDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HUAccessoryManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>

 {
    BOOL _centralIsOn;
    BOOL _bluetoothAvailable;
    os_unfair_lock_s _syncLock;
    NSArray *_peripherals;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bluetoothCentralQueue; // ivar: _bluetoothCentralQueue
@property (retain, nonatomic) CBCentralManager *centralManager; // ivar: _centralManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSMutableDictionary *discoveryUpdates; // ivar: _discoveryUpdates
@property (readonly) NSUInteger hash;
@property (retain) NSMutableDictionary *loggingUpdates; // ivar: _loggingUpdates
@property (retain) NSArray *peripherals;
@property (readonly) Class superclass;
@property (retain) NSMutableDictionary *updateUpdates; // ivar: _updateUpdates
@property (retain) NSMutableDictionary *uuidToAddress; // ivar: _uuidToAddress


+(id)sharedInstance;
-(id)availableAddresses;
-(id)availableAddressesWithCharacteristicSupport:(id)arg0 ;
-(id)characteristicWithUUID:(id)arg0 forPeripheral:(id)arg1 ;
-(id)init;
-(id)sharedQueue;
-(void)bluetoothAvailabilityDidChange:(id)arg0 ;
-(void)centralManager:(id)arg0 connectionEventDidOccur:(NSInteger)arg1 forPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg0 didConnectPeripheral:(id)arg1 ;
-(void)centralManager:(id)arg0 didDisconnectPeripheral:(id)arg1 error:(id)arg2 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)discoverAccessories;
-(void)logMessage:(id)arg0 ;
-(void)peripheral:(id)arg0 didDiscoverCharacteristicsForService:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didDiscoverServices:(id)arg1 ;
-(void)peripheral:(id)arg0 didUpdateValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didWriteValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)readValueForCharacteristicUUID:(id)arg0 ;
// -(void)registerDiscoveryBlock:(id)arg0 withListener:(unk)arg1  ;
// -(void)registerLoggingBlock:(id)arg0 withListener:(unk)arg1  ;
// -(void)registerUpdateBlock:(id)arg0 withListener:(unk)arg1  ;
-(void)removeDiscoveredAccessories;
-(void)updateBluetoothAvailability;
-(void)writeValue:(id)arg0 forCharacteristicUUID:(id)arg1 andAddress:(id)arg2 ;


@end


#endif