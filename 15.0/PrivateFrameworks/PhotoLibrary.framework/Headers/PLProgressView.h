// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPROGRESSVIEW_H
#define PLPROGRESSVIEW_H

@class UIView, UIButton, UILabel, UIProgressView, NSNumberFormatter, _UIBackdropView;



@interface PLProgressView : UIView {
    UIButton *_cancelButton;
    UILabel *_labelView;
    UIProgressView *_progressView;
    UIView *_topDivider;
    BOOL _didLayout;
    BOOL _didSetPermanantTextOnLabelView;
    NSNumberFormatter *_progressFormatter;
}


@property (retain, nonatomic) _UIBackdropView *backgroundBlurredView; // ivar: _backgroundBlurredView
@property (retain, nonatomic) UIView *backgroundTintedView; // ivar: _backgroundTintedView
@property (nonatomic) NSInteger backgroundType; // ivar: _backgroundType
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (copy, nonatomic) id *cancelationHandler; // ivar: _cancelationHandler
@property (nonatomic) float percentComplete;
@property (nonatomic) BOOL showsCancelButton; // ivar: _showsCancelButton


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_cancel:(id)arg0 ;
-(void)_installBackgroundBlurredView;
-(void)_installBackgroundTintedView;
-(void)_installBackgroundView;
-(void)_removeBackgroundBlurredView;
-(void)_removeBackgroundTintedView;
-(void)_syncToBackgroundType;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setLabelText:(id)arg0 ;
-(void)updateUIForPublishingAgent:(id)arg0 ;


@end


#endif