// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPICKERVIEWTOPFRAME_H
#define _UIPICKERVIEWTOPFRAME_H



#import "UIView.h"
#import "UIImage.h"

@interface _UIPickerViewTopFrame : UIView {
    UIImage *_leftImage;
    UIImage *_middleImage;
    UIImage *_rightImage;
    CGFloat _inset;
    CGFloat _shift;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setInset:(CGFloat)arg0 ;
-(void)setLeftImage:(id)arg0 middleImage:(id)arg1 rightImage:(id)arg2 ;
-(void)setShift:(CGFloat)arg0 ;


@end


#endif