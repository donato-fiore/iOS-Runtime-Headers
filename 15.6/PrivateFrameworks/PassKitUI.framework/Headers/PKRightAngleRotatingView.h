// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKRIGHTANGLEROTATINGVIEW_H
#define PKRIGHTANGLEROTATINGVIEW_H

@class UIView;



@interface PKRightAngleRotatingView : UIView

@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly, nonatomic) UIView *rotatedView; // ivar: _rotatedView


-(BOOL)_dimensionsAreRotated;
-(id)initWithRotatedView:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)updateTransform;


@end


#endif