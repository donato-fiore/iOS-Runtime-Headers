// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHMANUALFETCHRESULT_H
#define PHMANUALFETCHRESULT_H

@class NSOrderedSet, NSString, NSArray;


#import "PHFetchResult.h"
#import "PHPhotoLibrary.h"

@interface PHManualFetchResult : PHFetchResult {
    NSOrderedSet *_objectIDs;
    PHPhotoLibrary *_photoLibrary;
}


@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSArray *objects; // ivar: _objects


+(id)emptyFetchResultWithPhotoLibrary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFullyBackedByObjectIDs;
-(NSInteger)collectionFetchType;
-(NSUInteger)hash;
-(NSUInteger)possibleChangesForChange:(id)arg0 ;
-(id)changeHandlingKey;
-(id)changeHandlingValueUsingSeedOids:(id)arg0 withChange:(id)arg1 usingManagedObjectContext:(id)arg2 ;
-(id)containerIdentifier;
-(id)copyWithOptions:(id)arg0 ;
-(id)description;
-(id)fetchRequest;
-(id)fetchResultWithChangeHandlingValue:(id)arg0 ;
-(id)fetchSortDescriptors;
-(id)fetchUpdatedObjects;
-(id)fetchedObjectIDs;
-(id)fetchedObjectIDsSet;
-(id)fetchedObjects;
-(id)initWithObjects:(id)arg0 photoLibrary:(id)arg1 fetchType:(id)arg2 fetchPropertySets:(id)arg3 identifier:(id)arg4 registerIfNeeded:(BOOL)arg5 ;
-(id)initWithOids:(id)arg0 photoLibrary:(id)arg1 fetchType:(id)arg2 fetchPropertySets:(id)arg3 identifier:(id)arg4 registerIfNeeded:(BOOL)arg5 ;
-(id)initWithOids:(id)arg0 photoLibrary:(id)arg1 fetchType:(id)arg2 fetchPropertySets:(id)arg3 identifier:(id)arg4 registerIfNeeded:(BOOL)arg5 photosCount:(NSUInteger)arg6 videosCount:(NSUInteger)arg7 audiosCount:(NSUInteger)arg8 ;
-(id)objectIDAtIndex:(NSUInteger)arg0 ;
-(id)photoLibrary;
-(void)getMediaTypeCounts;
-(void)prefetchObjectsAtIndexes:(id)arg0 ;
-(void)updateRegistrationForChangeNotificationDeltas;


@end


#endif