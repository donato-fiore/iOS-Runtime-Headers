// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFIRISWALLPAPERVIEW_H
#define SBFIRISWALLPAPERVIEW_H

@class UIImageView, ISAVPlayer, UIGestureRecognizer, NSMutableSet, NSString, NSURL;
@protocol SBFLivePhotoPlayerViewDelegate, SBFIrisWallpaperView, SBFIrisWallpaperPlayerDelegate;


#import "SBFStaticWallpaperView.h"
#import "SBFLivePhotoPlayerView.h"

@interface SBFIrisWallpaperView : SBFStaticWallpaperView <SBFLivePhotoPlayerViewDelegate, SBFIrisWallpaperView>

 {
    UIImageView *_imageView;
    BOOL _useRewindPlaybackStyle;
    ISAVPlayer *_prewiredAVPlayer;
    CGSize _prewiredSize;
    SBFLivePhotoPlayerView *_playerView;
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
@property (weak, nonatomic) NSObject<SBFIrisWallpaperPlayerDelegate> *irisDelegate; // ivar: _irisDelegate
@property (readonly, nonatomic) NSInteger irisPlaybackState;
@property (readonly, nonatomic) BOOL isIrisInteracting;
@property (readonly, nonatomic) CGFloat stillTimeInVideo; // ivar: _stillTimeInVideo
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSURL *videoFileURL; // ivar: _videoFileURL


-(BOOL)_setupContentViewForMode:(NSInteger)arg0 ;
-(NSInteger)wallpaperType;
-(id)_playbackReasonForSimulatedTouchReason:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 variant:(NSInteger)arg2 cacheGroup:(id)arg3 delegate:(id)arg4 options:(NSUInteger)arg5 ;
-(id)irisGestureRecognizer;
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