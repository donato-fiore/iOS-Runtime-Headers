// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCONDITIONALSTYLESET_H
#define TSTCONDITIONALSTYLESET_H

@class TSPObject, NSArray;
@protocol TSPCopying;



@interface TSTConditionalStyleSet : TSPObject <TSPCopying>



@property (readonly, nonatomic) NSArray *currentRules; // ivar: _conditionalStyleSetRules


-(BOOL)containsUidReferences;
-(BOOL)hasBadRefWithUidInfo;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualForInspector:(id)arg0 ;
-(BOOL)tst_dataObjectIsEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)ruleCount;
-(NSUInteger)tst_dataObjectHash;
-(id)copyByClearingUids:(id)arg0 containingTableUID:(struct TSKUIDStruct *)arg1 ;
-(id)copyByConvertingToRelativeAncestorsWithRewriteContext:(struct TSCEFormulaRewriteContext *)arg0 ;
-(id)copyByOffsettingRelativeReferencesWithOffset:(struct TSUColumnRowOffset )arg0 ;
-(id)copyByRemappingHostCellAgnosticOwnerUIDsWithMap:(*void)arg0 calcEngine:(id)arg1 ownerUID:(struct TSKUIDStruct *)arg2 error:(*BOOL)arg3 ;
-(id)copyByRemappingOwnerUIDsWithMap:(*void)arg0 calcEngine:(id)arg1 error:(*BOOL)arg2 ;
-(id)copyByRepairingBadReferences:(struct TSCEFormulaRewriteContext *)arg0 ;
-(id)copyByReparenting:(id)arg0 groupByUID:(struct TSKUIDStruct *)arg1 rewriteContext:(struct TSCEFormulaRewriteContext *)arg2 ;
-(id)copyByResolvingRelativeAncestorsWithRewriteContext:(struct TSCEFormulaRewriteContext *)arg0 ;
-(id)copyByRewritingWithContext:(struct TSCEFormulaRewriteContext *)arg0 rewriteBlock:(id)arg1 ;
-(id)copyByRewritingWithSpec:(id)arg0 inOwner:(id)arg1 inCellCoordinate:(struct TSUCellCoord )arg2 ;
-(id)copyByUpdatingHostCellRef:(struct TSCECellRef *)arg0 ;
-(id)copyByUpgradingToLinkedRefAtHostCellRef:(struct TSCECellRef *)arg0 ;
-(id)copyToGeometricFormWithRewriteContext:(struct TSCEFormulaRewriteContext *)arg0 ;
-(id)copyToUidFormForTableInfo:(id)arg0 inCellCoordinate:(struct TSUCellCoord )arg1 ;
-(id)copyToUidFormForTableInfo:(id)arg0 inCellCoordinate:(struct TSUCellCoord )arg1 preserveHostCell:(BOOL)arg2 ;
-(id)copyWithContext:(id)arg0 ;
-(id)description;
-(id)initWithConditionalStyleSet:(id)arg0 ;
-(id)initWithContext:(id)arg0 rules:(id)arg1 ;
-(id)precedentsWithCalcEngine:(id)arg0 hostOwnerUID:(struct TSKUIDStruct *)arg1 hostCellID:(struct TSUCellCoord *)arg2 ;
-(id)ruleAtIndex:(NSUInteger)arg0 ;
-(id)rules;
-(id)rulesDescription;
-(void)iterateFormulasWithContext:(struct TSCEFormulaRewriteContext *)arg0 block:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setHostCell:(struct TSKUIDStruct *)arg0 hostColumnUID:(struct TSKUIDStruct *)arg1 hostRowUID:(struct TSKUIDStruct *)arg2 ;


@end


#endif