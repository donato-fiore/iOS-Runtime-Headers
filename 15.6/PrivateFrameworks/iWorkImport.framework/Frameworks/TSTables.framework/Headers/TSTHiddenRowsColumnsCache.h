// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTHIDDENROWSCOLUMNSCACHE_H
#define TSTHIDDENROWSCOLUMNSCACHE_H

@class NSMutableIndexSet, NSString, NSIndexSet;
@protocol TSTTableHiddenRowColumnProviding;

#import <Foundation/Foundation.h>

#import "TSTHiddenStateIndexSet.h"

@interface TSTHiddenRowsColumnsCache : NSObject <TSTTableHiddenRowColumnProviding>



@property (retain, nonatomic) NSMutableIndexSet *columnsInvalid; // ivar: _columnsInvalid
@property (retain, nonatomic) TSTHiddenStateIndexSet *columnsVisible; // ivar: _columnsVisible
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger rowMarkIndex; // ivar: _rowMarkIndex
@property (retain, nonatomic) NSMutableIndexSet *rowsInvalid; // ivar: _rowsInvalid
@property (retain, nonatomic) TSTHiddenStateIndexSet *rowsUserVisible; // ivar: _rowsUserVisible
@property (retain, nonatomic) TSTHiddenStateIndexSet *rowsVisible; // ivar: _rowsVisible
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSIndexSet *userVisibleRowIndices;
@property (readonly, nonatomic) NSIndexSet *visibleColumnIndices;
@property (readonly, nonatomic) NSIndexSet *visibleRowIndices;


-(BOOL)anyHiddenColumnsInCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)anyHiddenRowsInCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)anyRowsUserHiddenInCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)hasHiddenColumnAtIndex:(unsigned short)arg0 ;
-(BOOL)hasHiddenRowAtIndex:(unsigned int)arg0 ;
-(BOOL)isRowUserHidden:(unsigned int)arg0 ;
-(id)init;
-(struct TSUCellCoord )visibleCellOffsetBy:(struct TSUColumnRowOffset )arg0 fromCellID:(struct TSUCellCoord )arg1 ;
-(unsigned int)indexOfVisibleRowAfterAndIncludingRowAtIndex:(unsigned int)arg0 ;
-(unsigned int)indexOfVisibleRowAfterRowAtIndex:(unsigned int)arg0 ;
-(unsigned int)indexOfVisibleRowBeforeAndIncludingRowAtIndex:(unsigned int)arg0 ;
-(unsigned int)indexOfVisibleRowBeforeRowAtIndex:(unsigned int)arg0 ;
-(unsigned int)nonUserHiddenRowAfterAndIncludingRow:(unsigned int)arg0 ;
-(unsigned int)numberOfHiddenColumnsInCellRange:(struct TSUCellRect )arg0 ;
-(unsigned int)numberOfHiddenRowsInCellRange:(struct TSUCellRect )arg0 ;
-(unsigned int)numberOfUserHiddenRowsInCellRange:(struct TSUCellRect )arg0 ;
-(unsigned int)numberOfVisibleColumnsInCellRange:(struct TSUCellRect )arg0 ;
-(unsigned int)numberOfVisibleRowsFromHeader:(unsigned int)arg0 ;
-(unsigned int)numberOfVisibleRowsFromStartRowIndex:(NSUInteger)arg0 toEndRowIndex:(unsigned int)arg1 ;
-(unsigned int)numberOfVisibleRowsInCellRange:(struct TSUCellRect )arg0 ;
-(unsigned int)previousNthVisibleRow:(unsigned int)arg0 fromRowIndex:(unsigned int)arg1 ;
-(unsigned short)indexOfVisibleColumnAfterAndIncludingColumnAtIndex:(unsigned short)arg0 ;
-(unsigned short)indexOfVisibleColumnAfterColumnAtIndex:(unsigned short)arg0 ;
-(unsigned short)indexOfVisibleColumnBeforeAndIncludingColumnAtIndex:(unsigned short)arg0 ;
-(unsigned short)indexOfVisibleColumnBeforeColumnAtIndex:(unsigned short)arg0 ;
-(unsigned short)previousNthVisibleColumn:(unsigned int)arg0 fromColumnIndex:(unsigned short)arg1 ;
-(void)validate:(id)arg0 ;
-(void)validateChangeDescriptors:(id)arg0 ;


@end


#endif