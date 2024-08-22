// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICAUDIOPLAYBACKSCRUBBERVIEW_H
#define ICAUDIOPLAYBACKSCRUBBERVIEW_H

@class UISlider, ICAttachment;



@interface ICAudioPlaybackScrubberView : UISlider

@property (retain, nonatomic) ICAttachment *audioAttachment; // ivar: _audioAttachment
@property (nonatomic) BOOL wasPlaying; // ivar: _wasPlaying


-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(id)accessibilityLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)audioPlaybackTimeChangedNotification:(id)arg0 ;
-(void)dealloc;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)updateTime:(CGFloat)arg0 duration:(CGFloat)arg1 ;


@end


#endif