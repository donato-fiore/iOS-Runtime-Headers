// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXTRIMTOOLPLAYERWRAPPERNUMEDIAVIEW_H
#define PXTRIMTOOLPLAYERWRAPPERNUMEDIAVIEW_H

@class AVPlayer, NSString, NSArray, NUMediaView, NSMutableArray;
@protocol PXTrimToolPlayerWrapper, NUMediaPlayer, PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource, PXTrimToolPlayerObserver;

#import <Foundation/Foundation.h>

#import "_PXTrimToolPlayerWrapperAVPlayerView.h"

@interface PXTrimToolPlayerWrapperNUMediaView : NSObject <PXTrimToolPlayerWrapper>

 {
    ? _delegateFlags;
    ? _trimRange;
}


@property (readonly, nonatomic) AVPlayer *_currentAVPlayer;
@property (readonly, nonatomic) ? currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didLoopVideoBeforeSeek; // ivar: _didLoopVideoBeforeSeek
@property (nonatomic) BOOL didPlayBeforeSeek; // ivar: _didPlayBeforeSeek
@property (copy, nonatomic) NSArray *fullVideoPipelineFilters; // ivar: _fullVideoPipelineFilters
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _PXTrimToolPlayerWrapperAVPlayerView *loupePlayerView; // ivar: _loupePlayerView
@property (retain, nonatomic) NSObject<NUMediaPlayer> *mediaPlayer; // ivar: _mediaPlayer
@property (readonly, nonatomic) NUMediaView *mediaView; // ivar: _mediaView
@property (retain, nonatomic) NSMutableArray *mediaViewObservers; // ivar: _mediaViewObservers
@property (retain, nonatomic) id *mediaViewTimeObserver; // ivar: _mediaViewTimeObserver
@property (copy, nonatomic) NSArray *pipelineFiltersBeforeSeek; // ivar: _pipelineFiltersBeforeSeek
@property (weak, nonatomic) NSObject<PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource> *playerItemSource; // ivar: _playerItemSource
@property (weak, nonatomic) NSObject<PXTrimToolPlayerObserver> *playerObserver; // ivar: _playerObserver
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic, getter=isReadyToPlay) BOOL readyToPlay;
@property (nonatomic) ? seekTime; // ivar: _seekTime
@property (nonatomic) BOOL showsUntrimmed; // ivar: _showsUntrimmed
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? trimRange;


-(id)initWithNUMediaView:(id)arg0 ;
-(void)_handleMediaPlayerObserverMediaChanged;
-(void)_handleMediaPlayerObserverStatusChanged:(NSInteger)arg0 ;
-(void)_handleMediaPlayerObserverTimeChanged:(struct ? )arg0 ;
-(void)_registerDefaultMediaViewObserver;
-(void)_registerTimeMediaViewObserver;
-(void)_removeMediaPlayerObserver;
-(void)_removeTimeObserver;
-(void)_updateLoupePlayerView;
-(void)applyTrimTimeRange:(struct ? )arg0 ;
-(void)dealloc;
-(void)finishSeeking;
-(void)invalidateComposition;
-(void)pause;
-(void)play;
-(void)requestPlayerItemWithCompletion:(id)arg0 ;
-(void)seekToTime:(struct ? )arg0 ;
-(void)seekToTime:(struct ? )arg0 untrimmed:(BOOL)arg1 exact:(BOOL)arg2 ;
-(void)seekToTime:(struct ? )arg0 untrimmed:(BOOL)arg1 exact:(BOOL)arg2 forceSeek:(BOOL)arg3 ;
-(void)setPosterFrame:(struct ? )arg0 ;
-(void)startPeriodicTimeObserver;
-(void)stepByCount:(NSInteger)arg0 playheadTime:(struct ? )arg1 ;
-(void)stopPeriodicTimeObserver;


@end


#endif