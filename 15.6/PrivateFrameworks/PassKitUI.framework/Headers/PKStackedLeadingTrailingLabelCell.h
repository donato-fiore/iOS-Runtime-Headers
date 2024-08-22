// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSTACKEDLEADINGTRAILINGLABELCELL_H
#define PKSTACKEDLEADINGTRAILINGLABELCELL_H

@class UICollectionViewListCell, UILabel, NSString, UIColor;


#import "PKProgressBar.h"

@interface PKStackedLeadingTrailingLabelCell : UICollectionViewListCell {
    UILabel *_leadingPrimaryLabel;
    UILabel *_leadingSecondaryLabel;
    UILabel *_trailingPrimaryLabel;
    UILabel *_trailingSecondaryLabel;
    UILabel *_detailLabel;
    PKProgressBar *_progressBar;
}


@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (copy, nonatomic) NSString *leadingPrimaryText; // ivar: _leadingPrimaryText
@property (copy, nonatomic) NSString *leadingSecondaryText; // ivar: _leadingSecondaryText
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (retain, nonatomic) UIColor *progressBarEndColor; // ivar: _progressBarEndColor
@property (retain, nonatomic) UIColor *progressBarStartColor; // ivar: _progressBarStartColor
@property (nonatomic) BOOL showProgressBar; // ivar: _showProgressBar
@property (copy, nonatomic) NSString *trailingPrimaryText; // ivar: _trailingPrimaryText
@property (copy, nonatomic) NSString *trailingSecondaryText; // ivar: _trailingSecondaryText


-(CGFloat)_layoutLabelsSideBySide:(struct CGRect )arg0 allocated:(struct CGRect *)arg1 unallocated:(struct CGRect *)arg2 isTemplateLayout:(BOOL)arg3 ;
-(CGFloat)_layoutLabelsStacked:(struct CGRect )arg0 allocated:(struct CGRect *)arg1 unallocated:(struct CGRect *)arg2 isTemplateLayout:(BOOL)arg3 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateProgressBar;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif