// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHRESULTTITLEDCELL_H
#define PXSEARCHRESULTTITLEDCELL_H

@class UICollectionViewListCell, NSString, UILabel, UIImageView;
@protocol PXSearchResultThumbnailCell;



@interface PXSearchResultTitledCell : UICollectionViewListCell <PXSearchResultThumbnailCell>



@property (readonly, nonatomic) NSString *accessibilityLabel;
@property (retain, nonatomic) UILabel *countLabel; // ivar: _countLabel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger searchResultType; // ivar: _searchResultType
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImageView *thumbnailImageView; // ivar: _thumbnailImageView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(BOOL)shouldUseAccessibilityLayout;
+(id)reuseIdentifier;
-(id)_setupCountLabel;
-(id)_setupImageView;
-(id)_setupTitleLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)italicTitleLabelFont;
-(void)_preferredContentSizeChanged:(id)arg0 ;
-(void)_setupSubviews;
-(void)configureWithResult:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setThumbnailImage:(id)arg0 ;
-(void)updateConfigurationUsingState:(id)arg0 ;
-(void)updateContentColors;


@end


#endif