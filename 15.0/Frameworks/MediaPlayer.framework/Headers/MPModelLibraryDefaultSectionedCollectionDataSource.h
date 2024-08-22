// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELLIBRARYDEFAULTSECTIONEDCOLLECTIONDATASOURCE_H
#define MPMODELLIBRARYDEFAULTSECTIONEDCOLLECTIONDATASOURCE_H

@class NSString, NSDictionary;
@protocol MPLazySectionedCollectionDataSource;

#import <Foundation/Foundation.h>

#import "MPMediaLibraryEntityTranslationContext.h"
#import "MPModelLibraryRequest.h"

@interface MPModelLibraryDefaultSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource>

 {
    MPMediaLibraryEntityTranslationContext *_entityTranslationContext;
    vector<long long, std::allocator<long long>> _allowedItemPersistentIDs;
    map<long long, unsigned long, std::less<long long>, std::allocator<std::pair<const long long, unsigned long>>> _allowedItemPersistentIDToItemQueryResultsIndexMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *indexPathToContainerUniqueIDMap; // ivar: _indexPathToContainerUniqueIDMap
@property (readonly, nonatomic) shared_ptr<std::vector<std::shared_ptr<mlcore::Entity>>> itemIdentifierQueryResults; // ivar: _itemIdentifierQueryResults
@property (readonly, nonatomic) shared_ptr<mlcore::EntityQueryResult> itemQueryResults; // ivar: _itemQueryResults
@property (readonly, nonatomic) MPModelLibraryRequest *request; // ivar: _request
@property (readonly) Class superclass;


-(?)_buildIndexPathToContainerUniqueIDMapFromItemQueryResults;
-(?)initWithRequest:(?)arg0 itemQueryResultsitemIdentifierQueryResults;
-(BOOL)_allowedEntityIdentifiersContainsAllPersistentIDs;
-(BOOL)_usesSections;
-(BOOL)hasSameContentAsDataSource:(id)arg0 ;
-(NSInteger)indexOfSectionForSectionIndexTitleAtIndex:(NSInteger)arg0 ;
-(NSUInteger)_adjustedGlobalIndexForIndexPath:(id)arg0 ;
-(NSUInteger)numberOfItemsInSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)identifiersForItemAtIndexPath:(id)arg0 ;
-(id)identifiersForSectionAtIndex:(NSInteger)arg0 ;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg0 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)sectionAtIndex:(NSUInteger)arg0 ;
-(id)sectionIndexTitles;
-(struct _NSRange )optionalSectionIndexTitlesRange;
-(void)_populateIndexMap;


@end


#endif