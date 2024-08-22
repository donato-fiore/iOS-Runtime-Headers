// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCSENTENCECACHE_H
#define TCSENTENCECACHE_H

@class NSMutableDictionary, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TCSentenceCache : NSObject {
    NSMutableDictionary *_cachedResultsDictionary;
    NSMutableArray *_cachedSentenceArray;
    NSMutableSet *_cachedAutocorrectedSentences;
    NSMutableDictionary *_cachedReversionsDictionary;
    NSMutableArray *_cachedCorrectionArray;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSUInteger _capacity;
}


@property (readonly) NSUInteger capacity;


-(BOOL)_detailRange:(struct _NSRange )arg0 inSentence:(id)arg1 matchesRange:(struct _NSRange )arg2 inString:(id)arg3 sentenceRange:(struct _NSRange )arg4 ;
-(BOOL)_retrieveCachedResultsForSentence:(id)arg0 offset:(NSUInteger)arg1 mutableResults:(id)arg2 ;
-(id)_retrieveCachedGrammarDetailForRange:(struct _NSRange )arg0 inString:(id)arg1 sentenceRange:(struct _NSRange )arg2 matchingSentence:(id)arg3 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)retrieveCachedGrammarDetailForRange:(struct _NSRange )arg0 inString:(id)arg1 sentenceRange:(struct _NSRange )arg2 tagger:(id)arg3 ;
-(id)retrieveCachedReversionsForString:(id)arg0 ;
-(void)_controlRepeatedAutocorrectionResultsForSentence:(id)arg0 offset:(NSUInteger)arg1 mutableResults:(id)arg2 ;
-(void)_inSerialQueueAddCachedReversion:(id)arg0 forCorrections:(id)arg1 ;
-(void)_inSerialQueueAddCachedReversionsForResults:(id)arg0 sentence:(id)arg1 ;
-(void)_storeCachedResults:(id)arg0 forSentence:(id)arg1 ;
-(void)addGrammarDetailsForSentenceRange:(struct _NSRange )arg0 result:(id)arg1 mutableDetails:(id)arg2 ;
-(void)controlRepeatedAutocorrectionResultsForString:(id)arg0 range:(struct _NSRange )arg1 tagger:(id)arg2 offset:(NSUInteger)arg3 mutableResults:(id)arg4 ;
-(void)reset;
-(void)resetRepeatedAutocorrectionCache;
-(void)retrieveCachedResultsForString:(id)arg0 range:(struct _NSRange )arg1 tagger:(id)arg2 offset:(NSUInteger)arg3 mutableResults:(id)arg4 remainingRange:(struct _NSRange *)arg5 ;
-(void)storeCachedResults:(id)arg0 forString:(id)arg1 range:(struct _NSRange )arg2 tagger:(id)arg3 offset:(NSUInteger)arg4 ;


@end


#endif