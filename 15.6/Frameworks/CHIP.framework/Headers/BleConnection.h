// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLECONNECTION_H
#define BLECONNECTION_H

@class CBCentralManager, NSString, CBPeripheral, CBUUID;
@protocol CBCentralManagerDelegate, CBPeripheralDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface BleConnection : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>



@property (nonatomic) *void appState; // ivar: _appState
@property (retain, nonatomic) CBCentralManager *centralManager; // ivar: _centralManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *chipWorkQueue; // ivar: _chipWorkQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short deviceDiscriminator; // ivar: _deviceDiscriminator
@property (nonatomic) BOOL found; // ivar: _found
@property (readonly) NSUInteger hash;
@property (nonatomic) *BleLayer mBleLayer; // ivar: _mBleLayer
@property (nonatomic) *unk onConnectionComplete; // ivar: _onConnectionComplete
@property (nonatomic) *unk onConnectionError; // ivar: _onConnectionError
@property (retain, nonatomic) CBPeripheral *peripheral; // ivar: _peripheral
@property (retain, nonatomic) CBUUID *shortServiceUUID; // ivar: _shortServiceUUID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(void)fillServiceWithCharacteristicUuids:(id)arg0 svcId:(struct ChipBleUUID *)arg1 charId:(struct ChipBleUUID *)arg2 ;
-(BOOL)checkDiscriminator:(unsigned short)arg0 ;
-(id)initWithDiscriminator:(unsigned short)arg0 ;
-(void)centralManager:(id)arg0 didConnectPeripheral:(id)arg1 ;
-(void)centralManager:(id)arg0 didDiscoverPeripheral:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)connect:(id)arg0 ;
-(void)disconnect;
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


@end


#endif