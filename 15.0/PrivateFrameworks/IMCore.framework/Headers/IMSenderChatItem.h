// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMSENDERCHATITEM_H
#define IMSENDERCHATITEM_H



#import "IMTranscriptChatItem.h"
#import "IMHandle.h"

@interface IMSenderChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) IMHandle *handle; // ivar: _handle


-(id)_initWithItem:(id)arg0 handle:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif