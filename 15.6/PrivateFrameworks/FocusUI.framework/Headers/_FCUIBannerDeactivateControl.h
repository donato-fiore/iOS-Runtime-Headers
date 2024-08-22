// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _FCUIBANNERDEACTIVATECONTROL_H
#define _FCUIBANNERDEACTIVATECONTROL_H

@class UIControl, UIView, UIImageView;



@interface _FCUIBannerDeactivateControl : UIControl {
    UIView *_backgroundView;
    UIImageView *_glyphImageView;
}




-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)mt_applyVisualStyling:(id)arg0 ;
-(void)mt_removeAllVisualStyling;


@end


#endif