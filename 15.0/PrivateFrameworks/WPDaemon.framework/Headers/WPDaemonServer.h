// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WPDAEMONSERVER_H
#define WPDAEMONSERVER_H

@class NSMutableDictionary, NSMapTable, NSString, NSXPCListener, NSArray, NSMutableSet;
@protocol NSXPCListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WPDAdvertisingManager.h"
#import "WPDObjectDiscoveryManager.h"
#import "WPDPersistence.h"
#import "WPDPipeManager.h"
#import "WPDScanManager.h"
#import "WPDClient.h"
#import "WPDStatsManager.h"
#import "WPDState.h"
#import "WPDZoneManager.h"

@interface WPDaemonServer : NSObject <NSXPCListenerDelegate>



@property (retain) WPDAdvertisingManager *advertisingManager; // ivar: _advertisingManager
@property (nonatomic) NSInteger cbState; // ivar: _cbState
@property (retain) NSMutableDictionary *clients; // ivar: _clients
@property (retain) NSMapTable *clientsWithMach; // ivar: _clientsWithMach
@property unsigned char coreBluetoothState; // ivar: _coreBluetoothState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int firstUnlockStatusChangedToken; // ivar: _firstUnlockStatusChangedToken
@property (readonly) NSUInteger hash;
@property BOOL isTesting; // ivar: _isTesting
@property (retain) NSXPCListener *listener; // ivar: _listener
@property (nonatomic) int lockStatusChangedToken; // ivar: _lockStatusChangedToken
@property (retain, nonatomic) NSArray *managers; // ivar: _managers
@property (retain) WPDObjectDiscoveryManager *objectDiscoveryManager; // ivar: _objectDiscoveryManager
@property (retain) WPDPersistence *persistence; // ivar: _persistence
@property (retain) WPDPipeManager *pipeManager; // ivar: _pipeManager
@property (retain) NSMutableSet *privilegedClients; // ivar: _privilegedClients
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) WPDScanManager *scanManager; // ivar: _scanManager
@property BOOL screenOff; // ivar: _screenOff
@property (nonatomic) int screenStateToken; // ivar: _screenStateToken
@property (retain) NSObject<OS_dispatch_queue> *serverQueue; // ivar: _serverQueue
@property (readonly) WPDClient *spObjectDiscoveryClient; // ivar: _spObjectDiscoveryClient
@property (retain, nonatomic) WPDStatsManager *statsManager; // ivar: _statsManager
@property (readonly) Class superclass;
@property BOOL systemLocked; // ivar: _systemLocked
@property (retain) NSMutableSet *testClients; // ivar: _testClients
@property (retain, nonatomic) WPDState *wpdState; // ivar: _wpdState
@property (retain) WPDZoneManager *zoneManager; // ivar: _zoneManager


+(BOOL)isAppleTV;
+(BOOL)isHomePod;
+(BOOL)isInternalBuild;
+(BOOL)supportsRanging;
+(void)initialize;
-(BOOL)isClientTestMode:(id)arg0 ;
-(BOOL)isRangingEnabled;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)clientForMachName:(id)arg0 ;
-(id)getAllClients;
-(id)getClientForUUID:(id)arg0 ;
-(id)init;
-(void)SetupSignalHandler;
-(void)addClient:(id)arg0 ;
-(void)cbManagerDidUpdateState:(id)arg0 ;
-(void)dealloc;
-(void)disableScanningForClient:(id)arg0 ;
-(void)dumpDaemonState;
-(void)dumpDaemonStateAsync;
-(void)enableRanging:(BOOL)arg0 ;
-(void)enableTestMode;
-(void)enableTestMode:(BOOL)arg0 ;
-(void)generateStateDump;
-(void)initClients;
-(void)initManagers;
-(void)lockStateUpdate;
-(void)notifyClientsOfStateChange;
-(void)notifyManagersOfStateChange;
-(void)registerClient:(id)arg0 withMachName:(id)arg1 withCompletion:(id)arg2 ;
-(void)registerForSpringboardNotifications;
-(void)removeClient:(id)arg0 ;
-(void)screenStateUpdate;
-(void)startListening;
-(void)updateState;


@end


#endif