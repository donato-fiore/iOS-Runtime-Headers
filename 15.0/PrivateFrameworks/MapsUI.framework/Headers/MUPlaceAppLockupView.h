// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACEAPPLOCKUPVIEW_H
#define MUPLACEAPPLOCKUPVIEW_H

@class UIView, UIImageView, UILabel, UIButton, UILayoutGuide, NSLayoutConstraint;
@protocol MUPlaceAppLockupViewDelegate, MUAppLockupViewModel;



@interface MUPlaceAppLockupView : UIView {
    UIImageView *_appLockupImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_punchoutButton;
    UILayoutGuide *_titleSubtitleLayoutGuide;
    NSLayoutConstraint *_heightConstraint;
}


@property (weak, nonatomic) NSObject<MUPlaceAppLockupViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat scaledHeight;
@property (retain, nonatomic) NSObject<MUAppLockupViewModel> *viewModel; // ivar: _viewModel


+(struct CGSize )appIconSize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_punchOutButtonSelected;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif