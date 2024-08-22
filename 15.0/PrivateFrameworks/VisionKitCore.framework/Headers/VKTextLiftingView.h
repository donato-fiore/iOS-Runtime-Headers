// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKTEXTLIFTINGVIEW_H
#define VKTEXTLIFTINGVIEW_H

@class UIView, UIVisualEffectView, UIImageView, UIBezierPath, UIImage;
@protocol VKTextLiftingViewDelegate;


#import "VKImageAnalysisInteraction.h"

@interface VKTextLiftingView : UIView

@property (nonatomic, setter=_hasFadedOut:) BOOL _hasFadedOut; // ivar: __hasFadedOut
@property (nonatomic, setter=_hasLifted:) BOOL _hasLifted; // ivar: __hasLifted
@property (readonly, nonatomic) UIVisualEffectView *_highlightView; // ivar: __highlightView
@property (readonly, nonatomic) UIImageView *_imageView; // ivar: __imageView
@property (nonatomic, setter=_setPresentedMenuForLiftedText:) BOOL _presentedMenuForLiftedText; // ivar: __presentedMenuForLiftedText
@property (readonly, nonatomic) UIBezierPath *_rotatedCutoutPath; // ivar: __rotatedCutoutPath
@property (readonly, nonatomic) CGFloat baselineAngle; // ivar: _baselineAngle
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, nonatomic) UIBezierPath *cutoutPath; // ivar: _cutoutPath
@property (weak, nonatomic) NSObject<VKTextLiftingViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIBezierPath *hitTestPath; // ivar: _hitTestPath
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) VKImageAnalysisInteraction *imageInteraction; // ivar: _imageInteraction
@property (nonatomic) CGFloat maxScale; // ivar: _maxScale
@property (nonatomic) BOOL presentsMenuForLiftedText; // ivar: _presentsMenuForLiftedText


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_gaussianBlurFilterWithRadius:(CGFloat)arg0 ;
-(id)_springAnimationForKeyPath:(id)arg0 fromValue:(id)arg1 toValue:(id)arg2 ;
-(id)initWithImage:(id)arg0 cutoutPath:(id)arg1 ;
-(id)initWithImage:(id)arg0 cutoutPath:(id)arg1 baselineAngle:(CGFloat)arg2 ;
-(struct CGAffineTransform )_imageTransformInBounds:(struct CGRect )arg0 ;
-(struct CGRect )_contentBounds;
-(void)_applyInteractionToImageViewIfReady;
-(void)_hasFadedOut:(BOOL)arg0 ;
-(void)_hasLifted:(BOOL)arg0 ;
-(void)didMoveToSuperview;
-(void)fadeOutAndRemoveFromSuperview;
-(void)layoutSubviews;
-(void)performLiftAnimation;


@end


#endif