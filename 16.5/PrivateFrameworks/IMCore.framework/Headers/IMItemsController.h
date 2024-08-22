// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMITEMSCONTROLLER_H
#define IMITEMSCONTROLLER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface IMItemsController : NSObject

@property (readonly, copy, nonatomic) NSArray *_items;
@property (nonatomic) NSUInteger capacity; // ivar: _capacity
@property (readonly, nonatomic) BOOL isMoreToLoad;
@property (nonatomic) *__CFArray items; // ivar: _items


+(id)_charactersToIgnoreWhenParsingTextContent;
-(BOOL)_shouldPinUnsentMessagesToBottom;
-(BOOL)_trimIfNeeded;
-(NSUInteger)_indexOfItem:(id)arg0 ;
-(id)_appendArchivedItemsToItemsArray:(id)arg0 ;
-(id)_firstMessage;
-(id)_initWithItems:(id)arg0 ;
-(id)_itemForGUID:(id)arg0 ;
-(id)_lastFinishedMessage;
-(id)_lastIncomingFinishedMessage;
-(id)_lastIncomingFinishedMessageWithTextContent;
-(id)_lastIncomingMessage;
-(id)_lastIncomingMessageBlockWithTextContent;
-(id)_lastMessage;
-(id)_lastMessageBlockWithTextContent:(BOOL)arg0 ;
-(id)_lastOutgoingMessageBlockWithTextContent;
-(id)_lastRelatedIncomingFinishedMessageTextContentWithLimit:(NSInteger)arg0 ;
-(id)_lastSentMessage;
-(id)_typingMessage;
-(id)init;
-(void)_didReplaceItem:(struct __CFArray *)arg0 oldItem:(id)arg1 idx:(NSInteger)arg2 ;
-(void)_handleItem:(id)arg0 forChatStyle:(unsigned char)arg1 ;
-(void)_itemsDidChange:(id)arg0 ;
-(void)_removeAllItems;
-(void)_removeItem:(id)arg0 ;
-(void)_replaceAndSortItemsWithUnsortedItems:(id)arg0 ;
-(void)_replaceItems:(id)arg0 ;
-(void)_replaceStaleTypingMessage;
-(void)_resortItems;
-(void)_setSortID:(id)arg0 ;
-(void)assignSortIDsToItems:(id)arg0 ;
-(void)assignSortIDsToItems:(id)arg0 shouldRecalculateSortIDForAllMessages:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif