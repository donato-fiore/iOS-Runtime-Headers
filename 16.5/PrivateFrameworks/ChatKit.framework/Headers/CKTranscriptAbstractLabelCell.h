// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTRANSCRIPTABSTRACTLABELCELL_H
#define CKTRANSCRIPTABSTRACTLABELCELL_H

@class NSAttributedString;


#import "CKTranscriptCell.h"

@interface CKTranscriptAbstractLabelCell : CKTranscriptCell

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) BOOL wantsContactImageLayout; // ivar: _wantsContactImageLayout
@property (nonatomic) BOOL wantsOffsetForReplyLine; // ivar: _wantsOffsetForReplyLine


+(struct CGSize )sizeThatFits:(struct CGSize )arg0 attributedText:(id)arg1 displayScale:(CGFloat)arg2 ;
-(BOOL)wantsDrawerLayout;
-(id)cellView;
-(id)label;
-(struct CGRect )contentAlignmentRect;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)addFilter:(id)arg0 ;
-(void)clearFilters;
-(void)layoutSubviewsForAlignmentContents;
-(void)layoutSubviewsForContents;
-(void)prepareForReuse;


@end


#endif