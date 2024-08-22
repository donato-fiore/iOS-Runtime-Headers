// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMMESSAGEACKNOWLEDGMENTCHATITEM_H
#define IMMESSAGEACKNOWLEDGMENTCHATITEM_H



#import "IMAssociatedMessageChatItem.h"

@interface IMMessageAcknowledgmentChatItem : IMAssociatedMessageChatItem

@property (readonly, nonatomic) NSInteger messageAcknowledgmentType; // ivar: _messageAcknowledgmentType


-(id)_initWithItem:(id)arg0 sender:(id)arg1 messageAcknowledgmentType:(NSInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif