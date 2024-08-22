// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCEFORMULAOWNERDEPENDENCIES_H
#define TSCEFORMULAOWNERDEPENDENCIES_H

@class TSPObject;
@protocol TSCECalculationEngineRegistration, TSCEFormulaOwning;


#import "TSCEUuidReferences.h"

@interface TSCEFormulaOwnerDependencies : TSPObject

@property (retain, nonatomic) NSObject<TSCECalculationEngineRegistration> *calcEngineRegistrationObject; // ivar: _calcEngineRegistrationObject
@property (readonly, nonatomic) *void cellDependencies; // ivar: _cellDependencies
@property (nonatomic) *void dependencyTracker;
@property (readonly, nonatomic) TSUCellCoord embiggenedCellCoord;
@property (readonly, nonatomic) *void errors; // ivar: _errors
@property (retain, nonatomic) NSObject<TSCEFormulaOwning> *formulaOwner; // ivar: _formulaOwner
@property (readonly, nonatomic) unsigned short formulaOwnerId; // ivar: _formulaOwnerId
@property (readonly, nonatomic) TSKUIDStruct formulaOwnerUid; // ivar: _formulaOwnerUid
@property (nonatomic) BOOL isRegisteredWithCalcEngine; // ivar: _isRegisteredWithCalcEngine
@property (nonatomic) unsigned short ownerIndex; // ivar: _ownerIndex
@property (readonly, nonatomic) *void rangeDependencies; // ivar: _rangeDependencies
@property (nonatomic) BOOL saveAsEmbiggenedFormat; // ivar: _saveAsEmbiggenedFormat
@property (readonly, nonatomic) *void spanningColumnDependencies; // ivar: _spanningColumnDependencies
@property (readonly, nonatomic) *void spanningRowDependencies; // ivar: _spanningRowDependencies
@property (readonly, retain, nonatomic) TSCEUuidReferences *uuidReferences; // ivar: _uuidReferences
@property (readonly, nonatomic) *void volatileDependencies; // ivar: _volatileDependencies
@property (readonly, nonatomic) *void wholeOwnerDependencies; // ivar: _wholeOwnerDependencies


-(BOOL)duringSubOwnerUIDUpgrade;
-(id)initWithContext:(id)arg0 dependencyTracker:(*void)arg1 ownerID:(unsigned short)arg2 ownerUID:(struct TSKUIDStruct *)arg3 owner:(id)arg4 ownerIndex:(unsigned short)arg5 ;
-(void)dealloc;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)pushRangeAndSpanningDependentsWithCounts:(*void)arg0 fromCoord:(struct TSUCellCoord *)arg1 cellIsInACycle:(BOOL)arg2 ;
-(void)resetOwnerUIDForUpgrade:(struct TSKUIDStruct *)arg0 forBaseOwner:(struct TSKUIDStruct *)arg1 ownerKind:(unsigned short)arg2 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)unpackAfterUnarchive;
-(void)willClose;


@end


#endif