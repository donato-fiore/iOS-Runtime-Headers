// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWKUISEPARATORVIEW_H
#define NWKUISEPARATORVIEW_H

@class UIView, CAShapeLayer;



@interface NWKUISeparatorView : UIView {
    CAShapeLayer *_lineLayer;
    CGFloat _lineWidth;
}




+(CGFloat)lineWidth;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif