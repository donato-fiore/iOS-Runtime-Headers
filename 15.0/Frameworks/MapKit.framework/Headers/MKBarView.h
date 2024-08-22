// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKBARVIEW_H
#define MKBARVIEW_H

@class UIView, CAShapeLayer, CAGradientLayer, NSLayoutConstraint;


#import "MKBarViewOptions.h"

@interface MKBarView : UIView {
    CAShapeLayer *_barMaskLayer;
    CAGradientLayer *_filledGradientLayer;
    NSLayoutConstraint *_heightConstraint;
}


@property (copy, nonatomic) MKBarViewOptions *options; // ivar: _options


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPath *)_filledRectanglePath;
-(void)_setupBarFillLayer;
-(void)_setupViewAndConstraints;
-(void)layoutSubviews;


@end


#endif