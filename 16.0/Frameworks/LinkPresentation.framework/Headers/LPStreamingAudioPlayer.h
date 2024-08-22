// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPSTREAMINGAUDIOPLAYER_H
#define LPSTREAMINGAUDIOPLAYER_H

@class AVPlayerItem, AVPlayer, NSHashTable, NSString;
@protocol LPAudioPlayer, LPInProcessMediaPlayable;

#import <Foundation/Foundation.h>

#import "LPAudio.h"

@interface LPStreamingAudioPlayer : NSObject <LPAudioPlayer, LPInProcessMediaPlayable>

 {
    LPAudio *_audio;
    AVPlayerItem *_item;
    AVPlayer *_player;
    id *_timeObserver;
    id *_endObserver;
    NSHashTable *_clients;
    NSUInteger _state;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFullScreen) BOOL fullScreen;
@property (readonly, nonatomic) BOOL hasMuteControl;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger lastInteractionTimestamp;
@property (readonly, nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) BOOL shouldUnmuteWhenUserAdjustsVolume;
@property (readonly, nonatomic) NSUInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat unobscuredAreaFraction;
@property (readonly, nonatomic) BOOL usesSharedAudioSession;


+(id)playerWithAudio:(id)arg0 ;
-(id)initWithAudio:(id)arg0 ;
-(void)addClient:(id)arg0 ;
-(void)dealloc;
-(void)dispatchDidChangeProgressToAllClients:(float)arg0 ;
-(void)dispatchDidFailToPlayToAllClients;
-(void)dispatchDidTransitionToStateToAllClients:(NSUInteger)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)play;
-(void)removeClient:(id)arg0 ;
-(void)reset;
-(void)resetPlaybackState;
-(void)transitionToState:(NSUInteger)arg0 ;


@end


#endif