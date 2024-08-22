// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYSESSION_H
#define SYSESSION_H

@class NSMutableSet, NSMutableDictionary, NSString, NSError, NSDictionary, PBCodable;
@protocol SYChangeSerializer, SYStateLoggable, OS_dispatch_queue, OS_os_transaction, SYSessionDelegate;

#import <Foundation/Foundation.h>

#import "SYService.h"

@interface SYSession : NSObject <SYChangeSerializer, SYStateLoggable>

 {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    uint8_t _inTransaction;
    NSObject<OS_os_transaction> *_transaction;
    uint8_t _paused;
    NSMutableSet *_pendingMessageIDs;
    BOOL _rejectedNewSessionFromSamePeer;
    BOOL _sessionStarted;
    NSMutableDictionary *_stateResponders;
    os_unfair_lock_s _setDelegateLock;
}


@property (nonatomic) CGFloat birthDate; // ivar: _birthDate
@property BOOL canRestart;
@property BOOL canRollback;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SYSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) CGFloat fullSessionTimeout; // ivar: _fullSessionTimeout
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) BOOL isResetSync;
@property (readonly, nonatomic) BOOL isSending; // ivar: _isSending
@property (nonatomic) NSInteger maxConcurrentMessages; // ivar: _maxConcurrentMessages
@property (copy, nonatomic) NSDictionary *options; // ivar: _options
@property (copy, nonatomic) NSMutableDictionary *peerGenerationIDs; // ivar: _peerGenerationIDs
@property (nonatomic) CGFloat perMessageTimeout; // ivar: _perMessageTimeout
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) NSUInteger protocolVersion;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) CGFloat remainingSessionTime;
@property (readonly, nonatomic) NSUInteger sentChangeByteCount;
@property (readonly, nonatomic) NSUInteger sentChangeCount;
@property (retain, nonatomic) NSObject<SYChangeSerializer> *serializer; // ivar: _serializer
@property (readonly, weak, nonatomic) SYService *service; // ivar: _service
@property (copy, nonatomic) NSDictionary *sessionMetadata; // ivar: _sessionMetadata
@property (nonatomic) NSUInteger sessionSignpost; // ivar: _sessionSignpost
@property unsigned int state;
@property (readonly, nonatomic) PBCodable *stateForLogging;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (retain, nonatomic) NSDictionary *userContext; // ivar: _userContext
@property (readonly) BOOL wasCancelled;
@property (readonly, nonatomic) NSDictionary *wrappedUserContext;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)unarchiveMetadata:(id)arg0 ;
-(BOOL)_beginTransaction;
-(BOOL)_endTransaction;
-(BOOL)_handleEndSessionResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)_handleRestartSessionResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)_handleStartSessionResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)_handleSyncBatchResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)_readyToProcessIncomingMessages;
-(BOOL)_willAcquiesceToNewSessionFromPeer:(id)arg0 ;
-(BOOL)hasRejectedPeerSession;
-(id)CPSafeDescription;
-(id)_cancelPendingMessagesReturningFailures;
-(id)changeFromData:(id)arg0 ofType:(NSInteger)arg1 ;
-(id)combinedEngineOptions:(id)arg0 ;
-(id)dataFromChange:(id)arg0 ;
-(id)decodeChangeData:(id)arg0 fromProtocolVersion:(NSInteger)arg1 ofType:(NSInteger)arg2 ;
-(id)encodeSYChangeForBackwardCompatibility:(id)arg0 protocolVersion:(NSInteger)arg1 ;
-(id)initWithService:(id)arg0 ;
-(void)_clearOutgoingMessageUUID:(id)arg0 ;
-(void)_continue;
-(void)_handleEndSession:(id)arg0 response:(id)arg1 completion:(id)arg2 ;
-(void)_handleError:(id)arg0 ;
-(void)_handleRestartSession:(id)arg0 response:(id)arg1 completion:(id)arg2 ;
-(void)_handleSyncBatch:(id)arg0 response:(id)arg1 completion:(id)arg2 ;
-(void)_onSessionStateChangedTo:(unsigned int)arg0 do:(id)arg1 ;
-(void)_pause;
-(void)_peerProcessedMessageWithIdentifier:(id)arg0 userInfo:(id)arg1 ;
-(void)_recordOutgoingMessageUUID:(id)arg0 ;
-(void)_resolvedIdentifier:(id)arg0 forResponse:(id)arg1 ;
-(void)_resolvedIdentifierForRequest:(id)arg0 ;
-(void)_sentMessageWithIdentifier:(id)arg0 userInfo:(id)arg1 ;
-(void)_supercededWithSession:(id)arg0 ;
-(void)cancel;
-(void)cancelWithError:(id)arg0 ;
-(void)dealloc;
-(void)didCompleteSession;
-(void)didStartSession;
-(void)setHasRejectedPeerSession:(BOOL)arg0 ;
-(void)start:(id)arg0 ;


@end


#endif