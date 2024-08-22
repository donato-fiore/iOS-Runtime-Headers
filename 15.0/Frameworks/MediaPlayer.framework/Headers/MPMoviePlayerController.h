// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMOVIEPLAYERCONTROLLER_H
#define MPMOVIEPLAYERCONTROLLER_H

@class AVAssetImageGenerator, UIView, NSURL, NSString, UIViewController, AVPlayerViewController;
@protocol AVPlayerViewControllerDelegatePrivate, MPMediaPlayback;

#import <Foundation/Foundation.h>

#import "_MPMoviePlayerProxyView.h"

@interface MPMoviePlayerController : NSObject <AVPlayerViewControllerDelegatePrivate, MPMediaPlayback>

 {
    _MPMoviePlayerProxyView *_proxyView;
    AVAssetImageGenerator *_generator;
    UIView *_backgroundView;
    BOOL _useApplicationAudioSession;
    BOOL _isFullscreen;
}


@property (readonly, nonatomic, getter=isAirPlayVideoActive) BOOL airPlayVideoActive;
@property (nonatomic) BOOL allowsAirPlay;
@property (readonly, nonatomic) UIView *backgroundView;
@property (copy, nonatomic) NSURL *contentURL; // ivar: _contentURL
@property (nonatomic) NSInteger controlStyle; // ivar: _controlStyle
@property (nonatomic) float currentPlaybackRate;
@property (nonatomic) CGFloat currentPlaybackTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (nonatomic) CGFloat endPlaybackTime;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *hostingViewController; // ivar: _hostingViewController
@property (nonatomic) CGFloat initialPlaybackTime;
@property (readonly, nonatomic) BOOL isPreparedToPlay;
@property (readonly, nonatomic) NSUInteger loadState;
@property (readonly, nonatomic) NSUInteger movieMediaTypes;
@property (nonatomic) NSInteger movieSourceType; // ivar: _movieSourceType
@property (readonly, nonatomic) CGSize naturalSize;
@property (readonly, nonatomic) CGFloat playableDuration;
@property (readonly, nonatomic) NSInteger playbackState;
@property (readonly, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController
@property (readonly, nonatomic) BOOL readyForDisplay;
@property (nonatomic) NSInteger repeatMode; // ivar: _repeatMode
@property (nonatomic) NSInteger scalingMode;
@property (nonatomic) BOOL shouldAutoplay; // ivar: _shouldAutoplay
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


-(BOOL)useApplicationAudioSession;
-(id)_advertisementView;
-(id)_videoViewController;
-(id)accessLog;
-(id)errorLog;
-(id)init;
-(id)initWithContentURL:(id)arg0 ;
-(id)thumbnailImageAtTime:(CGFloat)arg0 timeOption:(NSInteger)arg1 ;
-(id)timedMetadata;
-(void)_avPlayerItemDidPlayToEndNotification:(id)arg0 ;
-(void)beginSeekingBackward;
-(void)beginSeekingForward;
-(void)cancelAllThumbnailImageRequests;
-(void)dealloc;
-(void)endSeeking;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)play;
-(void)playerViewController:(id)arg0 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg1 ;
-(void)playerViewController:(id)arg0 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg1 ;
-(void)prepareToPlay;
-(void)requestThumbnailImagesAtTimes:(id)arg0 timeOption:(NSInteger)arg1 ;
-(void)setUseApplicationAudioSession:(BOOL)arg0 ;
-(void)stop;


@end


#endif