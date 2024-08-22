// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXLTSPEECHTRANSCRIBER_H
#define AXLTSPEECHTRANSCRIBER_H

@class AVAudioEngine, AVAudioSession, NSDate, NSString;
@protocol SFSpeechRecognizerDelegate, SFSpeechRecognitionTaskDelegate, AXLTTranscriberProtocol, AXLTTranscriberDelegateProtocol;

#import <Foundation/Foundation.h>

#import "AXLTTranscriber.h"

@interface AXLTSpeechTranscriber : NSObject <SFSpeechRecognizerDelegate, SFSpeechRecognitionTaskDelegate, AXLTTranscriberProtocol>



@property (retain, nonatomic) AVAudioEngine *audioEngine; // ivar: _audioEngine
@property (retain, nonatomic) AVAudioSession *audioSession; // ivar: _audioSession
@property (retain, nonatomic) NSDate *bufferLogTime; // ivar: _bufferLogTime
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXLTTranscriberDelegateProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isTranscribing; // ivar: _isTranscribing
@property (nonatomic) int pid; // ivar: _pid
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDate *textLogTime; // ivar: _textLogTime
@property (retain, nonatomic) AXLTTranscriber *transcriber; // ivar: _transcriber


-(BOOL)startTranscription:(*id)arg0 ;
-(BOOL)stopTranscription:(*id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)audioEngineConfigurationDidChange:(id)arg0 ;
-(void)calcHistogramForBuffer:(id)arg0 ;
-(void)cleanUp;
-(void)initializeAudioTap;
-(void)mediaServicesWereReset:(id)arg0 ;
-(void)resetTranscription;
-(void)setupAudioSession;
-(void)setupTranscriberIfNeeded;


@end


#endif