// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMSTAGELIGHTOVERLAYVIEW_H
#define CAMSTAGELIGHTOVERLAYVIEW_H

@class UIView, CAShapeLayer, CAGradientLayer, UIImageView;


#import "CAMStageLightAnimator.h"

@interface CAMStageLightOverlayView : UIView

@property (nonatomic, setter=_setActiveTimerID:) NSUInteger _activeTimerID; // ivar: __activeTimerID
@property (retain, nonatomic, setter=_setAnimator:) CAMStageLightAnimator *_animator; // ivar: __animator
@property (readonly, nonatomic) CAShapeLayer *_circleLayer; // ivar: __circleLayer
@property (readonly, nonatomic) CAGradientLayer *_gradientLayer; // ivar: __gradientLayer
@property (readonly, nonatomic) UIView *_tintView; // ivar: __tintView
@property (readonly, nonatomic) UIImageView *_vignetteView; // ivar: __vignetteView
@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic) CGFloat bottomContentInset; // ivar: _bottomContentInset
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) CGRect viewportFrame; // ivar: _viewportFrame
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


+(BOOL)_useLargeLayoutForViewportSize:(struct CGSize )arg0 ;
+(CGFloat)_circleDiameterForViewportSize:(struct CGSize )arg0 orientation:(NSInteger)arg1 screenScale:(CGFloat)arg2 ;
+(struct CGRect )circleFrameForViewport:(struct CGRect )arg0 orientation:(NSInteger)arg1 bottomContentInset:(CGFloat)arg2 screenScale:(CGFloat)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_circleFrameForOrientation:(NSInteger)arg0 ;
-(void)_updateAnimatorState;
-(void)_updateShadowViewsAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;


@end


#endif