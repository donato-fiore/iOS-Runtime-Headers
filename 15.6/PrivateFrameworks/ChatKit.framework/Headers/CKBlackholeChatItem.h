// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKBLACKHOLECHATITEM_H
#define CKBLACKHOLECHATITEM_H



#import "CKStampChatItem.h"

@interface CKBlackholeChatItem : CKStampChatItem



+(struct CGSize )sizeThatFits:(struct CGSize )arg0 text:(id)arg1 ;
-(Class)cellClass;
-(char)transcriptOrientation;
-(id)loadTranscriptText;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;


@end


#endif