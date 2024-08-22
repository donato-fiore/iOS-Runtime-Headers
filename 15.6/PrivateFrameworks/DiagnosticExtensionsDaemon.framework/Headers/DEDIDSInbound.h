// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEDIDSINBOUND_H
#define DEDIDSINBOUND_H

@class NSString;
@protocol IDSServiceDelegate, DEDSecureArchiving, DEDIDSInboundDelegate;

#import <Foundation/Foundation.h>

#import "DEDIDSConnection.h"

@interface DEDIDSInbound : NSObject <IDSServiceDelegate, DEDSecureArchiving>



@property (weak) DEDIDSConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<DEDIDSInboundDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)archivedClasses;
-(id)init;
-(id)initWithConnection:(id)arg0 controller:(id)arg1 ;
-(void)adopt_files:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)cancel_session:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)commit_session:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)device_supports_diagnostic_extensions:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)did_adopt_files:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)did_cancel_session:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)did_commit_session:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)did_get_session_state:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)did_get_session_status:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)did_start_session:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)did_sync_session_status:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)finished_diagnostic_with_identifier:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)get_session_state:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)get_session_status:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)local_device_query_callback:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)logMalformedMessage;
-(void)remote_device_query_request:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)remote_list_DE:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 fromID:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 hasBeenDeliveredWithContext:(id)arg3 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 sentBytes:(NSInteger)arg3 totalBytes:(NSInteger)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingData:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingResourceAtURL:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingResourceAtURL:(id)arg2 metadata:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg0 account:(id)arg1 incomingUnhandledProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 inviteReceivedForSession:(id)arg2 fromID:(id)arg3 ;
-(void)service:(id)arg0 account:(id)arg1 inviteReceivedForSession:(id)arg2 fromID:(id)arg3 withContext:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 inviteReceivedForSession:(id)arg2 fromID:(id)arg3 withOptions:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 receivedGroupSessionParticipantUpdate:(id)arg2 ;
-(void)service:(id)arg0 activeAccountsChanged:(id)arg1 ;
-(void)service:(id)arg0 connectedDevicesChanged:(id)arg1 ;
-(void)service:(id)arg0 devicesChanged:(id)arg1 ;
-(void)service:(id)arg0 didSwitchActivePairedDevice:(id)arg1 acknowledgementBlock:(id)arg2 ;
-(void)service:(id)arg0 nearbyDevicesChanged:(id)arg1 ;
-(void)serviceAllowedTrafficClassifiersDidReset:(id)arg0 ;
-(void)serviceSpaceDidBecomeAvailable:(id)arg0 ;
-(void)session_ping:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)session_pong:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)start_diagnostic_with_identifier:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)start_session:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)sync_session_status:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)terminate_diagnostic_with_identifier:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)upload_progress:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;


@end


#endif