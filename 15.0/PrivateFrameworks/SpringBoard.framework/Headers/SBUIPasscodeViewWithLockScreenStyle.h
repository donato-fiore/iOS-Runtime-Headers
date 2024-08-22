// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUIPASSCODEVIEWWITHLOCKSCREENSTYLE_H
#define SBUIPASSCODEVIEWWITHLOCKSCREENSTYLE_H

@class UIView, SBUIBackgroundView, UIView<SBUIPasscodeLockView>;



@interface SBUIPasscodeViewWithLockScreenStyle : UIView {
    SBUIBackgroundView *_backgroundView;
}


@property (readonly, nonatomic) UIView<SBUIPasscodeLockView> *passcodeView; // ivar: _passcodeView


-(id)initWithFrame:(struct CGRect )arg0 includeBlur:(BOOL)arg1 passcodeViewGenerator:(id)arg2 ;
-(void)layoutSubviews;
-(void)setBlurEnabled:(BOOL)arg0 ;


@end


#endif