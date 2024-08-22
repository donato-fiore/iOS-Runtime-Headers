// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI13CIRCLEROWCELL_H
#define _TTC9SEYMOURUI13CIRCLEROWCELL_H

@class UICollectionViewListCell;



@interface _TtC9SeymourUI13CircleRowCell : UICollectionViewListCell {
    ? delegate;
    ? itemInfo;
    ? artworkView;
    ? titleLabel;
    ? subtitleLabel;
    ? bottomLine;
    ? layout;
    ? textGuide;
    ? lastConstraints;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)prepareForReuse;
-(void)textSizeChanged:(id)arg0 ;


@end


#endif