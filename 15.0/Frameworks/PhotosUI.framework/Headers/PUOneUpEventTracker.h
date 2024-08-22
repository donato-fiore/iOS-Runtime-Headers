// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUONEUPEVENTTRACKER_H
#define PUONEUPEVENTTRACKER_H

@class PXMediaViewControllerEventTracker, PXAssetAnalyzer, PXAssetMetadataDonator, NSString, NSMutableDictionary;
@protocol PXChangeObserver, PUBrowsingViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUOneUpEventTracker, PUDisplayAsset;


#import "PUBrowsingVideoPlayer.h"
#import "PUBrowsingViewModel.h"

@interface PUOneUpEventTracker : PXMediaViewControllerEventTracker <PXChangeObserver, PUBrowsingViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUOneUpEventTracker>



@property (readonly, nonatomic) PXAssetAnalyzer *assetAnalyzer; // ivar: _assetAnalyzer
@property (readonly, nonatomic) PXAssetMetadataDonator *assetMetadataDonator; // ivar: _assetMetadataDonator
@property (nonatomic) NSInteger currentAssetDisplayIntervalSignpost; // ivar: _currentAssetDisplayIntervalSignpost
@property (nonatomic) NSInteger currentAssetSignpost; // ivar: _currentAssetSignpost
@property (readonly, nonatomic) NSObject<PUDisplayAsset> *currentVideoAsset; // ivar: _currentVideoAsset
@property (retain, nonatomic) PUBrowsingVideoPlayer *currentVideoPlayer; // ivar: _currentVideoPlayer
@property (nonatomic) NSInteger currentlyPlayingLivePhotoSignpost; // ivar: _currentlyPlayingLivePhotoSignpost
@property (nonatomic) NSInteger currentlyPlayingStreamedVideoSignpost; // ivar: _currentlyPlayingStreamedVideoSignpost
@property (nonatomic) NSInteger currentlyPlayingStreamedVideoStartSignpost; // ivar: _currentlyPlayingStreamedVideoStartSignpost
@property (retain, nonatomic) NSObject<PUDisplayAsset> *currentlyPlayingVideoAsset; // ivar: _currentlyPlayingVideoAsset
@property (readonly, nonatomic) CGFloat currentlyPlayingVideoAssetTimestamp; // ivar: _currentlyPlayingVideoAssetTimestamp
@property (nonatomic) NSInteger currentlyPlayingVideoSignpost; // ivar: _currentlyPlayingVideoSignpost
@property (retain, nonatomic) NSObject<PUDisplayAsset> *currentlyStreamingVideoAsset; // ivar: _currentlyStreamingVideoAsset
@property (nonatomic) BOOL currentlyStreamingVideoDidStartActualPlayback; // ivar: _currentlyStreamingVideoDidStartActualPlayback
@property (nonatomic) BOOL currentlyStreamingVideoIsActuallyPlaying; // ivar: _currentlyStreamingVideoIsActuallyPlaying
@property (nonatomic) BOOL currentlyStreamingVideoIsStalled; // ivar: _currentlyStreamingVideoIsStalled
@property (nonatomic) NSInteger currentlyStreamingVideoStallsCount; // ivar: _currentlyStreamingVideoStallsCount
@property (readonly, nonatomic) NSInteger currentlyViewedAssetGeneration; // ivar: _currentlyViewedAssetGeneration
@property (readonly, nonatomic) CGFloat currentlyViewedAssetTimestamp; // ivar: _currentlyViewedAssetTimestamp
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSessionActive; // ivar: _isSessionActive
@property (copy, nonatomic) NSMutableDictionary *payload;
@property (readonly, nonatomic) NSInteger presentationOrigin; // ivar: _presentationOrigin
@property (nonatomic) NSInteger sessionSignpost; // ivar: _sessionSignpost
@property (readonly) Class superclass;
@property (readonly, nonatomic) PUBrowsingViewModel *viewModel; // ivar: _viewModel


-(id)initWithViewModel:(id)arg0 presentationOrigin:(NSInteger)arg1 ;
-(id)initWithViewName:(id)arg0 ;
-(void)_handleLongEnoughViewDurationWithGeneration:(NSInteger)arg0 ;
-(void)_invalidateCurrentVideoPlayer;
-(void)_invalidateCurrentVideoProperties;
-(void)_invalidateCurrentlyViewedAsset;
-(void)_invalidateIsSessionActive;
-(void)_logDidEndPlayingVideoAsset:(id)arg0 duration:(CGFloat)arg1 ;
-(void)_logDidEndSession;
-(void)_logDidStartActualPlaybackOfStreamedVideoAsset:(id)arg0 ;
-(void)_logDidStartPlaybackOfStreamedVideoAsset:(id)arg0 ;
-(void)_logDidStartPlayingVideoAsset:(id)arg0 ;
-(void)_logDidStartSession;
-(void)_logWillEndPlaybackOfStreamedVideoAsset:(id)arg0 ;
-(void)_updateCurrentVideoPlayer;
-(void)_updateCurrentVideoProperties;
-(void)_updateCurrentlyViewedAsset;
-(void)_updateIsSessionActive;
-(void)logDidEndViewingMedia:(id)arg0 mediaKind:(NSInteger)arg1 duration:(CGFloat)arg2 ;
-(void)logDidStartViewingMedia:(id)arg0 mediaKind:(NSInteger)arg1 ;
-(void)logUserDidPlayLivePhoto:(id)arg0 ;
-(void)logUserWillPlayLivePhoto:(id)arg0 ;
-(void)logVitalityDidEndForLivePhoto:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)setDisplayedAsset:(id)arg0 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif