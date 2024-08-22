// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTFORMULAPREDICATE_H
#define TSTFORMULAPREDICATE_H

@class TSCEFormulaObject, NSDate, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSTFormulaPredArg.h"

@interface TSTFormulaPredicate : NSObject <NSCopying>

 {
    TSCEFormulaObject *_formula;
    short _argIndex0;
    short _argIndex1;
    short _argIndex2;
}


@property (readonly, nonatomic) BOOL backwardCompatiblePrePivot;
@property (readonly, nonatomic) BOOL canDowngradeForPrePivotFormat;
@property (readonly, nonatomic) NSDate *dateTimeParam1;
@property (readonly, nonatomic) NSDate *dateTimeParam2;
@property (nonatomic) BOOL forConditionalStyle; // ivar: _forConditionalStyle
@property (readonly, nonatomic) TSCEFormulaObject *formula;
@property (nonatomic) TSCEUidCellRef hostCellRef; // ivar: _hostCellRef
@property (readonly, nonatomic) CGFloat numberParam1;
@property (readonly, nonatomic) CGFloat numberParam2;
@property (retain, nonatomic) TSTFormulaPredArg *predArg0; // ivar: _predArg0
@property (retain, nonatomic) TSTFormulaPredArg *predArg1; // ivar: _predArg1
@property (readonly, nonatomic) unsigned char predArg1Type;
@property (retain, nonatomic) TSTFormulaPredArg *predArg2; // ivar: _predArg2
@property (readonly, nonatomic) unsigned char predArg2Type;
@property (readonly, nonatomic) unsigned char predicateType; // ivar: _predicateType
@property (readonly, nonatomic) unsigned char qualifier1; // ivar: _qualifier1
@property (readonly, nonatomic) unsigned char qualifier2; // ivar: _qualifier2
@property (readonly, nonatomic) NSString *stringParam1;


+(BOOL)isThresholdNeededForType:(unsigned char)arg0 ;
+(id)defaultPredicateForType:(unsigned char)arg0 argumentCellRef:(struct TSCECellRef )arg1 hostCell:(struct TSUCellCoord )arg2 ;
+(id)defaultPredicateForType:(unsigned char)arg0 argumentCellReference:(id)arg1 hostCell:(struct TSUCellCoord )arg2 ;
-(BOOL)containsUidReferences;
-(BOOL)evaluateAtCellID:(struct TSUCellCoord )arg0 onOwnerUID:(struct TSKUIDStruct *)arg1 calcEngine:(id)arg2 ;
-(BOOL)hasBadRefWithUidInfo;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualForInspector:(id)arg0 atHostCoordinate:(struct TSUCellCoord )arg1 ;
-(BOOL)p_isEqualForNonFormulaItems:(id)arg0 ;
-(BOOL)p_testDataTypesForArg0:(unsigned char)arg0 arg1:(unsigned char)arg1 arg2:(unsigned char)arg2 predShouldReturn:(*BOOL)arg3 ;
-(BOOL)useColumnRefForArg0;
-(NSUInteger)hash;
-(id)copyByClearingUids:(id)arg0 containingTableUID:(struct TSKUIDStruct *)arg1 ;
-(id)copyByConvertingBaseToChrome:(id)arg0 inOwner:(id)arg1 inCellCoordinate:(struct TSUCellCoord )arg2 ;
-(id)copyByConvertingChromeToBase:(id)arg0 inOwner:(id)arg1 inCellCoordinate:(struct TSUCellCoord )arg2 ;
-(id)copyByOffsettingRelativeReferencesWithOffset:(struct TSUColumnRowOffset )arg0 ;
-(id)copyByRemappingHostCellAgnosticOwnerUIDsWithMap:(*void)arg0 calcEngine:(id)arg1 ownerUID:(struct TSKUIDStruct *)arg2 error:(*BOOL)arg3 ;
-(id)copyByRemappingOwnerUIDsWithMap:(*void)arg0 calcEngine:(id)arg1 error:(*BOOL)arg2 ;
-(id)copyByRewritingWithContext:(struct TSCEFormulaRewriteContext *)arg0 rewriteBlock:(id)arg1 ;
-(id)copyByRewritingWithSpec:(id)arg0 inOwner:(id)arg1 inCellCoordinate:(struct TSUCellCoord )arg2 ;
-(id)copyByUpdatingLinkedTable:(struct TSKUIDStruct *)arg0 hostCell:(struct TSUCellCoord )arg1 ;
-(id)copyByUpgradingToLinkedRefForTable:(struct TSKUIDStruct *)arg0 hostCell:(struct TSUCellCoord )arg1 ;
-(id)copyToGeometricFormForHiddenRowsWithTableInfo:(id)arg0 containsBadRef:(*BOOL)arg1 ;
-(id)copyToGeometricFormWithRewriteContext:(struct TSCEFormulaRewriteContext *)arg0 ;
-(id)copyToUidFormForConditionalStylesWithTableInfo:(id)arg0 containingCell:(struct TSUCellCoord )arg1 preserveHostCell:(BOOL)arg2 ;
-(id)copyToUidFormForHiddenRowsWithTableInfo:(id)arg0 ;
-(id)copyToUidFormWithRewriteContext:(struct TSCEFormulaRewriteContext *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataList1;
-(id)downgradeForPrePivotFormatForLocale:(id)arg0 ;
-(id)init;
-(id)initFromArchive:(*void)arg0 ;
-(id)initFromPrePivotArchive:(*void)arg0 ;
-(id)initWithLiteralDateType:(unsigned char)arg0 date1:(id)arg1 date2:(id)arg2 number1:(CGFloat)arg3 number2:(CGFloat)arg4 qualifier1:(unsigned char)arg5 qualifier2:(unsigned char)arg6 argumentCellRef:(struct TSCECellRef )arg7 hostCell:(struct TSUCellCoord )arg8 ;
-(id)initWithLiteralDateType:(unsigned char)arg0 date1:(id)arg1 date2:(id)arg2 number1:(CGFloat)arg3 number2:(CGFloat)arg4 qualifier1:(unsigned char)arg5 qualifier2:(unsigned char)arg6 argumentCellRef:(struct TSCECellRef )arg7 hostCell:(struct TSUCellCoord )arg8 forConditionalStyle:(BOOL)arg9 ;
-(id)initWithLiteralDurationType:(unsigned char)arg0 duration1:(CGFloat)arg1 durationUnits1:(unsigned char)arg2 duration2:(CGFloat)arg3 durationUnits2:(unsigned char)arg4 qualifier:(unsigned char)arg5 argumentCellRef:(struct TSCECellRef )arg6 hostCell:(struct TSUCellCoord )arg7 ;
-(id)initWithLiteralNumberType:(unsigned char)arg0 number1:(CGFloat)arg1 number2:(CGFloat)arg2 qualifier:(unsigned char)arg3 argumentCellRef:(struct TSCECellRef )arg4 hostCell:(struct TSUCellCoord )arg5 ;
-(id)initWithLiteralTextType:(unsigned char)arg0 string:(id)arg1 argumentCellRef:(struct TSCECellRef )arg2 hostCell:(struct TSUCellCoord )arg3 ;
-(id)initWithPredicateType:(unsigned char)arg0 arg0:(id)arg1 arg1:(id)arg2 arg2:(id)arg3 qualifier1:(unsigned char)arg4 qualifier2:(unsigned char)arg5 forConditionalStyle:(BOOL)arg6 ;
-(id)initWithPredicateType:(unsigned char)arg0 arg1:(id)arg1 arg2:(id)arg2 qualifier1:(unsigned char)arg3 qualifier2:(unsigned char)arg4 argumentCellRef:(struct TSCECellRef )arg5 hostCell:(struct TSUCellCoord )arg6 ;
-(id)initWithPredicateType:(unsigned char)arg0 arg1:(id)arg1 arg2:(id)arg2 qualifier1:(unsigned char)arg3 qualifier2:(unsigned char)arg4 argumentCellRef:(struct TSCECellRef )arg5 hostCell:(struct TSUCellCoord )arg6 forConditionalStyle:(BOOL)arg7 ;
-(id)initWithPredicateType:(unsigned char)arg0 arg1:(id)arg1 arg2:(id)arg2 qualifier1:(unsigned char)arg3 qualifier2:(unsigned char)arg4 argumentCellReference:(id)arg5 hostCell:(struct TSUCellCoord )arg6 forConditionalStyle:(BOOL)arg7 ;
-(id)predicateArg1atBaseHostCoord:(struct TSUModelCellCoord )arg0 calcEngine:(id)arg1 ;
-(id)predicateArg2atBaseHostCoord:(struct TSUModelCellCoord )arg0 calcEngine:(id)arg1 ;
-(struct TSCECrossTableReference )crossTableRefParam1;
-(struct TSCECrossTableReference )crossTableRefParam2;
-(struct TSCEFormulaCreator )p_creatorForPeriodBoundaryWithScale:(unsigned char)arg0 direction:(unsigned char)arg1 offset:(id)arg2 argIndex:(unsigned int)arg3 earlierBound:(BOOL)arg4 isCalPers:(BOOL)arg5 ;
-(struct TSCENumberValue )durationParam1;
-(struct TSCENumberValue )durationParam2;
-(unsigned char)expectedArgTypeForPredicateType:(unsigned char)arg0 firstArg:(BOOL)arg1 ;
-(unsigned char)p_argTypeForPredArg:(id)arg0 argNum:(NSUInteger)arg1 calculationEngine:(id)arg2 hostCell:(struct TSUCellCoord )arg3 ;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)encodeToPrePivotArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)encodeToPrePivotArchive:(*void)arg0 archiver:(id)arg1 encodingForSOS:(BOOL)arg2 ;
-(void)getPrecedents:(*void)arg0 calcEngine:(id)arg1 hostOwnerUID:(struct TSKUIDStruct *)arg2 hostCellID:(struct TSUCellCoord *)arg3 ;
-(void)iterateFormulasWithContext:(struct TSCEFormulaRewriteContext *)arg0 shouldStop:(*BOOL)arg1 block:(id)arg2 ;
-(void)p_populateMembersFromFormula;
-(void)p_smokeTestThePredicate;
-(void)recreateFormula;
-(void)remapOwnerUIDsWithMap:(*void)arg0 calcEngine:(id)arg1 error:(*BOOL)arg2 ;
-(void)rewriteFormulaWithBlock:(id)arg0 ;
-(void)rewriteNumberToDurationForSageImport:(struct TSCECellRef *)arg0 durationUnitLargest:(unsigned char)arg1 ;
-(void)setArgumentAt:(NSInteger)arg0 withPredArg:(id)arg1 ;
-(void)setHostCell:(struct TSKUIDStruct *)arg0 hostColumnUID:(struct TSKUIDStruct *)arg1 hostRowUID:(struct TSKUIDStruct *)arg2 ;
-(void)upgradeTopAndBottom;


@end


#endif