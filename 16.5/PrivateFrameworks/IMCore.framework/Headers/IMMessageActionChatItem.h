// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMMESSAGEACTIONCHATITEM_H
#define IMMESSAGEACTIONCHATITEM_H



#import "IMTranscriptChatItem.h"
#import "IMHandle.h"

@interface IMMessageActionChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) NSInteger actionType;
@property (readonly, nonatomic) IMHandle *otherHandle; // ivar: _otherHandle
@property (readonly, nonatomic) IMHandle *sender; // ivar: _sender


-(id)_initWithItem:(id)arg0 sender:(id)arg1 otherHandle:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif