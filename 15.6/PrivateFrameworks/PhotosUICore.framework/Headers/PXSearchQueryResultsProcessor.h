// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHQUERYRESULTSPROCESSOR_H
#define PXSEARCHQUERYRESULTSPROCESSOR_H

@class NSArray, NSString, NSDictionary;
@protocol PHPhotoLibraryChangeObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXSearchQueryResult.h"
#import "PXSearchIndexManager.h"

@interface PXSearchQueryResultsProcessor : NSObject <PHPhotoLibraryChangeObserver>



@property (copy, nonatomic) NSArray *curatedAssetsSearchResults; // ivar: _curatedAssetsSearchResults
@property (retain, nonatomic) PXSearchQueryResult *currentSearchQueryResult; // ivar: _currentSearchQueryResult
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *hiddenObjects; // ivar: _hiddenObjects
@property (copy, nonatomic) NSDictionary *personSearchResultsMap; // ivar: _personSearchResultsMap
@property (readonly, copy, nonatomic) id *processingHandler; // ivar: _processingHandler
@property (copy, nonatomic) NSArray *removedObjects; // ivar: _removedObjects
@property (readonly, nonatomic) PXSearchIndexManager *searchIndexManager; // ivar: _searchIndexManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)_isBootstrapNameChange:(id)arg0 ;
+(BOOL)_verifyExpectedWorkQueue;
+(id)_fetchPersonsForPersonSearchResults:(id)arg0 photoLibrary:(id)arg1 ;
+(id)_reloadItemIdentifiersForChangedObjects:(id)arg0 inAssetSearchResults:(id)arg1 ;
-(BOOL)_shouldRecurateForChangeDetails:(id)arg0 ;
-(id)_generateUpdatedPersonSearchResultsFromPersonSearchResults:(id)arg0 persons:(id)arg1 ;
-(id)_localIdentifierForPersonUUID:(id)arg0 ;
-(id)initForUnitTesting;
-(id)initWithSearchIndexManager:(id)arg0 dispatchQueue:(id)arg1 resultsProcessingHandler:(id)arg2 ;
-(void)_executeResultsHandlerForUpdatedSearchQueryResult:(id)arg0 curatedAssetsSearchResults:(id)arg1 ;
-(void)_performCurationAndUpdateChangedObjects:(id)arg0 ;
-(void)_processPeopleChangesFromNotification:(id)arg0 ;
-(void)_processPersonMergeFromNotification:(id)arg0 searchQueryResult:(id)arg1 ;
-(void)_processPersonNameChangeFromConfirmationInfo:(id)arg0 searchQueryResult:(id)arg1 ;
-(void)_updatePersonSearchResultsForSearchQueryResult:(id)arg0 withMergeTargetPerson:(id)arg1 sourcePerson:(id)arg2 tombstonedCandidatesLocalIdentifiers:(id)arg3 ;
-(void)_updateSearchQueryResult:(id)arg0 updatedPersonSearchResultsMap:(id)arg1 ;
-(void)addObserverForCuratedAssetsLibraryChanges;
-(void)addObserverForPeopleChangeHandlingNotifications;
-(void)dealloc;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)processSearchResults:(id)arg0 assetSearchResults:(id)arg1 personSearchResults:(id)arg2 searchSuggestions:(id)arg3 sceneIdentifiers:(id)arg4 forSearchQuery:(id)arg5 ;


@end


#endif