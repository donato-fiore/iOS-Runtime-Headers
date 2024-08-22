// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LAUICHECKMARKLAYER_H
#define LAUICHECKMARKLAYER_H

@class CALayer, CAShapeLayer, UIColor;



@interface LAUICheckmarkLayer : CALayer {
    CAShapeLayer *_shape_layer;
    vector<CAShapeLayer *, std::allocator<CAShapeLayer *>> _transient_shape_layers;
    BOOL _animating;
    unsigned int _animation_index;
    CGFloat _line_width;
    CGFloat _effective_line_width;
    vector<LAUI_CA_utilities::animation_completion_handler_container, std::allocator<LAUI_CA_utilities::animation_completion_handler_container>> _completions;
}


@property (readonly, nonatomic) CGSize aspectSize;
@property (nonatomic) CGFloat lineWidthScale; // ivar: _line_width_scale
@property (readonly, copy, nonatomic) UIColor *primaryColor; // ivar: _primary_color
@property (readonly, nonatomic, getter=isRevealed) BOOL revealed; // ivar: _revealed


-(id)init;
-(struct CGSize )defaultSizeForCircleWithDiameter:(CGFloat)arg0 scale:(CGFloat)arg1 ;
-(void)_animationsDidResolve;
-(void)_executeCompletions:(BOOL)arg0 ;
-(void)_updateRevealedAnimated:(BOOL)arg0 ;
-(void)dealloc;
-(void)layoutSublayers;


@end


#endif