// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLECONNECTION_H
#define BLECONNECTION_H

@class NSMutableDictionary, CBCentralManager, NSString, CBPeripheral, CBUUID;
@protocol CBCentralManagerDelegate, CBPeripheralDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface BleConnection : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>



@property (nonatomic) *void appState; // ivar: _appState
@property (retain, nonatomic) NSMutableDictionary *cachedPeripherals; // ivar: _cachedPeripherals
@property (retain, nonatomic) CBCentralManager *centralManager; // ivar: _centralManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *chipWorkQueue; // ivar: _chipWorkQueue
@property (readonly, nonatomic) unsigned char currentMode; // ivar: _currentMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) SetupDiscriminator deviceDiscriminator; // ivar: _deviceDiscriminator
@property (nonatomic) BOOL found; // ivar: _found
@property (readonly) NSUInteger hash;
@property (nonatomic) *BleLayer mBleLayer; // ivar: _mBleLayer
@property (nonatomic) *unk onConnectionComplete; // ivar: _onConnectionComplete
@property (nonatomic) *unk onConnectionError; // ivar: _onConnectionError
@property (retain, nonatomic) CBPeripheral *peripheral; // ivar: _peripheral
@property (nonatomic) *BleScannerDelegate scannerDelegate; // ivar: _scannerDelegate
@property (retain, nonatomic) CBUUID *shortServiceUUID; // ivar: _shortServiceUUID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(void)fillServiceWithCharacteristicUuids:(id)arg0 svcId:(struct ChipBleUUID *)arg1 charId:(struct ChipBleUUID *)arg2 ;
-(BOOL)checkDiscriminator:(unsigned short)arg0 ;
-(BOOL)isConnecting;
-(BOOL)isScanning;
-(BOOL)isScanningWithoutDelegate;
-(id)initWithDelegate:(struct BleScannerDelegate *)arg0 queue:(id)arg1 ;
-(id)initWithDiscriminator:(struct SetupDiscriminator *)arg0 queue:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(void)centralManager:(id)arg0 didConnectPeripheral:(id)arg1 ;
-(void)centralManager:(id)arg0 didDiscoverPeripheral:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)connect:(id)arg0 ;
-(void)dispatchConnectionComplete:(id)arg0 ;
-(void)dispatchConnectionError:(struct ChipError )arg0 ;
-(void)peripheral:(id)arg0 didDiscoverCharacteristicsForService:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didDiscoverServices:(id)arg1 ;
-(void)peripheral:(id)arg0 didUpdateNotificationStateForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didUpdateValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didWriteValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)setBleLayer:(struct BleLayer *)arg0 ;
-(void)start;
-(void)startScanning;
-(void)stop;
-(void)stopScanning;
-(void)updateWithDelegate:(struct BleScannerDelegate *)arg0 ;
-(void)updateWithDiscriminator:(struct SetupDiscriminator *)arg0 ;
-(void)updateWithPeripheral:(id)arg0 ;


@end


#endif