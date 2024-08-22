// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKCONNECTIONINTERNAL_H
#define GKCONNECTIONINTERNAL_H

@class NSString, NSMutableArray, NSData, NSMutableDictionary, NSMutableSet, TimingCollection;
@protocol CDXClientDelegate, CDXClientSessionDelegate, OS_dispatch_source;


#import "GKConnection.h"
#import "CDXClient.h"

@interface GKConnectionInternal : GKConnection <CDXClientDelegate, CDXClientSessionDelegate>

 {
    unsigned int _gckPID;
    NSString *_pidGUID;
    *OpaqueGCKSession _gckSession;
    NSMutableArray *_gckEventList;
    id *_eventDelegate;
    NSData *_preblob;
    id *_preblobCallback;
    CGFloat _preblobCallbackCancelTime;
    _opaque_pthread_mutex_t _xPreblobFetch;
    _opaque_pthread_cond_t _cPreblobFetch;
    _opaque_pthread_mutex_t _xPrepareThread;
    _opaque_pthread_cond_t _cPrepareThread;
    int _fPrepareThread;
    CGFloat _wakeTime;
    NSMutableDictionary *_preblobToPIDMap;
    NSMutableDictionary *_pidToPreblobMap;
    NSMutableDictionary *_pidToConnectionDataMap;
    NSMutableArray *_pendingConnectionPIDList;
    BOOL _fAllowMoreRelay;
    NSMutableArray *_allowRelayPIDList;
    NSMutableDictionary *_pidToPlayerIDMap;
    _opaque_pthread_mutex_t _xRelay;
    NSMutableDictionary *_pidToRelayInitiateInfoMap;
    NSMutableDictionary *_pidToRelayConnectionDataMap;
    NSMutableDictionary *_pidToRelayUpdateInfoMap;
    NSMutableDictionary *_initRelayQueue;
    NSMutableDictionary *_updateRelayQueue;
    int _fPreReleased;
    int _localGamingCDXSocket;
    unsigned short _localGamingCDXPort;
    NSObject<OS_dispatch_source> *_localGamingCDXListenSource;
    NSMutableDictionary *_localGamingSocketToPIDMap;
    NSMutableDictionary *_localGamingSocketToConnectionDataMap;
    NSMutableSet *_pidsPreparedForConnection;
    *opaqueRTCReporting _reportingAgent;
    TimingCollection *_perfTimers;
}


@property (retain, nonatomic) CDXClient *cdxClient; // ivar: _cdxClient
@property (retain) NSMutableDictionary *cdxSessions; // ivar: _cdxSessions
@property (retain) NSMutableDictionary *pidToConnectTimeoutSource; // ivar: _pidToConnectTimeoutSource


-(BOOL)convertParticipantID:(id)arg0 toPeerID:(*id)arg1 ;
-(BOOL)convertPeerID:(id)arg0 toParticipantID:(*id)arg1 ;
-(BOOL)localGamingCheckEstablishConnection:(id)arg0 connectionData:(id)arg1 ;
-(BOOL)shouldWeInitiateRelayWithPID:(unsigned int)arg0 ;
-(BOOL)startListeningForLocalGamingCDX;
-(id)asyncWorkQueue;
-(id)createInitiateRelayDictionaryForParticipant:(id)arg0 remotePeerID:(id)arg1 ;
-(id)createInsecureTicketUsingSortedConnectionsFromList:(id)arg0 ;
-(id)eventDelegate;
-(id)extractBlobUsingData:(id)arg0 withSourcePID:(unsigned int)arg1 destPID:(unsigned int)arg2 ;
-(id)getLocalConnectionDataForLocalGaming;
-(id)initWithParticipantID:(id)arg0 ;
-(id)networkStatistics;
-(id)networkStatisticsDictionaryForGCKStats:(*void)arg0 ;
-(id)newRelayUpdateDictionaryForParticipant:(id)arg0 didInitiate:(BOOL)arg1 ;
-(id)timerQueue;
-(struct OpaqueGCKSession *)gckSession;
-(struct opaqueRTCReporting *)reportingAgent;
-(unsigned int)gckPID;
-(void)CDXClient:(id)arg0 error:(id)arg1 ;
-(void)CDXClient:(id)arg0 preblob:(id)arg1 ;
-(void)CDXClientSession:(id)arg0 receivedData:(id)arg1 from:(NSInteger)arg2 ;
-(void)addEvent:(struct ? *)arg0 remotePeer:(unsigned int)arg1 ;
-(void)cancelConnectParticipant:(id)arg0 ;
-(void)connectParticipantsWithConnectionData:(id)arg0 withSessionInfo:(id)arg1 ;
-(void)connectPendingConnectionsFromList:(id)arg0 sessionInfo:(id)arg1 ;
-(void)dealloc;
-(void)doRelayCheckForRemotePeerID:(id)arg0 ;
-(void)getLocalConnectionDataWithCompletionHandler:(id)arg0 ;
-(void)initiateRelayWithParticipant:(id)arg0 withConnectionData:(id)arg1 withRelayInfo:(id)arg2 didInitiate:(BOOL)arg3 ;
-(void)internalInitiateRelayWithParticipant:(id)arg0 withConnectionData:(id)arg1 withRelayInfo:(id)arg2 didInitiate:(BOOL)arg3 ;
-(void)internalUpdateRelayWithParticipant:(id)arg0 withConnectionData:(id)arg1 withRelayInfo:(id)arg2 didInitiate:(BOOL)arg3 ;
-(void)internal_setRemoteConnectionData:(id)arg0 fromParticipantID:(id)arg1 pendingConnectionPIDList:(id)arg2 ;
-(void)localGamingReceiveDataHandler:(id)arg0 data:(id)arg1 time:(CGFloat)arg2 error:(id)arg3 ;
-(void)preRelease;
-(void)setEventDelegate:(id)arg0 ;
-(void)setParticipantID:(id)arg0 forPeerID:(id)arg1 ;
-(void)setReportingAgent:(struct opaqueRTCReporting *)arg0 ;
-(void)updateRelayWithParticipant:(id)arg0 withConnectionData:(id)arg1 withRelayInfo:(id)arg2 didInitiate:(BOOL)arg3 ;


@end


#endif