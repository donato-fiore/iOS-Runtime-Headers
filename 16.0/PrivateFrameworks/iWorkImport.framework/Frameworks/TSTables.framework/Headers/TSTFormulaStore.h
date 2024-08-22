// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTFORMULASTORE_H
#define TSTFORMULASTORE_H

@class TSUSparseArray;

#import <Foundation/Foundation.h>

#import "TSCECalculationEngine.h"

@interface TSTFormulaStore : NSObject {
    TSUSparseArray *_formulas;
    NSUInteger _nextIndex;
}


@property (weak, nonatomic) TSCECalculationEngine *calcEngine; // ivar: _calcEngine
@property (nonatomic) TSKUIDStruct formulaOwnerUID; // ivar: _formulaOwnerUID
@property (nonatomic) BOOL usesOnlyFixedCoords; // ivar: _usesOnlyFixedCoords


+(NSUInteger)indexFromCoord:(struct TSUCellCoord *)arg0 ;
+(id)createFormulaForUIDRange:(*void)arg0 tableUID:(struct TSKUIDStruct *)arg1 ;
+(id)createFormulaForUIDTract:(*void)arg0 tableUID:(struct TSKUIDStruct *)arg1 ;
+(struct TSKUIDStruct )tableUIDFromFormula:(id)arg0 atCoord:(struct TSUModelCellCoord *)arg1 ;
+(struct TSUCellCoord )coordFromIndex:(NSUInteger)arg0 ;
+(struct TSUModelCellRect )rangeFromFormulaObject:(id)arg0 atCoord:(struct TSUModelCellCoord *)arg1 ;
+(struct TSUModelCellRect )rangeFromFormulaObject:(id)arg0 atCoord:(struct TSUModelCellCoord *)arg1 useBoundingRange:(BOOL)arg2 ;
-(NSUInteger)appendIndexedFormula:(id)arg0 ;
-(NSUInteger)formulaCount;
-(NSUInteger)markForRollback;
-(NSUInteger)maxIndex;
-(NSUInteger)reserveNextIndex;
-(id)createFormulaObjectForRange:(struct TSUModelCellRect )arg0 atIndex:(NSUInteger)arg1 tableUID:(struct TSKUIDStruct *)arg2 ;
-(id)description;
-(id)formulaObjectAtIndex:(NSUInteger)arg0 ;
-(id)initWithOwnerUID:(struct TSKUIDStruct )arg0 ;
-(id)initWithOwnerUID:(struct TSKUIDStruct *)arg0 archive:(*void)arg1 unarchiver:(id)arg2 ;
-(struct TSKUIDStruct )tableUIDFromFormulaAtIndex:(NSUInteger)arg0 ;
-(struct TSUCellCoord )reserveNextCoordinate;
-(struct TSUModelCellRect )rangeFromFormulaAtIndex:(NSUInteger)arg0 useBoundingRange:(BOOL)arg1 ;
-(void)clearFormulaAtIndex:(NSUInteger)arg0 ;
-(void)foreach:(id)arg0 ;
-(void)registerAllFormulaToCalculationEngine;
-(void)remapRangeFormulasToOwnerUID:(struct TSKUIDStruct *)arg0 ;
-(void)rollbackToMark:(NSUInteger)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)setFormulaObject:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif