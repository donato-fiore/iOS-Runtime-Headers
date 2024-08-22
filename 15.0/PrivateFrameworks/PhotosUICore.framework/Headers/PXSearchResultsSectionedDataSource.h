// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSEARCHRESULTSSECTIONEDDATASOURCE_H
#define PXSEARCHRESULTSSECTIONEDDATASOURCE_H

@class NSCalendar, PLSearchIndexDateFormatter, NSDateIntervalFormatter, NSDateComponents, NSString, NSDictionary, PHFetchResult, PLPhotoLibrary, PSIQuery, NSArray, PSIDatabase, PLSearchProcessor;
@protocol PXSearchResultsValueDelegate, PXSearchTopAssetsResultChangeDelegate, PXSearchResultsSectionedDataSourceChangeObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXSearchResultsSectionedDataSource : NSObject <PXSearchResultsValueDelegate, PXSearchTopAssetsResultChangeDelegate>



@property (retain, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (weak, nonatomic) NSObject<PXSearchResultsSectionedDataSourceChangeObserver> *changeObserver; // ivar: _changeObserver
@property (retain, nonatomic) PLSearchIndexDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (retain, nonatomic) NSDateIntervalFormatter *dateIntervalFormatter; // ivar: _dateIntervalFormatter
@property (retain, nonatomic) NSDateComponents *dateRangeFormattingComponents; // ivar: _dateRangeFormattingComponents
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSDictionary *debugDictionary;
@property (readonly, copy) NSString *description;
@property (nonatomic) uint8_t didMerge; // ivar: _didMerge
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHFetchResult *homePersons; // ivar: _homePersons
@property (nonatomic) BOOL ignorePastResults; // ivar: _ignorePastResults
@property (nonatomic) NSUInteger maxGroupedResultsCount; // ivar: _maxGroupedResultsCount
@property (retain, nonatomic) PLPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain, nonatomic) PSIQuery *query; // ivar: _query
@property (nonatomic) NSUInteger queryTag; // ivar: _queryTag
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSArray *results; // ivar: _results
@property (nonatomic) BOOL resultsReady; // ivar: _resultsReady
@property (retain) NSDictionary *sceneAncestryInformation; // ivar: _sceneAncestryInformation
@property (retain, nonatomic) PSIDatabase *searchIndex; // ivar: _searchIndex
@property (retain, nonatomic) PLSearchProcessor *searchProcessor; // ivar: _searchProcessor
@property (nonatomic) NSUInteger sectionFetchIndex; // ivar: _sectionFetchIndex
@property (retain, nonatomic) NSArray *suggestions; // ivar: _suggestions
@property (readonly) Class superclass;
@property (copy, nonatomic) id *topAssetFilter; // ivar: _topAssetFilter
@property (nonatomic) NSUInteger uncommittedMaxGroupedResultsCount; // ivar: _uncommittedMaxGroupedResultsCount
@property (retain, nonatomic) NSArray *uncommittedResults; // ivar: _uncommittedResults
@property (retain, nonatomic) NSArray *uncommittedSuggestions; // ivar: _uncommittedSuggestions
@property (nonatomic) NSUInteger unprocessedSearchResultsCount; // ivar: _unprocessedSearchResultsCount
@property (nonatomic) BOOL wordEmbeddingsRequested; // ivar: _wordEmbeddingsRequested


+(id)postQuerySearchResultsLog;
+(id)topAssetsSectionForSearchResultsValue:(id)arg0 ;
-(BOOL)_shouldCancel:(NSUInteger)arg0 ;
-(BOOL)hasPendingChanges;
-(BOOL)isSectionExpandable:(NSInteger)arg0 ;
-(BOOL)isSectionExpanded:(NSInteger)arg0 ;
-(BOOL)isTopAssetsSection:(NSInteger)arg0 ;
-(BOOL)searchIsFinished:(id)arg0 ;
-(NSInteger)numberOfSearchResultsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfVisibleSearchResultsInSection:(NSInteger)arg0 ;
-(id)_fetchObjectsWithEntityName:(id)arg0 uuids:(id)arg1 ;
-(id)_wordEmbeddingSubstitutionsWantsSubstitutedString:(BOOL)arg0 ;
-(id)allSearchResultsForSection:(NSInteger)arg0 ;
-(id)initForUnitTests;
-(id)initWithSearchIndex:(id)arg0 photoLibrary:(id)arg1 ;
-(id)searchResultAtIndexPath:(id)arg0 ;
-(id)selectedWordEmbeddingTextAtIndex:(NSUInteger)arg0 ;
-(id)stringWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)tapToRadarAttachments;
-(id)titleForHeaderInSection:(NSInteger)arg0 ;
-(id)wordEmbeddingSubstitutions;
-(void)_asyncFetchAssetsWithQueryTag:(NSUInteger)arg0 ;
-(void)_confirmationDidFinish:(id)arg0 ;
-(void)_inqCancel;
-(void)_updateResultsWithMergeTargetPerson:(id)arg0 sourcePerson:(id)arg1 tombstonedCandidatesLocalIdentifiers:(id)arg2 ;
-(void)cancel;
-(void)collapseSection:(NSInteger)arg0 ;
-(void)didChangeThumbnailAssetsForSearchResult:(id)arg0 ;
-(void)didChangeThumbnailAssetsForSearchResult:(id)arg0 atIndexes:(id)arg1 ;
-(void)expandSection:(NSInteger)arg0 ;
-(void)mergePendingChanges;
-(void)setSearchString:(id)arg0 representedObjects:(id)arg1 maxSuggestionCount:(NSUInteger)arg2 priorityAssetUUID:(id)arg3 ;


@end


#endif