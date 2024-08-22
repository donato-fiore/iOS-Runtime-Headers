// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKFINDREPLACECONTROLLER_H
#define TSKFINDREPLACECONTROLLER_H

@class NSEnumerator, NSMutableSet, NSMutableDictionary, NSMutableArray, NSString;
@protocol TSKSearchable, TSKDocumentRootProvider, TSKFindReplaceDelegate, TSKSearchTargetProvider;

#import <Foundation/Foundation.h>

#import "TSKSearch.h"

@interface TSKFindReplaceController : NSObject {
    BOOL _onlySearchesAnnotations;
    NSEnumerator *_currentModelEnumerator;
    id<TSKSearchable> *_currentSearchable;
    TSKSearch *_currentSearch;
    CGFloat _currentSearchStartTime;
}


@property (retain, nonatomic) NSMutableSet *annotationDisplayStringTypes; // ivar: _annotationDisplayStringTypes
@property (nonatomic) BOOL commentsIncludedInAnnotationSearch; // ivar: _commentsIncludedInAnnotationSearch
@property (nonatomic) BOOL countSearchHits; // ivar: _countSearchHits
@property (nonatomic) _NSRange currentRootSearchTargetRange; // ivar: _currentRootSearchTargetRange
@property (nonatomic) NSObject<TSKDocumentRootProvider> *documentRootProvider; // ivar: _documentRootProvider
@property (readonly, nonatomic) NSObject<TSKFindReplaceDelegate> *findReplaceDelegate; // ivar: _findReplaceDelegate
@property (retain, nonatomic) NSMutableDictionary *layoutSearchCountForRootIndexMap; // ivar: _layoutSearchCountForRootIndexMap
@property (retain, nonatomic) NSMutableArray *layoutSearchResults; // ivar: _layoutSearchResults
@property (copy, nonatomic) id *progressBlock; // ivar: _progressBlock
@property (nonatomic) NSUInteger searchOptions; // ivar: _searchOptions
@property (copy, nonatomic) id *searchResultComparator; // ivar: _searchResultComparator
@property (readonly, nonatomic) NSUInteger searchResultsCount; // ivar: _searchResultsCount
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (readonly, nonatomic) NSObject<TSKSearchTargetProvider> *searchTargetProvider; // ivar: _searchTargetProvider


+(BOOL)p_searchReference:(id)arg0 comparedWithSearchReference:(id)arg1 orEqual:(BOOL)arg2 inDirection:(NSUInteger)arg3 before:(BOOL)arg4 comparator:(id)arg5 ;
+(BOOL)searchReference:(id)arg0 isAfterSearchReference:(id)arg1 orEqual:(BOOL)arg2 inDirection:(NSUInteger)arg3 comparator:(id)arg4 ;
+(BOOL)searchReference:(id)arg0 isBeforeSearchReference:(id)arg1 orEqual:(BOOL)arg2 inDirection:(NSUInteger)arg3 comparator:(id)arg4 ;
+(void)_assertSearchTargetImplementsProperMethods:(id)arg0 ;
+(void)_recursiveSearchWithSearchTarget:(id)arg0 forAnnotationsWithHitBlock:(id)arg1 ;
+(void)_recursiveSearchWithSearchTarget:(id)arg0 forString:(id)arg1 options:(NSUInteger)arg2 hitBlock:(id)arg3 ;
-(BOOL)p_searchCriteriaIsValid;
-(BOOL)p_shouldCountAnnotation:(id)arg0 ;
-(NSUInteger)_nextRootSearchTargetFromIndex:(NSUInteger)arg0 inDirection:(NSUInteger)arg1 wrapped:(*BOOL)arg2 ;
-(NSUInteger)_resultCountInRootObjectRange:(struct _NSRange )arg0 ;
-(NSUInteger)indexOfVisibleSearchReference:(id)arg0 ;
-(id)_firstResultInDirection:(NSUInteger)arg0 ;
-(id)_lastResultInDirection:(NSUInteger)arg0 ;
-(id)annotationSearchReferenceForAnnotation:(id)arg0 ;
-(id)documentRoot;
-(id)firstVisibleResultInRect:(struct CGRect )arg0 ;
-(id)initWithDocumentRootProvider:(id)arg0 delegate:(id)arg1 ;
-(id)initWithDocumentRootProvider:(id)arg0 delegate:(id)arg1 onlySearchesAnnotations:(BOOL)arg2 ;
-(id)initWithDocumentRootProvider:(id)arg0 delegate:(id)arg1 targetProvider:(id)arg2 onlySearchesAnnotations:(BOOL)arg3 ;
-(id)searchReferenceAfterReference:(id)arg0 inDirection:(NSUInteger)arg1 ;
-(id)searchReferencesToHighlightInVisibleRootObjectRange:(struct _NSRange )arg0 ;
-(void)_buildLayoutSearchResultsForRootSearchTargetsInRange:(struct _NSRange )arg0 resultsArray:(id)arg1 ;
-(void)_nextSearchTargetWithMatchInDirection:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)invalidateSearchResults;
-(void)p_buildSearchResultsIfNecessary;
-(void)p_buildVisibleSearchResultsIfNecessary;
-(void)p_continueCountingHits;
-(void)p_startCountingHits;
-(void)p_stopCountingHits;
-(void)setSearchProgressBlock:(id)arg0 ;
-(void)sortLayoutSearchResultsArray:(id)arg0 ;


@end


#endif