// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMINTERNALAVAUDIOPLAYER_H
#define IMINTERNALAVAUDIOPLAYER_H

@class AVAudioPlayer, AVPlayer, AVPlayerItem, NSString;
@protocol AVAudioPlayerDelegate, IMInternalAVAudioPlayerDelegate;

#import <Foundation/Foundation.h>


@interface IMInternalAVAudioPlayer : NSObject <AVAudioPlayerDelegate>

 {
    AVAudioPlayer *_avAudioPlayer;
    AVPlayer *_avPlayer;
    AVPlayerItem *_playerItem;
    NSInteger _avPlayerState;
    BOOL _avPlayerPrepareRequested;
    BOOL _avPlayerPlayRequested;
}


@property (readonly, nonatomic) CGFloat currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IMInternalAVAudioPlayerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) CGFloat deviceCurrentTime;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger playerType; // ivar: _playerType
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly) Class superclass;
@property (nonatomic) float volume;


-(BOOL)_playAtTime:(CGFloat)arg0 ;
-(BOOL)playAtTime:(CGFloat)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 playerType:(NSInteger)arg1 ;
-(void)_handleAVPlayerItemStateChange;
-(void)_notifyPlayerDidFinishSuccessfully:(BOOL)arg0 ;
-(void)_notifyPlayerDidPrepareAudioFileSuccessfully:(BOOL)arg0 ;
-(void)_playerItemDidEndNotification:(id)arg0 ;
-(void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)prepareToPlay;
-(void)stop;


@end


#endif