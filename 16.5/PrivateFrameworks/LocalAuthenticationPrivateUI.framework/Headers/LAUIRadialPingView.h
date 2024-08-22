// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LAUIRADIALPINGVIEW_H
#define LAUIRADIALPINGVIEW_H

@class UIView, UIColor;



@interface LAUIRadialPingView : UIView {
    UIColor *_color;
    UIView *_container;
    UIView *_primary;
    array<(anonymous namespace)::blur_container, 2UL> _blurs;
    periodic_animation_state _pulse;
    BOOL _animating_dirty;
    unsigned char _animating_counter;
}


@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_attachExpandAnimationToContainer:(struct blur_container *)arg0 withDelay:(CGFloat)arg1 ;
-(void)_attachPulseAnimationWithDelay:(CGFloat)arg0 ;
-(void)_endExpand;
-(void)_setExpand:(BOOL)arg0 forBlurAtIndex:(NSUInteger)arg1 withDelay:(CGFloat)arg2 ;
-(void)_setPulse:(BOOL)arg0 withDelay:(CGFloat)arg1 ;
-(void)_startExpandWithDelay:(CGFloat)arg0 ;
-(void)_updateAnimatingAnimated:(BOOL)arg0 ;
-(void)_updateExpandForBlurAtIndex:(NSUInteger)arg0 withDelay:(CGFloat)arg1 ;
-(void)_updateViewsWithColor;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif