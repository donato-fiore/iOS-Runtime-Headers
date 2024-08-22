// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTCONVERTFORMULASFORCATEGORIESBYREWRITINGWRAPPER_H
#define TSTCONVERTFORMULASFORCATEGORIESBYREWRITINGWRAPPER_H


#import <Foundation/Foundation.h>

#import "TSTFormulaRewriteSpec.h"
#import "TSCECalculationEngine.h"

@interface TSTConvertFormulasForCategoriesByRewritingWrapper : NSObject {
    TSTFormulaRewriteSpec *_rewriteSpecBaseToChrome;
    TSTFormulaRewriteSpec *_rewriteSpecChromeToBase;
}


@property (readonly, nonatomic) TSCECalculationEngine *calcEngine; // ivar: _calcEngine
@property (readonly, nonatomic) TSTFormulaRewriteSpec *rewriteSpec; // ivar: _rewriteSpec


+(BOOL)isMoveRewriteType:(unsigned int)arg0 ;
-(id)convertFromBaseToChromeForCategorizedTableMove:(id)arg0 containingCell:(struct TSCEFormulaContainingCell *)arg1 ;
-(id)convertFromChromeToBaseForCategorizedTableMove:(id)arg0 containingCell:(struct TSCEFormulaContainingCell *)arg1 ;
-(id)initWithCalcEngine:(id)arg0 rewriteSpec:(id)arg1 ;


@end


#endif