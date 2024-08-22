// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDCOLLABORATIONHANDSHAKESERVICE_H
#define SLDCOLLABORATIONHANDSHAKESERVICE_H

@class NSString;
@protocol SLDService, SLDCollaborationHandshakeService, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SLSWActionDispatcher.h"
#import "SLPersonIdentityGenerator.h"
#import "SLDProcessVerifier.h"
#import "SLDTaskManager.h"

@interface SLDCollaborationHandshakeService : NSObject <SLDService, SLDCollaborationHandshakeService>



@property (retain, nonatomic) SLSWActionDispatcher *actionDispatcher; // ivar: _actionDispatcher
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SLPersonIdentityGenerator *personIdentityGenerator; // ivar: _personIdentityGenerator
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *privateSerialQueue; // ivar: _privateSerialQueue
@property (retain, nonatomic) SLDProcessVerifier *processVerifier; // ivar: _processVerifier
@property (readonly) Class superclass;
@property (retain, nonatomic) SLDTaskManager *taskManager; // ivar: _taskManager


+(id)remoteObjectProtocol;
+(id)sharedService;
+(void)setupInterface:(id)arg0 ;
-(BOOL)_connection:(id)arg0 hasPermissionForFileURL:(id)arg1 ;
-(BOOL)_doesMetadata:(id)arg0 containAllOf:(id)arg1 ;
-(BOOL)_doesMetadata:(id)arg0 containAnyOf:(id)arg1 ;
-(BOOL)_fileURLHasFileProvider:(id)arg0 error:(*id)arg1 ;
-(BOOL)allowsConnection:(id)arg0 ;
-(NSUInteger)_acquireSandboxHandleData:(id)arg0 ForFileProviderDocumentURL:(id)arg1 clientConnection:(id)arg2 error:(*id)arg3 ;
-(id)_removeIdentities:(id)arg0 fromMetadata:(id)arg1 ;
-(id)_updateMetadata:(id)arg0 withNewIdentities:(id)arg1 ;
-(id)addParticipantHandles:(id)arg0 withFileURL:(id)arg1 sandboxTokenData:(id)arg2 metadata:(id)arg3 reply:(id)arg4 ;
-(id)addParticipantHandles:(id)arg0 withMetadata:(id)arg1 reply:(id)arg2 ;
-(id)generateProofForIdentity:(id)arg0 collaborationIdentifier:(id)arg1 reply:(id)arg2 ;
-(id)init;
-(id)removeParticipantIdentities:(id)arg0 withFileURL:(id)arg1 sandboxTokenData:(id)arg2 metadata:(id)arg3 reply:(id)arg4 ;
-(id)removeParticipantIdentities:(id)arg0 withMetadata:(id)arg1 reply:(id)arg2 ;
-(id)startCollaborationWithFileURL:(id)arg0 sandboxTokenData:(id)arg1 metadata:(id)arg2 participants:(id)arg3 reply:(id)arg4 ;
-(id)startCollaborationWithMetadata:(id)arg0 participants:(id)arg1 reply:(id)arg2 ;
-(id)verifySourceBundleIdentifierFromMetadata:(id)arg0 reply:(id)arg1 ;
-(void)_localPersonIdentityForDocumentIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_personIdentitiesForHandles:(id)arg0 documentIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)_releaseSandboxHandle:(NSUInteger)arg0 ;
-(void)_sendActionUpdateParticipantsWithFileURL:(id)arg0 metadata:(id)arg1 addedIdentities:(id)arg2 removedIdentities:(id)arg3 completion:(id)arg4 ;
-(void)_sendActionUpdateParticipantsWithMetadata:(id)arg0 addedIdentities:(id)arg1 removedIdentities:(id)arg2 completion:(id)arg3 ;
-(void)prepareConnectionWithReply:(id)arg0 ;


@end


#endif