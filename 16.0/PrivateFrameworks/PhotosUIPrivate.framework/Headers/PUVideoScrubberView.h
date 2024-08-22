// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUVIDEOSCRUBBERVIEW_H
#define PUVIDEOSCRUBBERVIEW_H

@class UIView, AVTimeFormatter, NSLayoutConstraint, UILabel, UISlider;
@protocol PUVideoScrubberViewDelegate;



@interface PUVideoScrubberView : UIView {
    ? _startingTime;
    ? _endingTime;
    ? _currentTime;
    AVTimeFormatter *_beforeTimeFormatter;
    AVTimeFormatter *_afterTimeFormatter;
    BOOL _beforeTimeLabelOffset;
    BOOL _afterTimeLabelOffset;
    NSLayoutConstraint *_beforeLabelVerticalConstraint;
    NSLayoutConstraint *_afterLabelVerticalConstraint;
}


@property (retain, nonatomic) UILabel *afterTimeLabel; // ivar: _afterTimeLabel
@property (retain, nonatomic) UILabel *beforeTimeLabel; // ivar: _beforeTimeLabel
@property (weak, nonatomic) NSObject<PUVideoScrubberViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UISlider *scrubberSlider; // ivar: _scrubberSlider


-(id)hitTest:(struct CGPoint )arg0 forEvent:(struct __GSEvent *)arg1 ;
-(id)initWithStartingTime:(struct ? )arg0 endingTime:(struct ? )arg1 currentTime:(struct ? )arg2 ;
-(void)layoutSubviews;
-(void)offsetTimeLabelsIfNecessary;
-(void)setCurrentTime:(struct ? )arg0 ;
-(void)timesChanged:(struct ? )arg0 endingTime:(struct ? )arg1 currentTime:(struct ? )arg2 ;
-(void)updateSliderPosition;
-(void)videoScrubberDoneChanging;
-(void)videoScrubberValueChanged:(id)arg0 ;


@end


#endif