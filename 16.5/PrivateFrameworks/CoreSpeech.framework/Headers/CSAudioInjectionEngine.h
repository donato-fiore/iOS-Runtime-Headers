// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSAUDIOINJECTIONENGINE_H
#define CSAUDIOINJECTIONENGINE_H

@class NSMutableArray, NSUUID;
@protocol OS_dispatch_source, CSAudioInjectionEngineDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSAudioInjectionFileOption.h"

@interface CSAudioInjectionEngine : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *audioFeedTimer; // ivar: _audioFeedTimer
@property (nonatomic) NSUInteger audioStreamHandleId; // ivar: _audioStreamHandleId
@property (nonatomic) CGFloat bufferDuration; // ivar: _bufferDuration
@property (nonatomic) *OpaqueAudioConverter deinterleaver; // ivar: _deinterleaver
@property (weak, nonatomic) NSObject<CSAudioInjectionEngineDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL didSetScaleFactor; // ivar: _didSetScaleFactor
@property (retain, nonatomic) CSAudioInjectionFileOption *fileOption; // ivar: _fileOption
@property (retain, nonatomic) NSMutableArray *injectionAudioFileList; // ivar: _injectionAudioFileList
@property (retain, nonatomic) NSMutableArray *injectionCompletionNotifyBlocks; // ivar: _injectionCompletionNotifyBlocks
@property (retain, nonatomic) NSMutableArray *injectionStartNotifyBlocks; // ivar: _injectionStartNotifyBlocks
@property (nonatomic) unsigned int inputRecordingNumberOfChannels; // ivar: _inputRecordingNumberOfChannels
@property (nonatomic) BOOL isRecording; // ivar: _isRecording
@property (nonatomic) AudioStreamBasicDescription outASBD; // ivar: _outASBD
@property (nonatomic) *AudioBufferList pNonInterleavedABL; // ivar: _pNonInterleavedABL
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) float scaleFactor; // ivar: _scaleFactor
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


-(BOOL)alwaysOnVoiceTriggerEnabled;
-(BOOL)injectAudio:(id)arg0 ;
// -(BOOL)injectAudio:(id)arg0 withScaleFactor:(float)arg1 outASBD:(struct AudioStreamBasicDescription )arg2 playbackStarted:(id)arg3 completion:(unk)arg4  ;
// -(BOOL)injectAudio:(id)arg0 withScaleFactor:(float)arg1 playbackStarted:(id)arg2 completion:(unk)arg3  ;
-(BOOL)isAlwaysOnVoiceTriggerAvailable;
-(id)_compensateChannelDataIfNeeded:(id)arg0 receivedNumChannels:(unsigned int)arg1 ;
-(id)_deinterleaveBufferIfNeeded:(struct AudioBufferList *)arg0 ;
-(id)initWithStreamHandleId:(NSUInteger)arg0 ;
-(id)initWithStreamHandleId:(NSUInteger)arg0 withInputRecordingNumberOfChannels:(unsigned int)arg1 ;
-(struct AudioStreamBasicDescription )_defaultOutASBD;
-(void)_createDeInterleaverIfNeeded;
-(void)_readAudioBufferAndFeed;
-(void)_startAudioFeedingTimer;
-(void)attachDevice:(id)arg0 ;
-(void)dealloc;
-(void)setAlwaysOnVoiceTriggerEnabled:(BOOL)arg0 ;
-(void)start;
-(void)startAudioStreamWithOption:(id)arg0 ;
-(void)stop;
-(void)stopAudioStream;


@end


#endif