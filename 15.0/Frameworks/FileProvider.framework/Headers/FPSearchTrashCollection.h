// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPSEARCHTRASHCOLLECTION_H
#define FPSEARCHTRASHCOLLECTION_H

@class NSPredicate;
@protocol FPSearchQueryResultsProviding;


#import "FPUnionCollection.h"
#import "FPSearchCollection.h"
#import "FPTrashUnionCollection.h"
#import "NSFileProviderSearchQuery.h"

@interface FPSearchTrashCollection : FPUnionCollection <FPSearchQueryResultsProviding>

 {
    FPSearchCollection *_searchCollection;
    FPTrashUnionCollection *_trashCollection;
    NSPredicate *_searchQueryPredicate;
    NSUInteger _selectedMembership;
}


@property (copy, nonatomic) NSFileProviderSearchQuery *searchQuery;


-(BOOL)isCollectionValidForItem:(id)arg0 ;
-(id)init;
-(id)scopedSearchQuery;


@end


#endif