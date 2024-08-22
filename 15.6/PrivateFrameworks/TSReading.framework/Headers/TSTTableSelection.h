// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLESELECTION_H
#define TSTTABLESELECTION_H

@class NSString;
@protocol NSCopying, TSDTextSelection;


#import "TSKSelection.h"
#import "TSTCellRegion.h"

@interface TSTTableSelection : TSKSelection <NSCopying, TSDTextSelection>



@property (readonly, nonatomic) ? anchorCellID; // ivar: mAnchorCellID
@property (readonly, nonatomic) TSTCellRegion *baseRegion; // ivar: mBaseRegion
@property (readonly, nonatomic) TSTCellRegion *cellRegion; // ivar: mCellRegion
@property (readonly, nonatomic) ? cursorCellID; // ivar: mCursorCellID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAtEndOfLine;
@property (readonly, nonatomic) _NSRange range;
@property (nonatomic) _NSRange searchReferenceRange; // ivar: mSearchReferenceRange
@property (readonly, nonatomic) int selectionType; // ivar: mSelectionType
@property (readonly) Class superclass;


-(BOOL)areCellsInTheSameRegionInTable:(id)arg0 ;
-(BOOL)containsCell:(struct ? )arg0 ;
-(BOOL)containsSelection:(id)arg0 ;
-(BOOL)intersectsPartialMergeRangeInTable:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSelection:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTableModel:(id)arg0 andCellID:(struct ? )arg1 ;
-(id)initWithTableModel:(id)arg0 andCellRange:(struct ? )arg1 ;
-(id)initWithTableModel:(id)arg0 andPreviousSelection:(id)arg1 offsetBy:(struct ? )arg2 ;
-(id)initWithTableModel:(id)arg0 cellID:(struct ? )arg1 selectionType:(int)arg2 ;
-(id)initWithTableModel:(id)arg0 cellRange:(struct ? )arg1 type:(int)arg2 anchorCellID:(struct ? )arg3 cursorCellID:(struct ? )arg4 ;
-(id)initWithTableModel:(id)arg0 cellRegion:(id)arg1 ;
-(id)initWithTableModel:(id)arg0 cellRegion:(id)arg1 anchorCellID:(struct ? )arg2 cursorCellID:(struct ? )arg3 ;
-(id)initWithTableModel:(id)arg0 cellRegion:(id)arg1 anchorCellID:(struct ? )arg2 cursorCellID:(struct ? )arg3 baseRegion:(id)arg4 ;
-(id)initWithTableModel:(id)arg0 cellRegion:(id)arg1 anchorCellID:(struct ? )arg2 cursorCellID:(struct ? )arg3 baseRegion:(id)arg4 selectionType:(int)arg5 ;
-(id)initWithTableModel:(id)arg0 cellRegion:(id)arg1 anchorCellID:(struct ? )arg2 cursorCellID:(struct ? )arg3 selectionType:(int)arg4 ;
-(id)initWithTableModel:(id)arg0 rowOrColumn:(int)arg1 index:(unsigned int)arg2 count:(unsigned int)arg3 ;
-(id)initWithTableModel:(id)arg0 selectionType:(int)arg1 ;
-(id)initWithTableModel:(id)arg0 startingColumnIndex:(unsigned short)arg1 numberOfColumns:(unsigned short)arg2 ;
-(id)initWithTableModel:(id)arg0 startingRowIndex:(unsigned short)arg1 numberOfRows:(unsigned short)arg2 ;
-(id)selectionByAddingCellRange:(struct ? )arg0 inTable:(id)arg1 withAnchor:(struct ? )arg2 cursor:(struct ? )arg3 selectionType:(int)arg4 ;
-(id)selectionByExtendingWithCellRange:(struct ? )arg0 inTable:(id)arg1 selectionType:(int)arg2 cursorCell:(struct ? )arg3 ;
-(id)selectionByMovingInTableInfo:(id)arg0 inDirection:(int)arg1 withModifierKeys:(int)arg2 forReferenceMove:(BOOL)arg3 ;
-(id)selectionByMovingInTableInfo:(id)arg0 inDirection:(int)arg1 withModifierKeys:(int)arg2 forReferenceMove:(BOOL)arg3 suppressWrap:(BOOL)arg4 ;
-(id)selectionByRemovingCellRange:(struct ? )arg0 inTable:(id)arg1 withAnchor:(struct ? )arg2 cursor:(struct ? )arg3 selectionType:(int)arg4 ;
-(void)dealloc;
-(void)enumerateSelectedCellsInTable:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateSelectedCellsInTable:(id)arg0 withFlags:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)insert:(int)arg0 atIndex:(unsigned short)arg1 count:(unsigned short)arg2 ;
-(void)remove:(int)arg0 atIndex:(unsigned short)arg1 count:(unsigned short)arg2 ;


@end


#endif