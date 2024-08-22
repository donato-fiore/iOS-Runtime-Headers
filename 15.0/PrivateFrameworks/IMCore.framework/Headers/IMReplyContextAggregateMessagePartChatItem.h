// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMREPLYCONTEXTAGGREGATEMESSAGEPARTCHATITEM_H
#define IMREPLYCONTEXTAGGREGATEMESSAGEPARTCHATITEM_H

@class IMItem, NSString;
@protocol IMReplyContext;


#import "IMAggregateMessagePartChatItem.h"

@interface IMReplyContextAggregateMessagePartChatItem : IMAggregateMessagePartChatItem <IMReplyContext>



@property (retain, nonatomic) IMItem *_parentItem; // ivar: _parentItem
@property (nonatomic) BOOL replyIsFromMe; // ivar: _replyIsFromMe
@property (copy, nonatomic) NSString *replyMessageGUID; // ivar: _replyMessageGUID


-(BOOL)canDelete;
-(BOOL)isReplyContextPreview;
-(id)_initWithItem:(id)arg0 parentItem:(id)arg1 replyMessageGUID:(id)arg2 replyIsFromMe:(BOOL)arg3 messagePartRange:(struct _NSRange )arg4 subparts:(id)arg5 ;


@end


#endif