// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSORDEREDCOLLECTIONDIFFERENCE_H
#define NSORDEREDCOLLECTIONDIFFERENCE_H

@class NSArray;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "NSIndexSet.h"
#import "_NSOrderedCollectionDifferenceMoves.h"

@interface NSOrderedCollectionDifference : NSObject <NSFastEnumeration>

 {
    NSIndexSet *_insertIndexes;
    NSArray *_insertObjects;
    NSIndexSet *_removeIndexes;
    NSArray *_removeObjects;
    _NSOrderedCollectionDifferenceMoves *_moves;
}


@property (readonly) BOOL hasChanges;
@property (readonly) NSArray *insertions;
@property (readonly) NSArray *removals;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)_changeWithType:(NSInteger)arg0 index:(NSUInteger)arg1 object:(id)arg2 ;
-(id)debugDescription;
-(id)description;
-(id)differenceByTransformingChangesWithBlock:(id)arg0 ;
-(id)init;
-(id)initWithChanges:(id)arg0 ;
-(id)initWithInsertIndexes:(id)arg0 insertedObjects:(id)arg1 removeIndexes:(id)arg2 removedObjects:(id)arg3 ;
-(id)initWithInsertIndexes:(id)arg0 insertedObjects:(id)arg1 removeIndexes:(id)arg2 removedObjects:(id)arg3 additionalChanges:(id)arg4 ;
-(id)inverseDifference;
-(id)invertedDifference;
-(void)_enumerateChangesInDiffOrderWithBlock:(id)arg0 ;
-(void)dealloc;


@end


#endif