// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTIMERTABLEVIEWCELL_H
#define HUTIMERTABLEVIEWCELL_H

@class UITableViewCell, UILayoutGuide, UIStackView, MTTimer, COTimerManager, UILabel;
@protocol HUTimerCancelDelegate, HUTimerCountdownDelegate;


#import "HUTimerCancelButtonView.h"
#import "HUTimerCountdownView.h"

@interface HUTimerTableViewCell : UITableViewCell <HUTimerCancelDelegate, HUTimerCountdownDelegate>



@property (retain, nonatomic) UILayoutGuide *buttonGuide; // ivar: _buttonGuide
@property (retain, nonatomic) HUTimerCancelButtonView *cancelButtonView; // ivar: _cancelButtonView
@property (nonatomic) CGFloat previousRemainingTime; // ivar: _previousRemainingTime
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) MTTimer *timer; // ivar: _timer
@property (retain, nonatomic) HUTimerCountdownView *timerCountdownView; // ivar: _timerCountdownView
@property (retain, nonatomic) COTimerManager *timerManager; // ivar: _timerManager
@property (retain, nonatomic) UILabel *timerNameLabel; // ivar: _timerNameLabel
@property (retain, nonatomic) UILabel *timerTimeLabel; // ivar: _timerTimeLabel


+(id)_stringForDuration:(CGFloat)arg0 ;
-(id)_alarmBackgroundColor;
-(id)initWithMobileTimerObject:(id)arg0 manager:(id)arg1 ;
-(id)initWithTimer:(id)arg0 manager:(id)arg1 ;
-(void)_createConstraints;
-(void)_createSubviews;
-(void)cancelTimer;
-(void)layoutSubviews;
-(void)toggleTimer;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateTimerInfo;


@end


#endif