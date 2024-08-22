// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFUISIRIEYESFREEVIEW_H
#define AFUISIRIEYESFREEVIEW_H

@class UIView, SiriUIBackgroundBlurView, SiriUIVisualEffectView, UIImageView;



@interface AFUISiriEyesFreeView : UIView {
    SiriUIBackgroundBlurView *_backdropView;
    SiriUIVisualEffectView *_eyesFreeEffectView;
    UIImageView *_eyesFreeLogoView;
}


@property (readonly, nonatomic) NSInteger eyesFreeMode; // ivar: _eyesFreeMode


-(id)backdropView;
-(id)initWithFrame:(struct CGRect )arg0 eyesFreeMode:(NSInteger)arg1 ;
-(void)_configureEyesFreePresentation:(NSInteger)arg0 ;


@end


#endif