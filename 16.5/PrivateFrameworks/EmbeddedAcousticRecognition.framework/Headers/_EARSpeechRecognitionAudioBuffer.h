// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EARSPEECHRECOGNITIONAUDIOBUFFER_H
#define _EARSPEECHRECOGNITIONAUDIOBUFFER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_EARSpeechRecognizer.h"

@interface _EARSpeechRecognitionAudioBuffer : NSObject {
    ? _buffer;
    NSObject<OS_dispatch_queue> *_queue;
    _EARSpeechRecognizer *_speechRecognizer;
    BOOL _cancelled;
    BOOL _ended;
}


@property (readonly) CGFloat bufferedAudioDuration;
@property (readonly) CGFloat consumedAudioDuration;


+(void)initialize;
-(?)_initWithAudioBufferspeechRecognizer;
-(?)_setUnderlyingBuffer;
-(NSUInteger)packetArrivalTimestampFromAudioTime:(float)arg0 ;
-(void)_detachFromRecognizer;
-(void)addAudioSampleData:(id)arg0 ;
-(void)addAudioSamples:(*short)arg0 count:(NSUInteger)arg1 ;
-(void)cancelRecognition;
-(void)endAudio;
-(void)triggerServerSideEndPointer;


@end


#endif