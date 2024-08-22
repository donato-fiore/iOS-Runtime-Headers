// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKAUDIOMESSAGECHATITEM_H
#define CKAUDIOMESSAGECHATITEM_H



#import "CKExpirableMessageChatItem.h"
#import "CKAudioMediaObject.h"

@interface CKAudioMessageChatItem : CKExpirableMessageChatItem

@property (readonly, nonatomic) CKAudioMediaObject *mediaObject;


-(Class)balloonViewClass;
-(Class)cellClass;
-(NSUInteger)balloonCorners;


@end


#endif