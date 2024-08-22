// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFORMULA_H
#define EFORMULA_H

@class NSString;
@protocol EFHelper;

#import <Foundation/Foundation.h>

#import "EDFormula.h"
#import "EFTableData.h"

@interface EFormula : NSObject {
    id<EFHelper> *mHelper;
    *void mYylex;
    Class mFormulaClass;
    EDFormula *mFormula;
    EFTableData *mTableData;
    NSString *mErrMsg;
}




+(id)singletonEFormula;
+(id)stringToFormula:(id)arg0 formulaHelper:(id)arg1 formulaClass:(Class)arg2 ;
-(Class)formulaClass;
-(NSUInteger)resolveFirstSheet:(id)arg0 lastSheet:(id)arg1 ;
-(NSUInteger)resolveName:(char *)arg0 ;
-(NSUInteger)resolveSheet:(char *)arg0 isCurrentSheet:(*BOOL)arg1 ;
-(id)formulaHelper;
-(id)resolveTable:(char *)arg0 sheetIndex:(*NSUInteger)arg1 ;
-(id)stringToTokens:(id)arg0 ;
-(id)tableData;
-(void)dealloc;
-(void)setFormula:(id)arg0 ;
-(void)setFormulaClass:(Class)arg0 ;
-(void)setFormulaHelper:(id)arg0 ;
-(void)setTableData:(id)arg0 ;


@end


#endif