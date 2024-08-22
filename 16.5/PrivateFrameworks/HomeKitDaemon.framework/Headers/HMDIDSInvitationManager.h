// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDIDSINVITATIONMANAGER_H
#define HMDIDSINVITATIONMANAGER_H

@class NSString, IDSInvitationManager, HMFMessageDispatcher;
@protocol IDSInvitationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDHomeManager.h"

@interface HMDIDSInvitationManager : NSObject <IDSInvitationManagerDelegate>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (retain, nonatomic) IDSInvitationManager *idsInvitationManager; // ivar: _idsInvitationManager
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)_receivedInvitationWithUniqueID:(id)arg0 ;
-(id)_sendOptions;
-(id)_sentInvitationWithUniqueID:(id)arg0 ;
-(id)initWithHomeManager:(id)arg0 messageDispatcher:(id)arg1 queue:(id)arg2 ;
-(void)acceptInvitationWithIDSIdentifier:(id)arg0 homeInvitationID:(id)arg1 dictionary:(id)arg2 completionBlock:(id)arg3 ;
-(void)cancelInvitationWithIDSIdentifier:(id)arg0 homeInvitationID:(id)arg1 completionBlock:(id)arg2 ;
-(void)declineInvitationWithIDSIdentifier:(id)arg0 homeInvitationID:(id)arg1 completionBlock:(id)arg2 ;
-(void)handleForwardedAcceptance:(id)arg0 ;
-(void)manager:(id)arg0 incomingInvitation:(id)arg1 ;
-(void)manager:(id)arg0 receiverDidAcceptInvitation:(id)arg1 ;
-(void)manager:(id)arg0 receiverDidDeclineInvitation:(id)arg1 ;
-(void)manager:(id)arg0 senderDidCancelInvitation:(id)arg1 ;
-(void)sendInvitationToDestination:(id)arg0 expirationDate:(id)arg1 dictionary:(id)arg2 homeInvitationID:(id)arg3 completionBlock:(id)arg4 ;


@end


#endif