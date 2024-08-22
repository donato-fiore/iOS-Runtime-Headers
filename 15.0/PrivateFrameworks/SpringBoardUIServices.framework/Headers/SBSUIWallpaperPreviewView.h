// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSUIWALLPAPERPREVIEWVIEW_H
#define SBSUIWALLPAPERPREVIEWVIEW_H

@class UIView, UIViewPropertyAnimator, _UILegibilityLabel, UILabel, UIButton, SBFLockScreenDateView, NSString, SBFWallpaperView;
@protocol SBFIrisWallpaperPlayerDelegate, SBSUIWallpaperPreviewViewDelegate;


#import "_SBUIWallpaperInstructionView.h"

@interface SBSUIWallpaperPreviewView : UIView <SBFIrisWallpaperPlayerDelegate>

 {
    UIViewPropertyAnimator *_cropInstructionsAnimator;
    UIViewPropertyAnimator *_effectInstructionsAnimator;
    UIViewPropertyAnimator *_fadeOutInstructionsAnimator;
    _UILegibilityLabel *_irisInstructionsLabel1;
    _UILegibilityLabel *_irisInstructionsLabel2;
    UILabel *_effectStateLabel;
    _SBUIWallpaperInstructionView *_cropInstructionView;
    UIView *_gradientView;
    BOOL _irisPossible;
    BOOL _parallaxPossible;
}


@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) SBFLockScreenDateView *dateView; // ivar: _dateView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSUIWallpaperPreviewViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIButton *irisButton; // ivar: _irisButton
@property (retain, nonatomic) UIButton *parallaxButton; // ivar: _parallaxButton
@property (retain, nonatomic) UIButton *setButton; // ivar: _setButton
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBFWallpaperView *wallpaperView; // ivar: _wallpaperView


-(BOOL)shouldEnableParallax;
-(CGFloat)_segmentedControlInset;
-(id)_makeButtonWithVisualEffectBlur;
-(id)initWithFrame:(struct CGRect )arg0 wallpaperView:(id)arg1 disableParallax:(BOOL)arg2 ;
-(void)_fadeOutInstructionsWithDelay:(CGFloat)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_layoutCancelButton;
-(void)_layoutDateView;
-(void)_layoutGradientView;
-(void)_layoutIrisButton;
-(void)_layoutIrisInstructionLabels;
-(void)_layoutParallaxButton;
-(void)_layoutSetButton;
-(void)_layoutStackedButtons;
-(void)_layoutWallpaperView;
-(void)_userDidTapOnCancelButton:(id)arg0 ;
-(void)_userDidTapOnIrisButton:(id)arg0 ;
-(void)_userDidTapOnParallaxButton:(id)arg0 ;
-(void)_userDidTapOnSetButton:(id)arg0 ;
-(void)dealloc;
-(void)displayInstructionsForEffect:(NSUInteger)arg0 enabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)irisWallpaperPlayerPlaybackStateDidChange:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateForChangedSettings:(id)arg0 ;


@end


#endif