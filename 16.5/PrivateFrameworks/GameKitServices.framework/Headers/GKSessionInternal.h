// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKSESSIONINTERNAL_H
#define GKSESSIONINTERNAL_H

@class GKSession, NSString;
@protocol GKSessionDelegate, GKSessionPrivateDelegate;

#import <Foundation/Foundation.h>

#import "GKTable.h"
#import "GKAutoPeerIDTable.h"
#import "GKList.h"
#import "GKVoiceChatSessionListener.h"
#import "GKConnection.h"

@interface GKSessionInternal : NSObject {
    GKSession *_session;
    NSString *_displayName;
    unsigned int _pid;
    id *_delegate;
    id *_privateDelegate;
    id *_dataReceiveHandler;
    *void _dataReceiveHandlerContext;
    id<GKSessionDOOBReceiveHandler>" _doobReceiveHandler;
    *void _doobReceiveHandlerContext;
    GKTable *_peerInfoTable;
    GKTable *_peerNameTable;
    GKAutoPeerIDTable *_peerIDTable;
    GKList *_peersAvailable;
    GKList *_peersConnected;
    GKList *_peersForCleanup;
    GKList *_peersPendingIncomingInvitation;
    GKList *_peersPendingOutgoingInvitation;
    _opaque_pthread_mutex_t _lock;
    _opaque_pthread_mutex_t _delegateLock;
    BOOL _isSearching;
    BOOL _isPublishing;
    BOOL _sessionStarted;
    BOOL _isBusy;
    CGFloat disconnectTimeout;
    *_DNSServiceRef_t _dnsServiceConnection;
    *_DNSServiceRef_t _dnsServiceResolveConnection;
    int _sReset;
    *_DNSServiceRef_t _serviceBrowser;
    *_DNSServiceRef_t _service;
    *_DNSServiceRef_t _oldService;
    BOOL _handleEventsRunning;
    BOOL _stopHandlingEvents;
    BOOL _wifiEnabled;
    BOOL _shutdown;
    GKVoiceChatSessionListener *_voiceChatListener;
}


@property (nonatomic) *OpaqueAGPSession agpSessionRef; // ivar: agpSessionRef
@property (getter=isAvailable) BOOL available;
@property (getter=isBusy) BOOL busy;
@property (readonly, retain) GKConnection *connection; // ivar: _connection
@property (readonly, nonatomic) id *dataReceiveHandler;
@property NSObject<GKSessionDelegate> *delegate;
@property CGFloat disconnectTimeout;
@property (readonly) NSString *displayName;
@property (copy, nonatomic) NSString *domain; // ivar: domain
@property (nonatomic) NSUInteger maxPeers; // ivar: maxPeers
@property (readonly) NSString *peerID;
@property (nonatomic) NSUInteger port; // ivar: _port
@property NSObject<GKSessionPrivateDelegate> *privateDelegate;
@property (copy, nonatomic) NSString *serviceType; // ivar: serviceType
@property (readonly) NSString *sessionID; // ivar: sessionID
@property (readonly) unsigned int sessionMode; // ivar: _mode
@property (nonatomic) *OpaqueGCKSession sessionRef; // ivar: sessionRef
@property BOOL wifiEnabled;


-(BOOL)acceptConnectionFromPeer:(id)arg0 error:(*id)arg1 ;
-(BOOL)checkDNSConnection;
-(BOOL)filterService:(char *)arg0 withPID:(unsigned int)arg1 ;
-(BOOL)isPeerBusy:(id)arg0 ;
-(BOOL)isShuttingDown;
-(BOOL)parseServiceName:(char *)arg0 intoDisplayName:(*id)arg1 pid:(*unsigned int)arg2 state:(*id)arg3 ;
-(BOOL)passesSendDataSanityCheck:(id)arg0 toPeers:(id)arg1 withDataMode:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)sendAudioData:(id)arg0 toPeers:(id)arg1 withDataMode:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)sendData:(id)arg0 toPeers:(id)arg1 withDataMode:(unsigned int)arg2 enableOOB:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)sendData:(id)arg0 toPeers:(id)arg1 withDataMode:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)sendDataToAllPeers:(id)arg0 withDataMode:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)tryConnectToPeer:(id)arg0 ;
-(id)description;
-(id)displayNameForPeer:(id)arg0 ;
-(id)initWithConnection:(id)arg0 session:(id)arg1 delegate:(id)arg2 ;
-(id)initWithSessionID:(id)arg0 displayName:(id)arg1 session:(id)arg2 sessionMode:(unsigned int)arg3 ;
-(id)newNSErrorFromGKSessionError:(int)arg0 description:(id)arg1 reason:(id)arg2 ;
-(id)newNSErrorFromHRESULT:(int)arg0 description:(id)arg1 reason:(id)arg2 ;
-(id)peersWithConnectionState:(unsigned int)arg0 ;
-(id)serviceName;
-(id)stringForGCKID:(unsigned int)arg0 ;
-(id)voiceChatSessionListener;
-(void)browse;
-(void)cancelConnectToPeer:(id)arg0 ;
-(void)cleanupExAvailablePeers;
-(void)connectToPeer:(id)arg0 withTimeout:(CGFloat)arg1 ;
-(void)dealloc;
-(void)denyConnectionFromPeer:(id)arg0 ;
-(void)didFindService:(char *)arg0 fromIF:(char *)arg1 withError:(int)arg2 moreComing:(BOOL)arg3 ;
-(void)didLookupHostname:(struct _DNSServiceRef_t *)arg0 forPeer:(id)arg1 hostName:(char *)arg2 address:(struct sockaddr_in *)arg3 interface:(unsigned int)arg4 withError:(int)arg5 moreComing:(BOOL)arg6 ;
-(void)didPublishWithError:(int)arg0 ;
-(void)didRemoveService:(char *)arg0 fromIF:(char *)arg1 withError:(int)arg2 moreComing:(BOOL)arg3 ;
-(void)didResolveService:(struct _DNSServiceRef_t *)arg0 forPeer:(id)arg1 hostName:(char *)arg2 port:(unsigned short)arg3 interface:(unsigned int)arg4 txtLen:(unsigned short)arg5 txtRecord:(*void)arg6 withError:(int)arg7 moreComing:(BOOL)arg8 ;
-(void)didUpdateTXTRecordForPeer:(id)arg0 fromIF:(char *)arg1 txtLen:(unsigned short)arg2 txtRecord:(*void)arg3 withError:(int)arg4 moreComing:(BOOL)arg5 ;
-(void)disconnectFromAllPeers;
-(void)disconnectPeerFromAllPeers:(id)arg0 ;
-(void)handleEvents;
-(void)lock;
-(void)printDictionaries;
-(void)processTXTRecordForPeer:(id)arg0 txtLen:(unsigned short)arg1 txtRecord:(*void)arg2 ;
-(void)publish;
-(void)receiveDOOB:(id)arg0 fromPeer:(id)arg1 inSession:(id)arg2 context:(*void)arg3 ;
-(void)reset;
-(void)sendCallbacksToDelegate:(struct ? *)arg0 remotePeer:(unsigned int)arg1 ;
-(void)setDOOBReceiveHandler:(id)arg0 withContext:(*void)arg1 inBand:(unsigned int)arg2 ;
-(void)stopOldService;
-(void)stopResolvingAllPeers;
-(void)tellDelegate_connectionRequestToPeerFailed:(id)arg0 ;
-(void)tellDelegate_didConnectPeer:(id)arg0 ;
-(void)tellDelegate_didDisconnectPeer:(id)arg0 ;
-(void)tellDelegate_didReceiveBand_RetryICE:(id)arg0 ;
-(void)tellDelegate_didReceiveData:(id)arg0 ;
-(void)tellDelegate_gotInvited:(id)arg0 ;
-(void)tellDelegate_initiateRelay:(id)arg0 ;
-(void)tellDelegate_isConnectingPeer:(id)arg0 ;
-(void)tellDelegate_networkStatisticsChanged:(id)arg0 ;
-(void)tellDelegate_peerDidBecomeAvailable:(id)arg0 ;
-(void)tellDelegate_peerDidBecomeBusy:(id)arg0 ;
-(void)tellDelegate_peerDidBecomeUnavailable:(id)arg0 ;
-(void)tellDelegate_sessionDidFailWithError:(id)arg0 ;
-(void)tellDelegate_updateRelay:(id)arg0 ;
-(void)timeoutConnectToPeer:(id)arg0 ;
-(void)unlock;


@end


#endif