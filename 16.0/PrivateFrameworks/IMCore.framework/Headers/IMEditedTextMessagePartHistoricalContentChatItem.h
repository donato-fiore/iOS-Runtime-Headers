// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMEDITEDTEXTMESSAGEPARTHISTORICALCONTENTCHATITEM_H
#define IMEDITEDTEXTMESSAGEPARTHISTORICALCONTENTCHATITEM_H



#import "IMTextMessagePartChatItem.h"

@interface IMEditedTextMessagePartHistoricalContentChatItem : IMTextMessagePartChatItem



-(BOOL)canDelete;
-(BOOL)canEditMessageText;
-(BOOL)canReply;
-(BOOL)canRetract;
-(BOOL)isEditedMessageHistory;
-(id)_initWithMessageItem:(id)arg0 messagePartIndex:(NSInteger)arg1 historicalContent:(id)arg2 editIndex:(NSInteger)arg3 messagePartRange:(struct _NSRange )arg4 subject:(id)arg5 ;


@end


#endif