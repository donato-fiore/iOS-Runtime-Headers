// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKREPLYCONTEXTDELETEDMESSAGEPARTCHATITEM_H
#define CKREPLYCONTEXTDELETEDMESSAGEPARTCHATITEM_H

@protocol CKReplyContext;


#import "CKReplyContextTextMessagePartChatItem.h"

@interface CKReplyContextDeletedMessagePartChatItem : CKReplyContextTextMessagePartChatItem <CKReplyContext>





-(BOOL)isEditable;
-(BOOL)isFromMe;
-(BOOL)itemIsReplyContextPreview;
-(char)balloonOrientation;
-(char)color;
-(char)transcriptOrientation;
-(id)contact;
-(id)loadTranscriptText;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct CKBalloonDescriptor_t )balloonDescriptor;


@end


#endif