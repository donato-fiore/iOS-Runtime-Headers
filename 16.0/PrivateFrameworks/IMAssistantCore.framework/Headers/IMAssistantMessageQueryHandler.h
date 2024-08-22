// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMASSISTANTMESSAGEQUERYHANDLER_H
#define IMASSISTANTMESSAGEQUERYHANDLER_H



#import "IMAssistantMessageHandler.h"

@interface IMAssistantMessageQueryHandler : IMAssistantMessageHandler



+(id)IMAssistantIMSPIQueue;
-(BOOL)messageIsFromBlackholedChat:(id)arg0 ;
-(BOOL)resolvePersons:(id)arg0 forIntent:(id)arg1 completionHandler:(id)arg2 ;
-(id)allIMHandlesForHandle:(id)arg0 ;
-(id)chatParticipantForSPIHandle:(id)arg0 ;
-(id)chatParticipantsForSPIHandles:(id)arg0 ;
-(id)chatsContainingRequiredParticipants:(id)arg0 ;
-(id)chatsForChatNames:(id)arg0 ;
-(id)chatsWithConversationIdentifiers:(id)arg0 ;
-(id)messageContentsPredicate:(id)arg0 ;
-(id)recipientsPredicate:(id)arg0 ;
-(id)resolveDateTimeRange:(id)arg0 ;
-(id)sendersPredicate:(id)arg0 ;
-(id)spokenPhrasesForSpeakableStrings:(id)arg0 ;
-(id)unifiedContactIdentifiersForPerson:(id)arg0 ;
-(id)vocabularyIdentifiersFromSpeakableStrings:(id)arg0 ;
-(void)SPIQueryMessagesForChats:(id)arg0 onlyUnread:(BOOL)arg1 limit:(NSInteger)arg2 completion:(id)arg3 ;
-(void)SPIQueryMessagesForChatsWithIdentifiers:(id)arg0 services:(id)arg1 onlyUnread:(BOOL)arg2 limit:(NSInteger)arg3 completion:(id)arg4 ;
-(void)SPIQueryMessagesForSenders:(id)arg0 onlyUnread:(BOOL)arg1 limit:(NSInteger)arg2 completion:(id)arg3 ;
-(void)SPIQueryMessagesWithGUIDs:(id)arg0 completion:(id)arg1 ;
-(void)SPIQueryMessagesWithRowIDs:(id)arg0 completion:(id)arg1 ;
-(void)SPIQueryUnreadMessages:(NSInteger)arg0 completion:(id)arg1 ;
-(void)handlesAndServicesForChatGuids:(id)arg0 handles:(*id)arg1 services:(*id)arg2 ;
-(void)handlesAndServicesForPersons:(id)arg0 handles:(*id)arg1 services:(*id)arg2 ;
-(void)messagesMatchingMessageIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)searchMessagesWithContents:(id)arg0 messageIdentifiers:(id)arg1 notificationIdentifiers:(id)arg2 chatNames:(id)arg3 conversationIdentifiers:(id)arg4 recipients:(id)arg5 senders:(id)arg6 dateTimeRange:(id)arg7 attributes:(NSUInteger)arg8 completion:(id)arg9 ;


@end


#endif