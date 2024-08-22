// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXTRIMTOOLPLAYERWRAPPERLIVEPHOTOVIEW_H
#define PXTRIMTOOLPLAYERWRAPPERLIVEPHOTOVIEW_H

@class ISVideoPlayerUIView, NSString, UIView, ISWrappedAVPlayer;
@protocol ISChangeObserver, PXTrimToolPlayerWrapper, PXLivePhotoView, PXTrimToolPlayerObserver;

#import <Foundation/Foundation.h>


@interface PXTrimToolPlayerWrapperLivePhotoView : NSObject <ISChangeObserver, PXTrimToolPlayerWrapper>

 {
    ? _delegateFlags;
}


@property (retain, nonatomic) ISVideoPlayerUIView *_videoPlayerView; // ivar: _videoPlayerView
@property (readonly, nonatomic) ? currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXLivePhotoView> *livePhotoView; // ivar: _livePhotoView
@property (readonly, nonatomic) UIView *loupePlayerView; // ivar: _loupePlayerView
@property (nonatomic) BOOL needsPlayerUpdate; // ivar: _needsPlayerUpdate
@property (nonatomic) ? periodicTimeObservationInterval; // ivar: _periodicTimeObservationInterval
@property (retain, nonatomic) id *periodicTimeObserver; // ivar: _periodicTimeObserver
@property (weak, nonatomic) NSObject<PXTrimToolPlayerObserver> *playerObserver; // ivar: _playerObserver
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic, getter=isReadyToPlay) BOOL readyToPlay;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? trimRange;
@property (retain, nonatomic) ISWrappedAVPlayer *wrappedAVPlayer; // ivar: _wrappedAVPlayer


-(id)initWithLivePhotoView:(id)arg0 ;
-(id)videoPlayerView;
-(void)_addPeriodicTimeObserver;
-(void)_createLoupePlayerView;
-(void)_loadWrappedAVPlayerIfNecessary;
-(void)_timeObserverTimeChanged:(struct ? )arg0 ;
-(void)applyTrimTimeRange:(struct ? )arg0 ;
-(void)finishSeeking;
-(void)invalidateComposition;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)pause;
-(void)play;
-(void)requestPlayerItemWithCompletion:(id)arg0 ;
-(void)seekToTime:(struct ? )arg0 ;
-(void)seekToTime:(struct ? )arg0 untrimmed:(BOOL)arg1 exact:(BOOL)arg2 ;
-(void)seekToTime:(struct ? )arg0 untrimmed:(BOOL)arg1 exact:(BOOL)arg2 forceSeek:(BOOL)arg3 ;
-(void)startPeriodicTimeObserver;
-(void)stepByCount:(NSInteger)arg0 playheadTime:(struct ? )arg1 ;
-(void)stopPeriodicTimeObserver;


@end


#endif