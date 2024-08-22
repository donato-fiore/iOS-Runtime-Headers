// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMGROUPACTIONCHATITEM_H
#define IMGROUPACTIONCHATITEM_H



#import "IMTranscriptChatItem.h"
#import "IMHandle.h"

@interface IMGroupActionChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) NSInteger actionType;
@property (readonly, nonatomic) IMHandle *sender; // ivar: _sender


-(id)_initWithItem:(id)arg0 sender:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif