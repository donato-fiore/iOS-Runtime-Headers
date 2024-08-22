// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMAGGREGATEMESSAGEPARTCHATITEM_H
#define IMAGGREGATEMESSAGEPARTCHATITEM_H

@class NSArray;


#import "IMTextMessagePartChatItem.h"

@interface IMAggregateMessagePartChatItem : IMTextMessagePartChatItem

@property (readonly, copy, nonatomic) NSArray *subparts; // ivar: _subparts


-(id)_initWithItem:(id)arg0 messagePartRange:(struct _NSRange )arg1 subparts:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)replyContextPreviewChatItemForReply:(id)arg0 chatContext:(id)arg1 ;


@end


#endif