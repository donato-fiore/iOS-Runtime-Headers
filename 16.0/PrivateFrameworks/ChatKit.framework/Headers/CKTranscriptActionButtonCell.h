// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTRANSCRIPTACTIONBUTTONCELL_H
#define CKTRANSCRIPTACTIONBUTTONCELL_H

@class UIButton;
@protocol CKTranscriptActionButtonCellDelegate;


#import "CKTranscriptAbstractLabelCell.h"

@interface CKTranscriptActionButtonCell : CKTranscriptAbstractLabelCell {
    UIButton *_actionButton;
}


@property (weak, nonatomic) NSObject<CKTranscriptActionButtonCellDelegate> *delegate; // ivar: _delegate


+(id)reuseIdentifier;
+(struct CGSize )sizeThatFits:(struct CGSize )arg0 attributedText:(id)arg1 displayScale:(CGFloat)arg2 ;
-(id)attributedText;
-(id)cellView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)label;
-(void)buttonPrimaryActionTriggered:(id)arg0 ;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)setAttributedText:(id)arg0 ;


@end


#endif