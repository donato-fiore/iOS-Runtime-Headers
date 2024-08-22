// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKORGANICATTACHMENTMESSAGEPARTCHATITEM_H
#define CKORGANICATTACHMENTMESSAGEPARTCHATITEM_H



#import "CKAttachmentMessagePartChatItem.h"
#import "CKOrganicImageLayoutRecipe.h"

@interface CKOrganicAttachmentMessagePartChatItem : CKAttachmentMessagePartChatItem

@property (retain, nonatomic) CKOrganicImageLayoutRecipe *layoutRecipe; // ivar: _layoutRecipe


-(BOOL)supportsInlineReplyTransition;
-(Class)balloonViewClass;
-(Class)cellClass;
-(Class)customLayoutGroupProviderClass;
-(NSUInteger)balloonCorners;
-(NSUInteger)layoutType;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;


@end


#endif