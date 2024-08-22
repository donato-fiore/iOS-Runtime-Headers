// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMREPLYCONTEXTAGGREGATEATTACHMENTMESSAGEPARTCHATITEM_H
#define IMREPLYCONTEXTAGGREGATEATTACHMENTMESSAGEPARTCHATITEM_H

@class IMItem, NSString;
@protocol IMReplyContext;


#import "IMAggregateAttachmentMessagePartChatItem.h"

@interface IMReplyContextAggregateAttachmentMessagePartChatItem : IMAggregateAttachmentMessagePartChatItem <IMReplyContext>



@property (retain, nonatomic) IMItem *_parentItem; // ivar: _parentItem
@property (nonatomic) BOOL replyIsFromMe; // ivar: _replyIsFromMe
@property (copy, nonatomic) NSString *replyMessageGUID; // ivar: _replyMessageGUID


-(BOOL)canDelete;
-(BOOL)isReplyContextPreview;
-(id)_initWithItem:(id)arg0 parentItem:(id)arg1 replyMessageGUID:(id)arg2 replyIsFromMe:(BOOL)arg3 text:(id)arg4 index:(NSInteger)arg5 messagePartRange:(struct _NSRange )arg6 transferGUIDs:(id)arg7 chatContext:(id)arg8 ;
-(id)_initWithItem:(id)arg0 parentItem:(id)arg1 replyMessageGUID:(id)arg2 replyIsFromMe:(BOOL)arg3 text:(id)arg4 index:(NSInteger)arg5 messagePartRange:(struct _NSRange )arg6 transferGUIDs:(id)arg7 chatContext:(id)arg8 visibleAssociatedMessageChatItems:(id)arg9 ;


@end


#endif