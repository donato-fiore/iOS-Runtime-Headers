// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCVIDEOVIEW_H
#define ASCVIDEOVIEW_H

@class UIView, AVPlayer, AVPlayerLayer;
@protocol ASCVideoViewDelegate;


#import "ASCBorderedScreenshotView.h"
#import "ASCScreenshotDisplayConfiguration.h"

@interface ASCVideoView : UIView

@property (weak, nonatomic) NSObject<ASCVideoViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isPlaying; // ivar: _isPlaying
@property (nonatomic, getter=isLoopingEnabled) BOOL loopingEnabled; // ivar: _loopingEnabled
@property (nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic) AVPlayer *player; // ivar: _player
@property (readonly, nonatomic) AVPlayerLayer *playerLayer; // ivar: _playerLayer
@property (readonly, nonatomic) ASCBorderedScreenshotView *previewFrameArtwork; // ivar: _previewFrameArtwork
@property (readonly, copy, nonatomic) ASCScreenshotDisplayConfiguration *screenshotDisplayConfiguration; // ivar: _screenshotDisplayConfiguration


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 videoURL:(id)arg1 screenshotDisplayConfiguration:(id)arg2 ;
-(struct CGSize )preferredVideoSize;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)pauseVideo;
-(void)playVideo;
-(void)playerDidPlayToEndTime:(id)arg0 ;
-(void)resetVideo;
-(void)setImage:(id)arg0 ;
-(void)toggleIsPlaying;


@end


#endif