// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUISCROLLABLEIRISWALLPAPERVIEW_H
#define PBUISCROLLABLEIRISWALLPAPERVIEW_H

@class AVAsset, NSString, UIGestureRecognizer, NSURL;
@protocol UIGestureRecognizerDelegate, PBUILivePhotoPlayerViewDelegate, PBUIIrisWallpaperPlaying, PBUIIrisWallpaperPlayerDelegate;


#import "PBUIScrollableStaticWallpaperView.h"
#import "PBUILivePhotoPlayerView.h"

@interface PBUIScrollableIrisWallpaperView : PBUIScrollableStaticWallpaperView <UIGestureRecognizerDelegate, PBUILivePhotoPlayerViewDelegate, PBUIIrisWallpaperPlaying>

 {
    AVAsset *_video;
    PBUILivePhotoPlayerView *_playerView;
    NSInteger _playbackState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PBUIIrisWallpaperPlayerDelegate> *irisDelegate; // ivar: _irisDelegate
@property (readonly, nonatomic) UIGestureRecognizer *irisGestureRecognizer;
@property (readonly, nonatomic) NSInteger irisPlaybackState;
@property (readonly, nonatomic) BOOL isIrisInteracting;
@property (readonly, nonatomic) CGFloat stillTimeInVideo; // ivar: _stillTimeInVideo
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSURL *videoFileURL;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)_newImageView;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 wallpaperVideo:(id)arg2 variant:(NSInteger)arg3 ;
-(void)dealloc;
-(void)playerViewIsInteractingDidChange:(id)arg0 ;
-(void)playerViewPlaybackStateDidChange:(id)arg0 ;


@end


#endif