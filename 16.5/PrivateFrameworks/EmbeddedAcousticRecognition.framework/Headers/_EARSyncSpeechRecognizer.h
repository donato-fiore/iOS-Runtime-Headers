// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EARSYNCSPEECHRECOGNIZER_H
#define _EARSYNCSPEECHRECOGNIZER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_EARFormatter.h"

@interface _EARSyncSpeechRecognizer : NSObject {
    NSObject<OS_dispatch_queue> *_formatterQueue;
    _EARFormatter *_formatter;
    shared_ptr<quasar::SyncSpeechRecognizer> _syncRecognizer;
    NSString *_configPath;
}




+(void)initialize;
-(id)getSpeechRecognitionResultFromTokens:(struct vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>> )arg0 taskName:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 memoryLock:(BOOL)arg1 ;
-(id)resultsWithAddedAudio:(id)arg0 numberOfSamples:(NSUInteger)arg1 taskName:(id)arg2 ;
-(id)resultsWithAddedFloatAudio:(id)arg0 numberOfSamples:(NSUInteger)arg1 taskName:(id)arg2 ;
-(id)resultsWithEndedAudio;
-(void)resetWithSamplingRate:(unsigned int)arg0 language:(id)arg1 taskType:(id)arg2 userId:(id)arg3 sessionId:(id)arg4 deviceId:(id)arg5 farField:(BOOL)arg6 audioSource:(id)arg7 maxAudioBufferSizeSeconds:(unsigned int)arg8 ;


@end


#endif