// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRXVOICERECORDER_H
#define TVRXVOICERECORDER_H

@class AVAudioFormat, AVVoiceController, NSString;
@protocol AVVoiceControllerRecordDelegate, TVRXVoiceRecorderDelegate;

#import <Foundation/Foundation.h>


@interface TVRXVoiceRecorder : NSObject <AVVoiceControllerRecordDelegate>

 {
    NSInteger _state;
    AudioStreamBasicDescription _audioFormat;
    AVAudioFormat *_avAudioFormat;
    AVVoiceController *_voiceController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVRXVoiceRecorderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL recordsAutomatically; // ivar: _recordsAutomatically
@property (readonly) Class superclass;


-(id)_init;
-(id)audioFormatSettings;
-(void)_processAudioBufferOnMainQueue:(id)arg0 ;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)voiceControllerDidStopRecording:(id)arg0 forReason:(NSInteger)arg1 ;
-(void)voiceControllerEncoderErrorDidOccur:(id)arg0 error:(id)arg1 ;
-(void)voiceControllerRecordBufferAvailable:(id)arg0 buffer:(id)arg1 ;


@end


#endif