// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEUPGRADINGTABLESMINION_H
#define TSCEUPGRADINGTABLESMINION_H

@class NSString;
@protocol TSCEFormulaReplacing;

#import <Foundation/Foundation.h>

#import "TSCEFormulasToSet.h"
#import "TSCECalculationEngine.h"

@interface TSCEUpgradingTablesMinion : NSObject <TSCEFormulaReplacing>

 {
    TSCEFormulasToSet *_formulasToSet;
}


@property (readonly, nonatomic) TSCECalculationEngine *calcEngine;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCalcEngine:(id)arg0 ;
-(void)flush;
-(void)markCellRefAsDirty:(struct TSCECellRef *)arg0 ;
-(void)markRangeRefAsDirty:(struct TSCERangeRef *)arg0 ;
-(void)removeAllFormulasFromOwner:(struct TSKUIDStruct *)arg0 ;
-(void)removeFormulaAt:(struct TSUCellCoord *)arg0 inOwner:(struct TSKUIDStruct *)arg1 ;
-(void)removeFormulasAt:(*void)arg0 ;
-(void)replaceFormula:(id)arg0 atCellCoord:(struct TSUCellCoord *)arg1 inOwner:(struct TSKUIDStruct *)arg2 ;
-(void)replaceFormula:(id)arg0 atCellCoord:(struct TSUCellCoord *)arg1 inOwner:(struct TSKUIDStruct *)arg2 replaceOptions:(struct TSCEReplaceFormulaOptions )arg3 ;
-(void)replaceFormulaAt:(struct TSUCellCoord *)arg0 inOwner:(struct TSKUIDStruct *)arg1 precedents:(id)arg2 replaceOptions:(struct TSCEReplaceFormulaOptions *)arg3 ;
-(void)resetFormulaAt:(struct TSCECellRef *)arg0 ;


@end


#endif