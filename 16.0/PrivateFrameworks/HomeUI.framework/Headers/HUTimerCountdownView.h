// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTIMERCOUNTDOWNVIEW_H
#define HUTIMERCOUNTDOWNVIEW_H

@class UIView, MTUITimerCountdownView, UIButton;
@protocol HUTimerCountdownDelegate;



@interface HUTimerCountdownView : UIView

@property (retain, nonatomic) UIView *circleBackgroundView; // ivar: _circleBackgroundView
@property (retain, nonatomic) MTUITimerCountdownView *countdownView; // ivar: _countdownView
@property (nonatomic) NSUInteger currentState; // ivar: _currentState
@property (retain, nonatomic) NSObject<HUTimerCountdownDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIButton *pauseResumeButton; // ivar: _pauseResumeButton


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithTimer:(id)arg0 delegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)toggle:(id)arg0 ;
-(void)updateToNewState:(NSUInteger)arg0 ;
-(void)updateToNewTime:(CGFloat)arg0 ;


@end


#endif