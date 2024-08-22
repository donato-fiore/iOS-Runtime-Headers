// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLLIMITEDLIBRARYFETCHFILTER_H
#define PLLIMITEDLIBRARYFETCHFILTER_H

@class NSMutableOrderedSet, NSString, NSData;


#import "PLManagedObject.h"

@interface PLLimitedLibraryFetchFilter : PLManagedObject {
    NSMutableOrderedSet *_assetUUIDs;
}


@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *designatedRequirement;
@property (retain, nonatomic) NSData *fetchFilterData;


+(id)_assetUUIDStringsFromFetchFilterData:(id)arg0 ;
// +(id)_decodeFetchFilterData:(id)arg0 withUUIDHandler:(id)arg1 resultHandler:(unk)arg2  ;
+(id)_fetchFiltersMatchingPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSInteger)arg2 inManagedObjectContext:(id)arg3 ;
+(id)debugDescriptionOfCurrentLimitedLibraryFetchFiltersInManagedObjectContext:(id)arg0 ;
+(id)disallowedAlbumKinds;
+(id)entityName;
+(id)entityNameToPredicateMapFromFetchFilterData:(id)arg0 withApplicationIdentifier:(id)arg1 ;
+(id)entityNameToPredicateMapWithApplicationIdentifier:(id)arg0 ;
+(id)fetchFilterIdentifierForApplicationIdentifier:(id)arg0 ;
+(id)fetchLimitedLibraryFetchFilterWithApplicationIdentifier:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)fetchOrCreateLimitedLibraryFetchFilterWithApplicationIdentifier:(id)arg0 auditToken:(struct ? )arg1 inManagedObjectContext:(id)arg2 ;
+(id)insertIntoManagedObjectContext:(id)arg0 forApplicationIdentifier:(id)arg1 ;
+(void)deleteAllLimitedLibraryFetchFiltersInManagedObjectContext:(id)arg0 ;
+(void)deleteLimitedLibraryFetchFilterWithApplicationIdentifier:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(BOOL)containsAssetWithUUID:(id)arg0 ;
-(id)assetUUIDStrings;
-(id)debugDescription;
-(id)predicateForEntityName:(id)arg0 ;
-(void)_loadAssetUUIDs;
-(void)addAssetsWithUUIDs:(id)arg0 ;
-(void)removeAllAssets;


@end


#endif