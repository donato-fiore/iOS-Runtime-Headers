// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LUILOGOPTIONSVIEW_H
#define LUILOGOPTIONSVIEW_H

@class UIView, UIStackView, UIButton;



@interface LUILogOptionsView : UIView

@property (retain, nonatomic) UIStackView *buttonStackView; // ivar: _buttonStackView
@property (retain, nonatomic) UIButton *halfHourButton; // ivar: _halfHourButton
@property (retain, nonatomic) UIButton *hourButton; // ivar: _hourButton
@property (retain, nonatomic) UIButton *lastDayButton; // ivar: _lastDayButton
@property (retain, nonatomic) UIButton *streamButton; // ivar: _streamButton
@property (retain, nonatomic) UIButton *tenMinutesLogButton; // ivar: _tenMinutesLogButton


-(id)_createButtonStackView;
-(id)_createButtonWithTitle:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setup;
-(void)layoutSubviews;


@end


#endif