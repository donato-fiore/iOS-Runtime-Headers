// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFSCROLLABLEIRISWALLPAPERVIEW_H
#define SBFSCROLLABLEIRISWALLPAPERVIEW_H

@class AVAsset, NSString, NSURL;
@protocol UIGestureRecognizerDelegate, SBFLivePhotoPlayerViewDelegate, SBFIrisWallpaperView, SBFIrisWallpaperPlayerDelegate;


#import "SBFScrollableStaticWallpaperView.h"
#import "SBFLivePhotoPlayerView.h"

@interface SBFScrollableIrisWallpaperView : SBFScrollableStaticWallpaperView <UIGestureRecognizerDelegate, SBFLivePhotoPlayerViewDelegate, SBFIrisWallpaperView>

 {
    AVAsset *_video;
    SBFLivePhotoPlayerView *_playerView;
    NSInteger _playbackState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBFIrisWallpaperPlayerDelegate> *irisDelegate; // ivar: _irisDelegate
@property (readonly, nonatomic) NSInteger irisPlaybackState;
@property (readonly, nonatomic) BOOL isIrisInteracting;
@property (readonly, nonatomic) CGFloat stillTimeInVideo; // ivar: _stillTimeInVideo
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSURL *videoFileURL;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)_newImageView;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 wallpaperVideo:(id)arg2 variant:(NSInteger)arg3 ;
-(id)irisGestureRecognizer;
-(void)dealloc;
-(void)playerViewIsInteractingDidChange:(id)arg0 ;
-(void)playerViewPlaybackStateDidChange:(id)arg0 ;


@end


#endif