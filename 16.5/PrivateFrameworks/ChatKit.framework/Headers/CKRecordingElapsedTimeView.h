// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKRECORDINGELAPSEDTIMEVIEW_H
#define CKRECORDINGELAPSEDTIMEVIEW_H

@class UIView, NSDateComponentsFormatter, NSDate, UILabel, NSTimer;



@interface CKRecordingElapsedTimeView : UIView

@property (readonly, nonatomic) NSDateComponentsFormatter *_durationFormatter; // ivar: __durationFormatter
@property (readonly, nonatomic) UIView *_recordingDotView; // ivar: __recordingDotView
@property (readonly, nonatomic) NSDate *_startTime; // ivar: __startTime
@property (readonly, nonatomic) UILabel *_timeLabel; // ivar: __timeLabel
@property (readonly, nonatomic) NSTimer *_updateTimer; // ivar: __updateTimer


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_beginRecordingAnimation;
-(void)_commonCAMElapsedTimeViewInitialization;
-(void)_endRecordingAnimation;
-(void)_update:(id)arg0 ;
-(void)dealloc;
-(void)endTimer;
-(void)layoutSubviews;
-(void)resetTimer;
-(void)startTimer;


@end


#endif