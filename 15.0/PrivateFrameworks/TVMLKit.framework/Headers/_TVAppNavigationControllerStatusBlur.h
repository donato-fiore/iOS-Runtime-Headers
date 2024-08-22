// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVAPPNAVIGATIONCONTROLLERSTATUSBLUR_H
#define _TVAPPNAVIGATIONCONTROLLERSTATUSBLUR_H

@class UIView, UIVisualEffectView, UIColor, UIVisualEffect;



@interface _TVAppNavigationControllerStatusBlur : UIView {
    UIVisualEffectView *_visualEffectView;
    UIView *_dimmingView;
}


@property (retain, nonatomic) UIColor *backgroundTintColor;
@property (retain, nonatomic) UIVisualEffect *visualEffect;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonInit;


@end


#endif