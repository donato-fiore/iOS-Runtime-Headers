// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEDXPCINBOUND_H
#define DEDXPCINBOUND_H

@class NSString, NSNumber;
@protocol DEDXPCProtocol, DEDXPCInboundDelegate, OS_os_log;

#import <Foundation/Foundation.h>


@interface DEDXPCInbound : NSObject <DEDXPCProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<DEDXPCInboundDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_os_log> *log; // ivar: _log
@property (retain) NSNumber *senderPid; // ivar: _senderPid
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 senderPid:(id)arg1 ;
-(void)xpc_adoptFiles:(id)arg0 forSession:(id)arg1 ;
-(void)xpc_cancelNotifySession:(id)arg0 ;
-(void)xpc_cancelSession:(id)arg0 ;
-(void)xpc_commitSession:(id)arg0 ;
-(void)xpc_deviceSupportsDiagnosticExtensions:(id)arg0 session:(id)arg1 ;
-(void)xpc_didAdoptFilesWithError:(id)arg0 forSession:(id)arg1 ;
-(void)xpc_didCancelSession:(id)arg0 ;
-(void)xpc_didCommitSession:(id)arg0 ;
-(void)xpc_didDiscoverDevices:(id)arg0 ;
-(void)xpc_didGetState:(NSInteger)arg0 info:(id)arg1 sessionID:(id)arg2 ;
-(void)xpc_didStartBugSessionWithInfo:(id)arg0 ;
-(void)xpc_discoverAllAvailableDevices;
-(void)xpc_finishedDiagnosticWithIdentifier:(id)arg0 result:(id)arg1 session:(id)arg2 ;
-(void)xpc_getSessionStateWithSession:(id)arg0 ;
-(void)xpc_getSessionStatusWithSession:(id)arg0 ;
-(void)xpc_gotDeviceUpdate:(id)arg0 ;
-(void)xpc_hasActiveSession:(id)arg0 ;
-(void)xpc_hasActiveSessionReply:(id)arg0 isActive:(BOOL)arg1 ;
-(void)xpc_hasCollected:(id)arg0 isCollecting:(id)arg1 inSession:(id)arg2 ;
-(void)xpc_hasCollected:(id)arg0 isCollecting:(id)arg1 withIdentifiers:(id)arg2 inSession:(id)arg3 ;
-(void)xpc_listAvailableExtensionsForSession:(id)arg0 ;
-(void)xpc_listClientXPCConnections;
-(void)xpc_listClientXPCConnectionsReply:(id)arg0 ;
-(void)xpc_notifySession:(id)arg0 ;
-(void)xpc_ping;
-(void)xpc_pingSession:(id)arg0 ;
-(void)xpc_pong;
-(void)xpc_pongSession:(id)arg0 ;
-(void)xpc_promptPINForDevice:(id)arg0 ;
-(void)xpc_startBugSessionWithIdentifier:(id)arg0 configuration:(id)arg1 caller:(id)arg2 target:(id)arg3 ;
-(void)xpc_startDiagnosticWithIdentifier:(id)arg0 parameters:(id)arg1 deferRunUntil:(id)arg2 session:(id)arg3 ;
-(void)xpc_startDiagnosticWithIdentifier:(id)arg0 parameters:(id)arg1 session:(id)arg2 ;
-(void)xpc_startPairSetupForDevice:(id)arg0 ;
-(void)xpc_stopDeviceDiscovery;
-(void)xpc_successPINForDevice:(id)arg0 ;
-(void)xpc_syncSessionStatusWithSession:(id)arg0 ;
-(void)xpc_terminateExtension:(id)arg0 info:(id)arg1 session:(id)arg2 ;
-(void)xpc_tryPIN:(id)arg0 forDevice:(id)arg1 ;
-(void)xpc_uploadProgress:(NSUInteger)arg0 total:(NSInteger)arg1 session:(id)arg2 ;


@end


#endif