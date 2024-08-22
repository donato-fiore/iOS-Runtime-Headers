// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRXSCROLLSHADOWVIEW_H
#define PRXSCROLLSHADOWVIEW_H

@class UIView, CAGradientLayer;



@interface PRXScrollShadowView : UIView {
    CAGradientLayer *_maskLayer;
}


@property (nonatomic) NSUInteger edge; // ivar: _edge
@property (readonly, nonatomic) CAGradientLayer *gradientLayer;


+(Class)layerClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif