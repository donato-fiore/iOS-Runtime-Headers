// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RWIRELAY_H
#define RWIRELAY_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol _RWIRelayConnectionToApplicationDelegate, _RWIRelayClientConnectionDelegate, _RWIClientToRelayMessageReceiver, OS_xpc_object, RWIRelayDelegate;

#import <Foundation/Foundation.h>


@interface RWIRelay : NSObject <_RWIRelayConnectionToApplicationDelegate, _RWIRelayClientConnectionDelegate, _RWIClientToRelayMessageReceiver>

 {
    NSObject<OS_xpc_object> *_xpcApplicationListenConnection;
    NSMutableArray *_pendingClientConnections;
    NSMutableDictionary *_pendingProxyApplicationConnections;
    NSMutableArray *_automaticInspectionDebuggers;
    NSMutableDictionary *_automaticInspectionSessions;
}


@property (readonly, nonatomic) NSMutableDictionary *applicationConnections; // ivar: _applicationConnections
@property (readonly, nonatomic) NSMutableDictionary *clientConnections; // ivar: _clientConnections
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<RWIRelayDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *driverInterfaces; // ivar: _driverInterfaces
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_allApplicationDetails;
-(id)_allDriverDetails;
-(id)init;
-(void)_addPendingClientConnection:(id)arg0 ;
-(void)_applicationConnected:(id)arg0 ;
-(void)_applicationDisconnected:(id)arg0 ;
-(void)_applicationUpdated:(id)arg0 ;
-(void)_developerPreferencesChanged;
-(void)_disconnectApplicationConnect:(id)arg0 ;
-(void)_driverConnected:(id)arg0 ;
-(void)_driverDisconnected:(id)arg0 ;
-(void)_driverUpdated:(id)arg0 ;
-(void)_dumpApplication:(id)arg0 withOrdinal:(NSUInteger)arg1 ;
-(void)_dumpClientConnection:(id)arg0 withOrdinal:(NSUInteger)arg1 ;
-(void)_finalizePendingClientConnection:(id)arg0 withIdentifier:(id)arg1 ;
-(void)_handleApplicationListenConnectionEvent:(id)arg0 ;
-(void)_handleDumpStateNotification;
-(void)_proxyApplicationConnected:(id)arg0 ;
-(void)_proxyApplicationResponse:(id)arg0 userInfo:(id)arg1 ;
-(void)_receivedAutomaticInspectionCandidate:(id)arg0 connection:(id)arg1 ;
-(void)_receivedDataMessage:(id)arg0 connection:(id)arg1 ;
-(void)_receivedListingMessage:(id)arg0 connection:(id)arg1 ;
-(void)_receivedProxyApplicationSetupResponseMessage:(id)arg0 connection:(id)arg1 ;
-(void)_reportCurrentStateToAllClients;
-(void)_reportCurrentStateToClient:(id)arg0 ;
-(void)_rpc_debuggerDidWake:(id)arg0 ;
-(void)_rpc_debuggerWillSleep:(id)arg0 ;
-(void)_rpc_forwardAutomaticInspectionConfiguration:(id)arg0 ;
-(void)_rpc_forwardAutomaticInspectionRejection:(id)arg0 ;
-(void)_rpc_forwardAutomationSessionRequest:(id)arg0 ;
-(void)_rpc_forwardDidClose:(id)arg0 ;
-(void)_rpc_forwardDriverStateChangeRequest:(id)arg0 ;
-(void)_rpc_forwardGetListing:(id)arg0 ;
-(void)_rpc_forwardIndicateWebView:(id)arg0 ;
-(void)_rpc_forwardSocketData:(id)arg0 ;
-(void)_rpc_forwardSocketSetup:(id)arg0 ;
-(void)_rpc_forwardWakeUpDebuggables:(id)arg0 ;
-(void)_rpc_getConnectedApplications:(id)arg0 ;
-(void)_rpc_getConnectedDrivers:(id)arg0 ;
-(void)_rpc_reportDriverConnected:(id)arg0 ;
-(void)_rpc_reportDriverDisconnected:(id)arg0 ;
-(void)_rpc_reportDriverUpdated:(id)arg0 ;
-(void)_rpc_reportIdentifier:(id)arg0 ;
-(void)_rpc_requestApplicationLaunch:(id)arg0 ;
-(void)_setAutomaticInspectionGlobalState:(BOOL)arg0 ;
-(void)addPendingClientConnection:(id)arg0 ;
-(void)clientConnectionDidClose:(id)arg0 ;
-(void)setup;
-(void)shutdownIfDisabled;
-(void)updateApplication:(id)arg0 ;
-(void)xpcConnection:(id)arg0 receivedMessage:(id)arg1 userInfo:(id)arg2 ;
-(void)xpcConnection:(id)arg0 unhandledMessage:(id)arg1 ;
-(void)xpcConnectionFailed:(id)arg0 ;


@end


#endif