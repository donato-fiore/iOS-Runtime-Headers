// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXAVPLAYER_H
#define SXAVPLAYER_H

@class AVPlayer, NSString, SVKeyValueObserver;
@protocol AVPlayerItemDelegate;



@interface SXAVPlayer : AVPlayer <AVPlayerItemDelegate>



@property (readonly, nonatomic) int audioMode; // ivar: _audioMode
@property (nonatomic) ? cumulativeTimePlayed; // ivar: _cumulativeTimePlayed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) SVKeyValueObserver *durationObserver; // ivar: _durationObserver
@property (nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (nonatomic) CGFloat frameRate; // ivar: _frameRate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SVKeyValueObserver *loadedTimeRangesObserver; // ivar: _loadedTimeRangesObserver
@property (copy, nonatomic) id *loadingProgressBlock; // ivar: _loadingProgressBlock
@property (nonatomic) int playbackPosition; // ivar: _playbackPosition
@property (copy, nonatomic) id *playbackProgressBlock; // ivar: _playbackProgressBlock
@property (nonatomic) int playbackStatus; // ivar: _playbackStatus
@property (copy, nonatomic) id *playbackStatusBlock; // ivar: _playbackStatusBlock
@property (retain, nonatomic) SVKeyValueObserver *statusObserver; // ivar: _statusObserver
@property (readonly) Class superclass;
@property (retain, nonatomic) SVKeyValueObserver *timeControlStatusObserver; // ivar: _timeControlStatusObserver
@property (retain, nonatomic) id *timeObserver; // ivar: _timeObserver
@property (readonly, nonatomic) CGFloat totalTimePlayed;


-(id)initWithPlayerItem:(id)arg0 audioMode:(int)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 audioMode:(int)arg1 ;
-(void)addObservers;
-(void)dealloc;
-(void)loadFrameRate;
-(void)loadedTimeRangesChanged;
-(void)playedToEnd:(id)arg0 ;
-(void)seekToStartWithCompletionBlock:(id)arg0 ;
-(void)startTimeObserver;
-(void)statusChanged;
-(void)stopTimeObserver;
-(void)timeControlStatusChanged;
-(void)updateTime:(struct ? )arg0 duration:(struct ? )arg1 ;


@end


#endif