// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSVTUITWOPASSKEYWORDDETECTOR_H
#define CSVTUITWOPASSKEYWORDDETECTOR_H

@class CSKeywordAnalyzerNDAPI, CSPhraseDetector, CSAudioCircularBuffer, CSKeywordAnalyzerNDAPIResult;


#import "CSVTUIKeywordDetector.h"

@interface CSVTUITwoPassKeywordDetector : CSVTUIKeywordDetector {
    CSKeywordAnalyzerNDAPI *_keywordAnalyzer;
    CSPhraseDetector *_phraseDetector;
    float _keywordThreshold;
    CSAudioCircularBuffer *_audioBuffer;
    NSUInteger _extraSamplesAtStart;
    NSUInteger _analyzerTrailingSamples;
    BOOL _isFirstPassTriggered;
    CSKeywordAnalyzerNDAPIResult *_firstPassResult;
}




-(NSUInteger)_sampleLengthFrom:(unsigned int)arg0 To:(unsigned int)arg1 ;
-(id)analyze:(id)arg0 ;
-(id)initWithAsset:(id)arg0 ;
-(id)triggeredUtterance:(id)arg0 ;
-(void)internalReset;
-(void)reset;


@end


#endif