// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXTILESTATEPOOL_H
#define PXTILESTATEPOOL_H

@class NSMapTable, NSMutableIndexSet;

#import <Foundation/Foundation.h>


@interface PXTileStatePool : NSObject {
    *PXTileState _states;
    unordered_map<PXTileIdentifier, unsigned long, std::hash<PXTileIdentifier>, std::equal_to<PXTileIdentifier>, std::allocator<std::pair<const PXTileIdentifier, unsigned long>>> _indexByTargetIdentifier;
    NSMapTable *_tileIndexesByPageKey;
    NSInteger _statesMaxCount;
    NSMutableIndexSet *_usedIndexes;
    NSMutableIndexSet *_unusedIndexes;
    NSMutableIndexSet *_pageKeysToRemove;
}


@property (readonly, nonatomic) NSInteger count;


-(NSUInteger)checkOutIndexWithInitialConfiguration:(id)arg0 ;
-(NSUInteger)indexOfFirstStatePassingTest:(id)arg0 ;
-(NSUInteger)indexOfStateWithTargetIdentifier:(struct PXTileIdentifier )arg0 ;
-(id)description;
-(id)indexesOfStatesPassingTest:(id)arg0 ;
-(id)init;
-(struct PXProtectedTileState *)stateAtIndex:(NSUInteger)arg0 ;
-(struct PXTileState *)_mutableStateAtIndex:(NSUInteger)arg0 ;
-(void)_cleanupStateAtIndex:(NSUInteger)arg0 ;
-(void)_storeCurrentFrameLookupForTileState:(struct PXTileState *)arg0 withIndex:(NSUInteger)arg1 ;
-(void)_storeTargetIdentifierLookupForTileState:(struct PXTileState *)arg0 withIndex:(NSUInteger)arg1 ;
-(void)checkInIndex:(NSUInteger)arg0 ;
-(void)checkInIndexes:(id)arg0 ;
-(void)dealloc;
-(void)enumerateStatesAtIndexes:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateStatesInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)enumerateStatesUsingBlock:(id)arg0 ;
-(void)setCurrentGeometry:(struct PXTileGeometry *)arg0 forTileStateAtIndex:(NSUInteger)arg1 ;
-(void)setTargetIdentifier:(struct PXTileIdentifier )arg0 forTileStateAtIndex:(NSUInteger)arg1 ;


@end


#endif