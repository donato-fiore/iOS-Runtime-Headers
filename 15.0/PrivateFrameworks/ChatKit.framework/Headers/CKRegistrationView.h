// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKREGISTRATIONVIEW_H
#define CKREGISTRATIONVIEW_H

@class UIScrollView, UIView, UIImageView, UIButton, UILabel, UIActivityIndicatorView;



@interface CKRegistrationView : UIScrollView

@property (retain, nonatomic) UIView *authKitSignInView; // ivar: _authKitSignInView
@property (retain, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (retain, nonatomic) UIButton *learnMoreButton; // ivar: _learnMoreButton
@property (retain, nonatomic) UIView *privacyLinkView; // ivar: _privacyLinkView
@property (retain, nonatomic) UILabel *signingInLabel; // ivar: _signingInLabel
@property (retain, nonatomic) UIActivityIndicatorView *signingInSpinner; // ivar: _signingInSpinner
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UILabel *verbiageLabel; // ivar: _verbiageLabel


-(struct CGSize )manualSizeToFitForAuthKitSignInView;
-(void)_learnMorePressed:(id)arg0 ;
-(void)layoutSubviews;
-(void)setSigningIn:(BOOL)arg0 ;


@end


#endif