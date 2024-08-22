// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSINVITATIONMANAGER_H
#define IDSINVITATIONMANAGER_H

@class NSMutableDictionary, NSString, NSSet;
@protocol IDSServiceDelegateInvitation, IDSDaemonListenerProtocol, OS_dispatch_queue, IDSInvitationManagerDelegate;

#import <Foundation/Foundation.h>

#import "IDSService.h"

@interface IDSInvitationManager : NSObject <IDSServiceDelegateInvitation, IDSDaemonListenerProtocol>

 {
    NSMutableDictionary *_serverAcknowledgedBlockMap;
    NSMutableDictionary *_serverAcknowledgedBlockWithInvitationMap;
    NSMutableDictionary *_pendingInvitations;
    NSMutableDictionary *_receivedInvitations;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BOOL _invitationsLoadedFromDisk;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IDSInvitationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) IDSService *internal; // ivar: _internal
@property (readonly, copy, nonatomic) NSSet *pendingInvitations;
@property (readonly, copy, nonatomic) NSSet *receivedInvitations;
@property (readonly) Class superclass;


-(BOOL)validateReceivedInvitation:(id)arg0 ;
-(id)initWithServiceIdentifier:(id)arg0 ;
-(id)validateStrictDecodingForSentInvitation:(id)arg0 ;
-(void)acceptInvitation:(id)arg0 withContext:(id)arg1 serverAcknowledgedBlock:(id)arg2 ;
-(void)cancelInvitation:(id)arg0 serverAcknowledgedBlock:(id)arg1 ;
-(void)declineInvitation:(id)arg0 serverAcknowledgedBlock:(id)arg1 ;
-(void)removePendingInvitation:(id)arg0 ;
-(void)removeReceivedInvitation:(id)arg0 ;
-(void)sendInvitationToDestination:(id)arg0 expirationDate:(id)arg1 context:(id)arg2 serverAcknowledgedBlock:(id)arg3 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg0 account:(id)arg1 incomingInvitation:(id)arg2 withContext:(id)arg3 ;
-(void)service:(id)arg0 account:(id)arg1 incomingInvitationUpdate:(id)arg2 withContext:(id)arg3 ;
-(void)setupInvitationsForService:(id)arg0 ;


@end


#endif