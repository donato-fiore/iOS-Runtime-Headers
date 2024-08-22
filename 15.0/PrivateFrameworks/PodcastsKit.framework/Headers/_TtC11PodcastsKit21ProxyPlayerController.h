// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC11PODCASTSKIT21PROXYPLAYERCONTROLLER_H
#define _TTC11PODCASTSKIT21PROXYPLAYERCONTROLLER_H

@protocol PKPlayerController;

#import <Foundation/Foundation.h>

#import "PKEpisode.h"
#import "PKDurationSnapshot.h"

@interface _TtC11PodcastsKit21ProxyPlayerController : NSObject <PKPlayerController>

 {
    ? playerResponseHandler;
    ? contextExpirationTime;
    ? contextTuple;
    ? _currentContentItemIdentifier;
    ? requestResponseController;
}


@property (nonatomic, readonly) CGFloat backwardJumpDuration;
@property (nonatomic, retain) PKEpisode *currentEpisode; // ivar: currentEpisode
@property (nonatomic, readonly) PKDurationSnapshot *durationSnapshot;
@property (nonatomic, readonly) CGFloat forwardJumpDuration;
@property (nonatomic, copy) id *playerResponseHandler;


-(id)init;
-(void)jumpBackwardsWithCompletion:(id)arg0 ;
-(void)jumpForwardsWithCompletion:(id)arg0 ;
-(void)pauseWithCompletion:(id)arg0 ;
-(void)playWithCompletion:(id)arg0 ;
-(void)seekToPositionWithElapsedTime:(CGFloat)arg0 completion:(id)arg1 ;
-(void)setManifest:(id)arg0 startPlayback:(BOOL)arg1 completion:(id)arg2 ;
-(void)startPlayback:(id)arg0 completion:(id)arg1 ;


@end


#endif