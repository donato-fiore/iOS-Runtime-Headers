// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYFILETRANSFERSYNCENGINE_H
#define SYFILETRANSFERSYNCENGINE_H

@class NSURL, IDSMessageContext, IDSService, NSMutableIndexSet, NSMutableArray, NSMutableSet, NSMutableDictionary, NSDictionary, NSString;
@protocol IDSServiceDelegate, OS_dispatch_queue, OS_os_transaction;


#import "SYSyncEngine.h"
#import "SYStartSyncSession.h"
#import "_SYOutputStreamer.h"
#import "_SYInputStreamer.h"
#import "SYDevice.h"

@interface SYFileTransferSyncEngine : SYSyncEngine <IDSServiceDelegate>

 {
    BOOL _inSession;
    BOOL _sessionCanceled;
    SYStartSyncSession *_sessionStartMessage;
    NSURL *_outputFileURL;
    _SYOutputStreamer *_outputStream;
    NSURL *_inputFileURL;
    _SYInputStreamer *_inputStream;
    IDSMessageContext *_inputPriorityBoostContext;
    NSURL *_responseFileURL;
    _SYOutputStreamer *_responseStream;
    BOOL _responsesCanceled;
    IDSService *_idsService;
    SYDevice *_activeDevice;
    SYDevice *_sessionDevice;
    SYDevice *_responseDevice;
    os_unfair_lock_s _idsQueueLock;
    NSObject<OS_dispatch_queue> *_idsQueue;
    BOOL _idsQueueIsSuspended;
    BOOL _idsQueueResumedLock;
    NSMutableIndexSet *_messageRows;
    NSMutableIndexSet *_responseMessageRows;
    NSMutableArray *_deferredIncomingSessions;
    NSMutableSet *_singleMessageUUIDs;
    os_unfair_lock_s _messageMapLock;
    NSMutableDictionary *_messageIDsToSessionIDs;
    NSObject<OS_os_transaction> *_closureTransaction;
    NSObject<OS_os_transaction> *_responseSessionTransaction;
}


@property (copy, nonatomic) NSDictionary *customIDSOptions; // ivar: _customIDSOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_sessionDeviceCanUseSingleMessages;
-(BOOL)_shouldTreatAsSessionEnd:(id)arg0 ;
-(BOOL)buffersHandshake;
-(BOOL)buffersSessions;
-(BOOL)isInSession;
-(BOOL)resume:(*id)arg0 ;
-(BOOL)targetIsNearby;
-(NSUInteger)_crcChecksum:(id)arg0 ;
-(id)_assumeOwnershipOfURL:(id)arg0 error:(*id)arg1 ;
-(id)_fileTransferHeader;
-(id)_wrapIncomingMessage:(id)arg0 ofType:(unsigned short)arg1 identifier:(id)arg2 ;
-(id)_wrapIncomingResponse:(id)arg0 ofType:(unsigned short)arg1 identifier:(id)arg2 ;
-(id)_wrapMessage:(id)arg0 ofType:(unsigned short)arg1 userInfo:(id)arg2 ;
-(id)_wrapResponse:(id)arg0 toRequest:(id)arg1 ofType:(unsigned short)arg2 ;
-(id)cancelMessagesReturningFailures:(id)arg0 ;
-(id)idsOptions:(id)arg0 ;
-(id)idsOptions:(id)arg0 forFileTransfer:(BOOL)arg1 ;
-(id)initWithService:(id)arg0 queue:(id)arg1 ;
-(id)outputStreamWithMetadata:(id)arg0 priority:(NSInteger)arg1 options:(id)arg2 context:(id)arg3 error:(*id)arg4 ;
-(id)stateForLogging;
-(void)_cancelResponses;
-(void)_cancelSession;
-(void)_consumeRemainingStreamDataWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_enqueueSingleMessage:(id)arg0 withMessageID:(unsigned short)arg1 priority:(NSInteger)arg2 options:(id)arg3 userContext:(id)arg4 callback:(id)arg5 ;
-(void)_handleError:(id)arg0 messageID:(id)arg1 streamer:(id)arg2 ;
-(void)_handleIncomingSessionFileAtOwnedURL:(id)arg0 metadata:(id)arg1 identifier:(id)arg2 idsContext:(id)arg3 ;
-(void)_handleIncomingSessionFileAtURL:(id)arg0 metadata:(id)arg1 identifier:(id)arg2 idsContext:(id)arg3 ;
-(void)_handleIncomingStreamDataWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_handleProtobuf:(id)arg0 ofType:(unsigned short)arg1 identifier:(id)arg2 isResponse:(BOOL)arg3 withCompletion:(id)arg4 ;
-(void)_handleSessionRestart:(id)arg0 priority:(NSInteger)arg1 options:(id)arg2 userContext:(id)arg3 callback:(id)arg4 ;
-(void)_processNMSMessageData:(id)arg0 context:(id)arg1 ;
-(void)_readNextProtobuf:(id)arg0 ;
-(void)_reallyHandleSessionRestart:(id)arg0 priority:(NSInteger)arg1 options:(id)arg2 userContext:(id)arg3 callback:(id)arg4 ;
-(void)_recordLastSeqNo:(id)arg0 ;
-(void)_resumeIdsQueue;
-(void)_suspendIdsQueue;
-(void)beginResponseSession;
-(void)beginSession;
-(void)dealloc;
-(void)endFileTransferForStream:(id)arg0 atURL:(id)arg1 target:(id)arg2 wasCancelled:(BOOL)arg3 messageRows:(id)arg4 ;
-(void)endResponseSession;
-(void)endSession;
-(void)enqueueSyncRequest:(id)arg0 withMessageID:(unsigned short)arg1 priority:(NSInteger)arg2 options:(id)arg3 userContext:(id)arg4 callback:(id)arg5 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 hasBeenDeliveredWithContext:(id)arg3 ;
-(void)service:(id)arg0 account:(id)arg1 incomingData:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingResourceAtURL:(id)arg2 metadata:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg0 connectedDevicesChanged:(id)arg1 ;
-(void)service:(id)arg0 didSwitchActivePairedDevice:(id)arg1 acknowledgementBlock:(id)arg2 ;
-(void)service:(id)arg0 nearbyDevicesChanged:(id)arg1 ;
-(void)suspend;


@end


#endif