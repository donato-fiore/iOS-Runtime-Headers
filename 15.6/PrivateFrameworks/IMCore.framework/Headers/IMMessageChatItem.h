// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMMESSAGECHATITEM_H
#define IMMESSAGECHATITEM_H

@class NSString, NSDate;
@protocol IMMessageChatItem;


#import "IMTranscriptChatItem.h"
#import "IMMessage.h"
#import "IMHandle.h"

@interface IMMessageChatItem : IMTranscriptChatItem <IMMessageChatItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL failed;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) IMMessage *message;
@property (readonly, nonatomic) IMHandle *sender;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *time;


-(BOOL)canReply;


@end


#endif