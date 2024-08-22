// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTSORTRULEREFERENCETRACKER_H
#define TSTSORTRULEREFERENCETRACKER_H

@class NSString;
@protocol TSCEFormulaOwning;

#import <Foundation/Foundation.h>

#import "TSCECalculationEngine.h"
#import "TSCETrackedReferenceStore.h"
#import "TSTTableInfo.h"

@interface TSTSortRuleReferenceTracker : NSObject <TSCEFormulaOwning>

 {
    TSKUIDStruct _ownerUID;
    TSCECalculationEngine *_calcEngine;
    TSCETrackedReferenceStore *_trackedRefsStore;
    BOOL _isRegisteredWithCalculationEngine;
}


@property (nonatomic) TSKUIDStruct baseTableUID; // ivar: _baseTableUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) TSTTableInfo *tableInfo; // ivar: _tableInfo


-(BOOL)p_hasRuleReferenceForTrackedReference:(id)arg0 ;
-(NSInteger)evaluationMode;
-(id)beginTrackingReferenceWithSpanningRef:(struct TSCESpanningRangeRef *)arg0 ;
-(id)initFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithTableInfo:(id)arg0 baseTableUID:(struct TSKUIDStruct *)arg1 context:(id)arg2 ;
-(id)linkedResolver;
-(struct TSCERecalculationState )evaluateFormulaAt:(struct TSUCellCoord )arg0 withCalcEngine:(id)arg1 recalcOptions:(struct TSCERecalculationState )arg2 ;
-(struct TSCERecalculationState )multiEvaluateFormulasAt:(*void)arg0 withCalcEngine:(id)arg1 recalcOptions:(struct TSCERecalculationState )arg2 ;
-(struct TSCESpanningRangeRef )p_referenceForColumnIndex:(unsigned short)arg0 ;
-(struct TSKUIDStruct )ownerUID;
-(unsigned short)ownerKind;
-(unsigned short)p_columnForTrackedReference:(id)arg0 ;
-(void)beginTrackingReference:(id)arg0 ;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)endTrackingReference:(id)arg0 ;
-(void)invalidateForCalcEngine:(id)arg0 ;
-(void)registerWithCalcEngine:(id)arg0 ;
-(void)registerWithCalcEngine:(id)arg0 reregister:(BOOL)arg1 ;
-(void)setOwnerUID:(struct TSKUIDStruct *)arg0 ;
-(void)unregisterFromCalcEngine;
-(void)updateForSortRules:(id)arg0 ;
-(void)writeResultsForCalcEngine:(id)arg0 ;


@end


#endif