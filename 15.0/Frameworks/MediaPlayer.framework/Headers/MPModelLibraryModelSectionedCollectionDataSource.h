// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELLIBRARYMODELSECTIONEDCOLLECTIONDATASOURCE_H
#define MPMODELLIBRARYMODELSECTIONEDCOLLECTIONDATASOURCE_H

@class NSString;
@protocol MPLazySectionedCollectionDataSource;

#import <Foundation/Foundation.h>

#import "MPMediaLibraryEntityTranslationContext.h"
#import "MPModelLibraryRequest.h"

@interface MPModelLibraryModelSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource>

 {
    MPMediaLibraryEntityTranslationContext *_itemTranslationContext;
    MPMediaLibraryEntityTranslationContext *_sectionTranslationContext;
    vector<long long, std::allocator<long long>> _allowedSectionPersistentIDs;
    map<long long, unsigned long, std::less<long long>, std::allocator<std::pair<const long long, unsigned long>>> _allowedSectionPersistentIDToSectionQueryResultsIndexMap;
    ? _itemEntityQueryResults;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property ? itemEntityQueryResults;
@property (readonly, nonatomic) MPModelLibraryRequest *request; // ivar: _request
@property (readonly, nonatomic) shared_ptr<mlcore::EntityQueryResult> sectionEntityQueryResult; // ivar: _sectionEntityQueryResult
@property (readonly) Class superclass;


-(?)initWithRequest:(?)arg0 sectionQueryResultsitemQueryResults;
-(BOOL)hasSameContentAsDataSource:(id)arg0 ;
-(NSUInteger)_adjustedIndexForSectionIndex:(NSInteger)arg0 ;
-(NSUInteger)numberOfItemsInSection:(NSUInteger)arg0 ;
-(id)identifiersForItemAtIndexPath:(id)arg0 ;
-(id)identifiersForSectionAtIndex:(NSInteger)arg0 ;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg0 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)sectionAtIndex:(NSUInteger)arg0 ;


@end


#endif