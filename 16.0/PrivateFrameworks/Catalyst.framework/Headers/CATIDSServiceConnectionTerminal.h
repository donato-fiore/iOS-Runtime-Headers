// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATIDSSERVICECONNECTIONTERMINAL_H
#define CATIDSSERVICECONNECTIONTERMINAL_H

@class NSString, NSHashTable;
@protocol CATIDSServiceConnectionInvitationInboxDelegate, CATIDSServiceConnectionInvitationOutboxDelegate, CATIDSMessageBroadcaster, CATIDSPrimitives, CATTimerSource, OS_dispatch_queue, CATIDSSubscription, CATIDSServiceConnectionTerminalDelegate;

#import <Foundation/Foundation.h>

#import "CATIDSServiceConnectionConfiguration.h"
#import "CATIDSServiceConnectionInvitationInbox.h"
#import "CATIDSServiceConnectionInvitationOutbox.h"

@interface CATIDSServiceConnectionTerminal : NSObject <CATIDSServiceConnectionInvitationInboxDelegate, CATIDSServiceConnectionInvitationOutboxDelegate, CATIDSMessageBroadcaster>

 {
    id<CATIDSPrimitives> *mIDSPrimitives;
    id<CATTimerSource> *mTimerSource;
    NSObject<OS_dispatch_queue> *mWorkQueue;
    NSObject<OS_dispatch_queue> *mDelegateQueue;
    NSString *mSourceAppleID;
    CATIDSServiceConnectionConfiguration *mConnectionConfiguration;
    CATIDSServiceConnectionInvitationInbox *mInvitationInbox;
    CATIDSServiceConnectionInvitationOutbox *mInvitationOutbox;
    NSHashTable *mBroadcastHandlers;
    id<CATIDSSubscription> *mMessageSubscription;
    BOOL mIsActive;
}


@property (weak, nonatomic) NSObject<CATIDSServiceConnectionTerminalDelegate> *delegate; // ivar: _delegate


-(id)description;
-(id)initWithIDSPrimitives:(id)arg0 assertionProvider:(id)arg1 sourceAppleID:(id)arg2 ;
-(id)initWithIDSPrimitives:(id)arg0 assertionProvider:(id)arg1 sourceAppleID:(id)arg2 connectionConfiguration:(id)arg3 ;
-(id)initWithIDSPrimitives:(id)arg0 assertionProvider:(id)arg1 timerSource:(id)arg2 workQueue:(id)arg3 delegateQueue:(id)arg4 sourceAppleID:(id)arg5 connectionConfiguration:(id)arg6 ;
-(id)initWithIDSPrimitives:(id)arg0 networkPowerPrimitives:(id)arg1 sourceAppleID:(id)arg2 ;
-(id)inviteAppleIDToConnect:(id)arg0 userInfo:(id)arg1 ;
-(void)addBroadcastHandler:(id)arg0 ;
-(void)cancelAllInvitations;
-(void)cancelInvitationWithIdentifier:(id)arg0 ;
-(void)connectionInvitatioInbox:(id)arg0 timeoutOutForInvitation:(id)arg1 connectionIdentifier:(id)arg2 senderAppleID:(id)arg3 userInfo:(id)arg4 ;
-(void)connectionInvitationInbox:(id)arg0 foundConection:(id)arg1 senderAppleID:(id)arg2 senderAddress:(id)arg3 assertion:(id)arg4 messagingVersion:(NSUInteger)arg5 userInfo:(id)arg6 ;
-(void)connectionInvitationInbox:(id)arg0 rejectedInvitation:(id)arg1 connectionIdentifier:(id)arg2 appleID:(id)arg3 address:(id)arg4 error:(id)arg5 ;
-(void)connectionInvitationInbox:(id)arg0 shouldConnectToAppleID:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3 responseHandler:(id)arg4 ;
-(void)connectionInvitationInbox:(id)arg0 wantsToAcceptInvitation:(id)arg1 connectionIdentifier:(id)arg2 destinationAddress:(id)arg3 ;
-(void)connectionInvitationOutbox:(id)arg0 foundConnection:(id)arg1 destinationAppleID:(id)arg2 destinationAddress:(id)arg3 assertion:(id)arg4 messagingVersion:(NSUInteger)arg5 userInfo:(id)arg6 ;
-(void)connectionInvitationOutbox:(id)arg0 receivedARejectionFrom:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3 error:(id)arg4 ;
-(void)connectionInvitationOutbox:(id)arg0 wantsToAcknowledgeInvitation:(id)arg1 connectionIdentifier:(id)arg2 destinationAddress:(id)arg3 ;
-(void)connectionInvitationOutbox:(id)arg0 wantsToSendInvitation:(id)arg1 destinationAppleID:(id)arg2 userInfo:(id)arg3 ;
-(void)processMessage:(id)arg0 senderAppleID:(id)arg1 senderAddress:(id)arg2 ;
-(void)resume;
-(void)sendContent:(id)arg0 toAddress:(id)arg1 forInvitation:(id)arg2 ;
-(void)suspend;


@end


#endif