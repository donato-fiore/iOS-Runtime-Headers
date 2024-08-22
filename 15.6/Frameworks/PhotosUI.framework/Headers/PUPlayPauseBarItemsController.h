// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPLAYPAUSEBARITEMSCONTROLLER_H
#define PUPLAYPAUSEBARITEMSCONTROLLER_H

@class ISWrappedAVPlayer, NSHashTable, NSString;
@protocol PUBrowsingViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PUPlayPauseBarItemsControllerChange.h"
#import "PUBrowsingVideoPlayer.h"
#import "PUBrowsingViewModel.h"

@interface PUPlayPauseBarItemsController : NSObject <PUBrowsingViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver>



@property (retain, nonatomic, setter=_setAVPlayer:) ISWrappedAVPlayer *_avPlayer; // ivar: __avPlayer
@property (readonly, nonatomic) NSHashTable *_changeObservers; // ivar: __changeObservers
@property (readonly, nonatomic) PUPlayPauseBarItemsControllerChange *_currentChange; // ivar: __currentChange
@property (nonatomic, setter=_setPerformingChanges:) BOOL _isPerformingChanges; // ivar: __isPerformingChanges
@property (nonatomic, setter=_setUpdating:) BOOL _isUpdating; // ivar: __isUpdating
@property (nonatomic, setter=_setNeedsUpdateAVPlayer:) BOOL _needsUpdateAVPlayer; // ivar: __needsUpdateAVPlayer
@property (nonatomic, setter=_setNeedsUpdateCurrentPlaybackTimeAndDuration:) BOOL _needsUpdateCurrentPlaybackTimeAndDuration; // ivar: __needsUpdateCurrentPlaybackTimeAndDuration
@property (nonatomic, setter=_setNeedsUpdatePlayPauseState:) BOOL _needsUpdatePlayPauseState; // ivar: __needsUpdatePlayPauseState
@property (nonatomic, setter=_setNeedsUpdateVideoPlayer:) BOOL _needsUpdateVideoPlayer; // ivar: __needsUpdateVideoPlayer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_observerQueue; // ivar: __observerQueue
@property (retain, nonatomic, setter=_setTimeObservationToken:) id *_timeObservationToken; // ivar: __timeObservationToken
@property (retain, nonatomic, setter=_setVideoPlayer:) PUBrowsingVideoPlayer *_videoPlayer; // ivar: __videoPlayer
@property (nonatomic, setter=_setCurrentPlaybackTime:) ? currentPlaybackTime; // ivar: _currentPlaybackTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=_setPlayPauseState:) NSInteger playPauseState; // ivar: _playPauseState
@property (nonatomic, setter=_setPlaybackDuration:) ? playbackDuration; // ivar: _playbackDuration
@property (readonly) Class superclass;
@property (retain, nonatomic) PUBrowsingViewModel *viewModel; // ivar: _viewModel


-(BOOL)_needsUpdate;
-(id)init;
-(void)_assertInsideChangeBlock;
-(void)_assertInsideUpdate;
-(void)_handleVideoPlayer:(id)arg0 didChange:(id)arg1 ;
-(void)_handleViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_invalidateAVPlayer;
-(void)_invalidateCurrentPlaybackTimeAndDuration;
-(void)_invalidatePlayPauseState;
-(void)_invalidateVideoPlayer;
-(void)_performChanges:(id)arg0 ;
-(void)_publishChanges;
-(void)_setNeedsUpdate;
-(void)_startObservingAVPlayer;
-(void)_stopObservingAVPlayer;
-(void)_updateAVPlayerIfNeeded;
-(void)_updateCurrentPlaybackTimeAndDurationIfNeeded;
-(void)_updateIfNeeded;
-(void)_updatePlayPauseStateIfNeeded;
-(void)_updateVideoPlayerIfNeeded;
-(void)registerChangeObserver:(id)arg0 ;
-(void)unregisterChangeObserver:(id)arg0 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif