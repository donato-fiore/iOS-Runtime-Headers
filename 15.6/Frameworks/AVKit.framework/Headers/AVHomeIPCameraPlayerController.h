// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVHOMEIPCAMERAPLAYERCONTROLLER_H
#define AVHOMEIPCAMERAPLAYERCONTROLLER_H

@protocol AVHomeIPCameraActionButtonHandling;


#import "AVPlayerController.h"

@interface AVHomeIPCameraPlayerController : AVPlayerController {
    CGFloat _volume;
}


@property (weak, nonatomic) NSObject<AVHomeIPCameraActionButtonHandling> *delegate; // ivar: _delegate
@property (nonatomic, getter=isMuted) BOOL muted; // ivar: _muted
@property (nonatomic) CGSize presentationSize; // ivar: _presentationSize


-(BOOL)hasContent;
-(BOOL)hasEnabledVideo;
-(BOOL)hasLiveStreamingContent;
-(BOOL)hasSeekableLiveStreamingContent;
-(BOOL)isPictureInPicturePossible;
-(BOOL)isPlaying;
-(CGFloat)volume;
-(NSInteger)status;
-(NSInteger)timeControlStatus;
-(void)beginReducingResourcesForPictureInPicturePlayerLayer:(id)arg0 ;
-(void)endReducingResourcesForPictureInPicturePlayerLayer:(id)arg0 ;
-(void)setVolume:(CGFloat)arg0 ;
-(void)togglePlaybackEvenWhenInBackground:(id)arg0 ;


@end


#endif