// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTCATEGORYAGGREGATEFORMULAOWNER_H
#define TSTCATEGORYAGGREGATEFORMULAOWNER_H

@class NSString;
@protocol TSCEFormulaOwning;

#import <Foundation/Foundation.h>

#import "TSCECalculationEngine.h"
#import "TSTTableInfo.h"
#import "TSTCellDictionary.h"

@interface TSTCategoryAggregateFormulaOwner : NSObject <TSCEFormulaOwning>

 {
    TSCECalculationEngine *_calcEngine;
    TSTTableInfo *_tableInfo;
}


@property (readonly, nonatomic) TSTCellDictionary *cellsPendingWrite; // ivar: _cellsPendingWrite
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) *TSKUIDStruct ownerUID; // ivar: _ownerUID
@property (readonly) Class superclass;
@property (weak, nonatomic) TSTTableInfo *tableInfo;
@property (nonatomic) *TSKUIDStruct tableUID; // ivar: _tableUID


-(BOOL)isRegisteredWithCalcEngine:(id)arg0 ;
-(NSInteger)evaluationMode;
-(id)initWithTableUID:(struct TSKUIDStruct *)arg0 ownerUID:(struct TSKUIDStruct *)arg1 ;
-(id)linkedResolver;
-(int)registerWithCalcEngine:(id)arg0 baseOwnerUID:(struct TSKUIDStruct *)arg1 ;
-(struct TSCERecalculationState )evaluateFormulaAt:(struct TSUCellCoord )arg0 withCalcEngine:(id)arg1 recalcOptions:(struct TSCERecalculationState )arg2 ;
-(unsigned short)ownerKind;
-(void)invalidateForCalcEngine:(id)arg0 ;
-(void)unregisterFromCalcEngine;
-(void)writeResultsForCalcEngine:(id)arg0 ;


@end


#endif