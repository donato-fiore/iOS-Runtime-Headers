// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKREPLYCONTEXTTEXTMESSAGEPARTCHATITEM_H
#define CKREPLYCONTEXTTEXTMESSAGEPARTCHATITEM_H

@protocol CKReplyContext;


#import "CKTextMessagePartChatItem.h"

@interface CKReplyContextTextMessagePartChatItem : CKTextMessagePartChatItem <CKReplyContext>





-(BOOL)canBeSelectedInEditMode;
-(BOOL)isReplyContextPreview;
-(BOOL)replyIsFromMe;
-(BOOL)shouldUseBigEmoji;
-(BOOL)wantsOutline;
-(Class)balloonViewClass;
-(char)balloonStyle;
-(char)color;
-(id)bodyTextFont;
-(id)loadTranscriptDrawerText;
-(id)meMentionsTextColor;
-(struct CKBalloonDescriptor_t )balloonDescriptor;


@end


#endif