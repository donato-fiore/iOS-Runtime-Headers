// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUSESSIONCONTROLLER_H
#define TUSESSIONCONTROLLER_H

@class NSMutableDictionary, TUConversationManager, NSString;
@protocol TUConversationManagerDelegate, CPIDSMessageHandler, CPCoreSessionControlling, OS_dispatch_queue, CPCoreSessionControllerDelegate;

#import <Foundation/Foundation.h>

#import "CPIDSHelper.h"
#import "IDSMessenger.h"

@interface TUSessionController : NSObject <TUConversationManagerDelegate, CPIDSMessageHandler, CPCoreSessionControlling>

 {
    NSObject<OS_dispatch_queue> *_queue;
    CPIDSHelper *_idsHelper;
    IDSMessenger *_messenger;
    NSMutableDictionary *_groupParticipants;
}


@property (retain, nonatomic) TUConversationManager *conversationManager; // ivar: _conversationManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPCoreSessionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *idsGroupSessionUUID; // ivar: _idsGroupSessionUUID
@property (nonatomic) NSString *localAccountName; // ivar: _localAccountName
@property (readonly) Class superclass;


-(BOOL)hasActiveSession;
-(id)activeSession;
-(id)broadcastParamFor:(id)arg0 ;
-(id)getConnectedParticipantsWithReply;
-(id)initWithQueue:(id)arg0 ;
-(id)listReceivedInvitations;
-(id)listReceivedSessionInvitations;
-(id)listSentInvitationsForCurrentSession;
-(id)unicastParamFor:(id)arg0 clientID:(NSUInteger)arg1 idsMode:(NSInteger)arg2 ;
-(void)_incomingAppLaunchBroadcast:(id)arg0 ;
-(void)_incomingAppSharingRequest:(id)arg0 ;
-(void)_processConversation:(id)arg0 ;
-(void)_tearDown;
-(void)acceptInvite:(id)arg0 ;
-(void)broadcastAppLaunch:(id)arg0 ;
-(void)conversationManager:(id)arg0 addedActiveConversation:(id)arg1 ;
-(void)conversationManager:(id)arg0 stateChangedForConversation:(id)arg1 ;
-(void)conversationsChangedForConversationManager:(id)arg0 ;
-(void)declineInvite:(id)arg0 ;
-(void)didReceiveMessage:(id)arg0 ;
-(void)inviteParticipants:(id)arg0 ;
-(void)isAudioEnabledForParticipant:(id)arg0 completion:(id)arg1 ;
-(void)sendAppSharingRequest:(id)arg0 ;
-(void)serverDisconnectedForConversationManager:(id)arg0 ;
-(void)setAudioEnabled:(BOOL)arg0 forParticipant:(id)arg1 ;
-(void)startIDSSession:(id)arg0 userContext:(id)arg1 completion:(id)arg2 ;
-(void)stopIDSSession;
-(void)stopListeningForInvites;


@end


#endif