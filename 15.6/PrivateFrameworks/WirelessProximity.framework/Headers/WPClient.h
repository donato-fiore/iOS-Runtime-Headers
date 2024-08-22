// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WPCLIENT_H
#define WPCLIENT_H

@class NSString, NSXPCConnection, NSXPCListener;
@protocol NSXPCListenerDelegate, WPXPCClientProtocol, WPXPCDaemonProtocol, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface WPClient : NSObject <NSXPCListenerDelegate, WPXPCClientProtocol, WPXPCDaemonProtocol>



@property NSInteger advertiserState; // ivar: _advertiserState
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property NSInteger connectionUseCase; // ivar: _connectionUseCase
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *daemonDeliveryQueue; // ivar: _daemonDeliveryQueue
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *daemonRegisteredSemaphore; // ivar: _daemonRegisteredSemaphore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isBubbleTestClient; // ivar: _isBubbleTestClient
@property BOOL isTestClient; // ivar: _isTestClient
@property (retain, nonatomic) NSString *machName; // ivar: _machName
@property NSInteger maxAllowedConnectionDelayMs; // ivar: _maxAllowedConnectionDelayMs
@property BOOL needsToRegister; // ivar: _needsToRegister
@property BOOL peerTrackingSlotsAvailable; // ivar: _peerTrackingSlotsAvailable
@property (readonly) NSInteger pipeState; // ivar: _pipeState
@property BOOL registering; // ivar: _registering
@property NSInteger scannerState; // ivar: _scannerState
@property BOOL servicesAdded; // ivar: _servicesAdded
@property NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property unsigned char type; // ivar: _type
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection
@property (retain) NSXPCListener *xpcListener; // ivar: _xpcListener


+(BOOL)isAppleTV;
+(BOOL)isHomePod;
+(BOOL)isHomePodOrIOS;
+(BOOL)supportsRanging;
+(NSInteger)holdVouchers;
+(id)stateAsString:(NSInteger)arg0 ;
+(void)initialize;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)clientAsString;
-(id)connection;
-(id)initWithQueue:(id)arg0 machName:(id)arg1 ;
-(void)addServices;
-(void)allowlistConnectionMethods:(id)arg0 ;
-(void)checkAllowDuplicates:(id)arg0 ;
-(void)connectToPeer:(id)arg0 ;
-(void)connectToPeer:(id)arg0 withOptions:(id)arg1 ;
-(void)dealloc;
-(void)destroyConnection;
-(void)disableScanning;
-(void)disconnectFromPeer:(id)arg0 ;
-(void)discoverCharacteristicsAndServices:(id)arg0 forPeripheral:(id)arg1 ;
-(void)dumpDaemonState;
-(void)enableBubbleTestMode;
-(void)enableRanging:(BOOL)arg0 reply:(id)arg1 ;
-(void)enableTestMode;
-(void)establishConnection;
-(void)getAllTrackedZones;
-(void)getPowerLogStats:(id)arg0 ;
-(void)invalidate;
-(void)isRangingEnabledReply:(id)arg0 ;
-(void)listenToBandwidthNotifications;
-(void)peerTrackingAvailable;
-(void)peerTrackingFull;
-(void)populateClientGATT:(id)arg0 ;
-(void)receivedTestResponse:(id)arg0 ;
-(void)registerEndpoint:(id)arg0 requireAck:(BOOL)arg1 requireEncryption:(BOOL)arg2 ;
-(void)registerForAnyScanResults:(BOOL)arg0 ;
-(void)registeredWithDaemonAndContinuingSession:(BOOL)arg0 ;
-(void)sendDataToCharacteristic:(id)arg0 inService:(id)arg1 forPeer:(id)arg2 ;
-(void)sendDatatoLePipe:(id)arg0 forPeer:(id)arg1 ;
-(void)sendTestRequest:(id)arg0 ;
-(void)setupMachXPCService;
-(void)shouldSubscribe:(BOOL)arg0 toPeer:(id)arg1 withCharacteristic:(id)arg2 inService:(id)arg3 ;
-(void)startAdvertising:(id)arg0 ;
-(void)startScanning:(id)arg0 ;
-(void)startScanning:(id)arg0 andAdvertising:(id)arg1 ;
-(void)startTrackingPeerWithRequest:(id)arg0 ;
-(void)startTrackingZone:(id)arg0 ;
-(void)stateDidChange:(NSInteger)arg0 ;
-(void)stopAdvertising:(id)arg0 ;
-(void)stopScanning:(id)arg0 ;
-(void)stopTrackingAllZones;
-(void)stopTrackingPeerWithRequest:(id)arg0 ;
-(void)stopTrackingZones:(id)arg0 ;
-(void)unregisterEndpoint:(id)arg0 ;
-(void)updateAdvertisingRequest:(id)arg0 withUpdate:(id)arg1 ;
-(void)updateScanningRequest:(id)arg0 withUpdate:(id)arg1 ;


@end


#endif