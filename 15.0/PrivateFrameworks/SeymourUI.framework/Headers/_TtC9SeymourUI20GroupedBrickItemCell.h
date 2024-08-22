// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI20GROUPEDBRICKITEMCELL_H
#define _TTC9SEYMOURUI20GROUPEDBRICKITEMCELL_H

@class UICollectionViewCell;



@interface _TtC9SeymourUI20GroupedBrickItemCell : UICollectionViewCell {
    ? delegate;
    ? itemInfo;
    ? showSeparator;
    ? layout;
    ? artworkView;
    ? stackView;
    ? headerLabel;
    ? container;
    ? textLayoutGuide;
    ? titleLabel;
    ? subtitleLabel;
    ? separator;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)prepareForReuse;
-(void)textSizeChanged:(id)arg0 ;


@end


#endif