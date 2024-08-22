// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSTAMPBUTTONCHATITEM_H
#define CKSTAMPBUTTONCHATITEM_H



#import "CKChatItem.h"

@interface CKStampButtonChatItem : CKChatItem



-(BOOL)displayDuringSend;
-(Class)cellClass;
-(char)transcriptOrientation;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct UIEdgeInsets )contentInsets;


@end


#endif