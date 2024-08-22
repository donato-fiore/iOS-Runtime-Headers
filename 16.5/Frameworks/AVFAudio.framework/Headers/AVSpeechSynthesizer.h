// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSPEECHSYNTHESIZER_H
#define AVSPEECHSYNTHESIZER_H

@class NSArray;
@protocol AVSpeechSynthesizerDelegate;

#import <Foundation/Foundation.h>


@interface AVSpeechSynthesizer : NSObject

@property (weak, nonatomic) NSObject<AVSpeechSynthesizerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL mixToTelephonyUplink; // ivar: _mixToTelephonyUplink
@property (retain, nonatomic) NSArray *outputChannels; // ivar: _outputChannels
@property (readonly, nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (readonly, nonatomic, getter=isSpeaking) BOOL speaking; // ivar: _speaking
@property (nonatomic) BOOL usesApplicationAudioSession; // ivar: _usesApplicationAudioSession


+(void)initialize;
-(BOOL)continueSpeaking;
-(BOOL)pauseSpeakingAtBoundary:(NSInteger)arg0 ;
-(BOOL)stopSpeakingAtBoundary:(NSInteger)arg0 ;
-(void)speakUtterance:(id)arg0 ;
-(void)writeUtterance:(id)arg0 toBufferCallback:(id)arg1 ;
// -(void)writeUtterance:(id)arg0 toBufferCallback:(id)arg1 toMarkerCallback:(unk)arg2  ;


@end


#endif