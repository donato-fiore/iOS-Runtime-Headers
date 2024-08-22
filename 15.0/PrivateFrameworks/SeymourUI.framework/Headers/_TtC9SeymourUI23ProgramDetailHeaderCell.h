// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI23PROGRAMDETAILHEADERCELL_H
#define _TTC9SEYMOURUI23PROGRAMDETAILHEADERCELL_H

@class UICollectionViewCell;



@interface _TtC9SeymourUI23ProgramDetailHeaderCell : UICollectionViewCell {
    ? delegate;
    ? itemInfo;
    ? layout;
    ? artworkView;
    ? vibrantShadowView;
    ? textContainer;
    ? titleLabel;
    ? subtitleLabel;
    ? previewButtonPlatter;
    ? previewButton;
    ? leadingConstraints;
    ? trailingConstraints;
}


@property (nonatomic) CGRect bounds;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)playButtonTapped:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif