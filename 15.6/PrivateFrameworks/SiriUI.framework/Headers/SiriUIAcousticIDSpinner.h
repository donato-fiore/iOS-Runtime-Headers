// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUIACOUSTICIDSPINNER_H
#define SIRIUIACOUSTICIDSPINNER_H

@class UIView, UIImageView, UIVisualEffectView;
@protocol SiriUIAcousticIDSpinnerDelegate;



@interface SiriUIAcousticIDSpinner : UIView {
    UIImageView *_musicNoteView;
    UIImageView *_spinnerView;
    UIVisualEffectView *_vibrancyView;
}


@property (weak, nonatomic) NSObject<SiriUIAcousticIDSpinnerDelegate> *delegate; // ivar: _delegate


-(BOOL)isShowing;
-(id)_imageForSpinner;
-(id)_spinningAnimation;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)animateIn;
-(void)animateOut;
-(void)layoutSubviews;


@end


#endif