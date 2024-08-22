// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKLEGENDDOT_H
#define _HKLEGENDDOT_H

@class UIView, UIColor, CALayer;



@interface _HKLegendDot : UIView

@property (retain, nonatomic) UIColor *dotColor; // ivar: _dotColor
@property (retain, nonatomic) UIColor *innerDotColor; // ivar: _innerDotColor
@property (retain, nonatomic) CALayer *innerDotLayer; // ivar: _innerDotLayer


-(id)init;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSublayersOfLayer:(id)arg0 ;


@end


#endif