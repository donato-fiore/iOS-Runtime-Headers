// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEFORMULAOBJECT_H
#define TSCEFORMULAOBJECT_H

@class NSString;
@protocol NSCopying, TSCEFormulaReturning;

#import <Foundation/Foundation.h>

#import "TSCEFormulaObject.h"

@interface TSCEFormulaObject : NSObject <NSCopying, TSCEFormulaReturning>

 {
    *TSCEASTNodeArray _astNodeArray;
    NSUInteger _hash;
}


@property (readonly) BOOL containsInvalidRef;
@property (readonly) BOOL containsUidReferences;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSCEFormulaObject *formulaObject;
@property (readonly) BOOL hasBadRefWithUidInfo;
@property (readonly) BOOL hasHostCell;
@property (readonly) BOOL hasUidTracts;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *TSKUIDStruct hostColumnUID; // ivar: _hostColumnUID
@property (readonly, nonatomic) *TSKUIDStruct hostRowUID; // ivar: _hostRowUID
@property (readonly, nonatomic) *TSKUIDStruct hostTableUID; // ivar: _hostTableUID
@property (readonly) BOOL isEmpty;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSCEFormulaTranslationFlags translationFlags; // ivar: _translationFlags
@property (readonly) BOOL usesFunctionsWithDateArgs;


+(id)parseFormula:(id)arg0 calcEngine:(id)arg1 containingCell:(struct TSCECellRef *)arg2 outError:(*id)arg3 ;
+(id)parseFormula:(id)arg0 calcEngine:(id)arg1 unqualifiedReferenceTableUID:(struct TSKUIDStruct *)arg2 containingCell:(struct TSUCellCoord *)arg3 outError:(*id)arg4 outNeedsImportRewrite:(*BOOL)arg5 isChartFormula:(BOOL)arg6 isSageUpgrade:(BOOL)arg7 ;
+(struct TSCEValue )formulaResultForFormattedValue:(struct TSCEValue *)arg0 context:(*void)arg1 suppressCycleCheck:(BOOL)arg2 formatAsPercent:(BOOL)arg3 ;
+(struct TSCEValue )formulaResultForFormattedValueWithKnownCycleState:(struct TSCEValue *)arg0 context:(*void)arg1 isInACycle:(BOOL)arg2 outErrorIsDueToCycle:(*BOOL)arg3 formatAsPercent:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFormula:(id)arg0 ;
-(BOOL)isEquivalentToFormula:(id)arg0 ;
-(BOOL)isEquivalentToFormula:(id)arg0 context:(NSUInteger)arg1 thisContainingCell:(struct TSCECellRef *)arg2 thatContainingCell:(struct TSCECellRef *)arg3 ;
-(id)copyByClearingHostCell;
-(id)copyByClearingUids:(id)arg0 containingTableUID:(struct TSKUIDStruct *)arg1 ;
-(id)copyByConvertingColonToColonTract:(struct TSCEFormulaRewriteContext *)arg0 ;
-(id)copyByConvertingColonTractToColon:(struct TSCEFormulaRewriteContext *)arg0 ;
-(id)copyByConvertingColonTractToColon:(struct TSCEFormulaRewriteContext *)arg0 breakUpIntoRefs:(BOOL)arg1 ;
-(id)copyByForceSettingOwnerUIDs:(struct TSKUIDStruct *)arg0 calcEngine:(id)arg1 ;
-(id)copyByFreezingRefs:(id)arg0 containingCell:(struct TSCEFormulaContainingCell *)arg1 ;
-(id)copyByMakingAllCategoryRefsIndirect:(id)arg0 containingCell:(struct TSCEFormulaContainingCell *)arg1 ;
-(id)copyByOffsettingRelativeReferences:(id)arg0 oldContainingCell:(struct TSCECellRef *)arg1 newContainingTable:(struct TSKUIDStruct *)arg2 offset:(struct TSUColumnRowOffset )arg3 ;
-(id)copyByOffsettingRelativeReferences:(struct TSUColumnRowOffset )arg0 ;
-(id)copyByRemappingHostCellAgnosticOwnerUIDs:(*void)arg0 calcEngine:(id)arg1 containingCell:(struct TSCECellRef *)arg2 outError:(*BOOL)arg3 ;
-(id)copyByRemappingOwnerUIDs:(*void)arg0 calcEngine:(id)arg1 badRefFound:(*BOOL)arg2 ;
-(id)copyByRemappingOwnerUIDs:(*void)arg0 calcEngine:(id)arg1 containingCell:(struct TSCECellRef *)arg2 outBadRefFound:(*BOOL)arg3 ;
-(id)copyByRemappingUids:(*void)arg0 rowMap:(*void)arg1 ownerMap:(*void)arg2 clearIfMissing:(BOOL)arg3 ;
-(id)copyByRemovingNumberToDateCoercion:(*void)arg0 outFormulaResult:(struct TSCEValue *)arg1 outDidModifyFormula:(*BOOL)arg2 ;
-(id)copyByRepairingBadReferences:(struct TSCEFormulaRewriteContext *)arg0 ;
-(id)copyByRewritingForExcelExport:(*void)arg0 ;
-(id)copyByRewritingForExcelImport:(*void)arg0 outFormulaResult:(struct TSCEValue *)arg1 outDidModifyFormula:(*BOOL)arg2 outFormulaReplacedForExcelCompatWarning:(*BOOL)arg3 functionNameReplacedForExcelCompat:(*id)arg4 formulaFormatFromCell:(unsigned int)arg5 ;
-(id)copyByRewritingForSageExport:(*void)arg0 targetDocumentSupportsCrossTableReferences:(BOOL)arg1 outshouldBakeWholeFormula:(*BOOL)arg2 outFeaturesUsed:(char *)arg3 ;
-(id)copyByRewritingForSageImport:(id)arg0 containingCell:(struct TSCECellRef *)arg1 ;
-(id)copyByRewritingForTranspose:(id)arg0 calcEngine:(id)arg1 containingCell:(struct TSCEFormulaContainingCell *)arg2 outTransposeWarning:(*BOOL)arg3 ;
-(id)copyByRewritingGroupUid:(struct TSKUIDStruct *)arg0 groupByUID:(struct TSKUIDStruct *)arg1 ;
-(id)copyByRewritingNumberToDurationForSageImport:(struct TSCECellRef *)arg0 durationUnitLargest:(unsigned char)arg1 ;
-(id)copyByRewritingReferencesToGeometricForm:(struct TSCEFormulaRewriteContext *)arg0 ;
-(id)copyByRewritingReferencesToUidForm:(struct TSCEFormulaRewriteContext *)arg0 ;
-(id)copyByRewritingWithContext:(struct TSCEFormulaRewriteContext *)arg0 rewriteBlock:(id)arg1 ;
-(id)copyByRewritingWithSpec:(id)arg0 calcEngine:(id)arg1 containingCell:(struct TSCEFormulaContainingCell *)arg2 ;
-(id)copyBySettingHostTableUID:(struct TSKUIDStruct *)arg0 hostColumnUID:(struct TSKUIDStruct *)arg1 hostRowUID:(struct TSKUIDStruct *)arg2 ;
-(id)copyBySettingTranslationFlags:(struct TSCEFormulaTranslationFlags )arg0 ;
-(id)copyByThawingRefs:(id)arg0 containingCell:(struct TSCEFormulaContainingCell *)arg1 ;
-(id)copyByUpdatingLinkedTable:(struct TSKUIDStruct *)arg0 outfoundLinkedRef:(*BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionForLevel:(int)arg0 ;
-(id)hostedDescriptionAtCell:(struct TSCECellRef *)arg0 ;
-(id)hostedDescriptionAtCell:(struct TSCECellRef *)arg0 calcEngine:(id)arg1 ;
-(id)hostedDescriptionAtCell:(struct TSCECellRef *)arg0 calcEngine:(id)arg1 hideUids:(BOOL)arg2 ;
-(id)initWithArchive:(*void)arg0 isPreUFF:(BOOL)arg1 ;
-(id)initWithCreator:(struct TSCEFormulaCreator )arg0 ;
-(id)initWithCreator:(struct TSCEFormulaCreator )arg0 argInfo:(struct TSCEASTNodeArgInfo *)arg1 translationFlags:(struct TSCEFormulaTranslationFlags )arg2 ;
-(id)initWithCreator:(struct TSCEFormulaCreator )arg0 translationFlags:(struct TSCEFormulaTranslationFlags )arg1 ;
-(id)initWithNodeArray:(struct TSCEASTNodeArray *)arg0 ;
-(id)initWithNodeArray:(struct TSCEASTNodeArray *)arg0 translationFlags:(struct TSCEFormulaTranslationFlags )arg1 ;
-(id)initWithNodeArray:(struct TSCEASTNodeArray *)arg0 translationFlags:(struct TSCEFormulaTranslationFlags )arg1 hostTableUID:(struct TSKUIDStruct *)arg2 hostColumnUID:(struct TSKUIDStruct *)arg3 hostRowUID:(struct TSKUIDStruct *)arg4 ;
-(id)sageFormulaStringForContainingCell:(struct TSCECellRef *)arg0 outHasSageUnsupportedFunctions:(*BOOL)arg1 ;
-(struct TSCEASTNodeArray *)astNodeArrayCopy;
-(struct TSCEASTNodeArray *)const_astNodeArray;
-(struct TSCEValue )evaluateWithContext:(*void)arg0 ;
-(struct TSCEValue )evaluateWithContext:(*void)arg0 isInACycle:(BOOL)arg1 outErrorIsDueToCycle:(*BOOL)arg2 ;
-(struct TSCEValue )evaluateWithContextGridResult:(*void)arg0 ;
-(struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> )getCategoryReferencesWithCalcEngine:(id)arg0 ;
-(unsigned char)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)appendExternalTableUIDs:(*void)arg0 groupByUIDs:(*void)arg1 ;
-(void)dealloc;
-(void)getPrecedents:(*void)arg0 calcEngine:(id)arg1 hostCell:(struct TSCECellRef *)arg2 doImplicitIntersection:(BOOL)arg3 returnUidReferences:(BOOL)arg4 ;
-(void)iterateWithBlock:(struct TSCEFormulaRewriteContext *)arg0 stop:(*BOOL)arg1 block:(id)arg2 ;


@end


#endif