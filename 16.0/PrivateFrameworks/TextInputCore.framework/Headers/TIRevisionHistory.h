// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIREVISIONHISTORY_H
#define TIREVISIONHISTORY_H

@class NSString, NSMutableArray;
@protocol TIRevisionHistoryDelegate;

#import <Foundation/Foundation.h>

#import "TIRevisionHistoryToken.h"
#import "TILRUDictionary.h"

@interface TIRevisionHistory : NSObject

@property (nonatomic) _TIRevisionHistoryTokenIterator currentTokenIterator; // ivar: _currentTokenIterator
@property (nonatomic) NSObject<TIRevisionHistoryDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *documentText; // ivar: _documentText
@property (nonatomic) BOOL isDeletingBackwards; // ivar: _isDeletingBackwards
@property (nonatomic) BOOL isRapidDeleteActive; // ivar: _isRapidDeleteActive
@property (retain, nonatomic) TIRevisionHistoryToken *lastRejectedToken; // ivar: _lastRejectedToken
@property (retain, nonatomic) TILRUDictionary *recentAutocorrections; // ivar: _recentAutocorrections
@property (nonatomic) _NSRange selectedRange; // ivar: _selectedRange
@property (nonatomic) BOOL shouldReportRevisionToDP; // ivar: _shouldReportRevisionToDP
@property (readonly, nonatomic) NSMutableArray *tokenization; // ivar: _tokenization
@property (readonly, nonatomic) *void tokenizer; // ivar: _tokenizer


+(id)documentStateTrimmedToSentenceForState:(id)arg0 ;
-(BOOL)isSelectionContainedByToken:(struct _TIRevisionHistoryTokenIterator )arg0 ;
-(BOOL)isWordToken:(struct _TIRevisionHistoryTokenIterator )arg0 ;
-(BOOL)matchesContextAfterSelection:(id)arg0 ;
-(BOOL)matchesContextBeforeSelection:(id)arg0 ;
-(BOOL)matchesDocumentState:(id)arg0 ;
-(BOOL)matchesSelectedText:(id)arg0 ;
-(BOOL)originalIterator:(struct _TIRevisionHistoryTokenIterator )arg0 matchesRevisedDocumentRange:(struct _NSRange )arg1 andTokenID:(struct TITokenID )arg2 ;
-(BOOL)shouldValidateOriginalIterator:(struct _TIRevisionHistoryTokenIterator )arg0 withRevisedDocumentRange:(struct _NSRange )arg1 forRevision:(id)arg2 ;
-(BOOL)validateTokenizationForRevisedDocumentRange:(struct _NSRange )arg0 andTokenID:(struct TITokenID )arg1 forRevision:(id)arg2 ;
-(NSUInteger)tokenizeDocumentTextInRange:(struct _NSRange )arg0 withTokenHandler:(id)arg1 ;
-(id)contextForTokenAtIndex:(NSUInteger)arg0 ;
-(id)currentUserTyping;
-(id)currentWord;
-(id)documentState;
-(id)init;
-(id)initWithLocale:(id)arg0 ;
-(id)nonEmptyTokensInRange:(struct _NSRange )arg0 ;
-(id)tokenAtIterator:(struct _TIRevisionHistoryTokenIterator )arg0 ;
-(id)wordTokenContainingSelection;
-(struct _NSRange )deletionRangeToObtainDocumentState:(id)arg0 ;
-(struct _NSRange )documentRangeOfTokenAtIterator:(struct _TIRevisionHistoryTokenIterator )arg0 ;
-(struct _NSRange )inputRangeForReplacement:(id)arg0 ;
-(struct _NSRange )selectedTokenRangeWithIterator:(struct _TIRevisionHistoryTokenIterator )arg0 ;
-(struct _TIRevisionHistoryTokenIterator )iteratorUpperBoundForSelectionStart;
-(struct _TIRevisionHistoryTokenIterator )nextTokenIterator:(struct _TIRevisionHistoryTokenIterator )arg0 ;
-(struct _TIRevisionHistoryTokenIterator )popSelectedTextFromTokenizer;
-(struct _TIRevisionHistoryTokenIterator )previousTokenIterator:(struct _TIRevisionHistoryTokenIterator )arg0 ;
-(struct _TIRevisionHistoryTokenIterator )resetTokenAtIterator:(struct _TIRevisionHistoryTokenIterator )arg0 withRange:(struct _NSRange )arg1 fromDocumentLocation:(NSUInteger)arg2 ;
-(void)acceptCurrentSentence;
-(void)acceptText:(id)arg0 isAutoshifted:(BOOL)arg1 ;
-(void)acceptToken:(id)arg0 contextTokens:(id)arg1 saveToDifferentialPrivacy:(int)arg2 ;
-(void)acceptTokensInRange:(struct _NSRange )arg0 ;
-(void)addRevisedTokenString:(id)arg0 withTokenID:(struct TITokenID )arg1 inDocumentRange:(struct _NSRange )arg2 toRevision:(id)arg3 ;
-(void)adjustTokenOffsetAfterDeletedTokenRange:(struct _NSRange )arg0 withDeletedCharacterCount:(NSUInteger)arg1 ;
-(void)annotateTokensCreatedFromDocumentState;
-(void)collectPFLTelemetryForTokenAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)deleteBackward;
-(void)enumerateSentenceStemUsingBlock:(id)arg0 ;
-(void)enumerateSentenceStemUsingIteratorBlock:(id)arg0 ;
-(void)handleRevisedTokenString:(id)arg0 withTokenID:(struct TITokenID )arg1 forRevision:(id)arg2 ;
-(void)insertText:(id)arg0 ;
-(void)mergeTokenizationsForRevision:(id)arg0 ;
-(void)migrateUserTypingFromDeletedTokens:(id)arg0 toInsertedTokens:(id)arg1 withUsageLearningMask:(unsigned int)arg2 usageTrackingMask:(unsigned int)arg3 ;
-(void)pushSelectedTextToTokenizerForRevision:(id)arg0 ;
-(void)rejectCandidate:(id)arg0 forInput:(id)arg1 ;
-(void)rejectToken:(id)arg0 contextTokens:(id)arg1 negativeLearningHint:(int)arg2 withRevisedToken:(id)arg3 ;
-(void)rejectTokensInRange:(struct _NSRange )arg0 negativeLearningHint:(int)arg1 newRevision:(id)arg2 ;
-(void)replaceSelectionWithText:(id)arg0 negativeLearningHint:(int)arg1 selectedTokenReplacementHandler:(id)arg2 ;
-(void)resetToDocumentState:(id)arg0 ;
-(void)syncToDocumentState:(id)arg0 ;


@end


#endif