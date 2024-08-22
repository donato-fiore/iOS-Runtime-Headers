// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTRANSCRIPTMOMENTSHARELABELCELL_H
#define CKTRANSCRIPTMOMENTSHARELABELCELL_H

@class UILabel;


#import "CKTranscriptAbstractLabelCell.h"

@interface CKTranscriptMomentShareLabelCell : CKTranscriptAbstractLabelCell {
    UILabel *_label;
}




+(id)reuseIdentifier;
+(struct CGSize )sizeThatFits:(struct CGSize )arg0 attributedText:(id)arg1 displayScale:(CGFloat)arg2 ;
-(id)attributedText;
-(id)cellView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)label;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)setAttributedText:(id)arg0 ;


@end


#endif