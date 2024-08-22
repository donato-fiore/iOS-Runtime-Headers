// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSPEECHAUDIOBUFFERRECOGNITIONREQUEST_H
#define SFSPEECHAUDIOBUFFERRECOGNITIONREQUEST_H

@class NSMutableArray, AVAudioConverter, AVAudioFormat;
@protocol SFSpeechRecognitionBufferDelegate, OS_dispatch_queue;


#import "SFSpeechRecognitionRequest.h"

@interface SFSpeechAudioBufferRecognitionRequest : SFSpeechRecognitionRequest {
    id<SFSpeechRecognitionBufferDelegate> *_bufferDelegate;
    NSMutableArray *_queuedBuffers;
    NSObject<OS_dispatch_queue> *_queue;
    AVAudioConverter *_converter;
    BOOL _audioEnded;
}


@property (readonly, nonatomic) AVAudioFormat *nativeAudioFormat;


-(id)_startedConnectionWithLanguageCode:(id)arg0 delegate:(id)arg1 taskHint:(NSInteger)arg2 requestIdentifier:(id)arg3 ;
-(id)_startedLocalConnectionWithLanguageCode:(id)arg0 delegate:(id)arg1 taskHint:(NSInteger)arg2 requestIdentifier:(id)arg3 ;
-(id)init;
-(void)_appendAudioPCMBuffer:(id)arg0 ;
-(void)_convertAndFeedPCMBuffer:(id)arg0 ;
-(void)_drainAndClearAudioConverter;
-(void)_endAudio;
-(void)_handleAudioBuffersWithDelegate:(id)arg0 ;
-(void)appendAudioPCMBuffer:(id)arg0 ;
-(void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)endAudio;


@end


#endif