// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSMSSPAMCHATITEM_H
#define CKSMSSPAMCHATITEM_H



#import "CKStampLabelChatItem.h"

@interface CKSMSSpamChatItem : CKStampLabelChatItem



-(Class)cellClass;
-(id)getTranscriptTextForExtensionName:(id)arg0 ;
-(id)loadTranscriptText;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;


@end


#endif