// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _IDSSESSION_H
#define _IDSSESSION_H

@class NSString, NSSet, IDSBaseSocketPairConnection, CUTWeakReference, NSMutableDictionary;
@protocol IDSDaemonListenerProtocol, IDSBaseSocketPairConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _IDSSession : NSObject <IDSDaemonListenerProtocol, IDSBaseSocketPairConnectionDelegate>

 {
    id *_delegateContext;
    NSString *_uniqueID;
    NSString *_accountID;
    NSSet *_destinations;
    IDSBaseSocketPairConnection *_unreliableSocketPairConnection;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _transportType;
    int _socket;
    BOOL _isAudioEnabled;
    BOOL _isMuted;
    BOOL _isLegacy;
    NSInteger _inviteTimeout;
    NSUInteger _connectionCountHint;
    BOOL _needsToWaitForPreConnectionData;
    BOOL _disallowCellularInterface;
    BOOL _disallowWifiInterface;
    NSUInteger _preferredAddressFamily;
    BOOL _preferCellularForCallSetup;
    NSString *_clientUUID;
    BOOL _disableEncryption;
    BOOL _shouldUseSocketForTransport;
    BOOL _enableSingleChannelDirectMode;
    BOOL _alwaysSkipSelf;
    unsigned int _sessionEndedReason;
    NSMutableDictionary *_preferences;
    NSMutableDictionary *_sessionConfig;
}


@property (retain, nonatomic) id *boostContext; // ivar: _boostContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger initialLinkType; // ivar: _initialLinkType
@property (nonatomic) NSInteger inviteTimeout;
@property (readonly, nonatomic) unsigned int sessionEndedReason;
@property (readonly, nonatomic) int socket;
@property (readonly, nonatomic) unsigned int state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueID;


-(BOOL)getAudioEnabled;
-(BOOL)getMuted;
-(BOOL)sendData:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldUseSocketForTransport;
-(NSUInteger)MTUForAddressFamily:(NSUInteger)arg0 ;
-(id)_initWithAccount:(id)arg0 destinations:(id)arg1 options:(id)arg2 delegateContext:(id)arg3 ;
-(id)_initWithAccount:(id)arg0 destinations:(id)arg1 transportType:(NSInteger)arg2 connectionCountHint:(NSUInteger)arg3 needsToWaitForPreConnectionData:(BOOL)arg4 uniqueID:(id)arg5 delegateContext:(id)arg6 ;
-(id)daemonController;
-(id)daemonListener;
-(id)getPreferences;
-(id)initWithAccount:(id)arg0 destinations:(id)arg1 options:(id)arg2 delegateContext:(id)arg3 ;
-(id)initWithAccount:(id)arg0 destinations:(id)arg1 transportType:(NSInteger)arg2 delegateContext:(id)arg3 ;
-(id)initWithAccount:(id)arg0 destinations:(id)arg1 transportType:(NSInteger)arg2 uniqueID:(id)arg3 delegateContext:(id)arg4 ;
-(void)_broadcastNewSessionToDaemon;
-(void)_callDelegateWithBlock:(id)arg0 ;
-(void)_cleanupSocketPairConnections;
-(void)_setupSocketPairToDaemon;
-(void)_setupUnreliableSocketPairConnection;
-(void)acceptInvitation;
-(void)acceptInvitationWithData:(id)arg0 ;
-(void)allocationDone:(id)arg0 sessionInfo:(id)arg1 ;
-(void)cancelInvitation;
-(void)cancelInvitationWithData:(id)arg0 ;
-(void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg0 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 ;
-(void)daemonDisconnected;
-(void)dealloc;
-(void)declineInvitation;
-(void)declineInvitationWithData:(id)arg0 ;
-(void)endSession;
-(void)endSessionWithData:(id)arg0 ;
-(void)reconnectSession;
-(void)sendAllocationRequest:(id)arg0 ;
-(void)sendInvitationWithData:(id)arg0 declineOnError:(BOOL)arg1 ;
-(void)sendInvitationWithOptions:(id)arg0 ;
-(void)sendSessionMessage:(id)arg0 ;
-(void)sendSessionMessage:(id)arg0 toDestinations:(id)arg1 ;
-(void)session:(id)arg0 audioEnabled:(BOOL)arg1 ;
-(void)session:(id)arg0 didReceiveReport:(id)arg1 ;
-(void)session:(id)arg0 invitationSentToTokens:(id)arg1 shouldBreakBeforeMake:(BOOL)arg2 ;
-(void)session:(id)arg0 muted:(BOOL)arg1 ;
-(void)sessionAcceptReceived:(id)arg0 fromID:(id)arg1 withData:(id)arg2 ;
-(void)sessionCancelReceived:(id)arg0 fromID:(id)arg1 withData:(id)arg2 ;
-(void)sessionDeclineReceived:(id)arg0 fromID:(id)arg1 withData:(id)arg2 ;
-(void)sessionEndReceived:(id)arg0 fromID:(id)arg1 withData:(id)arg2 ;
-(void)sessionEnded:(id)arg0 withReason:(unsigned int)arg1 error:(id)arg2 ;
-(void)sessionMessageReceived:(id)arg0 fromID:(id)arg1 withData:(id)arg2 ;
-(void)sessionStarted:(id)arg0 ;
-(void)setAudioEnabled:(BOOL)arg0 ;
-(void)setDelegate:(id)arg0 queue:(id)arg1 ;
-(void)setMuted:(BOOL)arg0 ;
-(void)setPreferences:(id)arg0 ;
-(void)xpcObject:(id)arg0 objectContext:(id)arg1 ;


@end


#endif