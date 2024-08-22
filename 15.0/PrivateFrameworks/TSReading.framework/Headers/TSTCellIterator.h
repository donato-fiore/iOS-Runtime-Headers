// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTCELLITERATOR_H
#define TSTCELLITERATOR_H

@protocol TSTCellRegionIterating;

#import <Foundation/Foundation.h>

#import "TSTTableModel.h"
#import "TSTCellRegion.h"
#import "TSTTableDataStore.h"
#import "TSTTableTileRowInfo.h"
#import "TSTTableTile.h"
#import "TSTCell.h"

@interface TSTCellIterator : NSObject {
    TSTTableModel *mTableModel;
    TSTCellRegion *mModelRegion;
    NSObject<TSTCellRegionIterating> *mModelRegionIterator;
    TSTTableDataStore *mTableDataStore;
    ? mPreviousCellID;
    TSTTableTileRowInfo *mCurRow;
    TSTTableTile *mCurTile;
    unsigned short mCurRowID;
    _NSRange mCurTileRange;
    TSTCell *mCell;
    BOOL mSkipStyleOnlyCells;
    BOOL mSkipCommentStorageOnlyCells;
    BOOL mDontCheckSize;
    BOOL mDontReturnMergeRegions;
    BOOL mReturnHiddenCells;
    BOOL mDontInflateFormulas;
    BOOL mReturnEmptyCells;
}


@property (readonly) BOOL dontExpandCellRefs; // ivar: mDontExpandCellRefs
@property (readonly) int rowWalkDirection; // ivar: mRowWalkDirection


-(BOOL)getNext:(struct ? *)arg0 ;
-(BOOL)p_getData:(struct ? *)arg0 forCellID:(struct ? )arg1 ;
-(id)initWithTableModel:(id)arg0 ;
-(id)initWithTableModel:(id)arg0 flags:(NSUInteger)arg1 ;
-(id)initWithTableModel:(id)arg0 range:(struct ? )arg1 ;
-(id)initWithTableModel:(id)arg0 range:(struct ? )arg1 flags:(NSUInteger)arg2 ;
-(id)initWithTableModel:(id)arg0 region:(id)arg1 ;
-(id)initWithTableModel:(id)arg0 region:(id)arg1 flags:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)p_resetIterData:(struct ? *)arg0 ;
-(void)terminate;


@end


#endif