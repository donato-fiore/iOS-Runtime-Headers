// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKMEDIAASSETVIEW_H
#define CLKMEDIAASSETVIEW_H

@class UIView, UIImageView, AVSynchronizedLayer, CALayer, NSString;
@protocol CLKVideoPlayerViewDelegate, CLKMediaAssetViewDelegate;


#import "CLKVideoPlayerView.h"
#import "CLKDevice.h"
#import "CLKMediaAsset.h"

@interface CLKMediaAssetView : UIView <CLKVideoPlayerViewDelegate>

 {
    CLKVideoPlayerView *_videoPlayerView;
    UIImageView *_posterView;
    UIView *_curtainView;
    BOOL _isVideoLoaded;
    BOOL _isPlaying;
    id *_timeObserver;
    AVSynchronizedLayer *_syncLayer;
    CALayer *_posterLayer;
    NSInteger _preparedForOperation;
    NSInteger _transitionOperation;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CLKMediaAssetViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLKMediaAsset *mediaAsset; // ivar: _mediaAsset
@property (readonly) Class superclass;


-(BOOL)isPlaying;
-(id)initWithFrame:(struct CGRect )arg0 forDevice:(id)arg1 ;
-(struct ? )_endTimeForOperation:(NSInteger)arg0 ;
-(struct ? )_startTimeForOperation:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_cancelPlayback;
-(void)_completePlaybackWithOperation:(NSInteger)arg0 ;
-(void)_createVideoPlayerViewIfNeeded;
-(void)_mediaServicesWereReset:(id)arg0 ;
-(void)_reset;
-(void)_transitionFromPosterToVideo;
-(void)changeMediaAsset:(id)arg0 ;
-(void)dealloc;
-(void)fadeFromCurtainViewWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)fadeToCurtainViewWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)hideCurtainView;
-(void)interruptPlayback;
-(void)layoutSubviews;
-(void)pauseVideoPlayerViewIfItExists;
-(void)pauseWithOperation:(NSInteger)arg0 ;
-(void)playWithOperation:(NSInteger)arg0 ;
-(void)prepareToPlayWithOperation:(NSInteger)arg0 ;
-(void)resumeInterruptedPlayback;
-(void)showCurtainView;
-(void)videoPlayerViewDidBeginPlaying:(id)arg0 ;
-(void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)arg0 ;
-(void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg0 ;


@end


#endif