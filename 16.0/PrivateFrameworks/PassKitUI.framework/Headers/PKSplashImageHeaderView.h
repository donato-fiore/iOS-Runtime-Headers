// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSPLASHIMAGEHEADERVIEW_H
#define PKSPLASHIMAGEHEADERVIEW_H

@class UIView, UIImageView, CAGradientLayer, UILabel, NSString, UIImage, UIColor;



@interface PKSplashImageHeaderView : UIView {
    UIView *_fallbackColorView;
    UIImageView *_backgroundImageView;
    CAGradientLayer *_gradientLayer;
    UIImageView *_iconImageView;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_attributionLabel;
}


@property (copy, nonatomic) NSString *attributionProviderName; // ivar: _attributionProviderName
@property (retain, nonatomic) UIImage *backgroundImage; // ivar: _backgroundImage
@property (retain, nonatomic) UIColor *fallbackColor; // ivar: _fallbackColor
@property (retain, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (copy, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (copy, nonatomic) NSString *secondaryText; // ivar: _secondaryText
@property (nonatomic) BOOL showsGradientOverlay; // ivar: _showsGradientOverlay


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif