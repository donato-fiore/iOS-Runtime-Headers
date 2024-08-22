// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKREPLYCONTEXTAGGREGATEATTACHMENTMESSAGEPARTCHATITEM_H
#define CKREPLYCONTEXTAGGREGATEATTACHMENTMESSAGEPARTCHATITEM_H

@protocol CKReplyContext;


#import "CKAggregateAttachmentMessagePartChatItem.h"

@interface CKReplyContextAggregateAttachmentMessagePartChatItem : CKAggregateAttachmentMessagePartChatItem <CKReplyContext>





-(BOOL)canForward;
-(BOOL)isEditable;
-(BOOL)isReplyContextPreview;
-(BOOL)replyIsFromMe;
-(Class)balloonViewClass;
-(Class)cellClass;
-(id)loadTranscriptDrawerText;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;


@end


#endif