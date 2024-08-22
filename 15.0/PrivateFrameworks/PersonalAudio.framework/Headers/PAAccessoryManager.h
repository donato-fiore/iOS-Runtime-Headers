// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAACCESSORYMANAGER_H
#define PAACCESSORYMANAGER_H

@class CBCentralManager, NSString, NSArray, NSMutableDictionary;
@protocol CBCentralManagerDelegate, CBPeripheralDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PAAccessoryManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>

 {
    BOOL _centralIsOn;
    BOOL _bluetoothAvailable;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bluetoothCentralQueue; // ivar: _bluetoothCentralQueue
@property (retain, nonatomic) CBCentralManager *centralManager; // ivar: _centralManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *peripherals; // ivar: _peripherals
@property (nonatomic) BOOL shouldSendUpdate; // ivar: _shouldSendUpdate
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *uuidToAddress; // ivar: _uuidToAddress


+(id)sharedInstance;
-(id)init;
-(id)pseCharacteristicForPeripheral:(id)arg0 ;
-(void)bluetoothAvailabilityDidChange:(id)arg0 ;
-(void)centralManager:(id)arg0 connectionEventDidOccur:(NSInteger)arg1 forPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg0 didConnectPeripheral:(id)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)discoverAccessories;
-(void)peripheral:(id)arg0 didDiscoverCharacteristicsForService:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didDiscoverServices:(id)arg1 ;
-(void)peripheral:(id)arg0 didUpdateValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didWriteValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)sendUpdateToAccessory;
-(void)updateBluetoothAvailability;


@end


#endif