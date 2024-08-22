// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHFETCHRESULTCHANGEDETAILS_H
#define PHFETCHRESULTCHANGEDETAILS_H

@class NSArray, NSIndexSet;

#import <Foundation/Foundation.h>

#import "PHFetchResult.h"

@interface PHFetchResultChangeDetails : NSObject {
    PHFetchResult *_fetchResultBeforeChanges;
    PHFetchResult *_fetchResultAfterChanges;
    NSArray *_previousObjects;
    NSArray *_currentObjects;
    NSIndexSet *_removedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_movedIndexes;
    *__CFArray _movedFromIndexes;
    NSArray *_changedIdentifiers;
    NSIndexSet *_changedIndexes;
    BOOL _skipIncrementalChanges;
}


@property (readonly) NSIndexSet *changedIndexes;
@property (readonly) NSArray *changedObjects;
@property (readonly) PHFetchResult *fetchResultAfterChanges;
@property (readonly) PHFetchResult *fetchResultBeforeChanges;
@property (readonly, nonatomic) BOOL hasAnyChanges;
@property (readonly) BOOL hasIncrementalChanges;
@property (readonly) BOOL hasMoves;
@property (readonly) NSIndexSet *insertedIndexes;
@property (readonly) NSArray *insertedObjects;
@property (readonly, nonatomic) *__CFArray movedFromIndexes;
@property (readonly, nonatomic) NSIndexSet *movedIndexes;
@property (readonly) NSIndexSet *removedIndexes;
@property (readonly) NSArray *removedObjects;


+(id)_identifiersForPHObjects:(id)arg0 ;
+(id)changeDetailsFromFetchResult:(id)arg0 toFetchResult:(id)arg1 changedObjects:(id)arg2 ;
-(BOOL)hasDiffs;
-(BOOL)shouldReload;
-(NSUInteger)snapshotIndexForContainedObject:(id)arg0 ;
-(id)_addAdditionalIndexesToChanges:(id)arg0 withPreviousIdentifiers:(id)arg1 currentIdentifiers:(id)arg2 ;
-(id)description;
-(id)initWithFetchResult:(id)arg0 currentFetchResult:(id)arg1 changedIdentifiers:(id)arg2 unknownMergeEvent:(BOOL)arg3 ;
-(id)initWithManualFetchResultAfterChanges:(id)arg0 ;
-(void)calculateDiffs;
-(void)calculateDiffsAndAccumulateInsertedCount:(*NSUInteger)arg0 updatedCount:(*NSUInteger)arg1 deletedCount:(*NSUInteger)arg2 ;
-(void)dealloc;
-(void)enumerateMovesWithBlock:(id)arg0 ;


@end


#endif