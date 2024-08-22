// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMEDITEDTEXTMESSAGEPARTHISTORICALCONTENTCHATITEM_H
#define IMEDITEDTEXTMESSAGEPARTHISTORICALCONTENTCHATITEM_H

@class IMMessagePartHistoricalContent;


#import "IMTextMessagePartChatItem.h"

@interface IMEditedTextMessagePartHistoricalContentChatItem : IMTextMessagePartChatItem

@property (readonly, nonatomic) IMMessagePartHistoricalContent *historicalContent; // ivar: _historicalContent


-(BOOL)canDelete;
-(BOOL)canEditMessageText;
-(BOOL)canReply;
-(BOOL)canRetract;
-(BOOL)isEditedMessageHistory;
-(id)_initWithMessageItem:(id)arg0 messagePartIndex:(NSInteger)arg1 historicalContent:(id)arg2 editIndex:(NSInteger)arg3 messagePartRange:(struct _NSRange )arg4 subject:(id)arg5 ;


@end


#endif