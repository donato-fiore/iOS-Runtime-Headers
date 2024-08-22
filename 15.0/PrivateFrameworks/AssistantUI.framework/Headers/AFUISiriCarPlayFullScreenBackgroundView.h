// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFUISIRICARPLAYFULLSCREENBACKGROUNDVIEW_H
#define AFUISIRICARPLAYFULLSCREENBACKGROUNDVIEW_H

@class UIView, UIImageView, UIVisualEffectView;



@interface AFUISiriCarPlayFullScreenBackgroundView : UIView {
    UIView *_backgroundView;
    UIImageView *_auraView;
    UIVisualEffectView *_effectView;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupAuraBackdropViews;
-(void)updateVisibility:(BOOL)arg0 ;


@end


#endif