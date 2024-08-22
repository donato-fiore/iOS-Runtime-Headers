// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI22HIGHLIGHTBRICKITEMCELL_H
#define _TTC9SEYMOURUI22HIGHLIGHTBRICKITEMCELL_H

@class UICollectionViewCell;



@interface _TtC9SeymourUI22HighlightBrickItemCell : UICollectionViewCell {
    ? delegate;
    ? currentConstraints;
    ? itemInfo;
    ? artworkView;
    ? layoutGuide;
    ? headlineLabel;
    ? indexLabel;
    ? subtitleLabel;
    ? titleLabel;
    ? platter;
    ? hasIndex;
    ? isCurrentTitleRTL;
    ? indexLeadingConstraint;
    ? layout;
    ? layoutGuideLeadingConstraint;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif