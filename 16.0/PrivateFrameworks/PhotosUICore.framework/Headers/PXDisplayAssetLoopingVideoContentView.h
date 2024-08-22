// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXDISPLAYASSETLOOPINGVIDEOCONTENTVIEW_H
#define PXDISPLAYASSETLOOPINGVIDEOCONTENTVIEW_H

@class ISWrappedAVAudioSession, NSString, NSNumber, ISWrappedAVPlayer, AVPlayerItem;
@protocol PXActivityCoordinatorItem;


#import "PXDisplayAssetContentView.h"
#import "PXVideoPlayerView.h"

@interface PXDisplayAssetLoopingVideoContentView : PXDisplayAssetContentView <PXActivityCoordinatorItem>

 {
    PXVideoPlayerView *_videoView;
    NSUInteger _loadingIntervalID;
    NSUInteger _playbackIntervalID;
    id *_timeObserver;
}


@property (nonatomic) NSUInteger activityCoordinatorQueuePosition;
@property (retain, nonatomic) ISWrappedAVAudioSession *audioSession; // ivar: _audioSession
@property (nonatomic) BOOL canLoadVideo; // ivar: _canLoadVideo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *queuePosition; // ivar: _queuePosition
@property (readonly) Class superclass;
@property (nonatomic) CGFloat videoLoadingProgress; // ivar: _videoLoadingProgress
@property (retain, nonatomic) ISWrappedAVPlayer *videoPlayer; // ivar: _videoPlayer
@property (retain, nonatomic) AVPlayerItem *videoPlayerItem; // ivar: _videoPlayerItem


-(BOOL)isDisplayingFullQualityContent;
-(CGFloat)loadingProgress;
-(NSInteger)playbackStyle;
-(id)contentView;
-(id)currentImage;
-(struct CGRect )currentContentsRect;
-(void)_endLoadingInterval:(BOOL)arg0 ;
-(void)_endPlaybackInterval;
-(void)_handleDidShowPlaceholderForUnloadingPlayerItem:(id)arg0 ;
-(void)_handlePlayerItemResult:(id)arg0 info:(id)arg1 requestID:(NSInteger)arg2 ;
-(void)_handleVideoPlayerTimeObserverWithTime:(struct ? )arg0 ;
-(void)_loadVideo;
-(void)_unloadVideo;
-(void)_updateVideoPlayerPlayerItem;
-(void)_updateVideoViewContentMode;
-(void)_updateVideoViewPlaceholderFilters;
-(void)animatedContentEnabledDidChange;
-(void)contentModeDidChange;
-(void)contentsRectDidChange;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)imageDidChange;
-(void)imageProgressDidChange;
-(void)isDisplayingFullQualityContentDidChange;
-(void)placeholderImageFiltersDidChange;
-(void)updateContent;


@end


#endif