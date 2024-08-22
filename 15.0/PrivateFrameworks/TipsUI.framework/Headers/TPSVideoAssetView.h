// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSVIDEOASSETVIEW_H
#define TPSVIDEOASSETVIEW_H

@class AVPlayer, AVPlayerLayer, TPSKVOManager, NSString, UIImage, TPSURLSessionItem;
@protocol TPSVideoAssetViewDelegate;


#import "TPSImageAssetView.h"

@interface TPSVideoAssetView : TPSImageAssetView {
    BOOL _videoPlaybackFinished;
    BOOL _avPlayerPlaybackFinished;
    BOOL _registeredForAVPlayerNotification;
    AVPlayer *_avplayer;
    AVPlayerLayer *_avplayerLayer;
    TPSKVOManager *_KVOManager;
}


@property (retain, nonatomic) NSString *cacheVideoIdentifier; // ivar: _cacheVideoIdentifier
@property (retain, nonatomic) NSString *downloadedVideoPath; // ivar: _downloadedVideoPath
@property (nonatomic) BOOL lastFrameDominent; // ivar: _lastFrameDominent
@property (retain, nonatomic) UIImage *lastFrameImage; // ivar: _lastFrameImage
@property (nonatomic) BOOL readyToDisplayAVPlayer; // ivar: _readyToDisplayAVPlayer
@property (nonatomic) BOOL supportsVideoAssetViewCanShowMedia; // ivar: _supportsVideoAssetViewCanShowMedia
@property (nonatomic) BOOL supportsVideoAssetViewFinishedPlayingVideo; // ivar: _supportsVideoAssetViewFinishedPlayingVideo
@property (nonatomic) BOOL supportsVideoAssetViewUpdateAssetLoadingFinished; // ivar: _supportsVideoAssetViewUpdateAssetLoadingFinished
@property (nonatomic) CGFloat videoDelayTime; // ivar: _videoDelayTime
@property (weak, nonatomic) NSObject<TPSVideoAssetViewDelegate> *videoDelegate; // ivar: _videoDelegate
@property (retain, nonatomic) NSString *videoPath; // ivar: _videoPath
@property (retain, nonatomic) TPSURLSessionItem *videoURLSessionItem; // ivar: _videoURLSessionItem


-(BOOL)displayingVideoLastFrame;
-(BOOL)updateImageToVideoLastFrame;
-(BOOL)videoInProgress;
-(struct ? )currentTime;
-(void)avplayerDidFinishPlaying:(id)arg0 ;
-(void)avplayerItemErrorChanged:(id)arg0 ;
-(void)cancel;
-(void)cancelVideoDownloadTask;
-(void)commonInit;
-(void)continuePlayVideo;
-(void)dealloc;
-(void)fetchImageWithIdentifier:(id)arg0 path:(id)arg1 ;
-(void)layoutSubviews;
-(void)playVideo;
-(void)playVideoDelay;
-(void)removeVideoPlayerLayer;
-(void)replayVideo;
-(void)resetVideoPlayer;
-(void)restartVideoDelay;
-(void)scrubVideoToFirstFrame;
-(void)setAspectFillAsset:(BOOL)arg0 ;
-(void)stopVideoPlayer;
-(void)updateVideoGravity;


@end


#endif