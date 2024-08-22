// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMMOCKCHAT_H
#define IMMOCKCHAT_H

@class IMChat, NSArray, IMHandle, IMMessage;



@interface IMMockChat : IMChat

@property (retain, nonatomic) NSArray *extraParticipants; // ivar: _extraParticipants
@property (retain, nonatomic) IMHandle *incomingHandle; // ivar: _incomingHandle
@property (retain, nonatomic) IMMessage *lastMockIMMessage; // ivar: _lastMockIMMessage
@property (retain, nonatomic) NSArray *mockChatItems; // ivar: _mockChatItems
@property (nonatomic) NSUInteger mockUnreadMessageCount; // ivar: _mockUnreadMessageCount
@property (retain, nonatomic) IMHandle *outgoingHandle; // ivar: _outgoingHandle


-(BOOL)deleteAllHistory;
-(NSUInteger)messageCount;
-(NSUInteger)unreadMessageCount;
-(id)_chatItemFromMockItemInfo:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)_messageFromMockItemInfo:(id)arg0 ;
-(id)chatItems;
-(id)displayName;
-(id)init;
-(id)lastFinishedMessage;
-(id)lastFinishedMessageDate;
-(id)lastMessage;
-(id)loadMessagesBeforeDate:(id)arg0 limit:(NSUInteger)arg1 loadImmediately:(BOOL)arg2 ;
-(id)participants;
-(id)recipient;
-(void)addExtraParticipants:(id)arg0 ;
-(void)appendMockItemWithInfo:(id)arg0 ;
-(void)deleteChatItems:(id)arg0 ;
-(void)setupWithMockItemInfoArray:(id)arg0 ;


@end


#endif