// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUVIDEOTILEVIEWCONTROLLER_H
#define PUVIDEOTILEVIEWCONTROLLER_H

@class UIView, UIImageView, UIImage, NSString, PXVideoSession, PXVideoSessionUIView;
@protocol PUAssetViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PXVideoSessionUIViewDelegate, PXChangeObserver, PUBrowsingVideoPlayerTimeObserver, PUBrowsingVideoPlayerVideoOutput, PXSettingsKeyObserver, PUDisplayAsset;


#import "PUTileViewController.h"
#import "PUBrowsingVideoPlayer.h"
#import "PUAssetViewModel.h"
#import "PUMediaProvider.h"

@interface PUVideoTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PXVideoSessionUIViewDelegate, PXChangeObserver, PUBrowsingVideoPlayerTimeObserver, PUBrowsingVideoPlayerVideoOutput, PXSettingsKeyObserver>

 {
    UIView *_view;
    UIImageView *_placeholderImageView;
    UIImage *_preloadedImage;
    BOOL _hidePlaceholderImmediately;
    BOOL _waitForFocusValueForCrossfade;
}


@property (retain, nonatomic, setter=_setBrowsingVideoPlayer:) PUBrowsingVideoPlayer *_browsingVideoPlayer; // ivar: __browsingVideoPlayer
@property (nonatomic, setter=_setCurrentImageRequestID:) int _currentImageRequestID; // ivar: __currentImageRequestID
@property (nonatomic, setter=_setDisplayingFullQualityImage:) BOOL _isDisplayingFullQualityImage; // ivar: __isDisplayingFullQualityImage
@property (readonly, nonatomic) BOOL _isDisplayingVideo;
@property (copy, nonatomic, setter=_setReadyForDisplayCompletionHandler:) id *_readyForDisplayCompletionHandler; // ivar: __readyForDisplayCompletionHandler
@property (nonatomic, setter=_setTargetSize:) CGSize _targetSize; // ivar: __targetSize
@property (nonatomic, setter=_setThumbnailRequestNumber:) NSInteger _thumbnailRequestNumber; // ivar: __thumbnailRequestNumber
@property (retain, nonatomic, setter=_setAsset:) NSObject<PUDisplayAsset> *asset; // ivar: _asset
@property (retain, nonatomic) PUAssetViewModel *assetViewModel; // ivar: _assetViewModel
@property (nonatomic) BOOL canPlayVideo; // ivar: _canPlayVideo
@property (nonatomic) BOOL currentImageIsPlaceholder; // ivar: _currentImageIsPlaceholder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PUMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (nonatomic) BOOL placeholderIsAnimatingToHidden; // ivar: _placeholderIsAnimatingToHidden
@property (nonatomic) BOOL placeholderVisible; // ivar: _placeholderVisible
@property (nonatomic) BOOL playerDidPlayToEnd; // ivar: _playerDidPlayToEnd
@property (nonatomic) BOOL playerIsSeeking; // ivar: _playerIsSeeking
@property (copy, nonatomic) id *readyForDisplayChangeHandler; // ivar: _readyForDisplayChangeHandler
@property (nonatomic) CGSize requestedImageTargetSize; // ivar: _requestedImageTargetSize
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL videoOutputIsReadyForDisplay;
@property (retain, nonatomic) PXVideoSession *videoSession; // ivar: _videoSession
@property (retain, nonatomic) PXVideoSessionUIView *videoView; // ivar: _videoView


-(BOOL)adoptAssetTransitionInfo:(id)arg0 ;
-(id)generateAssetTransitionInfo;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(id)loadView;
-(void)_callReadyToDisplayChangeHandler;
-(void)_handleAssetViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_handleBrowsingVideoPlayer:(id)arg0 didChange:(id)arg1 ;
-(void)_handleImageResult:(id)arg0 info:(id)arg1 synchronous:(BOOL)arg2 ;
-(void)_updateDebugBorders;
-(void)_updateImage;
-(void)_updatePlaceholderVisibility;
-(void)_updateReadyForDisplay;
-(void)_updateTargetSize;
-(void)_updateVideo;
-(void)applyLayoutInfo:(id)arg0 ;
-(void)becomeReusable;
-(void)dealloc;
-(void)didChangeActive;
-(void)didChangeAnimating;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)removeAllAnimations;
-(void)setEdgeAntialiasingEnabled:(BOOL)arg0 ;
-(void)setPreloadedImage:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)videoPlayer:(id)arg0 currentTimeDidChange:(struct ? )arg1 ;
-(void)videoPlayer:(id)arg0 desiredSeekTimeDidChange:(struct ? )arg1 ;
-(void)videoSessionViewPlaceholderVisibilityChanged:(id)arg0 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif