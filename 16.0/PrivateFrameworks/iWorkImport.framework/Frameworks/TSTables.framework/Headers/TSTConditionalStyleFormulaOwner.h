// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTCONDITIONALSTYLEFORMULAOWNER_H
#define TSTCONDITIONALSTYLEFORMULAOWNER_H

@class NSString;
@protocol TSCEFormulaOwning;

#import <Foundation/Foundation.h>

#import "TSCECalculationEngine.h"
#import "TSCECellCoordinateVector.h"
#import "TSTTableModel.h"

@interface TSTConditionalStyleFormulaOwner : NSObject <TSCEFormulaOwning>

 {
    TSCECalculationEngine *_calcEngine;
    TSCECellCoordinateVector *_cellsToInvalidate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) TSKUIDStruct ownerUID; // ivar: _ownerUID
@property (readonly) Class superclass;
@property (nonatomic) TSTTableModel *tableModel; // ivar: _tableModel


+(id)allCondStyleFormulasForTable:(id)arg0 ;
-(BOOL)checkConditionForCellID:(struct TSUCellCoord )arg0 withConditionalStyle:(id)arg1 withIndex:(*NSUInteger)arg2 ;
-(NSInteger)evaluationMode;
-(id)initWithTableModel:(id)arg0 ;
-(id)initWithTableModel:(id)arg0 ownerUID:(struct TSKUIDStruct *)arg1 ;
-(id)linkedResolver;
-(int)registerWithCalcEngine:(id)arg0 baseOwnerUID:(struct TSKUIDStruct *)arg1 ;
-(struct TSCERecalculationState )evaluateFormulaAt:(struct TSUCellCoord )arg0 withCalcEngine:(id)arg1 recalcOptions:(struct TSCERecalculationState )arg2 ;
-(unsigned short)ownerKind;
-(void)addFormulaForConditionalStyle:(id)arg0 atCellID:(struct TSUCellCoord )arg1 ;
-(void)changedConditionForCellID:(struct TSUCellCoord )arg0 ;
-(void)invalidateForCalcEngine:(id)arg0 ;
-(void)removeFormulaAtCellID:(struct TSUCellCoord )arg0 ;
-(void)removeFormulasInRange:(struct TSUCellRect )arg0 ;
-(void)replaceFormulaForConditionalStyle:(id)arg0 atCellID:(struct TSUCellCoord )arg1 ;
-(void)unregisterFromCalcEngine;
-(void)writeResultsForCalcEngine:(id)arg0 ;


@end


#endif