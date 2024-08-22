// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVIDEOPREVIEWVIEWCONTROLLER_H
#define CKVIDEOPREVIEWVIEWCONTROLLER_H

@class UIViewController, AVPlayer, AVPlayerItem, AVPlayerLayer;
@protocol CKVideoPreviewViewControllerDelegate;



@interface CKVideoPreviewViewController : UIViewController

@property (retain, nonatomic) AVPlayer *avPlayer; // ivar: _avPlayer
@property (retain, nonatomic) AVPlayerItem *avPlayerItem; // ivar: _avPlayerItem
@property (retain, nonatomic) AVPlayerLayer *avPlayerLayer; // ivar: _avPlayerLayer
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) BOOL reachedEnd; // ivar: _reachedEnd
@property (nonatomic) BOOL redisplayStatusBar; // ivar: _redisplayStatusBar
@property (weak, nonatomic) NSObject<CKVideoPreviewViewControllerDelegate> *videoPreviewDelegate; // ivar: _videoPreviewDelegate


-(BOOL)prefersStatusBarHidden;
-(BOOL)togglePlayPause;
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)play;
-(void)setVideoFileURL:(id)arg0 ;
-(void)videoDidReachEnd:(id)arg0 ;


@end


#endif