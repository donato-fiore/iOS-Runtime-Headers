// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDIDSINVITATIONMANAGER_H
#define HDIDSINVITATIONMANAGER_H

@class NSString, IDSInvitationManager;
@protocol IDSInvitationManagerDelegate, OS_dispatch_queue, HDIDSInvitationManagerDelegate;

#import <Foundation/Foundation.h>


@interface HDIDSInvitationManager : NSObject <IDSInvitationManagerDelegate>

 {
    Class _messageClass;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_IDSDelegateQueue;
    NSString *_schema;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDIDSInvitationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IDSInvitationManager *invitationManager; // ivar: _invitationManager
@property (readonly) Class superclass;


-(id)initWithServiceIdentifier:(id)arg0 messageClass:(Class)arg1 schema:(id)arg2 ;
-(void)acceptInvitationWithUUID:(id)arg0 codableObject:(id)arg1 serverAcknowledgedBlock:(id)arg2 ;
-(void)declineInvitationWithUUID:(id)arg0 serverAcknowledgedBlock:(id)arg1 ;
-(void)manager:(id)arg0 incomingInvitation:(id)arg1 ;
-(void)manager:(id)arg0 receiverDidAcceptInvitation:(id)arg1 ;
-(void)manager:(id)arg0 receiverDidDeclineInvitation:(id)arg1 ;
-(void)manager:(id)arg0 senderDidCancelInvitation:(id)arg1 ;
-(void)rescindInvitationWithUUID:(id)arg0 serverAcknowledgedBlock:(id)arg1 ;
-(void)sendInvitationToIdentifier:(id)arg0 expirationDate:(id)arg1 codableObject:(id)arg2 serverAcknowledgedBlock:(id)arg3 ;


@end


#endif