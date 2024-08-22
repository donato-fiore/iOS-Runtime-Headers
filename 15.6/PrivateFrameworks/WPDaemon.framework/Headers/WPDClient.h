// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WPDCLIENT_H
#define WPDCLIENT_H

@class NSMutableDictionary, NSString, NSUUID, NSXPCConnection, NSMutableSet;
@protocol WPXPCDaemonProtocol, WPDClientProtocol, OS_voucher, WPDClientDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WPDAdvertisingManager.h"
#import "WPDObjectDiscoveryManager.h"
#import "WPDPipeManager.h"
#import "WPDScanManager.h"
#import "WPDaemonServer.h"
#import "WPDZoneManager.h"

@interface WPDClient : NSObject <WPXPCDaemonProtocol, WPDClientProtocol>



@property (retain) NSMutableDictionary *advertTimerState; // ivar: _advertTimerState
@property (retain) NSMutableDictionary *advertTimers; // ivar: _advertTimers
@property (retain, nonatomic) NSObject<OS_voucher> *advertVoucher; // ivar: _advertVoucher
@property (weak) WPDAdvertisingManager *advertisingManager; // ivar: _advertisingManager
@property (retain) NSString *bundleID; // ivar: _bundleID
@property BOOL canDisableScans; // ivar: _canDisableScans
@property (retain) NSString *clientTypeString; // ivar: _clientTypeString
@property (retain) NSUUID *clientUUID; // ivar: _clientUUID
@property (retain) NSXPCConnection *conn; // ivar: _conn
@property (retain) NSMutableDictionary *connectionTimer; // ivar: _connectionTimer
@property (retain) NSMutableDictionary *connections; // ivar: _connections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<WPDClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) NSMutableSet *endpointsSet; // ivar: _endpointsSet
@property BOOL entitledForObjectDiscovery; // ivar: _entitledForObjectDiscovery
@property BOOL entitledForRanging; // ivar: _entitledForRanging
@property BOOL entitledForZones; // ivar: _entitledForZones
@property (readonly) NSUInteger hash;
@property NSInteger holdVouchers; // ivar: _holdVouchers
@property (retain) NSUUID *identifier; // ivar: _identifier
@property BOOL isObjectDiscovery; // ivar: _isObjectDiscovery
@property BOOL isTestModeClient; // ivar: _isTestModeClient
@property (retain) NSMutableSet *lePipePeersSet; // ivar: _lePipePeersSet
@property (retain) NSString *machName; // ivar: _machName
@property (retain) NSObject<OS_dispatch_queue> *messageQueue; // ivar: _messageQueue
@property (weak) WPDObjectDiscoveryManager *objectDiscoveryManager; // ivar: _objectDiscoveryManager
@property BOOL pendingSent; // ivar: _pendingSent
@property (weak) WPDPipeManager *pipeManager; // ivar: _pipeManager
@property BOOL portTickled; // ivar: _portTickled
@property int processID; // ivar: _processID
@property (retain) NSString *processName; // ivar: _processName
@property BOOL registered; // ivar: _registered
@property BOOL scanDenylisted; // ivar: _scanDenylisted
@property (weak) WPDScanManager *scanManager; // ivar: _scanManager
@property (retain) NSMutableDictionary *scanTimers; // ivar: _scanTimers
@property (retain, nonatomic) NSObject<OS_voucher> *scanVoucher; // ivar: _scanVoucher
@property BOOL scansOff; // ivar: _scansOff
@property (readonly, weak) WPDaemonServer *server; // ivar: _server
@property (readonly, weak) NSObject<OS_dispatch_queue> *serverQueue; // ivar: _serverQueue
@property (readonly) Class superclass;
@property (readonly) BOOL supportsObjectDiscovery; // ivar: _supportsObjectDiscovery
@property (readonly) BOOL supportsRanging; // ivar: _supportsRanging
@property (weak) WPDZoneManager *zoneManager; // ivar: _zoneManager


+(BOOL)enableScanAdvertVouchers;
+(void)initialize;
-(id)connectionForUUID:(id)arg0 ;
-(id)getManager;
-(id)initWithXPCConnection:(id)arg0 server:(id)arg1 ;
-(id)xpcConnectionForClient;
-(void)addCharacteristic:(id)arg0 forService:(id)arg1 ;
-(void)advertisingFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)advertisingPendingOfType:(unsigned char)arg0 ;
-(void)advertisingStartedOfType:(unsigned char)arg0 ;
-(void)advertisingStoppedOfType:(unsigned char)arg0 withError:(id)arg1 ;
-(void)anyDiscoveredDevice:(id)arg0 ;
-(void)bandwidthStateUpdated:(id)arg0 ;
-(void)cancelConnectionTimer:(id)arg0 ;
-(void)central:(id)arg0 subscribed:(BOOL)arg1 toCharacteristic:(id)arg2 inService:(id)arg3 ;
-(void)checkAllowDuplicates:(id)arg0 ;
-(void)checkEntitlements;
-(void)connectToPeer:(id)arg0 withOptions:(id)arg1 ;
-(void)connectedDevice:(id)arg0 withError:(id)arg1 shouldDiscover:(BOOL)arg2 ;
-(void)connectedDeviceOverLEPipe:(id)arg0 ;
-(void)createdConnection:(id)arg0 ;
-(void)dealloc;
-(void)destroy;
-(void)destroy_async;
-(void)disableScanning;
-(void)disconnectFromPeer:(id)arg0 ;
-(void)disconnectedDeviceOverLEPipe:(id)arg0 withError:(id)arg1 ;
-(void)disconnectedPeer:(id)arg0 error:(id)arg1 ;
-(void)discoverCharacteristicsAndServices:(id)arg0 forPeripheral:(id)arg1 ;
-(void)discoveredCharacteristicsAndServices:(id)arg0 forPeripheral:(id)arg1 ;
-(void)discoveredDevice:(id)arg0 ;
-(void)discoveredDevices:(id)arg0 ;
-(void)dumpDaemonState;
-(void)enableRanging:(BOOL)arg0 reply:(id)arg1 ;
-(void)enableTestMode;
-(void)endTestMode;
-(void)enteredZone:(id)arg0 manufacturerData:(id)arg1 ;
-(void)exitedZone:(id)arg0 ;
-(void)foundPeer:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)generateStateDump;
-(void)getAllTrackedZones;
-(void)getPowerLogStats:(id)arg0 ;
-(void)isRangingEnabledReply:(id)arg0 ;
-(void)listenToBandwidthNotifications;
-(void)lostPeer:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)notifyClientStateChange:(NSInteger)arg0 Restricted:(BOOL)arg1 ;
-(void)peerTrackingAvailable;
-(void)peerTrackingFull;
-(void)queueBlock:(id)arg0 ;
-(void)rangingEnabled:(BOOL)arg0 withError:(id)arg1 ;
-(void)readyForDataTransfer;
-(void)receivedData:(id)arg0 fromCharacteristic:(id)arg1 inService:(id)arg2 forPeripheral:(id)arg3 ;
-(void)receivedData:(id)arg0 fromEndpoint:(id)arg1 forPeripheral:(id)arg2 ;
-(void)receivedTestResponse:(id)arg0 ;
-(void)registerEndpoint:(id)arg0 requireAck:(BOOL)arg1 requireEncryption:(BOOL)arg2 ;
-(void)registerForAnyScanResults:(BOOL)arg0 ;
-(void)registerWithDaemon:(id)arg0 forProcess:(id)arg1 machName:(id)arg2 holdVouchers:(NSInteger)arg3 ;
-(void)resumeCommunicationWithConnection:(id)arg0 andProcessID:(int)arg1 ;
-(void)sendDataToCharacteristic:(id)arg0 inService:(id)arg1 forPeer:(id)arg2 ;
-(void)sendDatatoLePipe:(id)arg0 forPeer:(id)arg1 ;
-(void)sendRegisteredWithDaemonAndContinuingSession:(BOOL)arg0 ;
-(void)sendTestRequest:(id)arg0 ;
-(void)sentData:(id)arg0 forCharacteristic:(id)arg1 inService:(id)arg2 forPeripheral:(id)arg3 withError:(id)arg4 ;
-(void)sentData:(id)arg0 toEndpoint:(id)arg1 forPeripheral:(id)arg2 withError:(id)arg3 ;
-(void)setupConnection;
-(void)shouldSubscribe:(BOOL)arg0 toPeer:(id)arg1 withCharacteristic:(id)arg2 inService:(id)arg3 ;
-(void)startAdvertising:(id)arg0 ;
-(void)startAdvertising_async:(id)arg0 ;
-(void)startScanning:(id)arg0 ;
-(void)startScanning_async:(id)arg0 ;
-(void)startTrackingPeerWithRequest:(id)arg0 ;
-(void)startTrackingZone:(id)arg0 ;
-(void)stopAdvertising:(id)arg0 ;
-(void)stopAdvertising_async:(id)arg0 ;
-(void)stopScanning:(id)arg0 ;
-(void)stopScanning_async:(id)arg0 ;
-(void)stopScans;
-(void)stopTrackingAllZones;
-(void)stopTrackingPeerWithRequest:(id)arg0 ;
-(void)stopTrackingZones:(id)arg0 ;
-(void)stoppedTrackingPeer:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)tickleMachPort;
-(void)unregisterEndpoint:(id)arg0 ;
-(void)updatedNotificationState:(BOOL)arg0 forCharacteristic:(id)arg1 inService:(id)arg2 withPeripheral:(id)arg3 ;


@end


#endif