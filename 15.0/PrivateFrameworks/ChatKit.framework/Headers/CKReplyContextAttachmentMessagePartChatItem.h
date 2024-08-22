// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKREPLYCONTEXTATTACHMENTMESSAGEPARTCHATITEM_H
#define CKREPLYCONTEXTATTACHMENTMESSAGEPARTCHATITEM_H

@protocol CKReplyContext;


#import "CKAttachmentMessagePartChatItem.h"

@interface CKReplyContextAttachmentMessagePartChatItem : CKAttachmentMessagePartChatItem <CKReplyContext>





-(BOOL)isEditable;
-(BOOL)isReplyContextPreview;
-(BOOL)replyIsFromMe;
-(Class)balloonViewClass;
-(char)balloonStyle;
-(char)color;
-(id)loadTranscriptDrawerText;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct CKBalloonDescriptor_t )balloonDescriptor;


@end


#endif