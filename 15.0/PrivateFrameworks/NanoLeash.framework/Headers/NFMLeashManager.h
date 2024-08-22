// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFMLEASHMANAGER_H
#define NFMLEASHMANAGER_H

@class CBCentralManager, NSString, CBPeripheral, CBScalablePipe, CBScalablePipeManager;
@protocol CBCentralManagerDelegate, CBPeripheralDelegate, CBScalablePipeManagerDelegate, OS_dispatch_queue, NFMLLeashBreakDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface NFMLeashManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate, CBScalablePipeManagerDelegate>

 {
    id *_proximityChangeHandler;
    NSObject<OS_dispatch_queue> *_centralQueue;
}


@property (retain, nonatomic) CBCentralManager *centralManager; // ivar: _centralManager
@property (nonatomic) NSInteger centralPhase; // ivar: _centralPhase
@property (nonatomic) BOOL connected; // ivar: _connected
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CBPeripheral *discoveredPeripheral; // ivar: _discoveredPeripheral
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalQueue; // ivar: _externalQueue
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<NFMLLeashBreakDelegate> *leashDelegate; // ivar: _leashDelegate
@property (retain, nonatomic) NSObject<OS_dispatch_source> *leashDispatchSourceTimer; // ivar: _leashDispatchSourceTimer
@property (copy, nonatomic) NSString *leashIdentifier; // ivar: _leashIdentifier
@property (nonatomic) NSInteger leashMode; // ivar: _leashMode
@property (nonatomic) BOOL needsToScanForPeripheral; // ivar: _needsToScanForPeripheral
@property (retain, nonatomic) CBPeripheral *peripheral; // ivar: _peripheral
@property (retain, nonatomic) CBScalablePipe *pipe; // ivar: _pipe
@property (retain, nonatomic) CBScalablePipeManager *pipeManager; // ivar: _pipeManager
@property (copy, nonatomic) NSString *serviceUUID; // ivar: _serviceUUID
@property (readonly) Class superclass;
@property (nonatomic) BOOL testMode; // ivar: _testMode


-(id)init;
-(void)beginMonitoringLeash;
-(void)centralManager:(id)arg0 didConnectPeripheral:(id)arg1 ;
-(void)centralManager:(id)arg0 didDiscoverPeripheral:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)centralManager:(id)arg0 didFailToConnectPeripheral:(id)arg1 error:(id)arg2 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)connect;
-(void)dealloc;
-(void)leashTest;
-(void)peripheralDidUpdateRSSI:(id)arg0 error:(id)arg1 ;
-(void)scalablePipeManager:(id)arg0 didRegisterEndpoint:(id)arg1 error:(id)arg2 ;
-(void)scalablePipeManager:(id)arg0 didUnregisterEndpoint:(id)arg1 ;
-(void)scalablePipeManager:(id)arg0 pipeDidConnect:(id)arg1 ;
-(void)scalablePipeManager:(id)arg0 pipeDidDisconnect:(id)arg1 error:(id)arg2 ;
-(void)scalablePipeManagerDidUpdateState:(id)arg0 ;
-(void)setDelegate:(id)arg0 queue:(id)arg1 ;
-(void)setProximityChangeHandler:(id)arg0 ;
-(void)stopMonitoringLeash;
-(void)update:(id)arg0 ;


@end


#endif