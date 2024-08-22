// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC27APPLEMEDIASERVICESUIDYNAMIC11VIDEOPLAYER_H
#define _TTC27APPLEMEDIASERVICESUIDYNAMIC11VIDEOPLAYER_H

@class AVPlayer;



@interface _TtC27AppleMediaServicesUIDynamic11VideoPlayer : AVPlayer {
    ? state;
    ? videoUrl;
    ? videoObserver;
    ? playerItem;
    ? failure;
    ? failureCount;
    ? playbackChecks;
    ? shouldBePlaying;
    ? shouldLoopPlayback;
    ? lastPlaybackTimeGuard;
    ? lastPlaybackTimeUnsynchronized;
    ? delegate;
}




-(id)init;
-(id)initWithPlayerItem:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)dealloc;
-(void)pause;
-(void)play;


@end


#endif