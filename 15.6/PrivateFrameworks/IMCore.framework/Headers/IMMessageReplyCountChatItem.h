// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMMESSAGEREPLYCOUNTCHATITEM_H
#define IMMESSAGEREPLYCOUNTCHATITEM_H

@class IMItem, NSString;
@protocol IMReplyContext;


#import "IMMessageStatusChatItem.h"

@interface IMMessageReplyCountChatItem : IMMessageStatusChatItem <IMReplyContext>



@property (retain, nonatomic) IMItem *_parentItem; // ivar: _parentItem
@property (readonly, nonatomic) BOOL replyIsFromMe; // ivar: _replyIsFromMe
@property (readonly, copy, nonatomic) NSString *replyMessageGUID; // ivar: _replyMessageGUID
@property (readonly, copy, nonatomic) NSString *threadIdentifier; // ivar: _threadIdentifier


-(id)_initWithItem:(id)arg0 parentItem:(id)arg1 threadIdentifier:(id)arg2 replyMessageGUID:(id)arg3 replyIsFromMe:(BOOL)arg4 count:(NSUInteger)arg5 ;


@end


#endif