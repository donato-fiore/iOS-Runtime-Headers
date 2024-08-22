// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIWORDSEARCH_H
#define TIWORDSEARCH_H

@class NSCache, NSString;
@protocol TIKeyboardActivityObserving;

#import <Foundation/Foundation.h>

#import "TIInputMode.h"
#import "TIMecabraEnvironment.h"
#import "TIMecabraWrapper.h"
#import "TIWordSearchOperationGetCandidates.h"

@interface TIWordSearch : NSObject <TIKeyboardActivityObserving>

 {
    id *_userDictionaryObserver;
    id *_dictionaryUpdateObserver;
}


@property BOOL autoCorrects; // ivar: _autoCorrects
@property (retain, nonatomic) NSCache *candidatesCache; // ivar: _candidatesCache
@property (copy, nonatomic) id *contactObserver; // ivar: _contactObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disablePersonalData; // ivar: _disablePersonalData
@property (readonly) NSUInteger hash;
@property (readonly) TIInputMode *inputMode; // ivar: _inputMode
@property (readonly) *__Mecabra mecabra;
@property (retain, nonatomic) TIMecabraEnvironment *mecabraEnvironment; // ivar: _mecabraEnvironment
@property (readonly, nonatomic) int mecabraLanguage;
@property (retain) TIMecabraWrapper *mecabraWrapper; // ivar: _mecabraWrapper
@property (retain) TIWordSearchOperationGetCandidates *operation; // ivar: _operation
@property BOOL shouldLearnAcceptedCandidate; // ivar: _shouldLearnAcceptedCandidate
@property (readonly) Class superclass;
@property (retain, nonatomic) id *supplementalLexiconObserver; // ivar: _supplementalLexiconObserver


+(id)configureUserDictionaryObserver:(id)arg0 previousObserver:(id)arg1 ;
+(id)recipientRecords;
+(id)sharedOperationQueue;
-(BOOL)addFacemarkCandidatesToResultSet:(id)arg0 forInput:(id)arg1 ;
-(BOOL)isCancelled;
-(BOOL)shareVocabulary;
-(id)cachedCandidatesForOperation:(id)arg0 ;
-(id)candidatesCacheKeyForOperation:(id)arg0 ;
-(id)candidatesForOperation:(id)arg0 ;
-(id)initTIWordSearchWithInputMode:(id)arg0 ;
-(id)initTIWordSearchWithInputMode:(id)arg0 mecabraWrapper:(id)arg1 ;
-(id)uncachedCandidatesForOperation:(id)arg0 ;
-(unsigned char)nameReadingPairGenerationMode;
-(void)_addFacemarkCandidatesToResultSet:(id)arg0 forInput:(id)arg1 ;
-(void)adaptOfflineToParagraph:(id)arg0 adaptationContext:(id)arg1 timeStamp:(CGFloat)arg2 ;
-(void)addContact:(id)arg0 toVocabulary:(*void)arg1 toReadingPairs:(id)arg2 ;
-(void)adjustEnvironmentOnAction:(NSInteger)arg0 ;
-(void)cancel;
-(void)clearCache;
-(void)clearLearningDictionary;
-(void)clearLeftDocumentContext;
-(void)clearObservers;
-(void)commitPunctuationSurface:(id)arg0 ;
-(void)commitSurface:(id)arg0 ;
-(void)completeOperationsInQueue;
-(void)contactStoreDidChange:(id)arg0 ;
-(void)dealloc;
-(void)declareEndOfSentence;
-(void)dynamicDictionariesRemoved:(id)arg0 ;
-(void)endInputSession;
-(void)flushDynamicData;
-(void)handleMemoryPressureLevel:(NSUInteger)arg0 excessMemoryInBytes:(NSUInteger)arg1 ;
-(void)insertTopSupplementalCandidateSurroundingCursorToFrontOfResultSet:(id)arg0 ;
-(void)keyboardActivityDidTransition:(id)arg0 ;
-(void)lastAcceptedCandidateCorrected;
-(void)performAccept:(*void)arg0 isPartial:(BOOL)arg1 ;
-(void)performOperationAsync:(id)arg0 ;
-(void)performOperationAsync:(id)arg0 withBackgroundActivityAssertion:(BOOL)arg1 ;
-(void)releaseBackgroundActivityAssertion;
-(void)resetPreviousWord;
-(void)revertInlineCandidate;
-(void)saveLearningDictionary;
-(void)setDebuggingLogEnabled:(BOOL)arg0 ;
-(void)setLanguageModelAdaptationContext:(id)arg0 ;
-(void)setLanguageModelAdaptationContextWithClientIdentifier:(id)arg0 recipientIdentifier:(id)arg1 ;
-(void)setLeftDocumentContext:(id)arg0 rightDocumentContext:(id)arg1 ;
-(void)updateAddressBook;
-(void)updateDictionaryPaths;
-(void)updateMecabraState;
-(void)updateSupplementalLexicon;
-(void)updateUserWordEntries;


@end


#endif