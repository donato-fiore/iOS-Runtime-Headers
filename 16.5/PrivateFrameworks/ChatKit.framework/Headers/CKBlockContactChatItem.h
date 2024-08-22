// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKBLOCKCONTACTCHATITEM_H
#define CKBLOCKCONTACTCHATITEM_H

@class NSAttributedString;


#import "CKStampLabelChatItem.h"

@interface CKBlockContactChatItem : CKStampLabelChatItem

@property (copy, nonatomic) NSAttributedString *transcriptButtonText; // ivar: _transcriptButtonText


-(Class)cellClass;
-(NSUInteger)layoutType;
-(id)loadTranscriptText;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;


@end


#endif