// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCVIDEOVIEW_H
#define ASCVIDEOVIEW_H

@class UIView, AVPlayer, AVPlayerLayer;


#import "ASCBorderedScreenshotView.h"

@interface ASCVideoView : UIView

@property (readonly, nonatomic) BOOL isPlaying; // ivar: _isPlaying
@property (readonly, nonatomic) AVPlayer *player; // ivar: _player
@property (readonly, nonatomic) AVPlayerLayer *playerLayer; // ivar: _playerLayer
@property (readonly, nonatomic) ASCBorderedScreenshotView *previewFrameArtwork; // ivar: _previewFrameArtwork


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 videoURL:(id)arg1 ;
-(struct CGSize )preferredVideoSize;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)pauseVideo;
-(void)playVideo;
-(void)resetVideo;
-(void)setImage:(id)arg0 withDecoration:(id)arg1 ;
-(void)toggleIsPlaying;


@end


#endif