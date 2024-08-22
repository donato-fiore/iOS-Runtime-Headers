// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDATECHATITEM_H
#define CKDATECHATITEM_H

@class NSDate;


#import "CKStampLabelChatItem.h"

@interface CKDateChatItem : CKStampLabelChatItem

@property (readonly, nonatomic) NSDate *date;


-(NSUInteger)layoutType;
-(id)loadTranscriptText;
-(id)now;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;


@end


#endif