// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLETILESTORAGE_H
#define TSTTABLETILESTORAGE_H

@class TSPContainedObject, NSMutableIndexSet, NSIndexSet;
@protocol TSTCompatibilityVersionProviding;



@interface TSTTableTileStorage : TSPContainedObject <TSTCompatibilityVersionProviding>

 {
    NSMutableIndexSet *_tileIDSet;
    TSTTableTileGroup" _tileGroups;
}


@property (readonly, nonatomic) NSUInteger archivingCompatibilityVersion; // ivar: _archivingCompatibilityVersion
@property (readonly, nonatomic) BOOL isEmbiggened;
@property (readonly, nonatomic) unsigned int lastPopulatedRowIndex;
@property (readonly, nonatomic) BOOL needToUpgradeCellStorage;
@property (readonly, nonatomic) NSUInteger nextTileID;
@property (readonly, nonatomic) NSIndexSet *populatedRows;
@property (readonly, nonatomic) NSIndexSet *populatedTiles;
@property (nonatomic) BOOL shouldUseWideRows; // ivar: _shouldUseWideRows
@property (readonly, nonatomic) BOOL upgradeRepairedTiles; // ivar: _upgradeRepairedTiles


+(id)_sharedQueue;
+(unsigned int)tileSize;
-(BOOL)auditRowInfoCellCountsReturningResult:(*id)arg0 ;
-(BOOL)auditTilesForRowOverlapAndExtensionPastTableBounds:(struct TSUCellCoord )arg0 withDataStore:(id)arg1 result:(*id)arg2 ;
-(id)_createTileWithID:(NSUInteger)arg0 ;
-(id)_groupForTileID:(NSUInteger)arg0 ;
-(id)_tileForID:(NSUInteger)arg0 createIfMissing:(BOOL)arg1 ;
-(id)_yankRowRange:(struct _NSRange )arg0 ;
-(id)columnCellCountsOfRowsInRange:(struct _NSRange )arg0 ;
-(id)initWithOwner:(id)arg0 ;
-(id)initWithStorageArchive:(*void)arg0 treeArchive:(*void)arg1 nextTileID:(NSUInteger)arg2 unarchiver:(id)arg3 owner:(id)arg4 ;
-(id)removeColumnsAtIndex:(unsigned short)arg0 count:(unsigned int)arg1 ;
-(id)rowInfoAtIndex:(unsigned int)arg0 ;
-(id)tileForWritingAtRowIndex:(unsigned int)arg0 outTileRange:(struct _NSRange *)arg1 ;
-(id)tileStartingAtOrAfterRowIndex:(unsigned int)arg0 outTileRange:(struct _NSRange *)arg1 ;
-(id)tileStartingAtOrBeforeRowIndex:(unsigned int)arg0 outTileRange:(struct _NSRange *)arg1 ;
-(struct multimap<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>, std::less<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>>> )makeStorageMap;
-(void)_clearContentAtIndex:(unsigned int)arg0 count:(unsigned int)arg1 ;
-(void)_enumerateGroups:(id)arg0 ;
-(void)_enumerateLoadedTiles:(id)arg0 ;
-(void)_enumerateTiles:(id)arg0 ;
-(void)_insertRowsAtIndex:(unsigned int)arg0 count:(unsigned int)arg1 ;
-(void)_removeRowsAtIndex:(unsigned int)arg0 count:(unsigned int)arg1 ;
-(void)_removeTileForID:(NSUInteger)arg0 ;
-(void)_setTile:(id)arg0 forID:(NSUInteger)arg1 ;
-(void)_shiftRowsDownAtIndex:(unsigned int)arg0 count:(unsigned int)arg1 ;
-(void)_shiftRowsUpAtIndex:(unsigned int)arg0 count:(unsigned int)arg1 ;
-(void)_spliceRows:(id)arg0 atIndex:(unsigned int)arg1 ;
-(void)_upgradeFromTileIDMap:(*void)arg0 referenceMap:(*void)arg1 ;
-(void)enumerateRowByRowInRange:(struct _NSRange )arg0 withBlock:(id)arg1 ;
-(void)enumerateRowsInRange:(struct _NSRange )arg0 withBlock:(id)arg1 ;
-(void)enumerateRowsWithBlock:(id)arg0 ;
-(void)enumerateTilesConcurrentlyUsingBlock:(id)arg0 ;
-(void)insertColumnsAtIndex:(unsigned short)arg0 count:(unsigned int)arg1 ;
-(void)insertRowsAtIndex:(unsigned int)arg0 count:(unsigned int)arg1 ;
-(void)moveColumnIndexRange:(struct _NSRange )arg0 toIndex:(unsigned short)arg1 ;
-(void)moveRowIndexRange:(struct _NSRange )arg0 toIndex:(unsigned int)arg1 ;
-(void)prepareToApplyConcurrentCellMap:(id)arg0 ;
-(void)pruneTileForRowIndex:(unsigned int)arg0 ;
-(void)pruneTilesForRows:(id)arg0 ;
-(void)removeRowsAtIndex:(unsigned int)arg0 count:(unsigned int)arg1 ;
-(void)reset;
-(void)saveToStorageArchive:(*void)arg0 treeArchive:(*void)arg1 archiver:(id)arg2 ;
-(void)swapRowAtIndex:(unsigned int)arg0 withRowAtIndex:(unsigned int)arg1 ;
-(void)widenTilesForUpgrade;


@end


#endif