// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIIRISWALLPAPERVIEW_H
#define PBUIIRISWALLPAPERVIEW_H

@class UIImageView, ISAVPlayer, UIGestureRecognizer, NSMutableSet, NSString, NSURL;
@protocol PBUILivePhotoPlayerViewDelegate, PBUIIrisWallpaperPlaying, PBUIIrisWallpaperPlayerDelegate;


#import "PBUIStaticWallpaperView.h"
#import "PBUILivePhotoPlayerView.h"

@interface PBUIIrisWallpaperView : PBUIStaticWallpaperView <PBUILivePhotoPlayerViewDelegate, PBUIIrisWallpaperPlaying>

 {
    UIImageView *_imageView;
    BOOL _useRewindPlaybackStyle;
    ISAVPlayer *_prewiredAVPlayer;
    CGSize _prewiredSize;
    PBUILivePhotoPlayerView *_playerView;
    NSInteger _playerState;
    NSInteger _playbackState;
    BOOL _isInteracting;
    UIGestureRecognizer *_playerGestureRecognizer;
    NSMutableSet *_simulatedTouchReasons;
}


@property (readonly, nonatomic) NSInteger currentIrisMode; // ivar: _currentMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PBUIIrisWallpaperPlayerDelegate> *irisDelegate; // ivar: _irisDelegate
@property (readonly, nonatomic) UIGestureRecognizer *irisGestureRecognizer;
@property (readonly, nonatomic) NSInteger irisPlaybackState;
@property (readonly, nonatomic) BOOL isIrisInteracting;
@property (readonly, nonatomic) CGFloat stillTimeInVideo; // ivar: _stillTimeInVideo
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSURL *videoFileURL; // ivar: _videoFileURL


-(BOOL)_setupContentViewForMode:(NSInteger)arg0 ;
-(NSInteger)wallpaperType;
-(id)_playbackReasonForSimulatedTouchReason:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 variant:(NSInteger)arg2 cacheGroup:(id)arg3 delegate:(id)arg4 options:(NSUInteger)arg5 ;
-(id)videoPlayerForPlayerView:(id)arg0 ;
-(void)_populateContentView;
-(void)_resetPrewiredAVPlayer;
-(void)_setImage:(id)arg0 ;
-(void)_setPlayerGestureRecognizer:(id)arg0 ;
-(void)_setupContentViewWithOptions:(NSUInteger)arg0 ;
-(void)beginSimulatedTouchWithReason:(id)arg0 ;
-(void)dealloc;
-(void)endSimulatedTouchWithReason:(id)arg0 ;
-(void)playerViewIsInteractingDidChange:(id)arg0 ;
-(void)playerViewPlaybackStateDidChange:(id)arg0 ;
-(void)switchToIrisMode:(NSInteger)arg0 ;


@end


#endif