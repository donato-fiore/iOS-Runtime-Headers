// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCELLDIFFMAP_H
#define TSTCELLDIFFMAP_H

@class TSPObject;
@protocol NSCopying;


#import "TSTCellDiffArray.h"
#import "TSTCellUIDList.h"

@interface TSTCellDiffMap : TSPObject <NSCopying>

 {
    vector<TSUCellCoord, std::allocator<TSUCellCoord>> _cellIDs;
}


@property (retain, nonatomic) TSTCellDiffArray *cellDiffArray; // ivar: _cellDiffArray
@property (retain, nonatomic) TSTCellUIDList *cellUIDList; // ivar: _cellUIDList
@property (nonatomic) BOOL containsCellBorderChanges; // ivar: _containsCellBorderChanges
@property (nonatomic) BOOL containsSuppressCustomFormatHandlingProperty; // ivar: _containsSuppressCustomFormatHandlingProperty
@property (readonly, nonatomic) NSUInteger count;
@property (nonatomic, getter=isUIDBased) BOOL uidBased; // ivar: _uidBased


+(id)cellDiffMapWithContext:(id)arg0 ;
-(*void)cellIDs;
-(BOOL)p_scanCellDiffArrayForCellBorderChanges:(id)arg0 ;
-(BOOL)p_scanCellDiffArrayForSuppressCustomFormatHandlingProperty:(id)arg0 ;
-(BOOL)p_scanNSArrayOfDiffsForCellBorderChanges:(id)arg0 ;
-(BOOL)p_scanNSArrayOfDiffsForSuppressCustomFormatHandlingProperty:(id)arg0 ;
-(id)addCellDiff:(id)arg0 andCellID:(struct TSUCellCoord )arg1 avoidCopy:(BOOL)arg2 ;
-(id)addCellDiff:(id)arg0 andCellUID:(struct TSKUIDStructCoord )arg1 avoidCopy:(BOOL)arg2 ;
-(id)cellDiffMapByIntersectingUIDs:(*void)arg0 inRows:(BOOL)arg1 ;
-(id)cellDiffMapByRemovingColumns:(*void)arg0 ;
-(id)cellDiffMapByRemovingRows:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 cellDiff:(id)arg1 cellUIDList:(id)arg2 ;
-(id)initWithContext:(id)arg0 cellDiffArray:(id)arg1 cellUIDList:(id)arg2 uidBased:(BOOL)arg3 ;
-(id)pruneCellDiffMapAgainstTable:(id)arg0 behavior:(NSUInteger)arg1 ;
-(id)pruneCellDiffMapAgainstTable:(id)arg0 behavior:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(id)uuidBasedCellDiffMapByTableInfo:(id)arg0 ;
-(void)addCellDiff:(id)arg0 andCellID:(struct TSUCellCoord )arg1 ;
-(void)addCellDiff:(id)arg0 andCellUID:(struct TSKUIDStructCoord )arg1 ;
-(void)addCellDiffMap:(id)arg0 ;
-(void)addCellDiffs:(id)arg0 atCellUIDs:(id)arg1 ;
-(void)appendCellDiffMap:(id)arg0 ;
-(void)enumerateCellIDElementsUsingBlock:(id)arg0 ;
-(void)enumerateElementsUsingBlock:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_resolveCellIDsToUUIDsByTableInfo:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif