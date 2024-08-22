// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTRANSCRIPTCHATITEMRULES_H
#define IMTRANSCRIPTCHATITEMRULES_H

@class NSArray, NSMutableArray, NSDate, NSString;
@protocol IMChatItemRules;

#import <Foundation/Foundation.h>

#import "IMChat.h"

@interface IMTranscriptChatItemRules : NSObject <IMChatItemRules>

 {
    IMChat *_chat;
    NSArray *_items;
    NSMutableArray *_chatItems;
    NSDate *_nextStaleTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)testShouldAppendNumberChanged:(id)arg0 previousItem:(id)arg1 showAllChanges:(BOOL)arg2 ;
+(BOOL)testShouldShowReportSpamForChat:(id)arg0 items:(id)arg1 ;
+(BOOL)testShouldShowSMSSpamForChat:(id)arg0 items:(id)arg1 ;
-(BOOL)__im_ff_commSafetyUIEnabled;
-(BOOL)_hasEarlierMessagesToLoad;
-(BOOL)_hasRecentMessagesToLoad;
-(BOOL)_shouldAdjustNewDeliveredItemIndex:(NSInteger)arg0 chatItems:(id)arg1 ;
-(BOOL)_shouldAppendDateForItem:(id)arg0 previousItem:(id)arg1 ;
-(BOOL)_shouldAppendReplyContextForItem:(id)arg0 previousItem:(id)arg1 chatStyle:(unsigned char)arg2 ;
-(BOOL)_shouldAppendReplyCountIfNeeded;
-(BOOL)_shouldAppendServiceForItem:(id)arg0 previousItem:(id)arg1 chatStyle:(unsigned char)arg2 ;
-(BOOL)_shouldDisplayAttributionInfo:(id)arg0 ;
-(BOOL)_shouldRegenerateChatItemsForItem:(id)arg0 previousItem:(id)arg1 oldPreviousItem:(id)arg2 ;
-(BOOL)_shouldReloadChatItem:(id)arg0 oldChatItem:(id)arg1 ;
-(BOOL)_shouldReloadChatItemWithAssociatedChatItems:(id)arg0 oldAssociatedChatItems:(id)arg1 ;
-(BOOL)_shouldShowBlockContactForChat:(id)arg0 withItems:(id)arg1 ;
-(BOOL)_shouldShowEffectPlayButtonForMessage:(id)arg0 ;
-(BOOL)_shouldShowReportSpamForChat:(id)arg0 withItems:(id)arg1 ;
-(BOOL)_supportsContiguousChatItems;
-(BOOL)_updateAggregateAttachmentMessagePartAssociatedItems:(id)arg0 map:(id)arg1 ;
-(BOOL)shouldShowExpressiveMessageTextAsText:(id)arg0 ;
-(BOOL)shouldShowRaiseMessageStatus;
-(NSInteger)_lastItemIndexExcludingWatchReplyOptions:(id)arg0 ;
-(id)_attributionChatItemForChatItem:(id)arg0 ;
-(id)_chatItems;
-(id)_chatItemsForItem:(id)arg0 previousItem:(id)arg1 ;
-(id)_chatItemsWithReplyCountsForNewChatItems:(id)arg0 parentItem:(id)arg1 threadOriginatorItem:(id)arg2 ;
-(id)_effectControlForChatItem:(id)arg0 ;
-(id)_filteredChatItemsForNewChatItems:(id)arg0 ;
-(id)_getCurrentChatSubscriptionLabel;
-(id)_initWithChat:(id)arg0 ;
-(id)_itemWithChatItemsDeleted:(id)arg0 fromItem:(id)arg1 indexesOfItemsDeleted:(*id)arg2 indexToRangeMapOfItemsDeleted:(*id)arg3 ;
-(id)_items;
-(id)_newDeliveredChatItemWithStatusType:(NSInteger)arg0 atIndex:(NSInteger)arg1 chatItems:(id)arg2 ;
-(id)_nextStaleTime;
-(id)_replyCountChatItemForChatItem:(id)arg0 parentItem:(id)arg1 threadIdentifier:(id)arg2 replyMessageGUID:(id)arg3 replyIsFromMe:(BOOL)arg4 threadOriginatorMessageItem:(id)arg5 ;
-(id)_replyCountChatItemForChatItem:(id)arg0 parentItem:(id)arg1 threadOriginatorMessageItem:(id)arg2 ;
-(id)_updateOrRemoveDeliveredStatusItemMovingFromOldIndex:(NSInteger)arg0 chatItems:(id)arg1 ;
-(id)chatItemForIMChatItem:(id)arg0 ;
-(id)inlineReplyController;
-(id)testChatItems;
-(void)_didProcessChatItems:(id)arg0 ;
-(void)_invalidateSpamIndicatorCachedValues;
-(void)_manageMomentShareAndAggregateItemsForChatItems:(id)arg0 ;
-(void)_processChatItemsForAttribution:(id)arg0 ;
-(void)_processChatItemsForBreadcrumbs:(id)arg0 ;
-(void)_processChatItemsForReplayButton:(id)arg0 ;
-(void)_processChatItemsForUnavailabilityIndicator:(id)arg0 ;
-(void)_setItems:(id)arg0 ;
-(void)_setNextStaleTime:(id)arg0 ;
-(void)addChatItem:(id)arg0 toChatItemsAtEndButBeforeWatchReplyItems:(id)arg1 ;


@end


#endif