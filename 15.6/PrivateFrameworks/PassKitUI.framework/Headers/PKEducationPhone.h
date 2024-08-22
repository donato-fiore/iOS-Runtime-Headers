// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKEDUCATIONPHONE_H
#define PKEDUCATIONPHONE_H

@class UIView, UIImageView;


#import "PKPhoneHeroView.h"
#import "PKPaymentSetupInitialCardEducationIconsView.h"

@interface PKEducationPhone : UIView {
    CGSize _screenSize;
    BOOL _hasPearl;
    BOOL _isAnimating;
    NSUInteger _screenType;
    PKPhoneHeroView *_phoneBackgroundView;
    PKPaymentSetupInitialCardEducationIconsView *_iconsView;
    UIView *_homeButtonView;
    UIView *_homeButtonOutlineView;
    UIImageView *_walletImageView;
    UIImageView *_cardImageView;
    UIImageView *_biometricsImageView;
    UIImageView *_powerIndicatorView;
    UIImageView *_powerArrowImageView;
}




-(CGFloat)_deviceIconsPadding;
-(CGFloat)_topPadding;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 displayOptions:(NSUInteger)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setHomeButtonOutlineColor;
-(void)_startPowerIndicatorAnimation;
-(void)layoutSubviews;
-(void)setPassImage:(id)arg0 ;
-(void)startAnimation;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif