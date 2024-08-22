// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHEALTHSERVICESMANAGER_H
#define HKHEALTHSERVICESMANAGER_H

@class NSString, NSMutableDictionary, NSMutableSet;
@protocol _HKXPCExportable, HKHealthServicesManagerClientInterface;

#import <Foundation/Foundation.h>

#import "HKProxyProvider.h"

@interface HKHealthServicesManager : NSObject <_HKXPCExportable, HKHealthServicesManagerClientInterface>

 {
    HKProxyProvider *_proxyProvider;
}


@property (copy, nonatomic) id *bluetoothStatusHandler; // ivar: _bluetoothStatusHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *discoveries; // ivar: _discoveries
@property (retain, nonatomic) NSMutableSet *discoveriesEnded; // ivar: _discoveriesEnded
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *sessions; // ivar: _sessions
@property (retain, nonatomic) NSMutableSet *sessionsEnded; // ivar: _sessionsEnded
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)activeHealthServiceDiscoveries;
-(id)activeHealthServiceSessions;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)initWithWeakHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(id)startAllHealthServicesDiscoveryWithHandler:(id)arg0 ;
-(void)_addEndedDiscovery:(id)arg0 ;
-(void)_addEndedSession:(id)arg0 ;
// -(void)_fetchHealthServicesServerProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)_fetchSupportedServiceIDsWithCompletion:(id)arg0 ;
-(void)_startHealthServiceExtendedDiscovery:(id)arg0 withHandler:(id)arg1 ;
-(void)addHealthServicePairing:(id)arg0 withCompletion:(id)arg1 ;
-(void)clientRemote_deliverBluetoothStatus:(NSInteger)arg0 withError:(id)arg1 ;
-(void)clientRemote_deliverDiscoveryHealthService:(id)arg0 toClient:(NSUInteger)arg1 finished:(BOOL)arg2 withError:(id)arg3 ;
-(void)clientRemote_deliverSessionCharacteristics:(id)arg0 forService:(id)arg1 toClient:(NSUInteger)arg2 withError:(id)arg3 ;
-(void)clientRemote_deliverSessionHealthServiceStatus:(NSInteger)arg0 toClient:(NSUInteger)arg1 finished:(BOOL)arg2 withError:(id)arg3 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)endBluetoothStatusUpdates;
-(void)endHealthServiceDiscovery:(id)arg0 ;
-(void)endHealthServiceSession:(id)arg0 ;
-(void)getEnabledStatusForPeripheral:(id)arg0 withCompletion:(id)arg1 ;
-(void)getHealthServiceProperty:(id)arg0 forSession:(id)arg1 withHandler:(id)arg2 ;
-(void)getHealthServicePropertyNamesWithHandler:(id)arg0 ;
-(void)healthPeripheralsWithFilter:(NSUInteger)arg0 handler:(id)arg1 ;
-(void)healthServicePairingsWithHandler:(id)arg0 ;
-(void)performHealthServiceOperation:(id)arg0 onSession:(id)arg1 withParameters:(id)arg2 completion:(id)arg3 ;
-(void)registerPeripheralIdentifier:(id)arg0 name:(id)arg1 services:(id)arg2 withCompletion:(id)arg3 ;
-(void)removeHealthServicePairing:(id)arg0 withCompletion:(id)arg1 ;
-(void)setEnabledStatus:(BOOL)arg0 forPeripheral:(id)arg1 withCompletion:(id)arg2 ;
-(void)startBluetoothStatusUpdates:(id)arg0 ;
-(void)startHealthServiceDiscovery:(id)arg0 withHandler:(id)arg1 ;
-(void)startHealthServiceSession:(id)arg0 withHandler:(id)arg1 ;
-(void)unregisterPeripheralIdentifier:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif