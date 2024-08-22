// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKEDITEDTEXTMESSAGEPARTHISTORICALCONTENTCHATITEM_H
#define CKEDITEDTEXTMESSAGEPARTHISTORICALCONTENTCHATITEM_H



#import "CKTextMessagePartChatItem.h"

@interface CKEditedTextMessagePartHistoricalContentChatItem : CKTextMessagePartChatItem



-(BOOL)canBeSelectedInEditMode;
-(BOOL)shouldUseBigEmoji;
-(BOOL)wantsOutline;
-(Class)balloonViewClass;
-(char)balloonStyle;
-(char)color;
-(id)loadTranscriptDrawerText;
-(id)meMentionsTextColor;
-(struct CKBalloonDescriptor_t )balloonDescriptor;


@end


#endif