// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BTAIRPODSCONTROLSERVICECLIENT_H
#define BTAIRPODSCONTROLSERVICECLIENT_H

@class CBCharacteristic, CBUUID, CBService, CBCentralManager, NSUUID, CBPeripheral, NSMutableArray, NSString, CBDevice;
@protocol CBCentralManagerDelegate, CBPeripheralDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BTAirPodsControlRequest.h"

@interface BTAirPodsControlServiceClient : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>

 {
    CBCharacteristic *_airpodsCaseControlCharacteristicObj;
    CBUUID *_airpodsCaseControlCharacteristicUUID;
    CBService *_airpodsCaseControlServiceObj;
    CBUUID *_airpodsCaseControlServiceUUID;
    CBCentralManager *_centralManager;
    BOOL _connected;
    BOOL _invalidateCalled;
    NSUUID *_peerUUID;
    CBPeripheral *_peripheral;
    NSMutableArray *_requestArray;
    BTAirPodsControlRequest *_requestCurrent;
    int _state;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceSN; // ivar: _deviceSN
@property (retain, nonatomic) NSString *deviceUUID; // ivar: _deviceUUID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CBDevice *peerDevice; // ivar: _peerDevice
@property (readonly) Class superclass;


-(BOOL)_runConnectStart;
-(BOOL)_runDiscoverCharacteristicsStart;
-(BOOL)_runDiscoverServicesStart;
-(BOOL)_runInit;
-(BOOL)isFindmyManaged;
-(id)init;
-(void)_abortRequestsWithError:(id)arg0 ;
-(void)_completeRequest:(id)arg0 error:(id)arg1 ;
-(void)_invalidate;
-(void)_reportError:(id)arg0 ;
-(void)_run;
-(void)_runProcessRequest:(id)arg0 ;
-(void)_runProcessRequests;
-(void)_setupTimeoutForRequest:(id)arg0 ;
-(void)centralManager:(id)arg0 didConnectPeripheral:(id)arg1 ;
-(void)centralManager:(id)arg0 didFailToConnectPeripheral:(id)arg1 error:(id)arg2 ;
-(void)centralManager:(id)arg0 didUpdateFindMyPeripherals:(id)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)getSilentModeWithCompletionHandler:(id)arg0 ;
-(void)invalidate;
-(void)peripheral:(id)arg0 didDiscoverCharacteristicsForService:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didDiscoverServices:(id)arg1 ;
-(void)peripheral:(id)arg0 didUpdateNotificationStateForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didUpdateValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didWriteValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)setSilentMode:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif