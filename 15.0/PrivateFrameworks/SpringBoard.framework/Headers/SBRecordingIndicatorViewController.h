// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBRECORDINGINDICATORVIEWCONTROLLER_H
#define SBRECORDINGINDICATORVIEWCONTROLLER_H

@class UIViewController, UIViewPropertyAnimator, CAContext, CALayer, UIColor;


#import "SBRecordingIndicatorView.h"

@interface SBRecordingIndicatorViewController : UIViewController {
    UIViewPropertyAnimator *_animatorScaleToOverscale;
    UIViewPropertyAnimator *_animatorScaleToNormal;
    UIViewPropertyAnimator *_animatorScaleToRest;
    UIViewPropertyAnimator *_animatorScaleToZero;
    UIViewPropertyAnimator *_animatorFastFade;
    CGFloat _size;
    CGFloat _sideOffset;
    CGFloat _topOffset;
    CGPoint _center;
    CAContext *_context;
    CALayer *_rootLayer;
    CALayer *_contentLayer;
}


@property (nonatomic, getter=activeInterfaceOrientation) NSInteger activeInterfaceOrientation; // ivar: _activeInterfaceOrientation
@property (readonly, nonatomic) NSUInteger indicatorAnimationState; // ivar: _indicatorAnimationState
@property (retain, nonatomic, getter=indicatorColor) UIColor *indicatorColor; // ivar: _indicatorColor
@property (readonly, nonatomic, getter=indicatorView) SBRecordingIndicatorView *indicatorView; // ivar: _indicatorView
@property (nonatomic) BOOL isStatusBarPortal; // ivar: _isStatusBarPortal


-(BOOL)_canShowWhileLocked;
-(NSInteger)_overrideWindowActiveInterfaceOrientation;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initForPortalView:(BOOL)arg0 ;
-(void)_configureRootLayer;
-(void)_stopAllAnimations;
-(void)_updateIndicatorLayerSize:(CGFloat)arg0 opacity:(CGFloat)arg1 ;
-(void)_updateIndicatorLayerWithBounds:(struct CGRect )arg0 andCenter:(struct CGPoint )arg1 ;
-(void)_updateIndicatorViewSize:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
-(void)_updateToOrientation:(NSInteger)arg0 ;
-(void)calculateInitialIndicatorPositionAndSize;
-(void)updateIndicatorShape:(NSUInteger)arg0 ;
-(void)updateIndicatorVisibility:(BOOL)arg0 ;
-(void)updateIndicatorVisibility:(BOOL)arg0 skipFadeOutAnimation:(BOOL)arg1 ;
-(void)updateIndicatorVisibilityWithFastFadeAnimation:(BOOL)arg0 ;


@end


#endif