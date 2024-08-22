// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCONDITIONALSTYLERULE_H
#define TSTCONDITIONALSTYLERULE_H

@class TSWPParagraphStyle, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSTFormulaPredicate.h"
#import "TSTCellStyle.h"
#import "TSCEFormulaObject.h"

@interface TSTConditionalStyleRule : NSObject <NSCopying>

 {
    TSTFormulaPredicate *_predicate;
    TSWPParagraphStyle *_textStyle;
    TSTCellStyle *_cellStyle;
}


@property (readonly, copy, nonatomic) TSTCellStyle *cellStyle;
@property (readonly, nonatomic) TSCEFormulaObject *formula;
@property (readonly, copy, nonatomic) TSTFormulaPredicate *predicate;
@property (readonly, nonatomic) NSString *predicateDescription;
@property (readonly, nonatomic) unsigned char predicateType;
@property (readonly, copy, nonatomic) TSWPParagraphStyle *textStyle;


+(id)conditionalStyleRuleWithRule:(id)arg0 ;
-(BOOL)containsUidReferences;
-(BOOL)evaluateFormulaAtCellID:(struct TSUCellCoord )arg0 withCalcEngine:(id)arg1 onOwnerUID:(struct TSKUIDStruct *)arg2 ;
-(BOOL)hasBadRefWithUidInfo;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualForInspector:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyByClearingUids:(id)arg0 containingTableUID:(struct TSKUIDStruct *)arg1 ;
-(id)copyByOffsettingRelativeReferencesWithOffset:(struct TSUColumnRowOffset )arg0 ;
-(id)copyByRemappingHostCellAgnosticOwnerUIDsWithMap:(*void)arg0 calcEngine:(id)arg1 ownerUID:(struct TSKUIDStruct *)arg2 error:(*BOOL)arg3 ;
-(id)copyByRemappingOwnerUIDsWithMap:(*void)arg0 calcEngine:(id)arg1 error:(*BOOL)arg2 ;
-(id)copyByRewritingWithContext:(struct TSCEFormulaRewriteContext *)arg0 rewriteBlock:(id)arg1 ;
-(id)copyByRewritingWithSpec:(id)arg0 inOwner:(id)arg1 inCellCoordinate:(struct TSUCellCoord )arg2 ;
-(id)copyByUpdatingHostCellRef:(struct TSCECellRef *)arg0 ;
-(id)copyByUpgradingToLinkedRefAtHostCellRef:(struct TSCECellRef *)arg0 ;
-(id)copyToUidFormForTableInfo:(id)arg0 inCellCoordinate:(struct TSUCellCoord )arg1 preserveHostCell:(BOOL)arg2 ;
-(id)copyWithContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPredicate:(id)arg0 cellStyle:(id)arg1 textStyle:(id)arg2 ;
-(id)privateCellStyle;
-(id)privateTextStyle;
-(void)getPrecedents:(*void)arg0 calcEngine:(id)arg1 hostOwnerUID:(struct TSKUIDStruct *)arg2 hostCellID:(struct TSUCellCoord *)arg3 ;
-(void)iterateFormulasWithContext:(struct TSCEFormulaRewriteContext *)arg0 shouldStop:(*BOOL)arg1 block:(id)arg2 ;
-(void)setHostCell:(struct TSKUIDStruct *)arg0 hostColumnUID:(struct TSKUIDStruct *)arg1 hostRowUID:(struct TSKUIDStruct *)arg2 ;


@end


#endif