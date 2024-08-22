// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFAUDIOPLAYER_H
#define HFAUDIOPLAYER_H

@class NSURL, AVAudioPlayer, AVAudioSession, NSString, CADisplayLink, NSNumber;
@protocol AVAudioPlayerDelegate, HFAudioPlayerDelegate;

#import <Foundation/Foundation.h>


@interface HFAudioPlayer : NSObject <AVAudioPlayerDelegate>



@property (retain, nonatomic) NSURL *audioFileURL; // ivar: _audioFileURL
@property (retain, nonatomic) AVAudioPlayer *audioPlayer; // ivar: _audioPlayer
@property (retain, nonatomic) AVAudioSession *audioSession; // ivar: _audioSession
@property (nonatomic, getter=isAudioSessionActive) BOOL audioSessionIsActive; // ivar: _audioSessionIsActive
@property (nonatomic) NSUInteger audioSessionOptions; // ivar: _audioSessionOptions
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HFAudioPlayerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (readonly, nonatomic) CGFloat duration;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic) CGFloat playerCurrentTime; // ivar: _playerCurrentTime
@property (nonatomic) NSUInteger playerStopSource; // ivar: _playerStopSource
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (retain, nonatomic) NSNumber *routeChangeReason; // ivar: _routeChangeReason
@property (readonly) Class superclass;
@property (nonatomic) float volume;


-(BOOL)_configureAudioSession:(*id)arg0 ;
-(BOOL)prepareToPlay:(*id)arg0 ;
-(id)initWithAudioFileURL:(id)arg0 audioSessionOptions:(NSUInteger)arg1 delegate:(id)arg2 ;
-(void)_cleanup;
-(void)_deactivateAudioSession;
-(void)_deregisterAudioSessionObservers;
-(void)_displayLinkUpdated:(id)arg0 ;
-(void)_pauseWithReason:(id)arg0 ;
-(void)_registerAudioSessionObservers;
-(void)_stopWithoutAudioSessionDeactivation;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg0 error:(id)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1 ;
-(void)audioSessionDidInterrupt:(id)arg0 ;
-(void)audioSessionMediaServicesWereLost:(id)arg0 ;
-(void)audioSessionMediaServicesWereReset:(id)arg0 ;
-(void)audioSessionRouteChanged:(id)arg0 ;
-(void)dealloc;
-(void)pause;
-(void)play;
-(void)resume;
-(void)stop;
-(void)updateAudioFileURL:(id)arg0 ;


@end


#endif