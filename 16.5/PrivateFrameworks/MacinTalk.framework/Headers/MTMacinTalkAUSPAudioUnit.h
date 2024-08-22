// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTMACINTALKAUSPAUDIOUNIT_H
#define MTMACINTALKAUSPAUDIOUNIT_H

@class AVSpeechSynthesisProviderAudioUnit, AUAudioUnitBusArray, NSArray;
@protocol MacinTalkPhraseProcessorDelegate;



@interface MTMacinTalkAUSPAudioUnit : AVSpeechSynthesisProviderAudioUnit <MacinTalkPhraseProcessorDelegate>

 {
    ? outputBus;
    ? _outputBusses;
    ? requests;
    ? currentPhraseProcessor;
    ? currentPlainTalkString;
    ? currentBuffer;
    ? currentSegmentOffset;
    ? ssmlMarkerPosition;
    ? voice;
    ? lastVoice;
}


@property (nonatomic, readonly) id *internalRenderBlock;
@property (nonatomic, readonly) AUAudioUnitBusArray *outputBusses;
@property (nonatomic, copy) NSArray *speechVoices;


-(BOOL)allocateRenderResourcesAndReturnError:(*id)arg0 ;
-(id)initWithComponentDescription:(struct AudioComponentDescription )arg0 options:(unsigned int)arg1 error:(*id)arg2 ;
-(void)cancelSpeechRequest;
-(void)didFinishGeneratingSamples;
-(void)didGenerateSamplesForPhoneme:(NSInteger)arg0 phonemeOpcode:(short)arg1 ;
-(void)didGenerateSamplesForSync:(NSInteger)arg0 message:(unsigned int)arg1 ;
-(void)didGenerateSamplesForWord:(NSInteger)arg0 stringPosition:(NSUInteger)arg1 length:(unsigned short)arg2 ;
-(void)synthesizeSpeechRequest:(id)arg0 ;


@end


#endif