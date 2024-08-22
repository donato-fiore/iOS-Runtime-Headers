// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFUIPASSCODEBLURVIEW_H
#define AFUIPASSCODEBLURVIEW_H

@class UIView, MTMaterialView;



@interface AFUIPasscodeBlurView : UIView

@property (retain, nonatomic) UIView *lightenSourceOverView; // ivar: _lightenSourceOverView
@property (retain, nonatomic) MTMaterialView *materialView; // ivar: _materialView
@property (retain, nonatomic) UIView *plusDView; // ivar: _plusDView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setPlusDBackgroundColorWithWeighting:(CGFloat)arg0 ;
-(void)layoutSubviews;


@end


#endif