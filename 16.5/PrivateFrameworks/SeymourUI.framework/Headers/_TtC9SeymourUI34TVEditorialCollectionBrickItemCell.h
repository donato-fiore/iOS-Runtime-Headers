// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI34TVEDITORIALCOLLECTIONBRICKITEMCELL_H
#define _TTC9SEYMOURUI34TVEDITORIALCOLLECTIONBRICKITEMCELL_H

@class TtC9SeymourUI29TVFocusableCollectionViewCell;



@interface _TtC9SeymourUI34TVEditorialCollectionBrickItemCell : TtC9SeymourUI29TVFocusableCollectionViewCell {
    ? delegate;
    ? itemInfo;
    ? floatingView;
    ? tvArtworkView;
    ? layout;
    ? bottomTextStackView;
    ? footnoteLabel;
    ? recencyIconView;
    ? titleLabel;
    ? gradientLayer;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif