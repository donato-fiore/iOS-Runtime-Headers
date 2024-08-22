// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OABRTABLE_H
#define OABRTABLE_H


#import <Foundation/Foundation.h>

#import "ESDContainer.h"
#import "OADTable.h"
#import "OABReaderState.h"
#import "OABTableSortedIntArray.h"

@interface OABRTable : NSObject {
    ESDContainer *mSrcTable;
    OADTable *mTgtTable;
    OABReaderState *mState;
    CGPoint mScale;
    int mRowCount;
    int mColumnCount;
    OABTableSortedIntArray *mXCoords;
    OABTableSortedIntArray *mYCoords;
    *void mHorzLines;
    *void mVertLines;
    *void mCells;
}




-(id)initWithSourceTable:(id)arg0 targetTable:(id)arg1 state:(id)arg2 ;
-(id)readStrokeFromShape:(*void)arg0 ;
-(void)createTargetTableContents;
-(void)dealloc;
-(void)map;
-(void)mapScale;
-(void)readAnchor;
-(void)readCellsAndLines;
-(void)readCoordinates;
-(void)validateTable;


@end


#endif