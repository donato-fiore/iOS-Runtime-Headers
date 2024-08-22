// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKREPLYCONTEXTAGGREGATEMESSAGEPARTCHATITEM_H
#define CKREPLYCONTEXTAGGREGATEMESSAGEPARTCHATITEM_H

@protocol CKReplyContext;


#import "CKAggregateMessagePartChatItem.h"

@interface CKReplyContextAggregateMessagePartChatItem : CKAggregateMessagePartChatItem <CKReplyContext>





-(BOOL)isEditable;
-(BOOL)isReplyContextPreview;
-(BOOL)replyIsFromMe;
-(BOOL)wantsOutline;
-(Class)balloonViewClass;
-(char)balloonStyle;
-(char)color;
-(id)bodyTextFont;
-(id)loadTranscriptDrawerText;
-(struct CKBalloonDescriptor_t )balloonDescriptor;


@end


#endif