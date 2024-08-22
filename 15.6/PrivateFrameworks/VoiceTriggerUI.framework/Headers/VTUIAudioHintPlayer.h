// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTUIAUDIOHINTPLAYER_H
#define VTUIAUDIOHINTPLAYER_H

@class NSTimer, NSString, AFVoiceInfo, NSArray;

#import <Foundation/Foundation.h>

#import "VTUISpeechSynthesizer.h"

@interface VTUIAudioHintPlayer : NSObject {
    NSTimer *_timer;
}


@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) AFVoiceInfo *outputVoice; // ivar: _outputVoice
@property (nonatomic) BOOL shouldSpeakAudioHint; // ivar: _shouldSpeakAudioHint
@property (retain, nonatomic) VTUISpeechSynthesizer *synth; // ivar: _synth
@property (retain, nonatomic) NSArray *trainingPageAudioHintFiles; // ivar: _trainingPageAudioHintFiles
@property (retain, nonatomic) NSArray *trainingPageAudioHintInstructions; // ivar: _trainingPageAudioHintInstructions


-(BOOL)_hasValidHints;
-(BOOL)_systemLanguageMatchesSiriLanguage:(id)arg0 siriLanguage:(id)arg1 ;
-(id)_audioHintPathForFileName:(id)arg0 ;
-(id)_getTrainingPageAudioHintFiles;
-(id)initWithLanguage:(id)arg0 ;
-(void)_setupHints;
-(void)_timerFired;
-(void)cleanup;
-(void)speakAudioHint:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)speakConfirmationDialog:(id)arg0 ;


@end


#endif