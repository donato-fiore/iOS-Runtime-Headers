// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSNWLINK_H
#define IDSNWLINK_H

@class NSMutableArray, NSMutableDictionary, NSString, NSIndexSet;
@protocol IDSLink, OS_nw_listener, IDSLinkDelegate;

#import <Foundation/Foundation.h>


@interface IDSNWLink : NSObject <IDSLink>

 {
    BOOL _isInvalidated;
    BOOL _wantsWiFi;
    BOOL _wantsCellular;
    BOOL _isDefaultPairedDevice;
    BOOL _transactionIDMismatchReported;
    *_opaque_pthread_t _nwtid;
    os_unfair_lock_s _lock;
    unsigned char _clientUUID;
    NSObject<OS_nw_listener> *_listener;
    NSObject<OS_nw_listener> *_cellularListener;
    NSMutableArray *_recentQRServerList;
    NSMutableArray *_tokensForUDPConnectionInProgress;
    NSMutableArray *_cellularPortList;
    NSMutableDictionary *_queuedPeelOffs;
    NSMutableDictionary *_tokenToNWLinkConnection;
    NSMutableDictionary *_tokenToChildConnectionEvaluator;
    NSMutableDictionary *_interfaceIndexToNAT64LocalAddress;
    NSMutableDictionary *_portToExtraListener;
}


@property (weak) NSObject<IDSLinkDelegate> *alternateDelegate; // ivar: _alternateDelegate
@property (retain) NSString *cbuuid; // ivar: _cbuuid
@property (retain, nonatomic) NSIndexSet *cellularInterfaceIndices; // ivar: _cellularInterfaceIndices
@property (nonatomic) unsigned short cellularPort; // ivar: _cellularPort
@property (nonatomic) BOOL connectedToQR; // ivar: _connectedToQR
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<IDSLinkDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) NSString *deviceUniqueID; // ivar: _deviceUniqueID
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger headerOverhead;
@property (readonly, getter=linkTypeString) NSString *linkTypeString;
@property (nonatomic) unsigned short port; // ivar: _port
@property (readonly) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) BOOL useDefaultInterfaceOnly; // ivar: _useDefaultInterfaceOnly
@property (nonatomic) BOOL wifiAssistEnabled; // ivar: _wifiAssistEnabled


+(id)derivePSKFromSessionKey:(id)arg0 salt:(id)arg1 ;
-(?)sendPacketBufferArray:(?)arg0 arraySize:(?)arg1 toDeviceUniqueIDcbuuid;
-(BOOL)_createChannelDataConnection:(id)arg0 ;
-(BOOL)_createChannelDataConnectionForH2:(id)arg0 ;
-(BOOL)_doesUDPConnectionInProgressExist:(id)arg0 ;
-(BOOL)_findExistingCollidingQRConnection:(id)arg0 remoteEndpoint:(id)arg1 sessionID:(id)arg2 localEndpointToUse:(*id)arg3 ;
-(BOOL)_setParameters:(id)arg0 NWLinkConnection:(id)arg1 sharePortWithListener:(BOOL)arg2 isTCP:(BOOL)arg3 ;
-(BOOL)_shouldAllowP2PConnectionTo:(id)arg0 anotherRemoteEndpoint:(id)arg1 ;
// -(BOOL)connect:(int)arg0 localAddress:(struct sockaddr *)arg1 remoteAddress:(struct sockaddr *)arg2 clientUUID:(unsigned char)arg3 sessionID:(id)arg4 relaySessionToken:(id)arg5 relaySessionKey:(id)arg6 randomSaltBlock:(id)arg7 newLocalPort:(unk)arg8 disconnectAfterUse:(*unsigned short)arg9 readyHandler:(BOOL)arg10  ;
// -(BOOL)connectTCP:(int)arg0 localAddress:(struct sockaddr *)arg1 remoteAddress:(struct sockaddr *)arg2 clientUUID:(unsigned char)arg3 sessionID:(id)arg4 relaySessionToken:(id)arg5 relaySessionKey:(id)arg6 randomSaltBlock:(id)arg7 newLocalPort:(unk)arg8 disconnectAfterUse:(*unsigned short)arg9 readyHandler:(BOOL)arg10  ;
-(BOOL)getEffectiveSourceAddress:(struct sockaddr_storage *)arg0 fromSourceAddress:(struct sockaddr *)arg1 effectiveDestinationAddress:(struct sockaddr_storage *)arg2 fromDestinationAddress:(struct sockaddr *)arg3 sessionID:(id)arg4 isQRConnection:(BOOL)arg5 ;
-(BOOL)hasListener;
-(NSUInteger)_sendData:(id)arg0 withPacketBuffer:(struct ? *)arg1 NWLinkConnection:(id)arg2 ;
-(NSUInteger)sendPacketBuffer:(struct ? *)arg0 toDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 ;
-(id)_NWLinkConnectionForToken:(id)arg0 ;
-(id)_childConnectionEvaluatorForToken:(id)arg0 ;
-(id)_createNetworkInterfaceArrayWithIPVersion:(NSUInteger)arg0 wantsWiFi:(BOOL)arg1 wantsCellular:(BOOL)arg2 ;
-(id)_createNewListenerWithLocalPort:(*unsigned short)arg0 ;
-(id)_extraListenerForPort:(unsigned short)arg0 ;
-(id)_findListenerWithLocalEndpoint:(id)arg0 ;
-(id)_findNewLocalEndpointForQRConnection:(id)arg0 ;
-(id)copyChildConnectionIDForLocalAddress:(struct sockaddr *)arg0 remoteAddress:(struct sockaddr *)arg1 clientUniquePID:(NSUInteger)arg2 sessionID:(id)arg3 isRelay:(BOOL)arg4 isCellular:(BOOL)arg5 ;
-(id)copyCurrentNetworkInterfaces;
-(id)copyLinkStatsDict;
-(id)generateLinkReport:(CGFloat)arg0 isCurrentLink:(BOOL)arg1 ;
-(id)initWithDeviceUniqueID:(id)arg0 cbuuid:(id)arg1 ;
-(id)newListenerWithClientUUID:(unsigned char)arg0 wantsWiFi:(BOOL)arg1 wantsCellular:(BOOL)arg2 ;
-(unsigned int)_NAT64LocalAddressForInterfaceIndex:(unsigned int)arg0 ;
-(void)_addChildConnectionEvaluator:(id)arg0 token:(id)arg1 ;
-(void)_addExtraListener:(id)arg0 port:(unsigned short)arg1 isCellular:(BOOL)arg2 ;
-(void)_addInterfaceIndex:(unsigned int)arg0 NAT64LocalAddress:(unsigned int)arg1 ;
-(void)_addNWLinkConnection:(id)arg0 token:(id)arg1 ;
-(void)_addToRecentQRServerList:(id)arg0 ;
-(void)_addUDPConnectionInProgress:(id)arg0 ;
-(void)_cleanup:(BOOL)arg0 ;
-(void)_createIndicationConnection:(id)arg0 ;
-(void)_createUDPConnectionForNWLinkConnection:(id)arg0 readyHandler:(id)arg1 ;
-(void)_handleIncomingIndicationMessage:(id)arg0 ;
-(void)_handleIncomingMessage:(id)arg0 keepWaiting:(BOOL)arg1 ;
-(void)_peelOffQUICConnection:(id)arg0 type:(NSUInteger)arg1 readyHandler:(id)arg2 ;
-(void)_removeExtraListener:(unsigned short)arg0 ;
-(void)_removeNWLinkConnection:(id)arg0 token:(id)arg1 ;
-(void)_removeUDPConnectionInProgress:(id)arg0 ;
-(void)_setWiFiAssistStateForCellularLink:(id)arg0 isEnabled:(BOOL)arg1 ;
-(void)cleanup;
-(void)dealloc;
-(void)disconnectWithSessionID:(id)arg0 localAddress:(struct sockaddr *)arg1 remoteAddress:(struct sockaddr *)arg2 waitTime:(CGFloat)arg3 final:(BOOL)arg4 ;
-(void)invalidate;
-(void)removeChildConnectionEvaluatorForSessionID:(id)arg0 localAddress:(struct sockaddr *)arg1 remoteAddress:(struct sockaddr *)arg2 isRelay:(BOOL)arg3 ;
-(void)setWiFiAssistState:(BOOL)arg0 ;


@end


#endif