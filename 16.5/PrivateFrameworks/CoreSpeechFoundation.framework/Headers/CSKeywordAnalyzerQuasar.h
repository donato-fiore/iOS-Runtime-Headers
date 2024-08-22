// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSKEYWORDANALYZERQUASAR_H
#define CSKEYWORDANALYZERQUASAR_H

@class NSMutableArray, NSArray, _EARSpeechRecognizer, _EARSpeechRecognitionAudioBuffer, NSDictionary, NSString;
@protocol _EARSpeechRecognitionResultStream, OS_dispatch_queue, CSKeywordAnalyzerQuasarScoreDelegate;

#import <Foundation/Foundation.h>


@interface CSKeywordAnalyzerQuasar : NSObject <_EARSpeechRecognitionResultStream>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_previousUtteranceTokens;
    NSArray *_triggerTokenList;
    _EARSpeechRecognizer *_recognizer;
    _EARSpeechRecognitionAudioBuffer *_recognizerBuffer;
    BOOL _useKeywordSpotting;
}


@property (nonatomic) NSUInteger activeChannel; // ivar: _activeChannel
@property (retain, nonatomic) NSDictionary *ctcKwdToPhIdMap; // ivar: _ctcKwdToPhIdMap
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSKeywordAnalyzerQuasarScoreDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat triggerConfidence; // ivar: _triggerConfidence


-(CGFloat)_getConfidence:(id)arg0 ;
-(id)_phIdToCtcScoreMap;
-(id)initWithConfigPath:(id)arg0 triggerTokens:(id)arg1 useKeywordSpotting:(BOOL)arg2 ;
-(void)_recognizeWavData:(*short)arg0 length:(int)arg1 ;
-(void)dealloc;
-(void)endAudio;
-(void)processAudioChunk:(id)arg0 ;
-(void)reset;
-(void)runRecognition;
-(void)speechRecognizer:(id)arg0 didFinishRecognitionWithError:(id)arg1 ;
-(void)speechRecognizer:(id)arg0 didRecognizeFinalResults:(id)arg1 ;
-(void)speechRecognizer:(id)arg0 didRecognizePartialResult:(id)arg1 ;


@end


#endif