// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI35TVROOTSHOWCASECAROUSELCONTAINERCELL_H
#define _TTC9SEYMOURUI35TVROOTSHOWCASECAROUSELCONTAINERCELL_H

@class UICollectionViewCell, NSArray;



@interface _TtC9SeymourUI35TVRootShowcaseCarouselContainerCell : UICollectionViewCell {
    ? delegate;
    ? itemInfo;
    ? layout;
    ? carouselView;
    ? pageControl;
    ? preferredCenterIndex;
    ? items;
    ? onElementAppearance;
    ? onElementDisappearance;
    ? onImpressionableBoundsChange;
    ? onVisibleBoundsChange;
    ? itemCellIdentifier;
    ? leftArrowButton;
    ? rightArrowButton;
}


@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif