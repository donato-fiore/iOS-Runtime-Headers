// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3COLLECTION_H
#define ML3COLLECTION_H



#import "ML3Entity.h"

@interface ML3Collection : ML3Entity



+(BOOL)_updateRepresentativeItemsForPersistentIDs:(id)arg0 usingConnection:(id)arg1 ;
+(BOOL)canonicalizeCollectionRepresentativeItemsInLibrary:(id)arg0 usingConnection:(id)arg1 ;
+(BOOL)deleteFromLibrary:(id)arg0 deletionType:(int)arg1 persistentIDs:(*NSInteger)arg2 count:(NSUInteger)arg3 usingConnection:(id)arg4 ;
+(BOOL)libraryContentsChangeForProperty:(id)arg0 ;
+(BOOL)removeOrphanedCollectionsInLibrary:(id)arg0 usingConnection:(id)arg1 ;
+(BOOL)updateRepresentativeItemPersistentIDsInLibrary:(id)arg0 persistentIDs:(id)arg1 usingConnection:(id)arg2 ;
+(id)artworkCacheIDProperty;
+(id)collectionEntityClasses;
+(id)foreignPropertyForProperty:(id)arg0 entityClass:(Class)arg1 ;
+(id)propertiesForGroupingKey;
+(id)propertiesForGroupingUniqueCollections;
+(id)trackForeignPersistentID;
+(void)initialize;
-(id)initWithDictionary:(id)arg0 inLibrary:(id)arg1 cachedNameOrders:(id)arg2 usingConnection:(id)arg3 ;
-(void)updateCloudStatus;
-(void)updateRepresentativeCollectionValues:(id)arg0 existingRepresentativePersistentID:(NSUInteger)arg1 forUpdateTrackValues:(id)arg2 ;
-(void)updateTrackValues:(id)arg0 ;


@end


#endif