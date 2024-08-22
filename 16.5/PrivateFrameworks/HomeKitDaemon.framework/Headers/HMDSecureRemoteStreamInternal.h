// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSECUREREMOTESTREAMINTERNAL_H
#define HMDSECUREREMOTESTREAMINTERNAL_H

@class HMFObject, NSMutableDictionary, NSString, NSMutableArray;
@protocol HMFLogging, OS_dispatch_source, OS_dispatch_queue;



@interface HMDSecureRemoteStreamInternal : HMFObject <HMFLogging>

 {
    unsigned char _cipherReadKey;
    unsigned char _cipherReadNonce;
    unsigned char _cipherWriteKey;
    unsigned char _cipherWriteNonce;
    BOOL _commitResponded;
    NSObject<OS_dispatch_source> *_idleTimer;
    NSObject<OS_dispatch_queue> *_internalQueue;
    unsigned char _pairVerifyDone;
    *PairingSessionPrivate _pairVerifySession;
    NSMutableDictionary *_prepareRequests;
    BOOL _prepareResponded;
    NSString *_sessionID;
    BOOL _started;
    int _state;
    NSMutableDictionary *_transactions;
    NSMutableArray *_userTransactions;
    NSInteger _type;
    NSUInteger _commitTimeoutNanos;
    NSUInteger _clientIdleTimeoutNanos;
    NSUInteger _serverIdleTimeoutNanos;
    NSUInteger _sendInternalTimeoutNanos;
    NSUInteger _sendUserTimeoutNanos;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _userQueue
@property (copy) id *findPeerHandler; // ivar: _findPeerHandler
@property (copy) id *getLocalIdentityHandler; // ivar: _getLocalIdentityHandler
@property (readonly) NSUInteger hash;
@property (copy) id *internalRequestHandler; // ivar: _internalRequestHandler
@property (copy) id *requestHandler; // ivar: _requestHandler
@property (readonly) CGFloat requestTimeout;
@property (copy) id *startedHandler; // ivar: _startedHandler
@property (copy) id *stoppedHandler; // ivar: _stoppedHandler
@property (readonly) Class superclass;
@property (copy) id *transportSendMessage; // ivar: _transportSendMessage


+(id)logCategory;
-(id)init;
-(id)initWithType:(NSInteger)arg0 commitTimeout:(NSUInteger)arg1 clientIdleTimeout:(NSUInteger)arg2 serverIdleTimeout:(NSUInteger)arg3 sendInternalTimeout:(NSUInteger)arg4 sendUserTimeout:(NSUInteger)arg5 ;
-(id)logIdentifier;
-(int)_clientHandleCommitResponse:(id)arg0 options:(id)arg1 ;
-(int)_clientHandlePrepareResponse:(id)arg0 options:(id)arg1 ;
-(int)_clientPairVerifyExchange:(id)arg0 ;
-(int)_clientSendCommitRequest:(id)arg0 ;
-(int)_clientSendPrepareRequest:(id)arg0 ;
-(int)_serverHandleCommitRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(int)_serverHandleDecryptedRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(int)_serverHandlePrepareRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(int)_setupEncryption;
-(int)_updateIdleTimer;
-(void)_clientRunStateMachine;
-(void)_completeTransaction:(id)arg0 response:(id)arg1 options:(id)arg2 status:(int)arg3 ;
-(void)_completeUserTransaction:(id)arg0 response:(id)arg1 options:(id)arg2 status:(int)arg3 ;
-(void)_runStateMachine;
-(void)_sendRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(void)_sendUserRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(void)_serverCompletePrepareRequest:(id)arg0 ;
-(void)_serverHandleEncryptedRequest:(id)arg0 options:(id)arg1 ;
-(void)_serverPairVerifyExchange:(id)arg0 options:(id)arg1 ;
-(void)_serverRunStateMachine;
-(void)_start;
-(void)_stop:(int)arg0 ;
-(void)_transportReceivedMessage:(id)arg0 options:(id)arg1 ;
-(void)dealloc;
-(void)sendRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(void)start;
-(void)stop;
-(void)transportReceivedMessage:(id)arg0 options:(id)arg1 ;


@end


#endif