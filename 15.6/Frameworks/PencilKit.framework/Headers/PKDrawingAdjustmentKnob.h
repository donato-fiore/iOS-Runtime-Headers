// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDRAWINGADJUSTMENTKNOB_H
#define PKDRAWINGADJUSTMENTKNOB_H

@class UIView, UIImageView, UIImage;



@interface PKDrawingAdjustmentKnob : UIView {
    UIImageView *_knobView;
    UIImage *_knobImage;
    UIImage *_knobImageFlipped;
}




+(CGFloat)leftMargin;
-(id)init;
-(void)layoutSubviews;


@end


#endif