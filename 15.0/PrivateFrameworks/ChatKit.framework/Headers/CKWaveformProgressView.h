// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKWAVEFORMPROGRESSVIEW_H
#define CKWAVEFORMPROGRESSVIEW_H

@class IMManualUpdater, UIImage;


#import "CKBalloonImageView.h"

@interface CKWaveformProgressView : CKBalloonImageView

@property (nonatomic) char color; // ivar: _color
@property (nonatomic) CGFloat currentTime; // ivar: _currentTime
@property (retain, nonatomic) IMManualUpdater *displayUpdater; // ivar: _displayUpdater
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic, getter=isPlayed) BOOL played; // ivar: _played
@property (nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (retain, nonatomic) UIImage *waveform; // ivar: _waveform


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForDisplay;
-(void)prepareForDisplayIfNeeded;
-(void)setImage:(id)arg0 ;
-(void)setNeedsPrepareForDisplay;


@end


#endif