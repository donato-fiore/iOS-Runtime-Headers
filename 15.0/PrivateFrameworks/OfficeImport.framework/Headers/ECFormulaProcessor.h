// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ECFORMULAPROCESSOR_H
#define ECFORMULAPROCESSOR_H


#import <Foundation/Foundation.h>


@interface ECFormulaProcessor : NSObject {
    *void mXlFormulaProcessorLasso;
    *void mXlFormulaProcessorXl;
    *void mXlNameTable;
    *void mLassoSheetNames;
    *void mXlSheetNames;
    *void mXlLinkTable;
}




+(id)formulaStringForEDFormula:(id)arg0 edWorksheet:(id)arg1 xlFormulaProcessor:(*void)arg2 ;
-(*void)setupWithWorkbook:(id)arg0 xlNameTable:(*void)arg1 sheetNames:(*void)arg2 xlLinkTable:(*void)arg3 lassoSyntax:(BOOL)arg4 ;
-(*void)sheetNamesFromWorkbook:(id)arg0 ;
-(*void)xlFormulaProcessorLasso;
-(*void)xlFormulaProcessorXl;
-(id)init;
-(void)dealloc;
-(void)setupWithWorkbook:(id)arg0 ;


@end


#endif