// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HURECORDEDWAVEFORMVIEW_H
#define HURECORDEDWAVEFORMVIEW_H

@class UIView, NSURL, HFAudioPlayer, NSArray, UIColor, UIVisualEffectView, NSString, UIButton, UILabel, UIImage, UIImageView;
@protocol HFAudioPlayerDelegate;



@interface HURecordedWaveformView : UIView <HFAudioPlayerDelegate>



@property (retain, nonatomic) NSURL *audioFileURL; // ivar: _audioFileURL
@property (retain, nonatomic) HFAudioPlayer *audioPlayer; // ivar: _audioPlayer
@property (retain, nonatomic) NSArray *audioPowerLevels; // ivar: _audioPowerLevels
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIVisualEffectView *blurView; // ivar: _blurView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat minTimeLabelWidth; // ivar: _minTimeLabelWidth
@property (retain, nonatomic) UIButton *playRecordingButton; // ivar: _playRecordingButton
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *timeLabel; // ivar: _timeLabel
@property (retain, nonatomic) UIColor *waveformColor; // ivar: _waveformColor
@property (retain, nonatomic) UIImage *waveformImage; // ivar: _waveformImage
@property (retain, nonatomic) UIImageView *waveformImageView; // ivar: _waveformImageView


-(id)_waveFormImageForWidth:(CGFloat)arg0 havingColor:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 waveformColor:(id)arg1 backgroundColor:(id)arg2 tintColor:(id)arg3 ;
-(void)_playRecording:(id)arg0 ;
-(void)_updateProgressForPlaybackTime:(CGFloat)arg0 ;
-(void)audioPlayer:(id)arg0 didPausePlaybackWithReason:(id)arg1 ;
-(void)audioPlayer:(id)arg0 didUpdatePlaybackTime:(CGFloat)arg1 ;
-(void)audioPlayerDidFinishPlayback:(id)arg0 withError:(id)arg1 ;
-(void)audioPlayerDidResumePlayback:(id)arg0 ;
-(void)audioPlayerDidStopPlayback:(id)arg0 ;
-(void)layoutSubviews;
-(void)setAlpha:(CGFloat)arg0 ;


@end


#endif