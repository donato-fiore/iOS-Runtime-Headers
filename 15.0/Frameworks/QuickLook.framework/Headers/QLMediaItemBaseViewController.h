// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLMEDIAITEMBASEVIEWCONTROLLER_H
#define QLMEDIAITEMBASEVIEWCONTROLLER_H

@class NSString, NSError, AVAsset, AVPlayer, AVPlayerLayer, UIView;
@protocol QLToolbarButtonAction;

#import <Foundation/Foundation.h>

#import "QLScrollableContentItemViewController.h"

@interface QLMediaItemBaseViewController : QLScrollableContentItemViewController <QLToolbarButtonAction>

 {
    NSObject *_playbackTimeObserver;
    BOOL _playing;
    BOOL _mediaWasPausedOnResignActive;
    id *_previewItemLoadingBlock;
    CGSize _imageSize;
}


@property (nonatomic) CGFloat currentPlaybackHeadPosition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (readonly, nonatomic) BOOL endOfMediaReached;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFullScreen; // ivar: _isFullScreen
@property (readonly, nonatomic) BOOL isVisible; // ivar: _isVisible
@property (readonly, nonatomic) AVAsset *mediaAsset; // ivar: _mediaAsset
@property (nonatomic) CGFloat mediaDuration; // ivar: _mediaDuration
@property (readonly, nonatomic) CGFloat mediaVolume; // ivar: _mediaVolume
@property (readonly, nonatomic) BOOL playable; // ivar: _playable
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (readonly, nonatomic) AVPlayerLayer *playerLayer; // ivar: _playerLayer
@property (readonly, nonatomic) UIView *playerView; // ivar: _playerView
@property (readonly, nonatomic) NSInteger playingStatus; // ivar: _playingStatus
@property (nonatomic) CGFloat remainingTime; // ivar: _remainingTime
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL visualTracksEnabled; // ivar: _visualTracksEnabled


-(BOOL)_assetIsDecodable:(id)arg0 ;
-(BOOL)pause;
-(BOOL)play;
-(BOOL)shouldDisplayPlayButtonInNavigationBar;
-(BOOL)togglePlayback;
-(id)setupPlayerViewWithPlayer:(id)arg0 ;
-(id)toolbarButtonsForTraitCollection:(id)arg0 ;
-(struct CGSize )imageSize;
-(void)_updateExternalPlayback;
-(void)_updatePlayingStatus;
-(void)buttonPressedWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)didChangePlayingStatus;
-(void)didReachEndOfMedia;
-(void)hostApplicationDidBecomeActive;
-(void)hostApplicationDidEnterBackground:(id)arg0 ;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)observePlayingTime:(struct ? )arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)playerItemDidReachEnd:(id)arg0 ;
-(void)previewBecameFullScreen:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg0 ;
-(void)previewDidDisappear:(BOOL)arg0 ;
-(void)previewIsAppearingWithProgress:(CGFloat)arg0 ;
-(void)resetToBeginning;
-(void)setAppearance:(id)arg0 animated:(BOOL)arg1 ;
-(void)setupPlayerWithMediaAsset:(id)arg0 ;
-(void)stop;


@end


#endif