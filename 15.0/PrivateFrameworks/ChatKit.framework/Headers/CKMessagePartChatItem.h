// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMESSAGEPARTCHATITEM_H
#define CKMESSAGEPARTCHATITEM_H

@class NSItemProvider, IMMessage, NSArray, NSString, IMMessageItem;


#import "CKBalloonChatItem.h"
#import "CKMessagePartHighlightChatItem.h"

@interface CKMessagePartChatItem : CKBalloonChatItem

@property (readonly, nonatomic) BOOL canSendMessageAcknowledgment;
@property (readonly, nonatomic) char color;
@property (readonly, nonatomic) NSItemProvider *dragItemProvider;
@property (readonly, nonatomic) BOOL hasMessageAcknowledgment;
@property (readonly, nonatomic) BOOL hasStickers;
@property (readonly, nonatomic) NSInteger index;
@property (readonly, nonatomic) BOOL isBlackholed;
@property (readonly, nonatomic) BOOL isCorrupt;
@property (readonly, nonatomic) BOOL isReply;
@property (readonly, nonatomic) BOOL isReplyContextPreview;
@property (readonly, nonatomic) IMMessage *message;
@property (readonly, copy, nonatomic) NSArray *messageAcknowledgments;
@property (readonly, nonatomic) CKMessagePartHighlightChatItem *messageHighlightChatItem; // ivar: _messageHighlightChatItem
@property (readonly, nonatomic) _NSRange messagePartRange;
@property (readonly, nonatomic) NSArray *pasteboardItemProviders;
@property (readonly, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) IMMessageItem *threadOriginator;
@property (readonly, nonatomic) NSArray *visibleAssociatedMessageChatItems; // ivar: _visibleAssociatedMessageChatItems


-(BOOL)__im_ff_isInterstellarEnabled;
-(BOOL)_isSURFRelatedMessage;
-(BOOL)canAttachStickers;
-(BOOL)canCopy;
-(BOOL)canForward;
-(BOOL)canInlineReply;
-(BOOL)canSendAsTextMessage;
-(BOOL)failed;
-(BOOL)isFromMe;
-(BOOL)shouldShowVotingView;
-(BOOL)stickersSnapToPoint;
-(NSInteger)selectedType;
-(NSUInteger)chatItemReplyLineContiguousTypeForChatStyle:(unsigned char)arg0 ;
-(id)aggregateAcknowledgmentChatItem;
-(id)compositionWithContext:(id)arg0 ;
-(id)description;
-(id)fileURLForAttachment;
-(id)initWithIMChatItem:(id)arg0 maxWidth:(CGFloat)arg1 ;
-(id)rtfDocumentItemsWithFormatString:(id)arg0 selectedTextRange:(struct _NSRange )arg1 ;
-(id)sender;
-(id)tapbackActionButtonImageName;
-(id)time;
-(id)votingCounts;
-(void)configureBalloonView:(id)arg0 ;


@end


#endif