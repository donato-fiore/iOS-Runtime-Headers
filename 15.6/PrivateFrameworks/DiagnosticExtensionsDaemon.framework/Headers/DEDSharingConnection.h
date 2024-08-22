// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEDSHARINGCONNECTION_H
#define DEDSHARINGCONNECTION_H

@class NSMutableDictionary, SFDeviceDiscovery, SFService, NSMutableSet;
@protocol OS_dispatch_semaphore, DEDSharingInboundDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DEDSharingInbound.h"

@interface DEDSharingConnection : NSObject

@property (retain) NSObject<OS_dispatch_semaphore> *bluetoothSessionSemaphore; // ivar: _bluetoothSessionSemaphore
@property (weak) NSObject<DEDSharingInboundDelegate> *controller; // ivar: _controller
@property (retain) NSMutableDictionary *deviceSessions; // ivar: _deviceSessions
@property (copy) id *deviceStatusCallback; // ivar: _deviceStatusCallback
@property (retain) NSMutableDictionary *discoveredDevices; // ivar: _discoveredDevices
@property BOOL listenForClients; // ivar: _listenForClients
@property (retain, nonatomic) SFDeviceDiscovery *pingDiscovery; // ivar: _pingDiscovery
@property (retain, nonatomic) SFService *pingService; // ivar: _pingService
@property (retain, nonatomic) SFDeviceDiscovery *pongDiscovery; // ivar: _pongDiscovery
@property (retain) NSMutableDictionary *pongingDevices; // ivar: _pongingDevices
@property (retain) NSObject<OS_dispatch_queue> *run_queue; // ivar: _run_queue
@property (retain) DEDSharingInbound *sharingInbound; // ivar: _sharingInbound
@property BOOL started; // ivar: _started
@property (retain) NSMutableSet *visiblePingUUIDs; // ivar: _visiblePingUUIDs
@property (retain, nonatomic) SFService *workerService; // ivar: _workerService


+(void)checkIn;
-(id)_existingSharingSessionForDevice:(id)arg0 ;
-(id)blockingSharingSessionForDevice:(id)arg0 fromInbound:(id)arg1 ;
-(id)initWithController:(id)arg0 ;
-(id)sharingOutboundForBugSessionIdentifier:(id)arg0 device:(id)arg1 fromInbound:(id)arg2 ;
-(void)_configureService:(id)arg0 withLabel:(id)arg1 needsSetup:(BOOL)arg2 actionType:(unsigned char)arg3 completion:(id)arg4 ;
-(void)_handleIncomingPingingDevice:(id)arg0 ;
-(void)_handleIncomingPongingDevice:(id)arg0 fromInbound:(id)arg1 ;
-(void)_saveDevice:(id)arg0 ;
-(void)_verifyPairingForSession:(id)arg0 holdForPIN:(BOOL)arg1 completion:(id)arg2 ;
-(void)addIncomingSFSession:(id)arg0 forIdentifier:(id)arg1 ;
-(void)checkReadinessForSFDevice:(id)arg0 session:(id)arg1 ;
-(void)configureListenForClients:(BOOL)arg0 ;
-(void)configureSharingInbound:(id)arg0 ;
-(void)createSharingSessionForSFDevice:(id)arg0 holdForPIN:(BOOL)arg1 fromInbound:(id)arg2 completion:(id)arg3 ;
-(void)dealloc;
-(void)discoverDevicesFromInbound:(id)arg0 withCompletion:(id)arg1 ;
-(void)getSystemInfoForDevice:(id)arg0 ;
-(void)setDeviceDiscoveryCallback:(id)arg0 ;
-(void)sharing_didStartBugSessionWithInfo:(id)arg0 forCaller:(id)arg1 ;
-(void)sharing_startBugSessionWithIdentifier:(id)arg0 configuration:(id)arg1 caller:(id)arg2 target:(id)arg3 fromInbound:(id)arg4 ;
-(void)sharing_startPairSetupForDevice:(id)arg0 fromInbound:(id)arg1 ;
-(void)sharing_tryPIN:(id)arg0 forDevice:(id)arg1 fromInbound:(id)arg2 ;
-(void)start;
-(void)startPingDiscovery;
-(void)startPingServiceWithCompletion:(id)arg0 ;
-(void)startPongAdvertisement;
-(void)startPongDiscoveryFromInbound:(id)arg0 ;
-(void)startWorkerService;
-(void)stopDiscovery;
-(void)stopPingDiscovery;
-(void)stopPingService;
-(void)stopPongAdvertisement;
-(void)stopPongDiscovery;
-(void)stopSession:(id)arg0 ;
-(void)trySessionWithFoundDevice:(id)arg0 fromInbound:(id)arg1 ;
-(void)updateControllerWithDevice:(id)arg0 andStatus:(NSInteger)arg1 ;
-(void)updatePongAdvertisement;


@end


#endif