// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDHEALTHSERVICESSERVER_H
#define HDHEALTHSERVICESSERVER_H

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol HKHealthServicesServerInterface, OS_dispatch_queue;


#import "HDStandardTaskServer.h"
#import "HDHealthServiceManager.h"
#import "HDIdentifierTable.h"

@interface HDHealthServicesServer : HDStandardTaskServer <HKHealthServicesServerInterface>

 {
    HDHealthServiceManager *_healthServiceManager;
    NSObject<OS_dispatch_queue> *_queue;
    HDIdentifierTable *_healthServiceDiscoveryServerIDs;
    NSMutableDictionary *_healthServiceDiscoveryClientIDs;
    HDIdentifierTable *_healthDeviceSessionServerIDs;
    NSMutableDictionary *_healthServiceSessionClientIDs;
    NSMutableSet *_healthServiceClosedSessionServerIDs;
    NSMutableSet *_healthServiceClosedSessionClientIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)connectionInterrupted;
-(void)remote_addPairingForHealthService:(id)arg0 withCompletion:(id)arg1 ;
-(void)remote_addPeripheral:(id)arg0 name:(id)arg1 forServices:(id)arg2 withCompletion:(id)arg3 ;
-(void)remote_beginBluetoothStatusUpdates:(id)arg0 ;
-(void)remote_endBluetoothStatusUpdates;
-(void)remote_endHealthServiceDiscovery:(NSUInteger)arg0 ;
-(void)remote_endHealthServiceSession:(NSUInteger)arg0 ;
-(void)remote_fetchSupportedServiceIDsWithCompletion:(id)arg0 ;
-(void)remote_getEnabledStatusForPeripheral:(id)arg0 withCompletion:(id)arg1 ;
-(void)remote_getHealthPeripheralsWithFilter:(NSUInteger)arg0 handler:(id)arg1 ;
-(void)remote_getHealthServiceProperty:(id)arg0 forSession:(NSUInteger)arg1 withHandler:(id)arg2 ;
-(void)remote_getSupportedPropertyNamesWithHandler:(id)arg0 ;
-(void)remote_performHealthServiceOperation:(id)arg0 onSession:(NSUInteger)arg1 withParameters:(id)arg2 completion:(id)arg3 ;
-(void)remote_removePairingForHealthService:(id)arg0 withCompletion:(id)arg1 ;
-(void)remote_removePeripheral:(id)arg0 withCompletion:(id)arg1 ;
-(void)remote_setEnabledStatus:(BOOL)arg0 forPeripheral:(id)arg1 withCompletion:(id)arg2 ;
-(void)remote_startHealthServiceDiscovery:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)remote_startHealthServiceSession:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif