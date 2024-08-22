// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTGRID_H
#define TSCHCHARTGRID_H

@class NSMutableDictionary, NSArray, NSMutableArray;
@protocol NSCopying, TSDMixing, TSCHNotifyOnModify;

#import <Foundation/Foundation.h>


@interface TSCHChartGrid : NSObject <NSCopying, TSDMixing>



@property (nonatomic) BOOL addingMultipleCols; // ivar: _addingMultipleCols
@property (nonatomic) BOOL addingMultipleRows; // ivar: _addingMultipleRows
@property (retain, nonatomic) NSMutableDictionary *columnIdToIndexMap; // ivar: _columnIdToIndexMap
@property (readonly, nonatomic) NSArray *columnIds;
@property (retain, nonatomic) NSMutableArray *columnNames; // ivar: _columnNames
@property (nonatomic) int direction; // ivar: _direction
@property (nonatomic) BOOL dirty; // ivar: _dirty
@property (retain, nonatomic) NSMutableArray *mutableColumnIds; // ivar: _mutableColumnIds
@property (retain, nonatomic) NSMutableArray *mutableRowIds; // ivar: _mutableRowIds
@property (nonatomic) NSUInteger nextColNumber; // ivar: _nextColNumber
@property (nonatomic) NSUInteger nextRowNumber; // ivar: _nextRowNumber
@property (readonly, nonatomic) NSUInteger numberOfColumns;
@property (readonly, nonatomic) NSUInteger numberOfRows;
@property (weak, nonatomic) NSObject<TSCHNotifyOnModify> *objectToNotify; // ivar: _objectToNotify
@property (retain, nonatomic) NSMutableDictionary *rowIdToIndexMap; // ivar: _rowIdToIndexMap
@property (readonly, nonatomic) NSArray *rowIds;
@property (retain, nonatomic) NSMutableArray *rowNames; // ivar: _rowNames
@property (nonatomic) BOOL skipUUIDAssertions; // ivar: _skipUUIDAssertions
@property (nonatomic) NSUInteger transitionLevel; // ivar: _transitionLevel
@property (retain, nonatomic) NSMutableArray *values; // ivar: _values


-(BOOL)contentsEqualToGrid:(id)arg0 ;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0 ;
-(BOOL)p_name:(id)arg0 isInArray:(id)arg1 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)columnIndexForColumnId:(id)arg0 ;
-(NSUInteger)noAssertNumberOfColumns;
-(NSUInteger)noAssertNumberOfRows;
-(NSUInteger)rowIndexForRowId:(id)arg0 ;
-(id)columnIdForColumn:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createUUID;
-(id)createUUIDArrayWithCount:(NSUInteger)arg0 ;
-(id)description;
-(id)extractColumnNames:(struct _NSRange )arg0 returningColumnIds:(*id)arg1 valueColumns:(*id)arg2 ;
-(id)extractGridValuesReturningRowNames:(*id)arg0 rowIds:(*id)arg1 columnNames:(*id)arg2 columnIds:(*id)arg3 ;
-(id)extractRowNames:(struct _NSRange )arg0 returningRowIds:(*id)arg1 valueRows:(*id)arg2 ;
-(id)getNewColumnNameForLocale:(id)arg0 ;
-(id)getNewRowNameForLocale:(id)arg0 ;
-(id)gridAdapterForColumn:(NSUInteger)arg0 ;
-(id)gridAdapterForColumnConstant;
-(id)gridAdapterForColumnCount;
-(id)gridAdapterForRow:(NSUInteger)arg0 ;
-(id)gridAdapterForRowConstant;
-(id)gridAdapterForRowCount;
-(id)init;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)nameForColumn:(NSUInteger)arg0 ;
-(id)nameForRow:(NSUInteger)arg0 ;
-(id)p_uuidsForColumns:(struct _NSRange )arg0 ;
-(id)p_uuidsForRows:(struct _NSRange )arg0 ;
-(id)rowIdForRow:(NSUInteger)arg0 ;
-(id)valueForRow:(NSUInteger)arg0 column:(NSUInteger)arg1 ;
-(void)addingMultipleCols:(BOOL)arg0 ;
-(void)addingMultipleRows:(BOOL)arg0 ;
-(void)adjustRowAndColumnNameListLength;
-(void)decrementTransitionLevel;
-(void)generateRowColumnIdMaps;
-(void)incrementTransitionLevel;
-(void)insertColumn:(NSUInteger)arg0 withName:(id)arg1 ;
-(void)insertColumn:(NSUInteger)arg0 withName:(id)arg1 withId:(id)arg2 ;
-(void)insertColumnNames:(id)arg0 at:(NSUInteger)arg1 withIds:(id)arg2 ;
-(void)insertColumnsAt:(NSUInteger)arg0 names:(id)arg1 data:(id)arg2 withIds:(id)arg3 ;
-(void)insertRow:(NSUInteger)arg0 withName:(id)arg1 ;
-(void)insertRow:(NSUInteger)arg0 withName:(id)arg1 withId:(id)arg2 ;
-(void)insertRowsAt:(NSUInteger)arg0 names:(id)arg1 data:(id)arg2 withIds:(id)arg3 ;
-(void)insertRowsNames:(id)arg0 at:(NSUInteger)arg1 withIds:(id)arg2 ;
-(void)loadFromPreUFFArchive:(*void)arg0 ;
-(void)loadFromUnityArchive:(*void)arg0 chartInfo:(id)arg1 ;
-(void)moveColumns:(struct _NSRange )arg0 afterColumn:(NSInteger)arg1 ;
-(void)moveRows:(struct _NSRange )arg0 afterRow:(NSInteger)arg1 ;
-(void)p_adjustNameListLength:(BOOL)arg0 ;
-(void)p_updateColumnIndexMap;
-(void)p_updateColumnMapStartingAtIndex:(NSUInteger)arg0 ;
-(void)p_updateIdMapStartingAtIndex:(NSUInteger)arg0 isRow:(BOOL)arg1 ;
-(void)p_updateRowIndexMap;
-(void)p_updateRowMapStartingAtIndex:(NSUInteger)arg0 ;
-(void)removeColumn:(NSUInteger)arg0 ;
-(void)removeRow:(NSUInteger)arg0 ;
-(void)saveToUnityArchive:(*void)arg0 forCopy:(BOOL)arg1 ;
-(void)setNameForColumn:(NSUInteger)arg0 toName:(id)arg1 ;
-(void)setNameForRow:(NSUInteger)arg0 toName:(id)arg1 ;
-(void)setValue:(id)arg0 forRow:(NSUInteger)arg1 column:(NSUInteger)arg2 ;
-(void)takeDataFromDictionary:(id)arg0 ;
-(void)takeDataFromDictionary:(id)arg0 rowIds:(id)arg1 columnIds:(id)arg2 ;
-(void)updateRowAndColumnIndexMaps;
-(void)validateRowColumnIdMapsAndFix:(BOOL)arg0 ;
-(void)willModify;


@end


#endif