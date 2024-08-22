// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSCLIPLOADINGVIEW_H
#define CPSCLIPLOADINGVIEW_H

@class UIView, CABackdropLayer, UILabel, UIImageView, CAGradientLayer, UIImage, NSString;


#import "CPSVibrantLabel.h"
#import "CPSButton.h"

@interface CPSClipLoadingView : UIView {
    UIView *_backdropView;
    CABackdropLayer *_backdropLayer;
    UIView *_clipNameBackdropView;
    UIView *_clipNameContainerView;
    UILabel *_clipNameLabel;
    UIView *_clipNameProgressView;
    UIView *_errorContainerView;
    CPSVibrantLabel *_clipUnavailableLabel;
    CPSButton *_retryButton;
    id *_reloadHandler;
    id *_deferredActions;
    UIImageView *_heroImageView;
    UIView *_labelContainerView;
    BOOL _labelsNeedUpdate;
    BOOL _animationHasStarted;
    BOOL _loadingHasFailed;
    NSInteger _progressChangeAnimationCount;
    UILabel *_poweredByLabel;
    CAGradientLayer *_gradientLayer;
    UIView *_gradientView;
}


@property (readonly, nonatomic) UIImage *backgroundImage;
@property (readonly, nonatomic) float loadingProgress; // ivar: _loadingProgress
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic, getter=isPoweredByThirdParty) BOOL poweredByThirdParty; // ivar: _poweredByThirdParty
@property (copy, nonatomic) NSString *provider; // ivar: _provider


-(BOOL)_loadingIsComplete;
-(id)_animationForTranslationY:(CGFloat)arg0 ;
-(id)_backdropEffectRemovalAnimationForKeyPath:(id)arg0 ;
-(id)_basicAnimationToDecreaseOpacity;
-(id)_springAnimationToDecreaseOpacity;
-(id)_textScaleUpSpringAnimation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_reloadTapped:(id)arg0 ;
-(void)_revealBackgroundAndLabels;
-(void)_showCompletionAnimation:(id)arg0 ;
-(void)_startAnimationIfNeeded;
-(void)_updateConicGradientRotation;
-(void)_updateLoadingProgress;
-(void)finishLoadingWithCompletion:(id)arg0 ;
-(void)layoutSubviews;
-(void)setLoadingHasFailed:(BOOL)arg0 animated:(BOOL)arg1 reason:(id)arg2 reloadHandler:(id)arg3 ;


@end


#endif