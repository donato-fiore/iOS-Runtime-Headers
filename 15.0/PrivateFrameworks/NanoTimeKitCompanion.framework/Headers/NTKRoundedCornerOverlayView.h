// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKROUNDEDCORNEROVERLAYVIEW_H
#define NTKROUNDEDCORNEROVERLAYVIEW_H

@class UIView, UIImageView, CLKDevice;



@interface NTKRoundedCornerOverlayView : UIView {
    CGFloat _cornerRadius;
    UIImageView *_upperLeftCorner;
    UIImageView *_upperRightCorner;
    UIImageView *_bottomLeftCorner;
    UIImageView *_bottomRightCorner;
    CLKDevice *_device;
}




-(id)initWithFrame:(struct CGRect )arg0 forDevice:(id)arg1 cornerRadius:(CGFloat)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 forDeviceCornerRadius:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif