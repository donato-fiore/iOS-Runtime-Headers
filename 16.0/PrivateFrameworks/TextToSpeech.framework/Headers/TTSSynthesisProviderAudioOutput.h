// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTSSYNTHESISPROVIDERAUDIOOUTPUT_H
#define TTSSYNTHESISPROVIDERAUDIOOUTPUT_H

@class AVAudioSession, AVAudioEngine, AVAudioFormat, AVAudioPlayerNode;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface TTSSynthesisProviderAudioOutput : NSObject

@property (retain, nonatomic) AVAudioSession *audioSession; // ivar: _audioSession
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionHandlerQueue; // ivar: _completionHandlerQueue
@property (retain, nonatomic) AVAudioEngine *engine; // ivar: _engine
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *engineShutdownQueue; // ivar: _engineShutdownQueue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *engineShutdownTimer; // ivar: _engineShutdownTimer
@property (retain, nonatomic) AVAudioFormat *outputFormat; // ivar: _outputFormat
@property (retain, nonatomic) AVAudioPlayerNode *player; // ivar: _player
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *playerStateChangeQueue; // ivar: _playerStateChangeQueue


-(BOOL)_play:(NSInteger)arg0 ;
-(BOOL)isRunning;
-(BOOL)play;
-(id)init;
-(void)_scheduleEngineShutdown;
-(void)pause;
-(void)scheduleBuffer:(id)arg0 completionCallbackType:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)stop;


@end


#endif