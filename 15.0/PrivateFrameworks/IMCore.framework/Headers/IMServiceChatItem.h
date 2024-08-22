// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMSERVICECHATITEM_H
#define IMSERVICECHATITEM_H



#import "IMTranscriptChatItem.h"
#import "IMHandle.h"
#import "IMServiceImpl.h"

@interface IMServiceChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) IMHandle *handle; // ivar: _handle
@property (readonly, nonatomic) IMServiceImpl *service; // ivar: _service


-(id)_initWithItem:(id)arg0 service:(id)arg1 handle:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif