// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMREPLYCONTEXTTEXTMESSAGEPARTCHATITEM_H
#define IMREPLYCONTEXTTEXTMESSAGEPARTCHATITEM_H

@class IMItem, NSString;
@protocol IMReplyContext;


#import "IMTextMessagePartChatItem.h"

@interface IMReplyContextTextMessagePartChatItem : IMTextMessagePartChatItem <IMReplyContext>



@property (retain, nonatomic) IMItem *_parentItem; // ivar: _parentItem
@property (nonatomic) BOOL replyIsFromMe; // ivar: _replyIsFromMe
@property (copy, nonatomic) NSString *replyMessageGUID; // ivar: _replyMessageGUID


-(BOOL)canDelete;
-(BOOL)isReplyContextPreview;
-(id)_initWithItem:(id)arg0 parentItem:(id)arg1 replyMessageGUID:(id)arg2 replyIsFromMe:(BOOL)arg3 text:(id)arg4 index:(NSInteger)arg5 messagePartRange:(struct _NSRange )arg6 subject:(id)arg7 ;
-(id)_initWithItem:(id)arg0 parentItem:(id)arg1 replyMessageGUID:(id)arg2 replyIsFromMe:(BOOL)arg3 text:(id)arg4 index:(NSInteger)arg5 messagePartRange:(struct _NSRange )arg6 subject:(id)arg7 shouldDisplayLink:(BOOL)arg8 ;


@end


#endif