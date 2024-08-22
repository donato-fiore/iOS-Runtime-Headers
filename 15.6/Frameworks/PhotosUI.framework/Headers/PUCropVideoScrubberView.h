// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCROPVIDEOSCRUBBERVIEW_H
#define PUCROPVIDEOSCRUBBERVIEW_H

@class UIView, AVTimeFormatter, NSLayoutConstraint, UILabel, UISlider;
@protocol PUCropVideoScrubberViewDelegate;



@interface PUCropVideoScrubberView : UIView {
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
@property (weak, nonatomic) NSObject<PUCropVideoScrubberViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UISlider *scrubberSlider; // ivar: _scrubberSlider


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