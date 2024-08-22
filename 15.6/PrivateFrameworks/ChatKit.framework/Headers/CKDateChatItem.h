// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDATECHATITEM_H
#define CKDATECHATITEM_H

@class NSDate;


#import "CKStampChatItem.h"

@interface CKDateChatItem : CKStampChatItem

@property (readonly, nonatomic) NSDate *date;


-(NSUInteger)layoutType;
-(id)loadTranscriptText;
-(id)now;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;


@end


#endif