// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCONTAINERCHANGENOTIFICATION_H
#define PLCONTAINERCHANGENOTIFICATION_H

@class NSArray, NSIndexSet, NSString;


#import "PLChangeNotification.h"
#import "PLObjectSnapshot.h"
#import "PLManagedObject.h"

@interface PLContainerChangeNotification : PLChangeNotification {
    id *_object;
    PLObjectSnapshot *_snapshot;
    NSArray *_changedObjects;
    BOOL _didCalculateDiffs;
    BOOL _shouldReload;
    NSIndexSet *_deletedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_changedIndexes;
    BOOL _countDidChange;
}


@property (readonly, retain, nonatomic) NSArray *_changedObjects;
@property (readonly, retain, nonatomic) NSString *_contentRelationshipName;
@property (nonatomic, setter=_setDidCalculateDiffs:) BOOL _didCalculateDiffs;
@property (readonly, retain, nonatomic) NSString *_diffDescription;
@property (readonly, retain, nonatomic) PLManagedObject *_managedObject;
@property (readonly, nonatomic) NSIndexSet *changedIndexes;
@property (readonly, nonatomic) NSIndexSet *changedIndexesRelativeToSnapshot;
@property (readonly, nonatomic) NSArray *changedObjects;
@property (readonly, nonatomic) BOOL countDidChange;
@property (readonly, nonatomic) NSIndexSet *deletedIndexes;
@property (readonly, nonatomic) NSArray *deletedObjects;
@property (readonly, nonatomic) BOOL hasMoves;
@property (readonly, nonatomic) NSIndexSet *insertedIndexes;
@property (readonly, nonatomic) NSArray *insertedObjects;
@property (readonly, retain, nonatomic) *__CFArray movedFromIndexes; // ivar: _movedFromIndexes
@property (readonly, nonatomic) NSIndexSet *movedIndexes; // ivar: _movedIndexes
@property (readonly, nonatomic) BOOL shouldReload;
@property (readonly, retain, nonatomic) PLObjectSnapshot *snapshot;


-(BOOL)_getOldSet:(*id)arg0 newSet:(*id)arg1 ;
-(NSUInteger)snapshotIndexForContainedObject:(id)arg0 ;
-(id)_init;
-(id)_initWithObject:(id)arg0 snapshot:(id)arg1 changedObjects:(id)arg2 ;
-(id)init;
-(id)name;
-(id)object;
-(void)_calculateDiffs;
-(void)_calculateDiffsIfNecessary;
-(void)dealloc;
-(void)enumerateMovesWithBlock:(id)arg0 ;


@end


#endif