// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGPLANFUNDINGSOURCECELL_H
#define PKPAYLATERFINANCINGPLANFUNDINGSOURCECELL_H

@class UICollectionViewListCell, PKPassLibrary, UIImageView, UILabel, PKPayLaterFinancingPlanFundingSource;



@interface PKPayLaterFinancingPlanFundingSourceCell : UICollectionViewListCell {
    PKPassLibrary *_passLibrary;
    UIImageView *_imageView;
    CGSize _iconSize;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
}


@property (retain, nonatomic) PKPayLaterFinancingPlanFundingSource *fundingSource; // ivar: _fundingSource


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_populateIconForFundingSource;
-(void)_updateText;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif