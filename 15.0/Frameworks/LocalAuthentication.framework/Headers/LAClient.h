// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LACLIENT_H
#define LACLIENT_H

@class LACachedExternalizedContext, NSString, NSData, NSMutableArray, NSError, NSXPCConnection, NSNumber, NSUUID;
@protocol LAContextXPC, LAContextCallbackXPC, LAUIDelegate;

#import <Foundation/Foundation.h>

#import "LAContext.h"

@interface LAClient : NSObject <LAContextXPC, LAContextCallbackXPC>

 {
    BOOL _shouldRecoverConnection;
}


@property (retain) LACachedExternalizedContext *cachedExternalizedContext; // ivar: _cachedExternalizedContext
@property (readonly, weak, nonatomic) LAContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *existingContext; // ivar: _existingContext
@property (readonly, nonatomic) NSData *externalizedContext;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *invalidations; // ivar: _invalidations
@property (retain) NSError *permanentError; // ivar: _permanentError
@property (retain, nonatomic) NSObject<LAContextXPC> *remoteContext; // ivar: _remoteContext
@property (readonly, nonatomic) NSXPCConnection *serverConnection; // ivar: _serverConnection
@property (readonly) Class superclass;
@property (nonatomic) BOOL synchronous; // ivar: _synchronous
@property (readonly, nonatomic) NSObject<LAContextXPC> *synchronousRemoteContext; // ivar: _synchronousRemoteContext
@property (weak, nonatomic) NSObject<LAUIDelegate> *uiDelegate; // ivar: _uiDelegate
@property (readonly, nonatomic) NSNumber *userSession; // ivar: _userSession
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)_queue;
+(id)_recoveryQueue;
+(id)createConnection:(*unsigned int)arg0 legacyService:(BOOL)arg1 ;
+(void)_performInvalidationBlocks:(id)arg0 ;
-(BOOL)setServerPropertyForOption:(NSInteger)arg0 value:(id)arg1 error:(*id)arg2 ;
-(id)_updateOptions:(id)arg0 ;
-(id)initWithExternalizedContext:(id)arg0 userSession:(*unsigned int)arg1 context:(id)arg2 ;
-(id)initWithUUID:(id)arg0 token:(id)arg1 senderAuditTokenData:(id)arg2 context:(id)arg3 ;
-(id)serverPropertyForOption:(NSInteger)arg0 error:(*id)arg1 ;
-(id)synchronousExternalizedContextWithError:(*id)arg0 ;
// -(void)_checkIdResultForTCC:(id)arg0 error:(id)arg1 retryBlock:(id)arg2 finally:(unk)arg3  ;
-(void)_connectToServerWithRecovery:(BOOL)arg0 userSession:(*unsigned int)arg1 legacyService:(BOOL)arg2 ;
-(void)_handleConnectionResult:(id)arg0 uuid:(id)arg1 error:(id)arg2 ;
// -(void)_performCallBool:(id)arg0 finally:(unk)arg1  ;
// -(void)_performCallId:(id)arg0 finally:(unk)arg1  ;
// -(void)_performSyncCallBool:(id)arg0 finally:(unk)arg1  ;
// -(void)_performSyncCallId:(id)arg0 finally:(unk)arg1  ;
-(void)_recoverConnection;
-(void)_scheduleRecovery;
-(void)_serializedInvalidateWithMessage:(id)arg0 ;
-(void)_synchronousRemoteObjectProxy:(*unsigned int)arg0 performCall:(id)arg1 ;
-(void)allowTransferToProcess:(int)arg0 receiverAuditTokenData:(id)arg1 reply:(id)arg2 ;
-(void)authMethodWithReply:(id)arg0 ;
-(void)bootstrapServiceType:(id)arg0 completionHandler:(id)arg1 ;
-(void)credentialOfType:(NSInteger)arg0 reply:(id)arg1 ;
-(void)dealloc;
-(void)evaluateACL:(id)arg0 operation:(id)arg1 options:(id)arg2 reply:(id)arg3 ;
-(void)evaluateACL:(id)arg0 operation:(id)arg1 options:(id)arg2 uiDelegate:(id)arg3 reply:(id)arg4 ;
-(void)evaluatePolicy:(NSInteger)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)evaluatePolicy:(NSInteger)arg0 options:(id)arg1 uiDelegate:(id)arg2 reply:(id)arg3 ;
-(void)externalizedContextWithReply:(id)arg0 ;
-(void)failProcessedEvent:(NSInteger)arg0 failureError:(id)arg1 reply:(id)arg2 ;
-(void)invalidateWithMessage:(id)arg0 ;
-(void)invalidateWithReply:(id)arg0 ;
-(void)invalidatedWithError:(id)arg0 ;
-(void)isCredentialSet:(NSInteger)arg0 reply:(id)arg1 ;
-(void)notifyEvent:(NSInteger)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)optionsForInternalOperation:(NSInteger)arg0 reply:(id)arg1 ;
-(void)pauseProcessedEvent:(NSInteger)arg0 pause:(BOOL)arg1 reply:(id)arg2 ;
-(void)prearmTouchIdWithReply:(id)arg0 ;
-(void)resetProcessedEvent:(NSInteger)arg0 reply:(id)arg1 ;
-(void)resetWithReply:(id)arg0 ;
-(void)retryProcessedEvent:(NSInteger)arg0 reply:(id)arg1 ;
-(void)serverPropertyForOption:(NSInteger)arg0 reply:(id)arg1 ;
-(void)setCredential:(id)arg0 forProcessedEvent:(NSInteger)arg1 credentialType:(NSInteger)arg2 reply:(id)arg3 ;
-(void)setCredential:(id)arg0 type:(NSInteger)arg1 reply:(id)arg2 ;
-(void)setOptions:(id)arg0 forInternalOperation:(NSInteger)arg1 reply:(id)arg2 ;
-(void)setServerPropertyForOption:(NSInteger)arg0 value:(id)arg1 reply:(id)arg2 ;
-(void)setShowingCoachingHint:(BOOL)arg0 event:(NSInteger)arg1 reply:(id)arg2 ;
-(void)tccPreflightWithService:(id)arg0 reply:(id)arg1 ;
-(void)tokenForTransferToUnknownProcess:(id)arg0 ;


@end


#endif