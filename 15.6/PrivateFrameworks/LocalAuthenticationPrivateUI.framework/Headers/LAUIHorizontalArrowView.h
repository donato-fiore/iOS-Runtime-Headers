// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LAUIHORIZONTALARROWVIEW_H
#define LAUIHORIZONTALARROWVIEW_H

@class UIView, UIColor, UIImageView, UILabel, NSString;



@interface LAUIHorizontalArrowView : UIView {
    UIColor *_color;
    BOOL _effective_animating;
    unsigned short _dismissal_animation_count;
    BOOL _animated;
    CGFloat _resting_height;
    UIView *_container;
    UIView *_arrow_container;
    UIImageView *_head;
    UIView *_tail_container;
    UIImageView *_tail;
    UILabel *_label;
    BOOL _pulsing;
    periodic_animation_state _head_pulse;
    periodic_animation_state _tail_container_pulse;
    periodic_animation_state _tail_counter_pulse;
}


@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (nonatomic) CGFloat displacement; // ivar: _displacement
@property (nonatomic) CGSize maximumLineSize; // ivar: _maximum_line_size
@property (copy, nonatomic) NSString *text; // ivar: _text


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutIfNeededAnimated:(BOOL)arg0 ;
-(void)_updateAnimatingAnimated:(BOOL)arg0 ;
-(void)_updateDirectionTransform;
-(void)_updateFont;
-(void)_updateLabelSize;
-(void)_updatePulsingWithDelay:(CGFloat)arg0 ;
-(void)_updateViewsWithColor;
-(void)boldTextStatusDidChange:(id)arg0 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif