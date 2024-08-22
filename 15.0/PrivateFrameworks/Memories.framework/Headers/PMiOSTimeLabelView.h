// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMIOSTIMELABELVIEW_H
#define PMIOSTIMELABELVIEW_H

@class UIView, NSTimer, UILabel;



@interface PMiOSTimeLabelView : UIView

@property (nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (retain, nonatomic) NSTimer *hideDelayTimer; // ivar: _hideDelayTimer
@property (nonatomic) BOOL showsRemainingTime; // ivar: _showsRemainingTime
@property (nonatomic) BOOL showsTotalTime; // ivar: _showsTotalTime
@property (retain, nonatomic) UILabel *timeLabel; // ivar: _timeLabel
@property (nonatomic) CGFloat totalTime; // ivar: _totalTime


-(id)_labelTextForElapsedInterval:(CGFloat)arg0 ;
-(id)_stringFromTimeInterval:(CGFloat)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)hideAfterDelay:(CGFloat)arg0 ;
-(void)hideTimerAction;
-(void)setup;
-(void)showMomentarilyAnimated:(BOOL)arg0 ;


@end


#endif