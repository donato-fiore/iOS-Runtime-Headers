// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMASSOCIATEDSTICKERCHATITEM_H
#define IMASSOCIATEDSTICKERCHATITEM_H

@class NSString;


#import "IMAssociatedMessageChatItem.h"

@interface IMAssociatedStickerChatItem : IMAssociatedMessageChatItem

@property (readonly, copy, nonatomic) NSString *transferGUID; // ivar: _transferGUID


-(BOOL)canDelete;
-(id)_initWithItem:(id)arg0 sender:(id)arg1 transferGUID:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif