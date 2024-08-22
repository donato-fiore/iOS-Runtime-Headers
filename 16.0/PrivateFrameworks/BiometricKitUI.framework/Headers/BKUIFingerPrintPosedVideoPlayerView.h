// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKUIFINGERPRINTPOSEDVIDEOPLAYERVIEW_H
#define BKUIFINGERPRINTPOSEDVIDEOPLAYERVIEW_H

@class UIView, NSString, UIImage, AVPlayerLayer, UIImageView, AVQueuePlayer;



@interface BKUIFingerPrintPosedVideoPlayerView : UIView

@property (copy, nonatomic) NSString *assetName; // ivar: _assetName
@property (retain, nonatomic) UIImage *horizontalPosedImage; // ivar: _horizontalPosedImage
@property (retain, nonatomic) AVPlayerLayer *playerLayer; // ivar: _playerLayer
@property (retain, nonatomic) UIImageView *portraitImageView; // ivar: _portraitImageView
@property (retain, nonatomic) UIImage *verticalPosedImage; // ivar: _verticalPosedImage
@property (retain, nonatomic) AVQueuePlayer *videoPlayer; // ivar: _videoPlayer


+(Class)layerClass;
-(id)_devicePrefix;
-(id)_filters;
-(id)initWithAssetName:(id)arg0 ;
-(void)_setFilters:(id)arg0 ;
-(void)_updateImageForOrientation:(NSInteger)arg0 ;
-(void)hideVideoPlayer;
-(void)itemDidFinishPlaying:(id)arg0 ;
-(void)layoutSubviews;
-(void)load;
-(void)showVideoPlayer;
-(void)transitionToOrientation:(NSInteger)arg0 ;


@end


#endif