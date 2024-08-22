// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIDVRGBCHECKMARKVIEW_H
#define CIDVRGBCHECKMARKVIEW_H

@class UIView, LAUICheckmarkLayer, CAShapeLayer;



@interface CIDVRGBCheckmarkView : UIView {
    LAUICheckmarkLayer *_checkmarkLayer;
    CAShapeLayer *_circle;
    CGFloat _scale;
}




-(void)_animateCircleForSuccess;
-(void)_setupCheckmarkLayer;
-(void)_setupCircle;
-(void)_sizeAndPositionCheckmark;
-(void)dismiss;
-(void)dismissWithCompletion:(id)arg0 ;
-(void)layoutSubviews;
-(void)showSuccess;
-(void)showSuccessWithCompletion:(id)arg0 ;


@end


#endif