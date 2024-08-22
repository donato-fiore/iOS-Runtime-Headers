// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKUIPEARLAUDIOSESSION_H
#define BKUIPEARLAUDIOSESSION_H

@class AVAudioPlayerNode, AVAudioEngine, AVAudioPCMBuffer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BKUIPearlAudioSession : NSObject {
    AVAudioPlayerNode *_audioNode;
    NSObject<OS_dispatch_queue> *_avPlayerNodeOperationQueue;
    BOOL _mediaServicesConnected;
}


@property (readonly, nonatomic) AVAudioEngine *audioEngine; // ivar: _audioEngine
@property (readonly, nonatomic) AVAudioPCMBuffer *completeSoundBuffer; // ivar: _completeSoundBuffer
@property (readonly, nonatomic) AVAudioPCMBuffer *endSoundBuffer; // ivar: _endSoundBuffer
@property (readonly, nonatomic) AVAudioPCMBuffer *failSoundBuffer; // ivar: _failSoundBuffer
@property (readonly, nonatomic) AVAudioPCMBuffer *lockSoundBuffer; // ivar: _lockSoundBuffer
@property (readonly, nonatomic) AVAudioPCMBuffer *scanSoundBuffer; // ivar: _scanSoundBuffer


+(id)_loadSound:(id)arg0 ;
-(id)_setupMediaStack;
-(id)init;
-(void)_mediaServicesConnectionWasLost:(id)arg0 ;
-(void)_mediaServicesReconnect:(id)arg0 ;
-(void)play;
-(void)scheduleBuffer:(id)arg0 atTime:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)scheduleBuffer:(id)arg0 completionHandler:(id)arg1 ;
-(void)stop;


@end


#endif