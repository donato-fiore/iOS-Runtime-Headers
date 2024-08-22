// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPROGRESSHUD_H
#define PLPROGRESSHUD_H

@class UIView, _UIBackdropView, UIActivityIndicatorView, UILabel, UIImageView;



@interface PLProgressHUD : UIView {
    _UIBackdropView *_backdropView;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_label;
    UIImageView *_checkmarkView;
    BOOL _isShowing;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)done;
-(void)hide;
-(void)layoutSubviews;
-(void)setText:(id)arg0 ;
-(void)showInView:(id)arg0 ;


@end


#endif