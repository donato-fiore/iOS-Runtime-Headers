// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSCOREHAPTICSPLAYER_H
#define SSCOREHAPTICSPLAYER_H

@class NSURL, NSDictionary, CHHapticEngine;
@protocol CHHapticAdvancedPatternPlayerExtended;

#import <Foundation/Foundation.h>


@interface SSCoreHapticsPlayer : NSObject {
    id<CHHapticAdvancedPatternPlayerExtended> *_audioPlayer;
    id<CHHapticAdvancedPatternPlayerExtended> *_hapticPlayer;
    NSURL *_audioURL;
    NSUInteger _audioResourceID;
    NSDictionary *_hapticPatternDict;
    CGFloat _audioPatternDuration;
    CGFloat _hapticPatternDuration;
    unsigned int _clientCompletionToken;
    BOOL _shouldPlayAudioFinal;
    BOOL _shouldPlayHapticsFinal;
    BOOL _audioPlaybackFinished;
    BOOL _hapticPlaybackFinished;
}


@property (readonly) CHHapticEngine *engine; // ivar: _engine
@property (readonly) NSUInteger ssid; // ivar: _ssid


-(BOOL)createAudioPlayerAndReturnError:(*id)arg0 ;
-(BOOL)doInit:(id)arg0 haptic:(id)arg1 error:(*id)arg2 ;
-(BOOL)playWithOptions:(id)arg0 completionCallbackToken:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)prepareHapticPatternFromPlayOptions:(id)arg0 ;
-(BOOL)startPlayerAtTime:(CGFloat)arg0 forAudio:(BOOL)arg1 error:(*id)arg2 ;
-(NSUInteger)createAudioResource:(id)arg0 error:(*id)arg1 ;
-(id)getHapticDictionaryFromURL:(id)arg0 ;
-(id)init;
-(id)initWithAudio:(id)arg0 haptic:(id)arg1 error:(*id)arg2 ;
-(id)initWithAudio:(id)arg0 hapticDictionary:(id)arg1 error:(*id)arg2 ;
-(id)setupDefaultEngineConfigBlock;
-(void)createHapticPlayer:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)handleFinish;
-(void)prewarm:(BOOL)arg0 ;
-(void)registerCompletionAndStop;
-(void)registerCompletionPortion:(BOOL)arg0 ;
-(void)setupLooping;
-(void)stop:(BOOL)arg0 ;


@end


#endif