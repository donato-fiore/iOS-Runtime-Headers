// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TFBETAAPPLAUNCHSCREENVIEW_H
#define TFBETAAPPLAUNCHSCREENVIEW_H

@class UIView, UILabel, UIVisualEffectView, UIButton, UIScrollView;


#import "TFDeviceInstructionView.h"
#import "TFAppLockupView.h"
#import "TFBetaAppLaunchScreenViewSpecification.h"

@interface TFBetaAppLaunchScreenView : UIView

@property (readonly, nonatomic) UILabel *bodyTextLabel; // ivar: _bodyTextLabel
@property (readonly, nonatomic) UILabel *bodyTitleLabel; // ivar: _bodyTitleLabel
@property (readonly, nonatomic) UIVisualEffectView *buttonBackgroundEffectView; // ivar: _buttonBackgroundEffectView
@property (readonly, nonatomic) TFDeviceInstructionView *instructionView; // ivar: _instructionView
@property (readonly, nonatomic) TFAppLockupView *lockupView; // ivar: _lockupView
@property (readonly, nonatomic) UIButton *primaryButton; // ivar: _primaryButton
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly, nonatomic) UIButton *secondaryButton; // ivar: _secondaryButton
@property (retain, nonatomic) UIView *snapshot; // ivar: _snapshot
@property (retain, nonatomic) TFBetaAppLaunchScreenViewSpecification *specification; // ivar: _specification
@property (readonly, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_layoutButtonModuleWithLayoutMetrics:(id)arg0 ;
-(void)_layoutScrollViewWithLayoutMetrics:(id)arg0 accomodatingPinnedBottomView:(id)arg1 ;
-(void)_prepareForDisplayWithTraitCollection:(id)arg0 ;
-(void)cleanupSnapshot;
-(void)layoutSubviews;
-(void)prepareForState:(NSUInteger)arg0 ;
-(void)setBodyTitle:(id)arg0 bodyText:(id)arg1 ;
-(void)setDeviceImage:(id)arg0 withOrientation:(NSInteger)arg1 ;
-(void)setDeviceImageOrientation:(NSInteger)arg0 ;
-(void)setDeviceImageVisibility:(BOOL)arg0 ;
-(void)setLockup:(id)arg0 ;
-(void)setSubtitle:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif