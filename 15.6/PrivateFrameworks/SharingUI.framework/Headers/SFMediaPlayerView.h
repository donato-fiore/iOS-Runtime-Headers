// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFMEDIAPLAYERVIEW_H
#define SFMEDIAPLAYERVIEW_H

@class UIView, AVPlayerLooper, AVQueuePlayer, NSMutableArray;
@protocol OS_dispatch_source;



@interface SFMediaPlayerView : UIView {
    AVPlayerLooper *_avLooper;
    AVQueuePlayer *_avQueuePlayer;
    NSMutableArray *_mediaItems;
    NSObject<OS_dispatch_source> *_speedUpTimer;
    BOOL _isKVOObserver;
}


@property (nonatomic) BOOL pausesAfterEachItem; // ivar: _pausesAfterEachItem


+(Class)layerClass;
-(BOOL)isPaused;
-(void)_pause;
-(void)addMovieItem:(id)arg0 ;
-(void)advanceToNextItem;
-(void)breakFirstEnqueuedLoop;
-(void)dealloc;
-(void)dequeueNonPlayingItemsFromMediaItem:(id)arg0 ;
-(void)enqueueItemsFromMediaItem:(id)arg0 afterItem:(id)arg1 ;
-(void)handleBoundaryTimeObserverForMediaItem:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)play;
-(void)playerItemDidReachEnd:(id)arg0 ;
-(void)removeAllQueuedItems;
-(void)removeMovieItem:(id)arg0 ;
-(void)setUpTimeRangeNotificationsForItem:(id)arg0 ;
-(void)speedUpRemainderOfCurrentItem;
-(void)startMovieLoopWithPath:(id)arg0 ;
-(void)startMovieLoopWithPath:(id)arg0 assetType:(int)arg1 adjustmentsURL:(id)arg2 ;
-(void)stop;
-(void)stopSpeedUpTimer;
-(void)updateViewForAssetType:(int)arg0 adjustmentsURL:(id)arg1 ;


@end


#endif