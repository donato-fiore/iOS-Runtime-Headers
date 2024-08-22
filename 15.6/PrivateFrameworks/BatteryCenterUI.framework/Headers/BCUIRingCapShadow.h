// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCUIRINGCAPSHADOW_H
#define BCUIRINGCAPSHADOW_H

@class UIView, UIImageView;



@interface BCUIRingCapShadow : UIView {
    UIImageView *_shadowCapImageView;
}


@property (nonatomic) CGFloat arcFraction; // ivar: _arcFraction
@property (readonly, nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (readonly, nonatomic) CGRect ringBounds; // ivar: _ringBounds


+(id)_ringCapShadowImageWithRingBounds:(struct CGRect )arg0 lineWidth:(CGFloat)arg1 scale:(CGFloat)arg2 ;
+(id)ringCapShadowForRingWithBounds:(struct CGRect )arg0 lineWidth:(CGFloat)arg1 ;
-(id)_initWithRingBounds:(struct CGRect )arg0 lineWidth:(CGFloat)arg1 ;
-(struct CGRect )_shadowCapFrame;
-(void)layoutSubviews;


@end


#endif