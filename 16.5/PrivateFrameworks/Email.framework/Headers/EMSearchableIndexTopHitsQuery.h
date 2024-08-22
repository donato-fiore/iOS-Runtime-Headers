// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMSEARCHABLEINDEXTOPHITSQUERY_H
#define EMSEARCHABLEINDEXTOPHITSQUERY_H

@class NSString, NSArray, NSMutableArray, NSMutableDictionary, NSProgress, NSLock, EFPromise, CSTopHitQuery;
@protocol EFLoggable, EFCancelable, NSProgressReporting;

#import <Foundation/Foundation.h>


@interface EMSearchableIndexTopHitsQuery : NSObject <EFLoggable, EFCancelable, NSProgressReporting>



@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *filterQueries; // ivar: _filterQueries
@property (retain, nonatomic) NSMutableArray *foundItems; // ivar: _foundItems
@property (retain, nonatomic) NSMutableDictionary *foundMatchingHintsByPersistentID; // ivar: _foundMatchingHintsByPersistentID
@property (retain, nonatomic) NSMutableArray *foundSuggestions; // ivar: _foundSuggestions
@property (nonatomic) BOOL generateSuggestions; // ivar: _generateSuggestions
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSProgress *internalProgress; // ivar: _internalProgress
@property (readonly, copy, nonatomic) NSString *keyboardLanguage; // ivar: _keyboardLanguage
@property (retain, nonatomic) NSLock *lock; // ivar: _lock
@property (readonly, copy, nonatomic) NSString *logDescription; // ivar: _logDescription
@property (retain, nonatomic) NSString *logPrefix; // ivar: _logPrefix
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) NSUInteger resultLimit; // ivar: _resultLimit
@property (readonly, copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (retain, nonatomic) EFPromise *spotlightTopHitsQueryResultPromise; // ivar: _spotlightTopHitsQueryResultPromise
@property (retain, nonatomic) EFPromise *spotlightTopHitsQuerySuggestionsResultPromise; // ivar: _spotlightTopHitsQuerySuggestionsResultPromise
@property (readonly) Class superclass;
@property (retain) CSTopHitQuery *topHitSearchQuery; // ivar: _topHitSearchQuery


+(id)log;
-(id)initWithSearchString:(id)arg0 filterQueries:(id)arg1 bundleID:(id)arg2 keyboardLanguage:(id)arg3 updatedSuggestion:(id)arg4 generateSuggestions:(BOOL)arg5 logDescription:(id)arg6 resultLimit:(NSUInteger)arg7 suggestionLimit:(NSUInteger)arg8 customFlags:(id)arg9 ;
-(id)topHitsQueryResult;
-(id)topHitsQuerySuggestionResult;
-(void)_cancel;
-(void)_configureTopHitsSearchQuery:(id)arg0 ;
-(void)_searchDidCompleteWithError:(id)arg0 ;
-(void)_searchFoundItems:(id)arg0 ;
-(void)_searchFoundSuggestions:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)start;


@end


#endif