// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKBLOCKCONTACTCHATITEM_H
#define CKBLOCKCONTACTCHATITEM_H

@class NSAttributedString;


#import "CKStampChatItem.h"

@interface CKBlockContactChatItem : CKStampChatItem

@property (copy, nonatomic) NSAttributedString *transcriptButtonText; // ivar: _transcriptButtonText


-(BOOL)__im_ff_commSafetyUIEnabled;
-(Class)cellClass;
-(id)loadTranscriptText;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;


@end


#endif