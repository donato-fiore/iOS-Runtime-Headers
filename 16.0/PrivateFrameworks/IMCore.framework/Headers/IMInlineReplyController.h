// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMINLINEREPLYCONTROLLER_H
#define IMINLINEREPLYCONTROLLER_H

@class NSArray, IMScheduledUpdater, NSString, IMMessageItem;
@protocol IMChatItemRules;


#import "IMItemsController.h"
#import "IMChat.h"
#import "IMMessage.h"

@interface IMInlineReplyController : IMItemsController

@property (weak, nonatomic) IMChat *chat; // ivar: _chat
@property (retain, nonatomic) NSObject<IMChatItemRules> *chatItemRules; // ivar: _chatItemRules
@property (readonly, nonatomic) NSArray *chatItems;
@property (retain, nonatomic) IMScheduledUpdater *chatItemsUpdater; // ivar: _chatItemsUpdater
@property (nonatomic) BOOL disableItemInserts; // ivar: _disableItemInserts
@property (readonly, nonatomic) IMMessage *firstMessage;
@property (nonatomic) BOOL hasEarlierMessagesToLoad; // ivar: _hasEarlierMessagesToLoad
@property (nonatomic) BOOL hasRecentMessagesToLoad; // ivar: _hasRecentMessagesToLoad
@property (nonatomic) BOOL isUpdatingChatItems; // ivar: _isUpdatingChatItems
@property (readonly, nonatomic) IMMessage *lastMessage;
@property (copy, nonatomic) NSString *threadIdentifier; // ivar: _threadIdentifier
@property (retain, nonatomic) IMMessageItem *threadOriginator; // ivar: _threadOriginator


-(BOOL)itemMatchesThread:(id)arg0 ;
-(id)initWithChat:(id)arg0 threadIdentifier:(id)arg1 threadOriginator:(id)arg2 ;
-(id)itemsMatchingThread:(id)arg0 guids:(id)arg1 ;
-(void)_itemsDidChange:(id)arg0 ;
-(void)_postIMChatItemsDidChangeNotificationWithInserted:(id)arg0 removed:(id)arg1 reload:(id)arg2 regenerate:(id)arg3 oldChatItems:(id)arg4 newChatItems:(id)arg5 ;
-(void)_postNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)_replaceStaleChatItems;
-(void)_setupChatItemRules;
-(void)_updateChatItemsForChatItemUpdater;
-(void)_updateChatItemsWithReason:(id)arg0 block:(id)arg1 ;
// -(void)_updateChatItemsWithReason:(id)arg0 block:(id)arg1 shouldPost:(unk)arg2  ;
-(void)dealloc;
-(void)insertHistoricalMessages:(id)arg0 queryID:(id)arg1 hasMessagesBefore:(BOOL)arg2 hasMessagesAfter:(BOOL)arg3 isReplacingItems:(BOOL)arg4 ;
-(void)insertItem:(id)arg0 ;
-(void)performActionDisallowingItemInsert:(id)arg0 ;
-(void)removeItem:(id)arg0 ;
-(void)replaceItems:(id)arg0 ;
-(void)setNeedsUpdateChatItems;
-(void)updateChatItemsIfNeeded;


@end


#endif