// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMFACETIMEUTILITIES_H
#define IMFACETIMEUTILITIES_H


#import <Foundation/Foundation.h>


@interface IMFaceTimeUtilities : NSObject



+(BOOL)activeTUConversationHasActivitySession:(id)arg0 ;
+(BOOL)conversationIsAVLessSharePlay:(id)arg0 ;
+(BOOL)conversationIsVideoCall:(id)arg0 ;
+(BOOL)isScreenShareActivityForTUConversation:(id)arg0 ;
+(id)activityMetadataForTUConversation:(id)arg0 ;
+(id)activitySessionForTUConversation:(id)arg0 ;
+(id)currentCallForTUConversation:(id)arg0 ;
+(id)remoteParticipantHandleSharingScreenForTUConversation:(id)arg0 ;
+(void)initiateTUConversationForParticipants:(id)arg0 senderAddress:(id)arg1 videoEnabled:(BOOL)arg2 groupID:(id)arg3 displayName:(id)arg4 ;
+(void)initiateTUDialRequestForSingleParticipant:(id)arg0 videoEnabled:(BOOL)arg1 ;
+(void)joinExistingConversationForTUCoversation:(id)arg0 videoEnabled:(BOOL)arg1 ;
+(void)leaveTUConversation;


@end


#endif