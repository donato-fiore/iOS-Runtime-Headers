// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMINLINEREPLYCHATITEMRULES_H
#define IMINLINEREPLYCHATITEMRULES_H

@class NSString;
@protocol IMChatItemRules;


#import "IMTranscriptChatItemRules.h"

@interface IMInlineReplyChatItemRules : IMTranscriptChatItemRules <IMChatItemRules>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *threadIdentifier; // ivar: _threadIdentifier
@property (copy, nonatomic) NSString *threadOriginatorMessageGUID; // ivar: _threadOriginatorMessageGUID
@property (nonatomic) _NSRange threadOriginatorRange; // ivar: _threadOriginatorRange


-(BOOL)_hasEarlierMessagesToLoad;
-(BOOL)_hasRecentMessagesToLoad;
-(BOOL)_shouldAppendReplyContextForItem:(id)arg0 previousItem:(id)arg1 chatStyle:(unsigned char)arg2 ;
-(BOOL)_shouldAppendReplyCountIfNeeded;
-(BOOL)_shouldAppendServiceForItem:(id)arg0 previousItem:(id)arg1 chatStyle:(unsigned char)arg2 ;
-(BOOL)_shouldShowReportSpamForChat:(id)arg0 withItems:(id)arg1 ;
-(BOOL)_supportsContiguousChatItems;
-(id)_chatItemsWithReplyCountsForNewChatItems:(id)arg0 messageItem:(id)arg1 ;
-(id)_filteredChatItemsForNewChatItems:(id)arg0 ;
-(id)initWithChat:(id)arg0 threadIdentifier:(id)arg1 ;


@end


#endif