// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCSESSION_H
#define MCSESSION_H

@class NSArray, NSMutableDictionary, NSString;
@protocol MCSessionDelegate, MCSessionPrivateDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MCPeerID.h"

@interface MCSession : NSObject {
    BOOL _AWDLDisabled;
    id<MCSessionDelegate> *_delegate;
    BOOL _preferNCMOverEthernet;
    id<MCSessionPrivateDelegate> *_privateDelegate;
}


@property (nonatomic, getter=isAWDLDisabled) BOOL AWDLDisabled;
@property (nonatomic) *OpaqueAGPSession agpSession; // ivar: _agpSession
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) NSArray *connectedPeers;
@property (retain, nonatomic) NSMutableDictionary *connectionPendingPeerEvents; // ivar: _connectionPendingPeerEvents
@property (weak, nonatomic) NSObject<MCSessionDelegate> *delegate;
@property (readonly, nonatomic) NSInteger encryptionPreference; // ivar: _encryptionPreference
@property (nonatomic) unsigned int gckPID; // ivar: _gckPID
@property (nonatomic) *OpaqueGCKSession gckSession; // ivar: _gckSession
@property (nonatomic) NSUInteger maxPeers; // ivar: _maxPeers
@property (readonly, nonatomic) MCPeerID *myPeerID; // ivar: _myPeerID
@property (retain, nonatomic) NSMutableDictionary *peerIDMap; // ivar: _peerIDMap
@property (retain, nonatomic) NSMutableDictionary *peerStates; // ivar: _peerStates
@property (nonatomic) BOOL preferNCMOverEthernet;
@property (nonatomic) NSObject<MCSessionPrivateDelegate> *privateDelegate;
@property (nonatomic) NSObject<MCSessionPrivateDelegate> *privateDelegate;
@property (readonly, nonatomic) NSArray *securityIdentity; // ivar: _securityIdentity
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (nonatomic) NSUInteger stateHandle; // ivar: _stateHandle
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue


+(id)stringForMCSessionSendDataMode:(NSInteger)arg0 ;
+(id)stringForSessionState:(NSInteger)arg0 ;
-(BOOL)isEncryptionPreferenceCompatible:(NSInteger)arg0 ;
-(BOOL)sendData:(id)arg0 toPeers:(id)arg1 withMode:(NSInteger)arg2 error:(*id)arg3 ;
-(NSInteger)connectedInterfacesForPeer:(id)arg0 ;
-(NSUInteger)syncConnectedPeersCount;
-(id)description;
-(id)init;
-(id)initWithPeer:(id)arg0 ;
-(id)initWithPeer:(id)arg0 securityIdentity:(id)arg1 encryptionPreference:(NSInteger)arg2 ;
-(id)sendResourceAtURL:(id)arg0 withName:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(id)arg3 ;
-(id)startStreamWithName:(id)arg0 toPeer:(id)arg1 error:(*id)arg2 ;
-(id)stringForEncryptionPreference:(NSInteger)arg0 ;
-(id)syncDetailedDescription;
-(struct os_state_data_s *)syncStateCapture;
-(void)cancelConnectPeer:(id)arg0 ;
-(void)cancelIncomingStream:(id)arg0 fromPeer:(id)arg1 ;
-(void)cancelOutgoingStream:(id)arg0 toPeer:(id)arg1 ;
-(void)closeDirectConnectionsWithPeer:(id)arg0 ;
-(void)connectPeer:(id)arg0 withNearbyConnectionData:(id)arg1 ;
-(void)dealloc;
-(void)disconnect;
-(void)logSessionInfo;
-(void)nearbyConnectionDataForPeer:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)peerDidDeclineInvitation:(id)arg0 ;
-(void)setHeartbeatTimeout:(NSUInteger)arg0 ;
-(void)setICETimeoutForced:(BOOL)arg0 ;
-(void)startConnectionWithIndirectPID:(unsigned int)arg0 ;
-(void)syncCancelIncomingStream:(id)arg0 fromPeer:(id)arg1 ;
-(void)syncCancelOutgoingStream:(id)arg0 toPeer:(id)arg1 ;
-(void)syncCloseIncomingStream:(id)arg0 forPeer:(id)arg1 state:(id)arg2 error:(id)arg3 reason:(int)arg4 shouldTriggerCancelProgress:(BOOL)arg5 ;
-(void)syncCloseOutgoingStream:(id)arg0 forPeer:(id)arg1 state:(id)arg2 error:(id)arg3 shouldTriggerCancelProgress:(BOOL)arg4 ;
-(void)syncCloseStreamsForPeer:(id)arg0 ;
-(void)syncConnectPeer:(id)arg0 withConnectionData:(id)arg1 ;
-(void)syncGetConnectionDataForPeerState:(id)arg0 completionHandler:(id)arg1 ;
-(void)syncHandleNetworkEvent:(struct ? *)arg0 pid:(unsigned int)arg1 freeEventWhenDone:(*BOOL)arg2 ;
-(void)syncHandleXDataDataPacket:(char *)arg0 packetSize:(int)arg1 forPeer:(id)arg2 state:(id)arg3 ;
-(void)syncLogConnectedPeers;
-(void)syncLogMaxConnectedPeers;
-(void)syncPeer:(id)arg0 changeStateTo:(NSInteger)arg1 shouldForceCallback:(BOOL)arg2 ;
-(void)syncSendData:(id)arg0 toPeers:(id)arg1 withDataMode:(NSInteger)arg2 ;
-(void)syncSendXDataConnectionBlobPushToPID:(unsigned int)arg0 connectionBlob:(id)arg1 ;
-(void)syncSendXDataPeerIDPushToPID:(unsigned int)arg0 ;
-(void)syncSendXDataStreamCloseFromReceiverToPID:(unsigned int)arg0 streamID:(unsigned int)arg1 closeReason:(unsigned short)arg2 ;
-(void)syncSendXDataStreamCloseFromSenderToPID:(unsigned int)arg0 streamID:(unsigned int)arg1 closeReason:(unsigned short)arg2 ;
-(void)syncSendXDataStreamOpenResponseToPID:(unsigned int)arg0 withRequestID:(unsigned int)arg1 streamID:(unsigned int)arg2 ;
-(void)syncStartStreamWithName:(id)arg0 toPeer:(id)arg1 mcFD:(int)arg2 isResource:(BOOL)arg3 ;


@end


#endif