// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSSYNCKEYWORDANALYZERQUASAR_H
#define CSSYNCKEYWORDANALYZERQUASAR_H

@class NSMutableArray, NSArray, _EARSyncSpeechRecognizer, NSDictionary;

#import <Foundation/Foundation.h>


@interface CSSyncKeywordAnalyzerQuasar : NSObject {
    NSMutableArray *_previousUtteranceTokens;
    NSArray *_lastReportedRecogResults;
    NSArray *_triggerTokenList;
    _EARSyncSpeechRecognizer *_syncRecognizer;
    BOOL _useKeywordSpotting;
    BOOL _requireReset;
    BOOL _preventDuplicatedReset;
}


@property (nonatomic) NSUInteger activeChannel; // ivar: _activeChannel
@property (retain, nonatomic) NSDictionary *ctcKwdToPhraseIdMap; // ivar: _ctcKwdToPhraseIdMap
@property (readonly, nonatomic) NSDictionary *phraseIdScores;
@property (nonatomic) CGFloat triggerConfidence; // ivar: _triggerConfidence


+(void)dumpEARSpeechRecognitionResults:(id)arg0 ;
-(CGFloat)_getConfidence:(id)arg0 ;
-(id)initWithConfigPath:(id)arg0 triggerTokens:(id)arg1 useKeywordSpotting:(BOOL)arg2 preventDuplicatedReset:(BOOL)arg3 ;
-(void)_calculateTriggerConfidence:(id)arg0 ;
-(void)flushAudio;
-(void)processAudioChunk:(id)arg0 ;
-(void)resetWithLanguage:(id)arg0 withFarField:(unsigned char)arg1 withAudioSource:(id)arg2 ;


@end


#endif