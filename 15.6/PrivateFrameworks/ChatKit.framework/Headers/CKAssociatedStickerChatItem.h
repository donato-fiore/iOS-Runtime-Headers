// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKASSOCIATEDSTICKERCHATITEM_H
#define CKASSOCIATEDSTICKERCHATITEM_H

@class NSString;


#import "CKAssociatedMessageChatItem.h"
#import "CKMediaObject.h"

@interface CKAssociatedStickerChatItem : CKAssociatedMessageChatItem

@property (retain, nonatomic) CKMediaObject *mediaObject; // ivar: _mediaObject
@property (readonly, copy, nonatomic) NSString *transferGUID;


-(Class)cellClass;
-(char)transcriptOrientation;
-(id)IMAssociatedStickerChatItem;
-(id)initWithIMChatItem:(id)arg0 maxWidth:(CGFloat)arg1 ;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;


@end


#endif