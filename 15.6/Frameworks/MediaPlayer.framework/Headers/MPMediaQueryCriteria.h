// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMEDIAQUERYCRITERIA_H
#define MPMEDIAQUERYCRITERIA_H

@class NSSet, NSDictionary, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPMediaQueryCriteria : NSObject <NSCopying>

 {
    BOOL _useSections;
}


@property (copy, nonatomic) NSSet *collectionPropertiesToFetch; // ivar: _collectionPropertiesToFetch
@property (nonatomic) NSUInteger entityLimit; // ivar: _entityLimit
@property (nonatomic) NSUInteger entityOrder; // ivar: _entityOrder
@property (readonly, nonatomic) BOOL excludesEntitiesWithBlankNames;
@property (copy, nonatomic) NSSet *filterPredicates; // ivar: _filterPredicates
@property (nonatomic) NSInteger groupingType; // ivar: _groupingType
@property (nonatomic) BOOL ignoreRestrictionsPredicates; // ivar: _ignoreRestrictionsPredicates
@property (nonatomic) BOOL ignoreSystemFilterPredicates; // ivar: _ignoreSystemFilterPredicates
@property (nonatomic) BOOL includeEntitiesWithBlankNames; // ivar: _includeEntitiesWithBlankNames
@property (nonatomic) BOOL includeNonLibraryEntities; // ivar: _includeNonLibraryEntities
@property (copy, nonatomic) NSSet *itemPropertiesToFetch; // ivar: _itemPropertiesToFetch
@property (copy, nonatomic) NSDictionary *orderingDirectionMappings; // ivar: _orderingDirectionMappings
@property (copy, nonatomic) NSArray *orderingProperties; // ivar: _orderingProperties
@property (readonly, nonatomic) BOOL specifiesPlaylistItems;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)ML3CollectionsQueryInLibrary:(id)arg0 ;
-(id)ML3ItemsQueryInLibrary:(id)arg0 ;
-(id)ML3ItemsQueryInLibrary:(id)arg0 orderingTerms:(id)arg1 nameBlankProperty:(id)arg2 ;
-(id)ML3OrderingTermsForGroupingType:(NSInteger)arg0 ;
-(id)ML3OrderingTermsForMPOrderingProperties:(id)arg0 directionalityMapping:(id)arg1 entityClass:(Class)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)predicateForProperty:(id)arg0 ;
-(void)addFilterPredicate:(id)arg0 ;
-(void)addFilterPredicates:(id)arg0 ;
-(void)removeFilterPredicate:(id)arg0 ;
-(void)removePredicatesForProperty:(id)arg0 ;


@end


#endif