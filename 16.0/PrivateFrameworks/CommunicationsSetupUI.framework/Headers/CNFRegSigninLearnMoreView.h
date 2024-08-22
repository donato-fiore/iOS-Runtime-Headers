// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNFREGSIGNINLEARNMOREVIEW_H
#define CNFREGSIGNINLEARNMOREVIEW_H

@class UIView, PSSpecifier, UILabel, UIActivityIndicatorView, UIButton, UIImageView;
@protocol PSHeaderFooterView;


#import "CNFRegSplashSignInController.h"

@interface CNFRegSigninLearnMoreView : UIView <PSHeaderFooterView>

 {
    PSSpecifier *_specifier;
    UILabel *_signingInLabel;
    UIActivityIndicatorView *_signingInSpinner;
}


@property (retain, nonatomic) UIView *authKitSignInView; // ivar: _authKitSignInView
@property (nonatomic) CNFRegSplashSignInController *controller; // ivar: _controller
@property (retain, nonatomic) UIButton *learnMoreButton; // ivar: _learnMoreButton
@property (nonatomic) NSInteger serviceType; // ivar: _serviceType
@property (retain, nonatomic) UIImageView *splashImageView; // ivar: _splashImageView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UILabel *verbiageLabel; // ivar: _verbiageLabel


-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)_splashImage;
-(id)initWithSpecifier:(id)arg0 ;
-(id)signingInLabel;
-(id)signingInSpinner;
-(void)_learnMorePressed:(id)arg0 ;
-(void)layoutSubviews;
-(void)setSigningIn:(BOOL)arg0 ;


@end


#endif