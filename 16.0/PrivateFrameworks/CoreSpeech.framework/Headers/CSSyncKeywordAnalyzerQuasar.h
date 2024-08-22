// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSYNCKEYWORDANALYZERQUASAR_H
#define CSSYNCKEYWORDANALYZERQUASAR_H

@class _EARSyncSpeechRecognizer, NSDictionary;

#import <Foundation/Foundation.h>


@interface CSSyncKeywordAnalyzerQuasar : NSObject {
    _EARSyncSpeechRecognizer *_syncRecognizer;
    BOOL _requireReset;
    BOOL _preventDuplicatedReset;
    NSDictionary *_phToPhIdMap;
    NSUInteger _numPhrases;
}


@property (nonatomic) NSUInteger activeChannel; // ivar: _activeChannel


+(id)_phToPhIdMapFromTriggerTokensArray:(id)arg0 ;
+(void)dumpEARSpeechRecognitionResults:(id)arg0 ;
-(id)_getAnalyzedResults:(id)arg0 ;
-(id)getAnalyzedResultsFromAudioChunk:(id)arg0 ;
-(id)getResultsFromFlushedAudio;
-(id)initWithConfigPath:(id)arg0 triggerTokensArray:(id)arg1 preventDuplicatedReset:(BOOL)arg2 memoryLock:(BOOL)arg3 ;
-(void)flushAudio;
-(void)processAudioChunk:(id)arg0 ;
-(void)reset;


@end


#endif