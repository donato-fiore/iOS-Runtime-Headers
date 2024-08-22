// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANSPEECHUTIL_H
#define ANSPEECHUTIL_H

@class AVAudioSession, NSString, NSMutableDictionary, VSSpeechSynthesizer;
@protocol VSSpeechSynthesizerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ANSpeechUtil : NSObject <VSSpeechSynthesizerDelegate>



@property (retain, nonatomic) AVAudioSession *audioSession; // ivar: _audioSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableDictionary *requests; // ivar: _requests
@property (readonly) Class superclass;
@property (retain, nonatomic) VSSpeechSynthesizer *synthesizer; // ivar: _synthesizer


+(id)_pcmAudioDataFromOpusAudio:(id)arg0 ;
+(id)sharedUtil;
-(id)_fileNameGeneratorWithFileExtension:(id)arg0 ;
-(id)init;
-(void)_handleCompletedSpeechRequest:(id)arg0 error:(id)arg1 ;
-(void)speakText:(id)arg0 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeakingRequest:(id)arg1 withInstrumentMetrics:(id)arg2 ;
-(void)speechSynthesizer:(id)arg0 didFinishSynthesisRequest:(id)arg1 withInstrumentMetrics:(id)arg2 error:(id)arg3 ;
-(void)speechSynthesizer:(id)arg0 didStartSpeakingRequest:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 withSynthesisRequest:(id)arg1 didGenerateAudioChunk:(id)arg2 ;
-(void)synthesizeSpeechToFileFromText:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif