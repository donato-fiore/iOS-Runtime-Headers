// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHEALTHSERVICEMANAGER_H
#define HDHEALTHSERVICEMANAGER_H

@class CBCentralManager, NSLock, NSMutableDictionary, NSSet, CBUUID, NSString;
@protocol CBCentralManagerPrivateDelegate, CBPairingAgentDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "HDDataCollectionManager.h"
#import "HDProfile.h"
#import "HDIdentifierTable.h"

@interface HDHealthServiceManager : NSObject <CBCentralManagerPrivateDelegate, CBPairingAgentDelegate>

 {
    int _privacyNotificationToken;
    CBCentralManager *_central;
    NSObject<OS_dispatch_queue> *_queue;
    HDDataCollectionManager *_dataCollectionManager;
    HDProfile *_profile;
    NSLock *_discoveryLock;
    HDIdentifierTable *_discoveryInfosTable;
    NSMutableDictionary *_discoveryInfosByServiceUUID;
    NSSet *_scanServiceUUIDs;
    CBUUID *_allServicesUUID;
    NSLock *_connectionLock;
    HDIdentifierTable *_connectionInfosTable;
    NSMutableDictionary *_connectionInfosByPeripheralUUID;
    NSMutableDictionary *_connectedPeripheralsByPeripheralUUID;
    NSMutableDictionary *_bluetoothUpdateHandlers;
    NSObject<OS_dispatch_source> *_privateModeTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)healthUpdatesEnabledFromDevice:(id)arg0 error:(*id)arg1 ;
-(BOOL)setHealthUpdatesEnabled:(BOOL)arg0 fromDevice:(id)arg1 error:(*id)arg2 ;
// -(NSUInteger)connectHealthService:(id)arg0 connectionOptions:(NSUInteger)arg1 sessionHandler:(id)arg2 dataHandler:(unk)arg3 mfaSuccessHandler:(id)arg4 autoPairData:(unk)arg5 error:(id)arg6  ;
// -(NSUInteger)connectHealthService:(id)arg0 sessionHandler:(id)arg1 dataHandler:(unk)arg2 characteristicsHandler:(id)arg3 error:(unk)arg4  ;
// -(NSUInteger)connectHealthService:(id)arg0 sessionHandler:(id)arg1 dataHandler:(unk)arg2 error:(id)arg3  ;
// -(NSUInteger)discoverHealthServicesWithType:(NSInteger)arg0 timeout:(NSUInteger)arg1 alwaysNotify:(BOOL)arg2 handler:(id)arg3 error:(unk)arg4  ;
-(id)_healthServiceForPeriperalID:(id)arg0 serviceType:(NSInteger)arg1 ;
-(id)allServicesWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)initWithProfile:(id)arg0 centralManager:(id)arg1 queue:(id)arg2 ;
-(id)retrieveOOBData:(*id)arg0 ;
-(id)reviewSavedHealthServiceSessionsWithError:(*id)arg0 ;
-(void)centralManager:(id)arg0 didConnectPeripheral:(id)arg1 ;
-(void)centralManager:(id)arg0 didDisconnectPeripheral:(id)arg1 error:(id)arg2 ;
-(void)centralManager:(id)arg0 didDiscoverPeripheral:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)centralManager:(id)arg0 didFailToConnectPeripheral:(id)arg1 error:(id)arg2 ;
-(void)centralManager:(id)arg0 willRestoreState:(id)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)characteristicReceived:(id)arg0 device:(id)arg1 ;
-(void)dealloc;
-(void)disconnectHealthService:(NSUInteger)arg0 ;
-(void)discoveredCharacteristics:(id)arg0 forDevice:(id)arg1 service:(id)arg2 ;
-(void)discoveredServices:(id)arg0 forPeripheral:(id)arg1 ;
-(void)enablePrivateModeForSessionWithIdentifier:(id)arg0 ;
-(void)getProperty:(id)arg0 forSession:(NSUInteger)arg1 withHandler:(id)arg2 ;
-(void)getSupportedPropertyNamesWithHandler:(id)arg0 ;
-(void)pairingAgent:(id)arg0 peerDidCompletePairing:(id)arg1 ;
-(void)pairingAgent:(id)arg0 peerDidFailToCompletePairing:(id)arg1 error:(id)arg2 ;
-(void)pairingAgent:(id)arg0 peerDidRequestPairing:(id)arg1 type:(NSInteger)arg2 passkey:(id)arg3 ;
-(void)pairingAgent:(id)arg0 peerDidUnpair:(id)arg1 ;
-(void)performOperation:(id)arg0 onSession:(NSUInteger)arg1 withParameters:(id)arg2 completion:(id)arg3 ;
-(void)releasePrivateMode;
-(void)resetOOBState;
// -(void)sendBluetoothStatusUpdatesForServer:(id)arg0 updateHandler:(id)arg1 completion:(unk)arg2  ;
-(void)servicesInvalidatedForDevice:(id)arg0 withError:(id)arg1 ;
-(void)stopDiscoveryWithIdentifier:(NSUInteger)arg0 ;
-(void)unpairHealthServiceIfNecessary:(id)arg0 ;
-(void)writeCharacteristic:(id)arg0 onSession:(NSUInteger)arg1 expectResponse:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif