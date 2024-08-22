// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHUNAUTHORIZEDFETCHRESULT_H
#define PHUNAUTHORIZEDFETCHRESULT_H

@class NSString, NSOrderedSet, NSArray;


#import "PHFetchResult.h"
#import "PHFetchOptions.h"

@interface PHUnauthorizedFetchResult : PHFetchResult

@property (readonly, copy) id *fetchBlock; // ivar: _fetchBlock
@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) NSOrderedSet *objectIDs; // ivar: _objectIDs
@property (readonly) NSArray *objects; // ivar: _objects
@property (readonly, copy) PHFetchOptions *options; // ivar: _options


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
-(id)fetchedObjectIDs;
-(id)fetchedObjects;
-(id)initWithOptions:(id)arg0 status:(NSInteger)arg1 fetchBlock:(id)arg2 ;
-(id)objectIDAtIndex:(NSUInteger)arg0 ;
-(id)photoLibrary;
-(void)getMediaTypeCounts;
-(void)prefetchObjectsAtIndexes:(id)arg0 ;
-(void)updateRegistrationForChangeNotificationDeltas;


@end


#endif