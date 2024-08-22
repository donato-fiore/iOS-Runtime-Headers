// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPDISCOVERYMANAGER_H
#define PPDISCOVERYMANAGER_H

@class CBCentralManager, NSString;
@protocol CBCentralManagerDelegate, PPDiscoveryManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PPDiscoveryManager : NSObject <CBCentralManagerDelegate>



@property (nonatomic) BOOL bluetoothIsScanning; // ivar: _bluetoothIsScanning
@property (retain, nonatomic) CBCentralManager *central; // ivar: _central
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSObject<PPDiscoveryManagerDelegate> *discoveryDelegate; // ivar: _discoveryDelegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *discoveryQueue; // ivar: _discoveryQueue
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger signalLimitOverride; // ivar: _signalLimitOverride
@property (readonly) Class superclass;


+(BOOL)isBluetoothConnected:(NSInteger)arg0 ;
+(BOOL)isBluetoothPoweredOn:(NSInteger)arg0 ;
+(id)sharedDiscoveryManager;
-(id)init;
-(void)begin;
-(void)beginDiscovery;
-(void)centralManager:(id)arg0 didDiscoverPeripheral:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)end;
-(void)forceEndDiscovery;
-(void)updateFromBTState:(NSInteger)arg0 ;


@end


#endif