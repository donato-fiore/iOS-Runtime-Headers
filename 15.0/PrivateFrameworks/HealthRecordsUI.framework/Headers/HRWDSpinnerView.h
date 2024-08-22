// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRWDSPINNERVIEW_H
#define HRWDSPINNERVIEW_H

@class UIView, UIActivityIndicatorView, UILabel, NSLayoutConstraint;



@interface HRWDSpinnerView : UIView {
    UIActivityIndicatorView *_spinner;
    UILabel *_label;
    NSLayoutConstraint *_spinnerTopConstraint;
}


@property (readonly, nonatomic, getter=isAnimating) BOOL animating;


-(id)init;
-(void)_setupSubviews;
-(void)setMessageFont:(id)arg0 ;
-(void)setMessageWhileSpinning:(id)arg0 ;
-(void)startSpinner;
-(void)stopSpinner;
-(void)updateConstraints;


@end


#endif