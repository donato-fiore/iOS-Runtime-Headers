// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWBACKGROUNDSENDUTILITY_H
#define SWBACKGROUNDSENDUTILITY_H

@class SFCollaborationCompositionDictionaryProvider, TUConversation, SLDServiceProxy;
@protocol SFCollaborationCompositionDictionaryProviderDelegate, SLDServiceProxyDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SWBackgroundSendUtility : NSObject <SFCollaborationCompositionDictionaryProviderDelegate, SLDServiceProxyDelegate>



@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) SFCollaborationCompositionDictionaryProvider *compositionDictionaryProvider; // ivar: _compositionDictionaryProvider
@property (retain, nonatomic) TUConversation *faceTimeConversation; // ivar: _faceTimeConversation
@property (copy, nonatomic) id *pendingCollaborationRequest; // ivar: _pendingCollaborationRequest
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) SLDServiceProxy *serviceProxy; // ivar: _serviceProxy


-(id)initWithItemProvider:(id)arg0 faceTimeConversation:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(id)remoteService;
-(void)_addCollaborationRequest:(id)arg0 ;
-(void)_processPendingCollaborationRequest;
-(void)dictionaryDidBecomeAvailable:(id)arg0 forProvider:(id)arg1 ;
-(void)sendCollaboration:(id)arg0 faceTimeConversationUUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)serviceProxyDidConnect:(id)arg0 ;
-(void)serviceProxyDidDisconnect:(id)arg0 ;


@end


#endif