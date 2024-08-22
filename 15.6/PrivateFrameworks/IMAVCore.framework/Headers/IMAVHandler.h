// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMAVHANDLER_H
#define IMAVHANDLER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface IMAVHandler : NSObject {
    NSMutableArray *_pendingChats;
    NSMutableArray *_pendingLookups;
}




+(void)ensureHandlerSetup;
+(void)initialize;
-(void)_enqueueIMAVChatForNetworkActivation:(id)arg0 ;
-(void)_handleIncomingAVChatForNotification:(id)arg0 ;
-(void)_handleIncomingWithAccount:(id)arg0 fromHandle:(id)arg1 conference:(id)arg2 properites:(id)arg3 ;
-(void)_notifyOfIncomingInvitationFor:(id)arg0 notifyInvitationListeners:(BOOL)arg1 ;
-(void)account:(id)arg0 avAction:(unsigned int)arg1 withArguments:(id)arg2 toAVChat:(id)arg3 isVideo:(BOOL)arg4 ;
-(void)account:(id)arg0 conference:(id)arg1 changedToNewConferenceID:(id)arg2 ;
-(void)account:(id)arg0 conference:(id)arg1 invitationSentSuccessfully:(BOOL)arg2 ;
-(void)account:(id)arg0 conference:(id)arg1 peerID:(id)arg2 propertiesUpdated:(id)arg3 ;
-(void)account:(id)arg0 conference:(id)arg1 peerIDChangedFromID:(id)arg2 toID:(id)arg3 ;
-(void)account:(id)arg0 conference:(id)arg1 receivedAVMessage:(unsigned int)arg2 from:(id)arg3 sessionID:(unsigned int)arg4 userInfo:(id)arg5 ;
-(void)account:(id)arg0 conference:(id)arg1 receivedCancelInvitationFrom:(id)arg2 properties:(id)arg3 ;
-(void)account:(id)arg0 conference:(id)arg1 receivedInvitationFrom:(id)arg2 properties:(id)arg3 ;
-(void)account:(id)arg0 conference:(id)arg1 receivedResponseToInvitationFrom:(id)arg2 properties:(id)arg3 ;
-(void)account:(id)arg0 postedError:(id)arg1 ;
-(void)account:(id)arg0 relay:(id)arg1 handleCancel:(id)arg2 fromPerson:(id)arg3 ;
-(void)account:(id)arg0 relay:(id)arg1 handleInitate:(id)arg2 fromPerson:(id)arg3 ;
-(void)account:(id)arg0 relay:(id)arg1 handleUpdate:(id)arg2 fromPerson:(id)arg3 ;
-(void)pendingACRequestComplete;
-(void)pendingVCRequestComplete;
-(void)persistentProperty:(id)arg0 changedTo:(id)arg1 from:(id)arg2 ;
-(void)property:(id)arg0 changedTo:(id)arg1 from:(id)arg2 ;
-(void)setupComplete;
-(void)vcCapabilitiesChanged:(NSUInteger)arg0 ;


@end


#endif