// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPCBLEECHSCANNER_H
#define SPCBLEECHSCANNER_H

@class CBCentralManager, NSString, FMQueueSynchronizer, FMXPCServiceDescription, FMXPCSession;
@protocol CBCentralManagerDelegate, SPCBPeripheralManagementXPCProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SPCBLeechScanner : NSObject <CBCentralManagerDelegate>



@property (retain, nonatomic) CBCentralManager *centralManager; // ivar: _centralManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isScanning; // ivar: _isScanning
@property (nonatomic) int notifyToken; // ivar: _notifyToken
@property (retain, nonatomic) NSObject<SPCBPeripheralManagementXPCProtocol> *proxy; // ivar: _proxy
@property (retain, nonatomic) FMQueueSynchronizer *queueSynchronizer; // ivar: _queueSynchronizer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription; // ivar: _serviceDescription
@property (retain, nonatomic) FMXPCSession *session; // ivar: _session
@property (readonly) Class superclass;


+(id)remoteInterface;
-(id)init;
-(void)centralManager:(id)arg0 didDiscoverPeripheral:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)handleStateChange:(NSUInteger)arg0 ;
-(void)interruptionHandler:(id)arg0 ;
-(void)invalidationHandler:(id)arg0 ;
-(void)startScanning;
-(void)stopScanning;


@end


#endif