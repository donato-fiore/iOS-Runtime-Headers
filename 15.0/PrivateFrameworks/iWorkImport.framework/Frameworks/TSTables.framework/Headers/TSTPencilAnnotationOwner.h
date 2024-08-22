// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTPENCILANNOTATIONOWNER_H
#define TSTPENCILANNOTATIONOWNER_H

@class TSUSparseArray, TSCECalculationEngine, NSString;
@protocol TSCEFormulaOwning;

#import <Foundation/Foundation.h>

#import "TSTFormulaStore.h"
#import "TSTTableModel.h"

@interface TSTPencilAnnotationOwner : NSObject <TSCEFormulaOwning>



@property (retain, nonatomic) TSUSparseArray *annotations; // ivar: _annotations
@property (readonly, weak, nonatomic) TSCECalculationEngine *calculationEngine; // ivar: _calculationEngine
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSTFormulaStore *formulaStore; // ivar: _formulaStore
@property (readonly) NSUInteger hash;
@property (nonatomic) TSKUIDStruct ownerUID; // ivar: _ownerUID
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) TSTTableModel *tableModel; // ivar: _tableModel


-(BOOL)containsAnnotation:(id)arg0 ;
-(NSInteger)evaluationMode;
-(NSUInteger)addAnnotation:(id)arg0 withAnchorRange:(struct TSUCellRect )arg1 ;
-(NSUInteger)indexOfAnnotation:(id)arg0 ;
-(NSUInteger)markForRollback;
-(id)_annotationsForIndexes:(id)arg0 ;
-(id)_annotationsInRows:(id)arg0 ;
-(id)_annotationsIntersectingButNotContainingBaseCellRegion:(id)arg0 ;
-(id)_indexesContainedByRegion:(id)arg0 ;
-(id)_indexesForRange:(struct TSUModelCellRect )arg0 startingOnly:(BOOL)arg1 ;
-(id)_indexesForRows:(id)arg0 ;
-(id)_indexesIntersectingButNotContainingBaseCellRegion:(id)arg0 ;
-(id)annotationsContainedByRegion:(id)arg0 ;
-(id)annotationsStartingInRange:(struct TSUModelCellRect )arg0 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 forTableModel:(id)arg2 ;
-(id)initWithTableModel:(id)arg0 ;
-(id)initWithTableModel:(id)arg0 ownerUID:(struct TSKUIDStruct )arg1 annotations:(id)arg2 formulaStore:(id)arg3 ;
-(id)linkedResolver;
-(id)removeAnnotation:(id)arg0 ;
-(id)removeAnnotationAtIndex:(NSUInteger)arg0 ;
-(int)registerWithCalcEngine:(id)arg0 baseOwnerUID:(struct TSKUIDStruct *)arg1 ;
-(struct TSCERecalculationState )multiEvaluateFormulasAt:(*void)arg0 withCalcEngine:(id)arg1 recalcOptions:(struct TSCERecalculationState )arg2 ;
-(struct TSUCellRect )cellRangeForAnnotation:(id)arg0 ;
-(unsigned short)ownerKind;
-(void)_enumerateAnnotationsAndFormulasWithIndexes:(id)arg0 block:(id)arg1 ;
-(void)_enumerateIndexesIntersectingRegion:(id)arg0 block:(id)arg1 ;
-(void)addAnnotation:(id)arg0 withFormula:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)addAnnotation:(id)arg0 withFormulaObject:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)enumerateAnnotationsAndFormulasContainedInRegion:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateAnnotationsAndFormulasInRange:(struct TSUModelCellRect )arg0 withBlock:(id)arg1 ;
-(void)enumerateAnnotationsWithBlock:(id)arg0 ;
-(void)invalidateForCalcEngine:(id)arg0 ;
-(void)remapTableUIDsInFormulasWithMap:(*void)arg0 ;
-(void)removeAllAnnotations;
-(void)removeAnnotations:(id)arg0 ;
-(void)rollbackToMark:(NSUInteger)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)unregisterFromCalcEngine;
-(void)writeResultsForCalcEngine:(id)arg0 ;


@end


#endif