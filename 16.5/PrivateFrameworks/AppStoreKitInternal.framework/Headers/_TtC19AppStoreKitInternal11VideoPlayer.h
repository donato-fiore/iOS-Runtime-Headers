// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19APPSTOREKITINTERNAL11VIDEOPLAYER_H
#define _TTC19APPSTOREKITINTERNAL11VIDEOPLAYER_H

@class AVPlayer;



@interface _TtC19AppStoreKitInternal11VideoPlayer : AVPlayer {
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