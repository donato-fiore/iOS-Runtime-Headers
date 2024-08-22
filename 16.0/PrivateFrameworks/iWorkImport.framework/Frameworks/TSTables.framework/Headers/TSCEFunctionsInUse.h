// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEFUNCTIONSINUSE_H
#define TSCEFUNCTIONSINUSE_H


#import <Foundation/Foundation.h>

#import "TSCECalculationEngine.h"

@interface TSCEFunctionsInUse : NSObject {
    unordered_map<TSCEFunctionIndex, TSCEReferenceSet *, std::hash<TSCEFunctionIndex>, std::equal_to<TSCEFunctionIndex>, std::allocator<std::pair<const TSCEFunctionIndex, TSCEReferenceSet *>>> _cellRefsUsingFunction;
    _opaque_pthread_mutex_t _mutex;
}


@property (readonly, retain, nonatomic) TSCECalculationEngine *calcEngine; // ivar: _calcEngine


-(id)description;
-(id)initWithCalcEngine:(id)arg0 ;
-(struct vector<TSCEFunctionIndex, std::allocator<TSCEFunctionIndex>> )functionsUsed;
-(void)addFunctionUsesInFormula:(id)arg0 atCellRef:(struct TSCECellRef *)arg1 outContainsVolatileFunction:(*BOOL)arg2 ;
-(void)addUseOfFunctions:(*void)arg0 atCellRef:(struct TSCECellRef *)arg1 ;
-(void)dealloc;
-(void)dirtyCellsUsingFunction:(unsigned short)arg0 ;


@end


#endif