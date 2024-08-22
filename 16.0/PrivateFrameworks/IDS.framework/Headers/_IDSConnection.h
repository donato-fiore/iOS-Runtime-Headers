// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _IDSCONNECTION_H
#define _IDSCONNECTION_H

@class NSMapTable, NSSet, NSString, IMOrderedMutableDictionary, NSDictionary;
@protocol IDSDaemonListenerProtocol, IDSAccountDelegate, IDSDirectMessageConnectionDelegate, IDSSendXPCProtocol;

#import <Foundation/Foundation.h>

#import "IDSAccount.h"
#import "IDSDirectMessageConnection.h"

@interface _IDSConnection : NSObject <IDSDaemonListenerProtocol, IDSAccountDelegate, IDSDirectMessageConnectionDelegate, IDSSendXPCProtocol>

 {
    id *_messageContext;
    id *_delegateContext;
    unsigned char _incomingMessageLoggingSequence;
    unsigned char _outgoingMessageLoggingSequence;
    NSMapTable *_delegateToInfo;
    IDSAccount *_account;
    NSSet *_commands;
    NSString *_serviceToken;
    IMOrderedMutableDictionary *_pendingSends;
    unsigned int _delegateCapabilities;
    BOOL _indirectDelegateCallouts;
}


@property (readonly, nonatomic) IDSAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) IDSDirectMessageConnection *directMessageConnection; // ivar: _directMessageConnection
@property (retain, nonatomic) NSDictionary *directMessagingMetadata; // ivar: _directMessagingMetadata
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int wakingDowngradeCount; // ivar: _wakingDowngradeCount


-(BOOL)_canServiceNameAcceptMessagesInTransientRegistrationState:(id)arg0 ;
-(BOOL)_isAccountInValidRegistrationStateToAcceptMessages;
-(BOOL)_isDestinationSingleLocalAddress:(id)arg0 ;
-(BOOL)_shouldAcceptIncomingType:(id)arg0 forTopic:(id)arg1 localURI:(id)arg2 remoteURI:(id)arg3 validateAliases:(BOOL)arg4 guid:(id)arg5 ;
-(BOOL)sendData:(id)arg0 toDestinations:(id)arg1 priority:(NSInteger)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(BOOL)sendInvitation:(id)arg0 toDestination:(id)arg1 priority:(NSInteger)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(BOOL)sendInvitationUpdate:(id)arg0 toDestination:(id)arg1 priority:(NSInteger)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(BOOL)sendMessage:(id)arg0 toDestinations:(id)arg1 priority:(NSInteger)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(BOOL)sendProtobuf:(id)arg0 toDestinations:(id)arg1 priority:(NSInteger)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(BOOL)sendServerMessage:(id)arg0 command:(id)arg1 ;
-(id)_activeDevice;
-(id)_defaultPairedDevice;
-(id)_init;
-(id)_sendWithParameters:(id)arg0 options:(id)arg1 loggingType:(id)arg2 loggingDataSize:(NSUInteger)arg3 ;
-(id)daemonController;
-(id)daemonListener;
-(id)initWithAccount:(id)arg0 commands:(id)arg1 indirectDelegateCallouts:(BOOL)arg2 delegateContext:(id)arg3 ;
// -(void)_callDelegatesRespondingToSelector:(SEL)arg0 withPreCallbacksBlock:(id)arg1 callbackBlock:(unk)arg2 postCallbacksBlock:(id)arg3  ;
// -(void)_callDelegatesRespondingToSelector:(SEL)arg0 withPreCallbacksBlock:(id)arg1 callbackBlock:(unk)arg2 postCallbacksBlock:(id)arg3 group:(unk)arg4  ;
-(void)_callDelegatesWithBlock:(id)arg0 ;
// -(void)_callDelegatesWithBlock:(id)arg0 group:(unk)arg1  ;
-(void)_connect;
-(void)_handleLastCallForPendingIdentifier:(id)arg0 callbackID:(id)arg1 ;
-(void)_replaceSentinelInSendParameters:(id)arg0 withCurrentActiveDevice:(id)arg1 ;
-(void)_resendPendingSends;
-(void)_sendMissingMessageMetric:(id)arg0 ;
-(void)_setTemporaryMessageContext:(id)arg0 ;
-(void)accessoryDataReceived:(id)arg0 withGUID:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)accessoryReportMessageReceived:(id)arg0 accessoryID:(id)arg1 controllerID:(id)arg2 withGUID:(id)arg3 forTopic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 context:(id)arg7 ;
-(void)account:(id)arg0 connectedDevicesChanged:(id)arg1 ;
-(void)account:(id)arg0 devicesChanged:(id)arg1 ;
-(void)account:(id)arg0 isActiveChanged:(BOOL)arg1 ;
-(void)account:(id)arg0 nearbyDevicesChanged:(id)arg1 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)checkTransportLogWithReason:(NSInteger)arg0 ;
-(void)connection:(id)arg0 incomingAckWithIdentifier:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 hasBeenDeliveredWithContext:(id)arg5 isAppAck:(BOOL)arg6 ;
-(void)connection:(id)arg0 incomingDataFromDirectConnection:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)connection:(id)arg0 incomingGUIDAckFromDirectConnection:(id)arg1 ;
-(void)connection:(id)arg0 incomingMessageFromDirectConnection:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)connection:(id)arg0 incomingProtobufFromDirectConnection:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)connection:(id)arg0 messageSendFailed:(id)arg1 responseCode:(NSInteger)arg2 ;
-(void)createDirectMessageConnectionIfNeeded;
-(void)daemonConnected;
-(void)dataReceived:(id)arg0 withGUID:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)dealloc;
-(void)didFlushCacheForService:(id)arg0 remoteURI:(id)arg1 fromURI:(id)arg2 guid:(id)arg3 ;
-(void)didSendOpportunisticDataWithIdentifier:(id)arg0 onAccount:(id)arg1 toIDs:(id)arg2 ;
-(void)engramDataReceived:(id)arg0 withGUID:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)groupShareReceived:(id)arg0 withGUID:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)incomingInvitation:(id)arg0 withGUID:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)incomingInvitationUpdate:(id)arg0 withGUID:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)messageIdentifier:(id)arg0 alternateCallbackID:(id)arg1 forAccount:(id)arg2 updatedWithResponseCode:(NSInteger)arg3 error:(id)arg4 lastCall:(BOOL)arg5 context:(id)arg6 ;
-(void)messageIdentifier:(id)arg0 alternateCallbackID:(id)arg1 forAccount:(id)arg2 willSendToDestinations:(id)arg3 skippedDestinations:(id)arg4 registrationPropertyToDestinations:(id)arg5 ;
-(void)messageIdentifier:(id)arg0 forTopic:(id)arg1 toIdentifier:(id)arg2 fromIdentifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(void)messageIdentifierInner:(id)arg0 alternateCallbackID:(id)arg1 forAccount:(id)arg2 updatedWithResponseCode:(NSInteger)arg3 error:(id)arg4 lastCall:(BOOL)arg5 context:(id)arg6 isDirectMessage:(BOOL)arg7 ;
-(void)messageReceived:(id)arg0 withGUID:(id)arg1 withPayload:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)opportunisticDataReceived:(id)arg0 withIdentifier:(id)arg1 fromID:(id)arg2 context:(id)arg3 ;
-(void)pendingIncomingMessageWithGUID:(id)arg0 forTopic:(id)arg1 toIdentifier:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)protobufReceived:(id)arg0 withGUID:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)receivedGroupSessionParticipantDataUpdate:(id)arg0 forTopic:(id)arg1 toIdentifier:(id)arg2 fromID:(id)arg3 ;
-(void)receivedGroupSessionParticipantUpdate:(id)arg0 forTopic:(id)arg1 toIdentifier:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)receivedMetadataForDirectMessaging:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)sendAppAckForDirectMessage:(id)arg0 ;
-(void)sendXPCObject:(id)arg0 ;
-(void)sessionInvitationReceivedWithPayload:(id)arg0 forTopic:(id)arg1 sessionID:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4 transportType:(id)arg5 ;
-(void)setDelegateCapabilities:(unsigned int)arg0 ;
-(void)updateDeviceIdentity:(id)arg0 error:(id)arg1 ;
-(void)xpcObject:(id)arg0 objectContext:(id)arg1 ;


@end


#endif