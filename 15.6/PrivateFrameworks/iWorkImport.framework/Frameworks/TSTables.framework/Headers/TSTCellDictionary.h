// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCELLDICTIONARY_H
#define TSTCELLDICTIONARY_H

@class TSPTemporaryObjectContextDelegate, TSPObjectContext;

#import <Foundation/Foundation.h>


@interface TSTCellDictionary : NSObject {
    os_unfair_lock_s _lock;
    map<TSUCellCoord, TSTCell *, std::less<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSTCell *>>> _cellsByCoord;
    TSPTemporaryObjectContextDelegate *_temporaryObjectContextDelegate;
    TSPObjectContext *_temporaryContext;
    TSCECellCoordSet _cellCoordsToStyleUpgradeForFormulatext;
}




-(BOOL)hasCellAtCellID:(struct TSUCellCoord )arg0 ;
-(BOOL)noLockShouldUpgradeStyleForFormulatextForCellCoord:(struct TSUCellCoord *)arg0 ;
-(BOOL)shouldUpgradeStyleForFormulatextForCellCoord:(struct TSUCellCoord *)arg0 ;
-(id)allCells;
-(id)cellAtCellID:(struct TSUCellCoord )arg0 ;
-(id)init;
-(struct TSCECellCoordSet )allCellCoords;
-(void)applyBlockToAllCells:(id)arg0 ;
-(void)removeAllCells;
-(void)setCell:(id)arg0 atCellID:(struct TSUCellCoord )arg1 ;
-(void)upgradeStyleForFormulatextForCellCoord:(struct TSUCellCoord *)arg0 ;


@end


#endif