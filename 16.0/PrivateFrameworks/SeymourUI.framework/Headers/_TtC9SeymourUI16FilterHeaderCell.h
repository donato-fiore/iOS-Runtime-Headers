// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI16FILTERHEADERCELL_H
#define _TTC9SEYMOURUI16FILTERHEADERCELL_H

@class UICollectionViewCell;



@interface _TtC9SeymourUI16FilterHeaderCell : UICollectionViewCell {
    ? delegate;
    ? itemInfo;
    ? defaultButtonInsets;
    ? localizer;
    ? titleLabel;
    ? filterButton;
    ? isFilterButtonEnabled;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)tappedFilterButton:(id)arg0 ;
-(void)textSizeChanged:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif