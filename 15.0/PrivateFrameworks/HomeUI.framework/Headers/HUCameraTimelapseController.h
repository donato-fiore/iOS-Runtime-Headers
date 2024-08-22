// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCAMERATIMELAPSECONTROLLER_H
#define HUCAMERATIMELAPSECONTROLLER_H

@class NSCache, NSMutableDictionary, HMCameraProfile, HMCameraClip, NSString, CALayer, AVPlayer, AVPlayerLayer, NSArray;
@protocol HMCameraClipManagerObserver, HUTimelapseClipDataSource, HFCameraTimelapseVideoDownloaderDelegate;

#import <Foundation/Foundation.h>


@interface HUCameraTimelapseController : NSObject <HMCameraClipManagerObserver, HUTimelapseClipDataSource, HFCameraTimelapseVideoDownloaderDelegate>



@property (retain, nonatomic) NSCache *cachedPlayerItems; // ivar: _cachedPlayerItems
@property (retain, nonatomic) NSMutableDictionary *cachedVideos; // ivar: _cachedVideos
@property (retain, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (nonatomic) ? chaseTime; // ivar: _chaseTime
@property (retain, nonatomic) HMCameraClip *currentClip; // ivar: _currentClip
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger downloadState; // ivar: _downloadState
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMCameraClip *highQualityClip; // ivar: _highQualityClip
@property (readonly, nonatomic) CALayer *imageLayer; // ivar: _imageLayer
@property (readonly, nonatomic) AVPlayer *player; // ivar: _player
@property (nonatomic) NSInteger playerItemStatus; // ivar: _playerItemStatus
@property (readonly, nonatomic) AVPlayerLayer *playerLayer; // ivar: _playerLayer
@property (nonatomic, getter=isPlayingHLSPlayerItem) BOOL playingHLSPlayerItem; // ivar: _playingHLSPlayerItem
@property (nonatomic, getter=isSeekInProgress) BOOL seekInProgress; // ivar: _seekInProgress
@property (nonatomic, getter=isSeekingToTime) BOOL seekingToTime; // ivar: _seekingToTime
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *timelapseClips; // ivar: _timelapseClips


-(BOOL)canSeekWithClip:(id)arg0 ;
-(id)initWithCameraProfile:(id)arg0 ;
-(id)playerItemForURL:(id)arg0 ;
-(struct ? )cmTimeFromDate:(id)arg0 ;
-(void)_hideAllTimelapseLayers;
-(void)_loadPlayerForTimelapseClip:(id)arg0 atLocation:(id)arg1 ;
-(void)_loadPlayerFromLocation:(id)arg0 ;
-(void)_showOnlyImageLayer;
-(void)_showOnlyPlayerLayer;
-(void)actuallySeekToTime;
-(void)dealloc;
-(void)didDownloadVideoFileForTimelapseClip:(id)arg0 atLocation:(id)arg1 ;
-(void)failedToDownloadVideoFileForTimelapseClip:(id)arg0 ;
-(void)foundVideoFileForTimelapseClip:(id)arg0 atLocation:(id)arg1 ;
-(void)hideAllViews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pauseTimelapseScrubbing;
-(void)resetForNewCamera;
-(void)seekToDate:(id)arg0 ;
-(void)setTimelapseVisibility:(BOOL)arg0 ;
-(void)trySeekToChaseTime;
-(void)updatePlaceholderContent;
-(void)updateTimelapseClip:(id)arg0 ;
-(void)updateToPlaybackPosition:(id)arg0 forHighQualityClip:(id)arg1 ;
-(void)updateVideoBounds:(struct CGRect )arg0 ;


@end


#endif