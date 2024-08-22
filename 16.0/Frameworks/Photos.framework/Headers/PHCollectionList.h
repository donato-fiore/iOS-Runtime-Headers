// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHCOLLECTIONLIST_H
#define PHCOLLECTIONLIST_H

@class NSString, NSManagedObjectID, NSArray, NSDate;


#import "PHCollection.h"
#import "PHQuery.h"

@interface PHCollectionList : PHCollection {
    NSString *_localizedTitle;
    NSManagedObjectID *_parentFolderObjectID;
    int _plAlbumKind;
}


@property (readonly, copy, nonatomic) id *childCollectionsSortingComparator; // ivar: _childCollectionsSortingComparator
@property (readonly, nonatomic) NSString *cloudGUID; // ivar: _cloudGUID
@property (readonly, nonatomic) NSInteger collectionListSubtype; // ivar: _collectionListSubtype
@property (readonly, nonatomic) NSInteger collectionListType; // ivar: _collectionListType
@property (readonly, nonatomic) NSArray *collections; // ivar: _collections
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSUInteger estimatedChildCollectionCount; // ivar: _estimatedChildCollectionCount
@property (readonly, nonatomic) BOOL keyCollectionsAtEnd;
@property (readonly, nonatomic) NSArray *localizedLocationNames; // ivar: _localizedLocationNames
@property (readonly, nonatomic) PHQuery *query; // ivar: _query
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSString *transientIdentifier; // ivar: _transientIdentifier
@property (readonly, nonatomic) NSUInteger unreadAssetCollectionsCount; // ivar: _unreadAssetCollectionsCount


+(BOOL)managedObjectSupportsTrashedState;
+(id)entityKeyMap;
+(id)fetchCollectionListsContainingCollection:(id)arg0 options:(id)arg1 ;
+(id)fetchCollectionListsForReferences:(id)arg0 photoLibrary:(id)arg1 ;
+(id)fetchCollectionListsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)fetchCollectionListsWithType:(NSInteger)arg0 subtype:(NSInteger)arg1 options:(id)arg2 ;
+(id)fetchMomentListsWithSubtype:(NSInteger)arg0 containingMoment:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentListsWithSubtype:(NSInteger)arg0 options:(id)arg1 ;
+(id)fetchPredicateFromComparisonPredicate:(id)arg0 options:(id)arg1 ;
+(id)fetchRootAlbumCollectionListWithOptions:(id)arg0 ;
+(id)fetchRootProjectCollectionListWithOptions:(id)arg0 ;
+(id)fetchType;
+(id)identifierCode;
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)transientCollectionListWithCollections:(id)arg0 title:(id)arg1 ;
+(id)transientCollectionListWithCollections:(id)arg0 title:(id)arg1 identifier:(id)arg2 ;
+(id)transientCollectionListWithCollections:(id)arg0 title:(id)arg1 identifier:(id)arg2 photoLibrary:(id)arg3 ;
+(id)transientCollectionListWithCollectionsFetchResult:(id)arg0 title:(id)arg1 ;
+(id)transientCollectionListWithCollectionsFetchResult:(id)arg0 title:(id)arg1 identifier:(id)arg2 ;
-(BOOL)canContainCollections;
-(BOOL)canPerformEditOperation:(NSInteger)arg0 ;
-(BOOL)collectionHasFixedOrder;
-(BOOL)hasLocationInfo;
-(Class)changeRequestClass;
-(NSUInteger)collectionFixedOrderPriority;
-(id)description;
-(id)effectiveCustomSortKey;
-(id)initTransientWithCollections:(id)arg0 orQuery:(id)arg1 title:(id)arg2 identifier:(id)arg3 photoLibrary:(id)arg4 ;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;
-(id)localizedTitle;
-(id)objectReference;
-(id)parentFolderID;
-(id)pl_assetContainerList;


@end


#endif