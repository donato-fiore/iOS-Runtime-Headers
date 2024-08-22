// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMESSAGEENTRYRECORDEDAUDIOVIEW_H
#define CKMESSAGEENTRYRECORDEDAUDIOVIEW_H

@class UIView, UIImageView, UIVisualEffectView, NSString, UIButton, UILabel, UIImage;
@protocol CKAudioControllerDelegate, CKMessageEntryRecordedAudioViewDelegate;


#import "CKAudioController.h"
#import "CKAudioMediaObject.h"

@interface CKMessageEntryRecordedAudioView : UIView <CKAudioControllerDelegate>



@property (retain, nonatomic) CKAudioController *audioController; // ivar: _audioController
@property (retain, nonatomic) CKAudioMediaObject *audioMediaObject; // ivar: _audioMediaObject
@property (retain, nonatomic) UIImageView *balloonImageView; // ivar: _balloonImageView
@property (retain, nonatomic) UIVisualEffectView *blurView; // ivar: _blurView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKMessageEntryRecordedAudioViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPlaying;
@property (retain, nonatomic) UIButton *playPauseDeleteButton; // ivar: _playPauseDeleteButton
@property (readonly) Class superclass;
@property (nonatomic) CGFloat time; // ivar: _time
@property (copy, nonatomic) NSString *timeFormat; // ivar: _timeFormat
@property (retain, nonatomic) UILabel *timeLabel; // ivar: _timeLabel
@property (retain, nonatomic) UIImage *waveformImage; // ivar: _waveformImage
@property (retain, nonatomic) UIImageView *waveformImageView; // ivar: _waveformImageView


-(BOOL)__im_ff_isNewAudioMessageFlowEnabled;
-(BOOL)__im_ff_systemImageAdoptionEnabled;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)audioController:(id)arg0 mediaObjectDidFinishPlaying:(id)arg1 ;
-(void)audioController:(id)arg0 mediaObjectProgressDidChange:(id)arg1 currentTime:(CGFloat)arg2 duration:(CGFloat)arg3 ;
-(void)audioControllerDidPause:(id)arg0 ;
-(void)audioControllerDidStop:(id)arg0 ;
-(void)audioControllerPlayingDidChange:(id)arg0 ;
-(void)dealloc;
-(void)handlePlayPauseDelete:(id)arg0 ;
-(void)layoutSubviews;
-(void)pause;
-(void)play;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)stop;
-(void)updatePlayPauseDeleteButton;
-(void)updateProgress;
-(void)updateTimeString;


@end


#endif