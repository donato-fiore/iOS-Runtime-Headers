// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHRECENTCONTENTSYNDICATIONCOLLECTIONSRESULT_H
#define PHRECENTCONTENTSYNDICATIONCOLLECTIONSRESULT_H

@class NSString, NSArray;


#import "PHFetchResult.h"
#import "PHFetchOptions.h"
#import "PHPhotoLibrary.h"

@interface PHRecentContentSyndicationCollectionsResult : PHFetchResult {
    PHFetchOptions *_fetchOptions;
    PHPhotoLibrary *_photoLibrary;
    NSInteger _maxNumberOfStacks;
    NSInteger _maxNumberOfAssetsPerStack;
}


@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) NSArray *objects; // ivar: _objects


+(id)pointerComparableIdentifiersFromIdentifiers:(id)arg0 ;
-(BOOL)_hasReachedGroupCapacity;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)collectionFetchType;
-(NSUInteger)hash;
-(NSUInteger)possibleChangesForChange:(id)arg0 propertiesFetchResult:(id)arg1 ;
-(id)_transientCollectionForAssetOID:(id)arg0 ;
-(id)_transientCollectionForIdentifier:(id)arg0 ;
-(id)additionalChangedIdentifiersFromPreviousIdentifiers:(id)arg0 currentIdentifiers:(id)arg1 inFetchResultBeforeChanges:(id)arg2 ;
-(id)changeHandlingKey;
-(id)changeHandlingValueUsingSeedOids:(id)arg0 withChange:(id)arg1 usingManagedObjectContext:(id)arg2 ;
-(id)containerIdentifier;
-(id)copyWithOptions:(id)arg0 ;
-(id)description;
-(id)fetchRequest;
-(id)fetchSortDescriptors;
-(id)fetchedObjects;
-(id)initWithObjects:(id)arg0 photoLibrary:(id)arg1 fetchOptions:(id)arg2 maxNumberOfStacks:(NSInteger)arg3 maxNumberOfAssetsPerStack:(NSInteger)arg4 fetchType:(id)arg5 fetchPropertySets:(id)arg6 identifier:(id)arg7 registerIfNeeded:(BOOL)arg8 ;
-(id)objectIDAtIndex:(NSUInteger)arg0 ;
-(id)photoLibrary;
-(void)prefetchObjectsAtIndexes:(id)arg0 ;
-(void)updateRegistrationForChangeNotificationDeltas;


@end


#endif