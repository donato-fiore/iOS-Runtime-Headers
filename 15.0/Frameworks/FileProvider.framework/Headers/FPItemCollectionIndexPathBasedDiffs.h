// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPITEMCOLLECTIONINDEXPATHBASEDDIFFS_H
#define FPITEMCOLLECTIONINDEXPATHBASEDDIFFS_H

@class NSMutableIndexSet, NSMutableArray;


#import "FPItemCollectionDiffs.h"

@interface FPItemCollectionIndexPathBasedDiffs : FPItemCollectionDiffs

@property (retain) NSMutableIndexSet *deletedIndexes; // ivar: _deletedIndexes
@property (retain) NSMutableIndexSet *insertedIndexes; // ivar: _insertedIndexes
@property (retain) NSMutableArray *movedDestinationIndexPaths; // ivar: _movedDestinationIndexPaths
@property (retain) NSMutableArray *movedSourceIndexPaths; // ivar: _movedSourceIndexPaths
@property (retain) NSMutableIndexSet *updatedIndexes; // ivar: _updatedIndexes


-(BOOL)containsChanges;


@end


#endif