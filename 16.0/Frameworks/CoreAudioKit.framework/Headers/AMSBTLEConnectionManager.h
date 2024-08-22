// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSBTLECONNECTIONMANAGER_H
#define AMSBTLECONNECTIONMANAGER_H

@class CBCentralManager, NSMutableArray, NSTimer, NSString;
@protocol CBCentralManagerDelegate, CBPeripheralDelegate, BTLEConnectionTable;

#import <Foundation/Foundation.h>


@interface AMSBTLEConnectionManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>

 {
    CBCentralManager *centralManager;
    NSMutableArray *connectedBTPeripherals;
    NSMutableArray *connectedAMSPeripherals;
    NSTimer *refreshTimer;
    NSTimer *connectionTimer;
    id<BTLEConnectionTable> *controller;
    NSInteger centralState;
    BOOL isAdvertising;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSMutableArray *peripheralList; // ivar: peripheralList
@property (readonly) Class superclass;


-(BOOL)isLECapableHardware;
-(BOOL)peripheralIsConnectedCentral:(id)arg0 ;
-(NSInteger)bluetoothState;
-(id)amsPeripheralForCBPeripheral:(id)arg0 ;
-(id)initWithUIController:(id)arg0 ;
-(unsigned int)midiDeviceForUUID:(id)arg0 ;
-(void)centralManager:(id)arg0 didConnectPeripheral:(id)arg1 ;
-(void)centralManager:(id)arg0 didDisconnectPeripheral:(id)arg1 error:(id)arg2 ;
-(void)centralManager:(id)arg0 didDiscoverPeripheral:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)centralManager:(id)arg0 didFailToConnectPeripheral:(id)arg1 error:(id)arg2 ;
-(void)centralManager:(id)arg0 didRetrievePeripherals:(id)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)checkAlreadyConnectedPeripherals;
-(void)connectionTimerFired:(id)arg0 ;
-(void)createPeripheralList;
-(void)dealloc;
-(void)killTimer;
-(void)peripheral:(id)arg0 didDiscoverCharacteristicsForService:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didDiscoverServices:(id)arg1 ;
-(void)peripheral:(id)arg0 didUpdateValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)removeAMSPeripheralForCBPeripheral:(id)arg0 ;
-(void)setUIController:(id)arg0 ;
-(void)startScan;
-(void)startTimer;
-(void)stopScan;
-(void)timerFired:(id)arg0 ;
-(void)updateAdvertisingState:(id)arg0 ;


@end


#endif