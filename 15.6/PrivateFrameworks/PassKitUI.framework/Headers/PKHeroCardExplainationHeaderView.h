// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKHEROCARDEXPLAINATIONHEADERVIEW_H
#define PKHEROCARDEXPLAINATIONHEADERVIEW_H

@class UIView, UIImage, UIImageView;



@interface PKHeroCardExplainationHeaderView : UIView {
    UIView *_cardImageShadowView;
    BOOL _usesCompactLayout;
    CGFloat _cardHeight;
    CGFloat _cardTopPadding;
    CGFloat _cardBottomPadding;
    CGFloat _cardBackingHeight;
}


@property (retain, nonatomic) UIImage *cardImage;
@property (readonly, nonatomic) UIImageView *cardImageView; // ivar: _cardImageView
@property (nonatomic) NSUInteger padding; // ivar: _padding
@property (nonatomic) NSUInteger size; // ivar: _size


+(struct CGSize )recommendedCardImageSize;
-(id)initWithImage:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)updateCardSizeValues;


@end


#endif