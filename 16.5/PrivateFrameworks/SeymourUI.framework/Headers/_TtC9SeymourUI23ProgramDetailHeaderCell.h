// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI23PROGRAMDETAILHEADERCELL_H
#define _TTC9SEYMOURUI23PROGRAMDETAILHEADERCELL_H

@class UICollectionViewCell;



@interface _TtC9SeymourUI23ProgramDetailHeaderCell : UICollectionViewCell {
    ? delegate;
    ? isMinFontPreferred;
    ? itemInfo;
    ? layout;
    ? artworkView;
    ? contentLayoutGuide;
    ? vibrantShadowView;
    ? textContainer;
    ? titleLabel;
    ? subtitleLabel;
    ? previewButtonPlatter;
    ? previewButton;
    ? contentLayoutGuideLeftConstraint;
    ? contentLayoutGuideWidthConstraint;
    ? currentContainerSize;
    ? currentLayout;
    ? oldWidth;
    ? previewButtonRightConstraint;
    ? previewButtonWidthConstraint;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)playButtonTapped:(id)arg0 ;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif