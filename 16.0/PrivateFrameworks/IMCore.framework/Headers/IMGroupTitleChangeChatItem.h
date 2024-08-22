// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMGROUPTITLECHANGECHATITEM_H
#define IMGROUPTITLECHANGECHATITEM_H

@class NSString;


#import "IMTranscriptChatItem.h"
#import "IMHandle.h"

@interface IMGroupTitleChangeChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) IMHandle *sender; // ivar: _sender
@property (readonly, copy, nonatomic) NSString *title;


-(id)_initWithItem:(id)arg0 sender:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif