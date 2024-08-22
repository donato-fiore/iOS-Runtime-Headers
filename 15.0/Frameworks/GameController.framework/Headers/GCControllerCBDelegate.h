// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GCCONTROLLERCBDELEGATE_H
#define GCCONTROLLERCBDELEGATE_H

@class NSMutableArray, CBCentralManager, NSString;
@protocol CBCentralManagerDelegate, CBPeripheralDelegate;

#import <Foundation/Foundation.h>


@interface GCControllerCBDelegate : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>

 {
    NSMutableArray *_foundPeripherals;
    NSMutableArray *_connectedPeripherals;
}


@property (retain, nonatomic) CBCentralManager *centralManager; // ivar: _centralManager
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)centralManager:(id)arg0 didConnectPeripheral:(id)arg1 ;
-(void)centralManager:(id)arg0 didDisconnectPeripheral:(id)arg1 error:(id)arg2 ;
-(void)centralManager:(id)arg0 didDiscoverPeripheral:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)centralManager:(id)arg0 didFailToConnectPeripheral:(id)arg1 error:(id)arg2 ;
-(void)centralManager:(id)arg0 didRetrieveConnectedPeripherals:(id)arg1 ;
-(void)centralManager:(id)arg0 didRetrievePeripherals:(id)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)fireCompletionHandler;
-(void)peripheral:(id)arg0 didDiscoverCharacteristicsForService:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didDiscoverDescriptorsForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didDiscoverIncludedServicesForService:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didDiscoverServices:(id)arg1 ;
-(void)peripheral:(id)arg0 didUpdateValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didUpdateValueForDescriptor:(id)arg1 error:(id)arg2 ;
-(void)startScan;
-(void)startScanWithTimeout:(CGFloat)arg0 ;
-(void)stopScan;


@end


#endif