// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPITEMCOLLECTIONITEMIDBASEDDIFFS_H
#define FPITEMCOLLECTIONITEMIDBASEDDIFFS_H

@class NSMutableArray, NSMutableDictionary;


#import "FPItemCollectionDiffs.h"

@interface FPItemCollectionItemIDBasedDiffs : FPItemCollectionDiffs

@property (retain) NSMutableArray *deletedItemIDs; // ivar: _deletedItemIDs
@property (retain) NSMutableDictionary *replacedItemsByFormerID; // ivar: _replacedItemsByFormerID
@property (retain) NSMutableArray *updatedItems; // ivar: _updatedItems


-(BOOL)containsChanges;


@end


#endif