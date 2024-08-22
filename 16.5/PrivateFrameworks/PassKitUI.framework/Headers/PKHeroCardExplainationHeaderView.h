// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKHEROCARDEXPLAINATIONHEADERVIEW_H
#define PKHEROCARDEXPLAINATIONHEADERVIEW_H

@class UIView, UIActivityIndicatorView, UIImage, UIImageView;



@interface PKHeroCardExplainationHeaderView : UIView {
    UIView *_cardImageShadowView;
    BOOL _usesCompactLayout;
    CGFloat _cardHeight;
    CGFloat _cardTopPadding;
    CGFloat _cardBottomPadding;
    CGFloat _cardBackingHeight;
    UIActivityIndicatorView *_spinner;
}


@property (retain, nonatomic) UIImage *cardImage;
@property (readonly, nonatomic) UIImageView *cardImageView; // ivar: _cardImageView
@property (nonatomic) BOOL hideBorders; // ivar: _hideBorders
@property (nonatomic) NSUInteger padding; // ivar: _padding
@property (nonatomic) NSUInteger size; // ivar: _size


+(struct CGSize )recommendedCardImageSize;
-(id)initWithImage:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)hideLoadingContent;
-(void)layoutSubviews;
-(void)showLoadingContent;
-(void)updateCardSizeValues;


@end


#endif