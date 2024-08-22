// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSEARCHSUGGESTIONCELL_H
#define PXSEARCHSUGGESTIONCELL_H

@class UICollectionViewListCell, UILabel, UIImageView, UILayoutGuide, NSLayoutConstraint, UIStackView;



@interface PXSearchSuggestionCell : UICollectionViewListCell

@property (readonly, nonatomic) UILabel *countLabel; // ivar: _countLabel
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) UILayoutGuide *imageViewLayoutGuide; // ivar: _imageViewLayoutGuide
@property (readonly, nonatomic) NSLayoutConstraint *imageViewLayoutGuideWidthConstraint; // ivar: _imageViewLayoutGuideWidthConstraint
@property (readonly, nonatomic) UIStackView *textStackView; // ivar: _textStackView
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateContentColors;
-(void)_updateLayoutWithContentSizeCategory:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)prepareForReuse;
-(void)setSearchSuggestion:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConfigurationUsingState:(id)arg0 ;


@end


#endif