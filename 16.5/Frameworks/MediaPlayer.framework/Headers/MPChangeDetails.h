// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCHANGEDETAILS_H
#define MPCHANGEDETAILS_H

@class NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSIndexSet, NSArray;

#import <Foundation/Foundation.h>


@interface MPChangeDetails : NSObject {
    NSMutableDictionary *_sectionMoves;
    NSMutableDictionary *_sectionUpdates;
    NSMutableIndexSet *_updatedSectionMoveFromIndexes;
    NSMutableDictionary *_itemMoves;
    NSMutableDictionary *_itemUpdates;
    NSMutableSet *_updatedItemMoveFromIndexPaths;
    BOOL _isFlatCollection;
    BOOL _isFinalized;
}


@property (readonly, copy, nonatomic) NSIndexSet *deletedIndexes;
@property (copy, nonatomic) NSArray *deletedItemIndexPaths; // ivar: _deletedItemIndexPaths
@property (copy, nonatomic) NSIndexSet *deletedSections; // ivar: _deletedSections
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, copy, nonatomic) NSIndexSet *insertedIndexes;
@property (copy, nonatomic) NSArray *insertedItemIndexPaths; // ivar: _insertedItemIndexPaths
@property (copy, nonatomic) NSIndexSet *insertedSections; // ivar: _insertedSections
@property (readonly, copy, nonatomic) NSIndexSet *updatedIndexes;
@property (copy, nonatomic) NSArray *updatedItemIndexPaths;
@property (copy, nonatomic) NSIndexSet *updatedSections;


// +(id)changeDetailsWithPreviousCount:(NSInteger)arg0 finalCount:(NSInteger)arg1 isEqualBlock:(id)arg2 isUpdatedBlock:(unk)arg3  ;
+(id)empty;
-(BOOL)isValidForPreviousCount:(NSInteger)arg0 finalCount:(NSInteger)arg1 reason:(*id)arg2 ;
-(id)debugDescription;
-(id)description;
-(id)initWithBlock:(id)arg0 ;
-(void)appendItemMoveFromIndexPath:(id)arg0 toIndexPath:(id)arg1 updated:(BOOL)arg2 ;
-(void)appendItemUpdateForPreviousIndexPath:(id)arg0 finalIndexPath:(id)arg1 ;
-(void)appendSectionMoveFromIndex:(NSInteger)arg0 toIndex:(NSInteger)arg1 updated:(BOOL)arg2 ;
-(void)appendSectionUpdateForPreviousIndex:(NSInteger)arg0 finalIndex:(NSInteger)arg1 ;
-(void)applyUIKitWorkarounds;
-(void)enumerateItemMovesUsingBlock:(id)arg0 ;
-(void)enumerateItemMovesWithBlock:(id)arg0 ;
-(void)enumerateItemUpdatesUsingBlock:(id)arg0 ;
-(void)enumerateMovesUsingBlock:(id)arg0 ;
-(void)enumerateMovesWithBlock:(id)arg0 ;
-(void)enumerateSectionMovesUsingBlock:(id)arg0 ;
-(void)enumerateSectionMovesWithBlock:(id)arg0 ;
-(void)enumerateSectionUpdatesUsingBlock:(id)arg0 ;
-(void)enumerateUpdatesUsingBlock:(id)arg0 ;
-(void)removeItemMoveFromIndexPath:(id)arg0 ;
-(void)removeItemUpdateForPreviousIndexPath:(id)arg0 ;
-(void)removeSectionMoveFromIndex:(NSInteger)arg0 ;
-(void)removeSectionUpdateForPreviousIndex:(NSInteger)arg0 ;


@end


#endif