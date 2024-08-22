// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEDCONTROLLER_H
#define DEDCONTROLLER_H

@class NSString, NSMutableDictionary, NSMutableSet, NSDictionary;
@protocol DEDXPCConnectorDelegate, DEDXPCInboundDelegate, DEDSharingInboundDelegate, DEDIDSInboundDelegate, DEDSecureArchiving, OS_dispatch_queue, DEDClientProtocol, OS_os_log, DEDPairingProtocol, DEDWorkerProtocol;

#import <Foundation/Foundation.h>

#import "DEDXPCConnector.h"

@interface DEDController : NSObject <DEDXPCConnectorDelegate, DEDXPCInboundDelegate, DEDSharingInboundDelegate, DEDIDSInboundDelegate, DEDSecureArchiving>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bugSessionCallbackQueue; // ivar: _bugSessionCallbackQueue
@property (weak) NSObject<DEDClientProtocol> *clientDelegate; // ivar: _clientDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSMutableDictionary *devices; // ivar: _devices
@property (copy) id *devicesCompletion; // ivar: _devicesCompletion
@property (copy) id *didCancelCompletion; // ivar: _didCancelCompletion
@property BOOL embeddedInApp; // ivar: _embeddedInApp
@property (readonly) NSUInteger hash;
@property BOOL isDaemon; // ivar: _isDaemon
@property (retain) NSObject<OS_os_log> *log; // ivar: _log
@property (weak) NSObject<DEDPairingProtocol> *pairingDelegate; // ivar: _pairingDelegate
@property (copy) id *pongBlock; // ivar: _pongBlock
@property (retain) NSMutableSet *recentlyFinishedSessions; // ivar: _recentlyFinishedSessions
@property (retain) NSObject<OS_dispatch_queue> *replyQueue; // ivar: _replyQueue
@property (retain) NSMutableDictionary *sessionDidStartBlocks; // ivar: _sessionDidStartBlocks
@property (copy) id *sessionExistsCompletion; // ivar: _sessionExistsCompletion
@property (retain) NSMutableDictionary *sessionStartBlocks; // ivar: _sessionStartBlocks
@property (retain) NSDictionary *sessions; // ivar: _sessions
@property BOOL started; // ivar: _started
@property (readonly) Class superclass;
@property BOOL useIDS; // ivar: _useIDS
@property BOOL useSharing; // ivar: _useSharing
@property (retain) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (weak) NSObject<DEDWorkerProtocol> *workerDelegate; // ivar: _workerDelegate
@property (copy) id *xpcConnectionsCompletion; // ivar: _xpcConnectionsCompletion
@property (retain) DEDXPCConnector *xpcConnector; // ivar: _xpcConnector


+(id)archivedClasses;
-(BOOL)hasCompletionBlockWithIdentifier:(id)arg0 ;
-(BOOL)hasDevice:(id)arg0 ;
-(BOOL)hasRecentlyFinishedSessionWithIdentifier:(id)arg0 ;
-(BOOL)induceTimeOutIfNeededAndReturnCanProceedWithDevice:(id)arg0 sessionId:(id)arg1 ;
-(id)_allKnownDevicesWithIdentifier:(id)arg0 ;
-(id)_deviceForIncomingDevice:(id)arg0 ;
-(id)_deviceForIncomingDevice:(id)arg0 needsReady:(BOOL)arg1 ;
-(id)_sharingDeviceForIncomingDevice:(id)arg0 ;
-(id)allKnownDevices;
-(id)connector:(id)arg0 needsXPCInboundForPid:(id)arg1 ;
-(id)devicesWithIdentifier:(id)arg0 ;
-(id)idsConnection;
-(id)idsInbound_sessionForIdentifier:(id)arg0 ;
-(id)init;
-(id)knownSessions;
-(id)persistence;
-(id)popDidStartSessionCompletionWithIdentifier:(SEL)arg0 ;
-(id)popSessionStartCompletionWithIdentifier:(SEL)arg0 ;
-(id)sessionForIdentifier:(id)arg0 ;
-(id)sharingConnection;
-(id)sharingInbound_sessionForIdentifier:(id)arg0 ;
-(id)xpcInbound_sessionForIdentifier:(id)arg0 ;
-(void)_didAbortSessionWithID:(id)arg0 ;
-(void)_timeOutSessionStartBlockWithIdentifier:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)abortSession:(id)arg0 ;
-(void)abortSession:(id)arg0 withCompletion:(id)arg1 ;
-(void)addDevice:(id)arg0 ;
// -(void)addDidStartSessionCompletion:(id)arg0 withIdentifier:(unk)arg1  ;
// -(void)addSessionStartCompletion:(id)arg0 withIdentifier:(unk)arg1 configuration:(id)arg2  ;
-(void)configureClientDelegate:(id)arg0 ;
-(void)configureForDaemon;
-(void)configureForEmbedded:(BOOL)arg0 ;
-(void)configureForIDS:(BOOL)arg0 ;
-(void)configureForSharing:(BOOL)arg0 ;
-(void)configurePairingDelegate:(id)arg0 ;
-(void)configureWorkerDelegate:(id)arg0 ;
-(void)connector:(id)arg0 didLooseConnectionToProcessWithPid:(int)arg1 ;
-(void)didFinishSessionWithIdentifier:(id)arg0 ;
-(void)didStartBugSessionWithInfo:(id)arg0 ;
-(void)discoverDevicesWithCompletion:(id)arg0 ;
-(void)hasActiveSessionForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)idsInbound_didAbortSessionWithID:(id)arg0 ;
-(void)idsInbound_didStartBugSessionWithInfo:(id)arg0 ;
-(void)idsInbound_startBugSessionWithIdentifier:(id)arg0 configuration:(id)arg1 caller:(id)arg2 target:(id)arg3 ;
-(void)insertNewSession:(id)arg0 ;
-(void)listXPCConnections:(id)arg0 ;
-(void)pingDaemonWithCompletion:(id)arg0 ;
-(void)purgeStaleSessions:(id)arg0 completion:(id)arg1 ;
-(void)removeSessionWithIdentifier:(id)arg0 ;
-(void)reset;
-(void)sharingInbound_didAbortSessionWithID:(id)arg0 ;
-(void)sharingInbound_didStartBugSessionWithInfo:(id)arg0 ;
-(void)sharingInbound_promptPINForDevice:(id)arg0 fromInbound:(id)arg1 ;
-(void)sharingInbound_startBugSessionWithIdentifier:(id)arg0 configuration:(id)arg1 caller:(id)arg2 target:(id)arg3 ;
-(void)sharingInbound_successPINForDevice:(id)arg0 fromInbound:(id)arg1 ;
-(void)start;
-(void)startBugSessionWithIdentifier:(id)arg0 configuration:(id)arg1 caller:(id)arg2 target:(id)arg3 fromInbound:(id)arg4 ;
-(void)startBugSessionWithIdentifier:(id)arg0 configuration:(id)arg1 target:(id)arg2 completion:(id)arg3 ;
-(void)startPairSetupForDevice:(id)arg0 ;
-(void)stopDiscovery;
-(void)tryPIN:(id)arg0 forDevice:(id)arg1 ;
-(void)xpcInbound_didAbortSessionWithID:(id)arg0 ;
-(void)xpcInbound_didDiscoverDevices:(id)arg0 ;
-(void)xpcInbound_didStartBugSessionWithInfo:(id)arg0 ;
-(void)xpcInbound_discoverAllAvailableDevices:(id)arg0 ;
-(void)xpcInbound_gotDeviceUpdate:(id)arg0 ;
-(void)xpcInbound_hasActiveSession:(id)arg0 fromInbound:(id)arg1 ;
-(void)xpcInbound_hasActiveSessionReply:(id)arg0 isActive:(BOOL)arg1 ;
-(void)xpcInbound_listClientXPCConnectionsReply:(id)arg0 ;
-(void)xpcInbound_ping:(id)arg0 ;
-(void)xpcInbound_pong;
-(void)xpcInbound_promptPINForDevice:(id)arg0 ;
-(void)xpcInbound_startBugSessionWithIdentifier:(id)arg0 configuration:(id)arg1 caller:(id)arg2 target:(id)arg3 fromInbound:(id)arg4 ;
-(void)xpcInbound_startPairSetupForDevice:(id)arg0 fromInbound:(id)arg1 ;
-(void)xpcInbound_stopDeviceDiscovery:(id)arg0 ;
-(void)xpcInbound_successPINForDevice:(id)arg0 ;
-(void)xpcInbound_tryPIN:(id)arg0 forDevice:(id)arg1 fromInbound:(id)arg2 ;
-(void)xpc_listClientXPCConnectionsFromInbound:(id)arg0 ;


@end


#endif