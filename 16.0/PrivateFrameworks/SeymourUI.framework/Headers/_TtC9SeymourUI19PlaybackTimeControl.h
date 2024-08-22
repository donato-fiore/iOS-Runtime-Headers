// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI19PLAYBACKTIMECONTROL_H
#define _TTC9SEYMOURUI19PLAYBACKTIMECONTROL_H

@class UIControl;



@interface _TtC9SeymourUI19PlaybackTimeControl : UIControl {
    ? elapsedTimeLabel;
    ? elapsedTrackView;
    ? remainingTimeLabel;
    ? remainingTrackView;
    ? elapsedTimeLabelBottomConstraint;
    ? elapsedTrackViewWidthConstraint;
    ? elapsedTrackMask;
    ? layout;
    ? style;
    ? elapsedTimeFormatter;
    ? remainingTimeFormatter;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForBaselineLayout;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif