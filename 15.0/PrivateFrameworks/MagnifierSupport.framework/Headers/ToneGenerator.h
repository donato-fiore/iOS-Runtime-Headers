// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TONEGENERATOR_H
#define TONEGENERATOR_H

@class AVAudioEngine, NSURL, AVAudioPCMBuffer, CHHapticEngine, AVAudioMixerNode, AVAudioPlayerNode, NSTimer;

#import <Foundation/Foundation.h>


@interface ToneGenerator : NSObject {
    BOOL _useSoundFeedback;
    BOOL _useHapticFeedback;
}


@property (retain, nonatomic) AVAudioEngine *audioEngine; // ivar: _audioEngine
@property (retain, nonatomic) NSURL *audioFileURL; // ivar: _audioFileURL
@property (retain, nonatomic) AVAudioPCMBuffer *buffer; // ivar: _buffer
@property (retain, nonatomic) CHHapticEngine *hapticEngine; // ivar: _hapticEngine
@property BOOL hapticEngineStarted; // ivar: _hapticEngineStarted
@property (nonatomic) float leftBalance; // ivar: _leftBalance
@property (readonly, nonatomic) float maxPitchFactor;
@property (readonly, nonatomic) CGFloat maxPulseFrequency;
@property (readonly, nonatomic) float minPitchFactor;
@property (readonly, nonatomic) CGFloat minPulseFrequency;
@property (retain, nonatomic) AVAudioMixerNode *mixer; // ivar: _mixer
@property (nonatomic) float pitchFactor; // ivar: _pitchFactor
@property (retain, nonatomic) AVAudioPlayerNode *player; // ivar: _player
@property (nonatomic) CGFloat pulseDuration; // ivar: _pulseDuration
@property (nonatomic) CGFloat pulseFrequency; // ivar: _pulseFrequency
@property (nonatomic) float rightBalance; // ivar: _rightBalance
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer
@property (nonatomic) BOOL useHapticFeedback;
@property (nonatomic) BOOL useSoundFeedback;
@property (nonatomic) float volume; // ivar: _volume


-(id)configureAudioEngineWithError:(*id)arg0 ;
-(id)configureHapticPlayerWithVolume:(float)arg0 duration:(CGFloat)arg1 error:(*id)arg2 ;
-(id)init;
-(void)configurePlayerWithPitchFactor:(float)arg0 leftBalance:(float)arg1 rightBalance:(float)arg2 volume:(float)arg3 loop:(BOOL)arg4 ;
-(void)pause;
-(void)playHapticsWithVolume:(float)arg0 pulseDuration:(CGFloat)arg1 ;
-(void)playOnePulse;
-(void)playSoundWithPitchFactor:(float)arg0 leftBalance:(float)arg1 rightBalance:(float)arg2 volume:(float)arg3 loop:(BOOL)arg4 ;
-(void)startPulse;
-(void)stopPulse;


@end


#endif