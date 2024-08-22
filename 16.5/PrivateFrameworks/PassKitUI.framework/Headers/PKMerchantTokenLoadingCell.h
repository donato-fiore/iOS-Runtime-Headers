// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMERCHANTTOKENLOADINGCELL_H
#define PKMERCHANTTOKENLOADINGCELL_H

@class UICollectionViewListCell, UIActivityIndicatorView, NSLayoutConstraint;



@interface PKMerchantTokenLoadingCell : UICollectionViewListCell {
    UIActivityIndicatorView *_activityIndicator;
    NSLayoutConstraint *_heightConstraint;
    CGFloat _loadingCellHeight;
    CGFloat _loadingCellHeightWithIcon;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_computeLoadingCellHeights;
-(void)_setUpConstraints;
-(void)_setUpViews;
-(void)prepareForReuse;
-(void)useSmallHeight;


@end


#endif