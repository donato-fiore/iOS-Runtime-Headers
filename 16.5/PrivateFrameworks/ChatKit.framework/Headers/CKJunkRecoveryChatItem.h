// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKJUNKRECOVERYCHATITEM_H
#define CKJUNKRECOVERYCHATITEM_H

@class NSDate;


#import "CKChatItem.h"

@interface CKJunkRecoveryChatItem : CKChatItem

@property (retain, nonatomic) NSDate *earliestMessageDate; // ivar: _earliestMessageDate


-(Class)cellClass;
-(id)loadTranscriptText;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;


@end


#endif