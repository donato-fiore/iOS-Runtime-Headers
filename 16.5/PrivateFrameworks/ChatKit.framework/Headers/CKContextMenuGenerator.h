// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONTEXTMENUGENERATOR_H
#define CKCONTEXTMENUGENERATOR_H


#import <Foundation/Foundation.h>


@interface CKContextMenuGenerator : NSObject



+(BOOL)_shouldShowPrivateMessageOptionForHandle:(id)arg0 conversation:(id)arg1 ;
+(BOOL)supportsRelayPhoneCallsCalls;
+(id)_menuActionToInitiateFaceTimeAudioForConversation:(id)arg0 andContactsManager:(id)arg1 ;
+(id)_menuActionToInitiateFaceTimeVideoForConversation:(id)arg0 andContactsManager:(id)arg1 ;
+(id)_menuActionToInviteHandleToShareTheirScreen:(id)arg0 ;
+(id)_menuActionToSendEmailForConversation:(id)arg0 andContactsManager:(id)arg1 ;
+(id)_menuActionToShareMyScreenWithHandle:(id)arg0 ;
+(id)menuActionToCreateContactForID:(id)arg0 handler:(id)arg1 ;
+(id)menuActionToDisplayRecipientForHandle:(id)arg0 ;
+(id)menuActionToInitiateFaceTimeAudioWithHandle:(id)arg0 andContactsManager:(id)arg1 ;
+(id)menuActionToInitiateFaceTimeVideoWithHandle:(id)arg0 andContactsManager:(id)arg1 ;
+(id)menuActionToOpenContactCardForContact:(id)arg0 ;
+(id)menuActionToRemoveHandle:(id)arg0 fromConversation:(id)arg1 ;
+(id)menuActionToSendEmailToAddress:(id)arg0 ;
+(id)menuActionToSendPrivateMessageToHandleID:(id)arg0 ;
+(id)menuActionToShowIDAsLargeType:(id)arg0 handler:(id)arg1 ;
+(id)menuActionsToInitiateRelayPhoneCallWithHandle:(id)arg0 ;
+(id)menuForNamedGroupConversation:(id)arg0 andContactsManager:(id)arg1 ;
+(id)recipientSubmenuForHandle:(id)arg0 ;
+(id)relayPhoneCallActionTextForPhoneNumber:(id)arg0 ;
+(id)subMenuForScreenSharingOptionsWithHandle:(id)arg0 ;
+(id)submenuForIndividualParticipantWithHandle:(id)arg0 forConversation:(id)arg1 includeAddToContactsAction:(BOOL)arg2 includeRemoveAction:(BOOL)arg3 ;


@end


#endif