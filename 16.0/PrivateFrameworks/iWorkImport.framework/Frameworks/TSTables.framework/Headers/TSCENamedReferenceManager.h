// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCENAMEDREFERENCEMANAGER_H
#define TSCENAMEDREFERENCEMANAGER_H

@class TSPObject, NSString;
@protocol TSCEFormulaOwning;


#import "TSCETrackedReferenceStore.h"
#import "TSCECalculationEngine.h"

@interface TSCENamedReferenceManager : TSPObject <TSCEFormulaOwning>

 {
    TSKUIDStruct _ownerUID;
    TSCETrackedReferenceStore *_trackedRefsStore;
    TSCETrackedReferenceStore *_weakTrackedRefsStore;
    BOOL _isRegisteredWithCalculationEngine;
}


@property (weak) TSCECalculationEngine *calcEngine; // ivar: _calcEngine
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)trackedReferencesExistForTable:(struct TSKUIDStruct *)arg0 ;
-(NSInteger)evaluationMode;
-(id)beginTrackingNamesInTable:(struct TSKUIDStruct *)arg0 limitedToRange:(struct TSCERangeCoordinate )arg1 ;
-(id)beginTrackingReferenceWithCellRef:(struct TSCECellRef *)arg0 ;
-(id)formulaOwner;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 calculationEngine:(id)arg1 ;
-(id)linkedResolver;
-(id)trackedReferenceAtCoord:(struct TSUCellCoord )arg0 ;
-(struct TSCERecalculationState )evaluateFormulaAt:(struct TSUCellCoord )arg0 withCalcEngine:(id)arg1 recalcOptions:(struct TSCERecalculationState )arg2 ;
-(struct TSCERecalculationState )multiEvaluateFormulasAt:(*void)arg0 withCalcEngine:(id)arg1 recalcOptions:(struct TSCERecalculationState )arg2 ;
-(struct TSKUIDStruct )formulaOwnerUID;
-(struct TSKUIDStruct )ownerUID;
-(unsigned short)ownerKind;
-(void)beginTrackingNameInCell:(struct TSUCellCoord )arg0 ofTableUID:(struct TSKUIDStruct *)arg1 addingTrackedReferencesTo:(id)arg2 ;
-(void)beginTrackingNamesInRange:(struct TSCERangeCoordinate )arg0 ofTableUID:(struct TSKUIDStruct *)arg1 addingTrackedReferencesTo:(id)arg2 ;
-(void)beginTrackingNamesInTable:(struct TSKUIDStruct *)arg0 ;
-(void)beginTrackingReference:(id)arg0 ;
-(void)endTrackingNamesInTable:(struct TSKUIDStruct *)arg0 ;
-(void)endTrackingReference:(id)arg0 ;
-(void)invalidateForCalcEngine:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)registerWithCalcEngine:(BOOL)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setCalculationEngine:(id)arg0 ;
-(void)setFormulaOwnerUID:(struct TSKUIDStruct *)arg0 ;
-(void)unregisterFromCalcEngine;
-(void)updateTrackedHeaders:(struct TSKUIDStruct *)arg0 ;
-(void)willClose;
-(void)writeResultsForCalcEngine:(id)arg0 ;


@end


#endif