// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSTEWIETRANSCRIPTRESUMEBUTTONSCHATITEM_H
#define CKSTEWIETRANSCRIPTRESUMEBUTTONSCHATITEM_H



#import "CKStampLabelChatItem.h"

@interface CKStewieTranscriptResumeButtonsChatItem : CKStampLabelChatItem



-(BOOL)shouldShowStewieTextButton;
-(Class)cellClass;
-(id)loadTranscriptText;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;


@end


#endif