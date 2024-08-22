// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPYOUTUBEVIDEOVIEW_H
#define LPYOUTUBEVIDEOVIEW_H

@class NSString;
@protocol LPYouTubePlayerDelegate;


#import "LPVideoView.h"
#import "LPYouTubePlayerView.h"

@interface LPYouTubeVideoView : LPVideoView <LPYouTubePlayerDelegate>

 {
    LPYouTubePlayerView *_platformYouTubeView;
    BOOL _allowingInteractionUntilPlaybackResumes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isMuted;
-(BOOL)shouldShowMuteButton;
-(BOOL)usesCustomFullScreenImplementation;
-(BOOL)usesSharedAudioSession;
-(CGFloat)volume;
-(id)createVideoPlayerView;
-(id)initWithHost:(id)arg0 video:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5 ;
-(void)enterCustomFullScreen;
-(void)setAllowsUserInteractionWithVideoPlayer:(BOOL)arg0 ;
-(void)setMuted:(BOOL)arg0 ;
-(void)setPlaying:(BOOL)arg0 ;
-(void)setVolume:(CGFloat)arg0 ;
-(void)youTubePlayer:(id)arg0 didChangeToFullScreen:(BOOL)arg1 ;
-(void)youTubePlayer:(id)arg0 didChangeToState:(NSInteger)arg1 ;
-(void)youTubePlayer:(id)arg0 didReceiveError:(id)arg1 ;


@end


#endif