// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSPASSCODEBACKGROUNDVIEW_H
#define CSPASSCODEBACKGROUNDVIEW_H

@class UIView, MTMaterialView, UIColor;



@interface CSPasscodeBackgroundView : UIView

@property (retain, nonatomic) UIView *lightenSourceOverView; // ivar: _lightenSourceOverView
@property (retain, nonatomic) MTMaterialView *materialView; // ivar: _materialView
@property (retain, nonatomic) UIView *plusDView; // ivar: _plusDView
@property (retain, nonatomic) UIColor *reduceTransparencyBackingColor; // ivar: _reduceTransparencyBackingColor
@property (retain, nonatomic) UIView *reduceTransparencyBackingView; // ivar: _reduceTransparencyBackingView
@property (retain, nonatomic) UIView *reduceTransparencyTintingView; // ivar: _reduceTransparencyTintingView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setPlusDBackgroundColorWithWeighting:(CGFloat)arg0 ;
-(void)layoutSubviews;
-(void)setWeighting:(CGFloat)arg0 ;


@end


#endif