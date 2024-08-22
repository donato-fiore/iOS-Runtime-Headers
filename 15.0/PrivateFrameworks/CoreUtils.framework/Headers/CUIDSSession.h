// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIDSSESSION_H
#define CUIDSSESSION_H

@class IDSService, IDSSession, NSString;
@protocol IDSServiceDelegate, IDSSessionDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUIDSReadRequest.h"
#import "CUIDSWriteRequest.h"

@interface CUIDSSession : NSObject <IDSServiceDelegate, IDSSessionDelegate>

 {
    IDSService *_idsService;
    IDSSession *_idsSession;
    BOOL _idsInviting;
    int _idsSock;
    CUIDSReadRequest *_readRequestList;
    *id _readRequestNext;
    CUIDSReadRequest *_readRequestCurr;
    NSObject<OS_dispatch_source> *_readSource;
    BOOL _readSuspended;
    CUIDSWriteRequest *_writeRequestList;
    *id _writeRequestNext;
    CUIDSWriteRequest *_writeRequestCurr;
    NSObject<OS_dispatch_source> *_writeSource;
    BOOL _writeSuspended;
    *LogCategory _ucat;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *idsDestination; // ivar: _idsDestination
@property (nonatomic) BOOL idsEncryption; // ivar: _idsEncryption
@property (copy, nonatomic) NSString *idsInviteToken; // ivar: _idsInviteToken
@property (copy, nonatomic) NSString *idsServiceName; // ivar: _idsServiceName
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (readonly) Class superclass;


-(id)init;
-(int)_setupSocket;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_completeReadRequest:(id)arg0 error:(id)arg1 ;
-(void)_handleError:(id)arg0 ;
-(void)_invalidate;
-(void)_processReadRequests;
-(void)_processWriteRequests;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)readMinLength:(NSUInteger)arg0 maxLength:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)service:(id)arg0 account:(id)arg1 inviteReceivedForSession:(id)arg2 fromID:(id)arg3 withOptions:(id)arg4 ;
-(void)session:(id)arg0 receivedInvitationAcceptFromID:(id)arg1 ;
-(void)session:(id)arg0 receivedInvitationCancelFromID:(id)arg1 ;
-(void)session:(id)arg0 receivedInvitationDeclineFromID:(id)arg1 ;
-(void)sessionEnded:(id)arg0 withReason:(unsigned int)arg1 error:(id)arg2 ;
-(void)sessionStarted:(id)arg0 ;
-(void)writeData:(id)arg0 completion:(id)arg1 ;


@end


#endif