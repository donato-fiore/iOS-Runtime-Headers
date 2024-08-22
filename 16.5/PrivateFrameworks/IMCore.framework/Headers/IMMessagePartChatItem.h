// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMMESSAGEPARTCHATITEM_H
#define IMMESSAGEPARTCHATITEM_H

@class NSString, NSAttributedString, IMMessageItem, NSArray;
@protocol IMVisibleAssociatedMessageHost;


#import "IMMessageChatItem.h"
#import "IMMessagePartHighlightChatItem.h"

@interface IMMessagePartChatItem : IMMessageChatItem <IMVisibleAssociatedMessageHost>



@property (nonatomic, getter=isAllowlistedRichLinkSender) BOOL allowlistedRichLinkSender; // ivar: _allowlistedRichLinkSender
@property (nonatomic) BOOL chatInScrutinyMode; // ivar: _chatInScrutinyMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSAttributedString *fallbackCorruptText; // ivar: _fallbackCorruptText
@property (readonly, nonatomic) BOOL hasSubject;
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=_setIndex:) NSInteger index; // ivar: _index
@property (nonatomic) BOOL isBusiness; // ivar: _isBusiness
@property (readonly, nonatomic) BOOL isCorrupt;
@property (readonly, nonatomic) BOOL isEditedMessagePart;
@property (readonly, nonatomic) BOOL isFailedEditMessagePart;
@property (readonly, nonatomic) BOOL isFailedRetractMessagePart;
@property (readonly, nonatomic) BOOL isRetractedMessagePart;
@property (readonly, copy, nonatomic) IMMessagePartHighlightChatItem *messageHighlightChatItem; // ivar: _messageHighlightChatItem
@property (nonatomic) _NSRange messagePartRange; // ivar: _messagePartRange
@property (readonly, nonatomic) _NSRange originalMessagePartRange;
@property (nonatomic) NSUInteger replyCount; // ivar: _replyCount
@property (readonly, nonatomic) BOOL requiresFaceTimeAttribution;
@property (readonly, nonatomic) BOOL requiresSiriAttribution;
@property (nonatomic, getter=isStewie) BOOL stewie; // ivar: _stewie
@property (nonatomic) NSInteger stewieConversationID; // ivar: _stewieConversationID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger syndicationBehavior; // ivar: _syndicationBehavior
@property (readonly, nonatomic) NSInteger syndicationStatus; // ivar: _syndicationStatus
@property (readonly, nonatomic) NSInteger syndicationType; // ivar: _syndicationType
@property (readonly, copy, nonatomic) NSAttributedString *text; // ivar: _text
@property (readonly, copy, nonatomic) NSString *threadIdentifier;
@property (readonly, copy, nonatomic) NSString *threadIdentifierForTapback;
@property (readonly, nonatomic) IMMessageItem *threadOriginator;
@property (retain, nonatomic, setter=_setVisibleAssociatedMessageChatItems:) NSArray *visibleAssociatedMessageChatItems; // ivar: _visibleAssociatedMessageChatItems


+(BOOL)_isAllowlistedRichLinkSender:(id)arg0 isBusiness:(BOOL)arg1 ;
+(BOOL)_isAllowlistedURL:(id)arg0 ;
+(BOOL)_shouldAggregateForTransferType:(id)arg0 ;
+(BOOL)_supportsRichLinkURL:(id)arg0 forSender:(id)arg1 isAllowlistedRichLinkSender:(BOOL)arg2 ;
+(BOOL)isSiriEnabled;
+(NSInteger)_attachmentStackAggregationThreshold;
+(id)_additionalSupportedRichLinkSchemesForAllowlistedSender:(id)arg0 ;
+(id)_defaultRichLinkAllowlist;
+(id)_guidForMessage:(id)arg0 url:(id)arg1 ;
+(id)_messageItemWithPartsDeleted:(id)arg0 fromMessageItem:(id)arg1 indexesOfItemsDeleted:(*id)arg2 indexToRangeMapping:(*id)arg3 ;
+(id)_newDetonatedMessagePartsForMessageItem:(id)arg0 chatContext:(id)arg1 photosPluginPayload:(id)arg2 ;
+(id)_newMessagePartsForMessageItem:(id)arg0 ;
+(id)_newMessagePartsForMessageItem:(id)arg0 chatContext:(id)arg1 ;
+(id)_newMessagePartsForMessageItem:(id)arg0 chatContext:(id)arg1 photosPluginPayload:(id)arg2 ;
+(id)_richLinkRangesForMessageText:(id)arg0 sender:(id)arg1 isAllowlistedRichLinkSender:(BOOL)arg2 ;
+(id)aggregatePartsForParts:(id)arg0 forMessage:(id)arg1 context:(id)arg2 ;
+(id)chatItemGUIDForMessageGUID:(id)arg0 partIndex:(NSInteger)arg1 ;
+(id)messageBodyStringForAttachmentGUIDs:(id)arg0 ;
+(id)messageBodyStringForCMMMessage:(id)arg0 ;
-(BOOL)canDelete;
-(BOOL)canRetract;
-(BOOL)canSendMessageAcknowledgment;
-(BOOL)isHighlighted;
-(NSInteger)messagePartAttributeName;
-(id)_initWithItem:(id)arg0 index:(NSInteger)arg1 messagePartRange:(struct _NSRange )arg2 ;
-(id)_initWithItem:(id)arg0 index:(NSInteger)arg1 messagePartRange:(struct _NSRange )arg2 syndicationBehavior:(NSInteger)arg3 ;
-(id)_initWithItem:(id)arg0 text:(id)arg1 index:(NSInteger)arg2 messagePartRange:(struct _NSRange )arg3 visibleAssociatedMessageChatItems:(id)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)messageSummaryInfo;
-(id)replyContextPreviewChatItemForReply:(id)arg0 chatContext:(id)arg1 ;
-(id)transcriptText;
-(unsigned char)contentType;
-(void)setIsStewie:(BOOL)arg0 ;


@end


#endif