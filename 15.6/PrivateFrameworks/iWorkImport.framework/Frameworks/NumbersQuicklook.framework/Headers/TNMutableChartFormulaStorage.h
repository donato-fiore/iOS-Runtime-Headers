// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TNMUTABLECHARTFORMULASTORAGE_H
#define TNMUTABLECHARTFORMULASTORAGE_H



#import "TNChartFormulaStorage.h"

@interface TNMutableChartFormulaStorage : TNChartFormulaStorage



-(NSUInteger)numberOfGroupsWithCalcEngine:(id)arg0 inEntity:(struct TSKUIDStruct )arg1 shouldSkipHiddenData:(BOOL)arg2 ;
-(id)initWithChartFormulaStorage:(id)arg0 ;
-(id)mutableFormulaListForType:(NSUInteger)arg0 ;
-(void)addFormula:(id)arg0 withFormulaID:(struct TSUCellCoord )arg1 ;
-(void)clearFormulaListForKey:(NSUInteger)arg0 ;
-(void)setDirection:(int)arg0 ;
-(void)setFormulaList:(id)arg0 forKey:(NSUInteger)arg1 ;
-(void)setScheme:(int)arg0 ;


@end


#endif