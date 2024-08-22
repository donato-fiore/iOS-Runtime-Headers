// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISCALINGFLIPVIEW_H
#define SKUISCALINGFLIPVIEW_H

@class UIView;



@interface SKUIScalingFlipView : UIView {
    UIView *_backView;
    id *_completionBlock;
    CGRect _fromFrame;
    UIView *_frontView;
    CGRect _toFrame;
}


@property (nonatomic) NSInteger direction; // ivar: _direction
@property (nonatomic) CGFloat duration; // ivar: _duration


-(id)_backLayerAnimation;
-(id)_frontLayerAnimation;
-(id)_inputColorAnimation;
-(id)_positionAnimation;
-(id)_timingFunction;
-(id)initWithFrontView:(id)arg0 backView:(id)arg1 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)performFlipWithCompletionBlock:(id)arg0 ;


@end


#endif