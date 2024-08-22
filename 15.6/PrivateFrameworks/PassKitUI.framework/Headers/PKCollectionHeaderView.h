// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCOLLECTIONHEADERVIEW_H
#define PKCOLLECTIONHEADERVIEW_H

@class UICollectionViewListCell, UILabel, UIImageView, UIImage, NSString;



@interface PKCollectionHeaderView : UICollectionViewListCell {
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_tertiaryLabel;
    UIImageView *_imageView;
}


@property (nonatomic) CGFloat bottomPadding; // ivar: _bottomPadding
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (copy, nonatomic) NSString *secondaryText; // ivar: _secondaryText
@property (copy, nonatomic) NSString *tertiaryText; // ivar: _tertiaryText
@property (nonatomic) CGFloat topPadding; // ivar: _topPadding


-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif