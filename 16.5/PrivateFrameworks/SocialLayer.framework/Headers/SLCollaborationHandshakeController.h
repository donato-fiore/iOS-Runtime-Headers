// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLCOLLABORATIONHANDSHAKECONTROLLER_H
#define SLCOLLABORATIONHANDSHAKECONTROLLER_H

@class NSString;
@protocol SLRemoteTaskManagerDelegate, OS_dispatch_queue;


#import "SLDServiceProxy.h"
#import "SLRemoteTaskManager.h"

@interface SLCollaborationHandshakeController : SLDServiceProxy <SLRemoteTaskManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL synchronous; // ivar: _synchronous
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetSerialQueue; // ivar: _targetSerialQueue
@property (retain, nonatomic) SLRemoteTaskManager *taskManager; // ivar: _taskManager


-(id)_handshakeService;
-(id)_sandboxExtensionIssueFileURL:(id)arg0 withAuditToken:(struct ? )arg1 ;
-(id)initWithTargetSerialQueue:(id)arg0 synchronous:(BOOL)arg1 ;
-(id)taskServiceWithErrorHandler:(id)arg0 ;
-(void)addParticipantHandles:(id)arg0 withFileURL:(id)arg1 metadata:(id)arg2 timeout:(CGFloat)arg3 completion:(id)arg4 ;
-(void)addParticipantHandles:(id)arg0 withMetadata:(id)arg1 timeout:(CGFloat)arg2 completion:(id)arg3 ;
-(void)generateProofForIdentity:(id)arg0 collaborationIdentifier:(id)arg1 timeout:(CGFloat)arg2 completion:(id)arg3 ;
-(void)removeParticipantIdentities:(id)arg0 withFileURL:(id)arg1 metadata:(id)arg2 timeout:(CGFloat)arg3 completion:(id)arg4 ;
-(void)removeParticipantIdentities:(id)arg0 withMetadata:(id)arg1 timeout:(CGFloat)arg2 completion:(id)arg3 ;
-(void)startCollaborationWithFileURL:(id)arg0 metadata:(id)arg1 participants:(id)arg2 timeout:(CGFloat)arg3 completion:(id)arg4 ;
-(void)startCollaborationWithMetadata:(id)arg0 participants:(id)arg1 timeout:(CGFloat)arg2 completion:(id)arg3 ;
-(void)verifySourceBundleIdentifierFromMetadata:(id)arg0 timeout:(CGFloat)arg1 completion:(id)arg2 ;


@end


#endif