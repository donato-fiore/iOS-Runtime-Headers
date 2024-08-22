// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TISKMETRICCOLLECTOR_H
#define TISKMETRICCOLLECTOR_H

@class NSMutableDictionary, NSMutableArray, NSArray, TIKeyboardInput, TIUserModelDataStore, NSString, NSDictionary, NLTagger;
@protocol TITypingSessionAggregatedEventObserver, OS_dispatch_queue, TISensorWriterWrapper;

#import <Foundation/Foundation.h>

#import "TIInputMode.h"
#import "TITypingSession.h"

@interface TISKMetricCollector : NSObject <TITypingSessionAggregatedEventObserver>

 {
    TIInputMode *_inputMode;
    NSMutableDictionary *_touchToEventMap;
    NSMutableArray *_events;
    NSArray *_sortedEvents;
    NSMutableArray *_touches;
    NSMutableArray *_layoutIDs;
    NSMutableArray *_taps;
    NSInteger _wordPosition;
    TIKeyboardInput *_lastInput;
    NSInteger _currentWordPosition;
    NSInteger _eventOrder;
    NSUInteger _aggregatedWordThreshold;
    TIUserModelDataStore *_userModelDataStore;
    BOOL _accentedLanguage;
    NSMutableArray *_accentedLayoutsMap;
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_workQueue;
    int _tccNotifyToken;
    BOOL _isTCCAuthorized;
    BOOL _skipTCCAuthorization;
    NSDictionary *_wordBucketDictionary;
    NSDictionary *_emojiBuckets;
    NLTagger *_tagger;
    NSString *_previousWord;
}


@property (retain, nonatomic) NSMutableArray *currentSessionSamplesArray; // ivar: _currentSessionSamplesArray
@property (retain, nonatomic) NSObject<TISensorWriterWrapper> *dataWriter; // ivar: _dataWriter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLoaded; // ivar: _isLoaded
@property (retain, nonatomic) NSMutableArray *savedSessionSamplesArray; // ivar: _savedSessionSamplesArray
@property (readonly) Class superclass;
@property (retain, nonatomic) TITypingSession *typingSession; // ivar: _typingSession
@property (nonatomic) NSUInteger wordAccumulationThreshold; // ivar: _wordAccumulationThreshold


+(BOOL)isSensorKitSupported:(id)arg0 ;
+(id)makeMetricCollector:(id)arg0 wordsThreshold:(NSUInteger)arg1 isTesting:(BOOL)arg2 ;
-(CGFloat)totalTimeSpan;
-(CGFloat)totalTimeSpanFromLastTap;
-(id)_consumeTypingSession:(id)arg0 ;
-(id)_findSessionWithLayoutOfSameDimentions:(id)arg0 layout:(id)arg1 ;
-(id)_insertEmojiSwitchEvents:(id)arg0 ;
-(id)_mapIDToLayout:(NSUInteger)arg0 ;
-(id)_retrieveSavedSessionSampleArray;
-(id)consumeTypingSession:(id)arg0 ;
-(id)eventsDescription;
-(id)eventsDescription:(BOOL)arg0 ;
-(id)getWordBucketCategoryForWord:(id)arg0 ;
-(id)init:(id)arg0 ;
-(id)init:(id)arg0 wordsThreshold:(NSUInteger)arg1 ;
-(id)init:(id)arg0 wordsThreshold:(NSUInteger)arg1 accentedLanguage:(BOOL)arg2 ;
-(id)init:(id)arg0 wordsThreshold:(NSUInteger)arg1 accentedLanguage:(BOOL)arg2 skipTCCAuthorization:(BOOL)arg3 ;
-(id)lemmatizeWord:(id)arg0 ;
-(id)loadDataWithFilename:(id)arg0 ;
-(id)privateEventsDescription;
-(void)_clear;
-(void)_coalesceTaps;
-(void)_consumeDeleteWordEvent:(id)arg0 ;
-(void)_consumeInputsAndTouches:(id)arg0 occurenceTime:(CGFloat)arg1 emojiSearchMode:(BOOL)arg2 ;
-(void)_consumePathsAndPredictions:(id)arg0 emojiSearchMode:(BOOL)arg1 ;
-(void)_consumeUserAction:(id)arg0 ;
-(void)_consumeWordEntry:(id)arg0 ;
-(void)_haltSessionTypingTimer:(id)arg0 event:(id)arg1 ;
-(void)_loadStatsFromDataStore;
-(void)_mapTapsToEvents;
-(void)_mergeStats:(id)arg0 ;
-(void)_metricWalk;
-(void)_persistSavedSessionSampleArray;
-(void)_processEvents;
-(void)_reportRipeBuckets;
-(void)_resetConsumeState;
-(void)_setupTCCAuthNotification;
-(void)dealloc;
-(void)handleTypingSession:(id)arg0 ;
-(void)loadEmojiBucketDictionaryIfNecessary;
-(void)loadWordBucketDictionaryIfNecessary;
-(void)placeTaskOnWorkQueue:(id)arg0 ;
-(void)removeSamplesWithNegativeDurationForTypingSession:(id)arg0 ;
-(void)sessionDidEnd:(id)arg0 aligned:(id)arg1 ;
-(void)setupSessionSamplesForLayouts;
-(void)testTCCAuthorization;


@end


#endif