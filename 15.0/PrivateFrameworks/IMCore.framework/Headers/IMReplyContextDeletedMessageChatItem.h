// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMREPLYCONTEXTDELETEDMESSAGECHATITEM_H
#define IMREPLYCONTEXTDELETEDMESSAGECHATITEM_H

@class NSString;
@protocol IMReplyContext;


#import "IMReplyContextTextMessagePartChatItem.h"

@interface IMReplyContextDeletedMessageChatItem : IMReplyContextTextMessagePartChatItem <IMReplyContext>



@property (readonly, nonatomic) BOOL replyIsFromMe;
@property (readonly, copy, nonatomic) NSString *replyMessageGUID;


-(BOOL)isFromMe;
-(id)_initWithReplyItem:(id)arg0 threadIdentifier:(id)arg1 replyMessageGUID:(id)arg2 replyIsFromMe:(BOOL)arg3 ;


@end


#endif