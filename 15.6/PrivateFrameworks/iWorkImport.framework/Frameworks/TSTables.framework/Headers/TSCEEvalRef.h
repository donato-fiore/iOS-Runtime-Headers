// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCEEVALREF_H
#define TSCEEVALREF_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCEEvalRef : NSObject <NSCopying>

 {
    *TSCETableResolver _tableResolver;
    ? _tractRef;
}


@property (readonly, nonatomic) TSUCellCoord bottomRight;
@property (nonatomic) shared_ptr<TSCEValue> cachedValue; // ivar: _cachedValue
@property (nonatomic) BOOL cachedValueWasFetchedWithRichTextAttributes; // ivar: _cachedValueWasFetchedWithRichTextAttributes
@property (readonly, nonatomic) *void calcEngine;
@property (readonly, nonatomic) BOOL hasCachedValue;
@property (readonly, nonatomic) TSCERangeCoordinate rangeCoord;
@property (readonly, nonatomic) TSCERangeRef rangeRef;
@property (readonly, nonatomic) *TSCETableResolver tableResolver;
@property (readonly, nonatomic) TSKUIDStruct tableUID;
@property (readonly, nonatomic) TSUCellCoord topLeft;


+(id)mergeLeftRef:(id)arg0 rightRef:(id)arg1 outError:(*int)arg2 ;
-(?)initWithTableResolvertractRefCore;
-(?)makeCellReferenceForOffsetapparentTractRef;
-(?)tractRef;
-(id)canonicalCellReferenceForReference;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCalcEngine:(*void)arg0 tableUID:(struct TSKUIDStruct *)arg1 topLeft:(struct TSUCellCoord *)arg2 bottomRight:(struct TSUCellCoord *)arg3 preserveFlags:(struct TSUPreserveFlags *)arg4 ;
-(id)initWithTableResolver:(struct TSCETableResolver *)arg0 topLeft:(struct TSUCellCoord *)arg1 bottomRight:(struct TSUCellCoord *)arg2 preserveFlags:(struct TSUPreserveFlags *)arg3 ;
-(id)makeCellReferenceInSameTable:(struct TSUCellCoord *)arg0 ;
-(struct TSCEFormat )format:(struct TSUCellCoord )arg0 ;
-(struct TSCERangeCoordinate )bodyRangeOfTable;
-(struct TSCERangeCoordinate )tableRangeOfTable;
-(struct TSCEValue )scalarValueForEvalContext:(*void)arg0 permitAccessInsideMergeRegions:(BOOL)arg1 fetchRichTextAttributesIfPlainText:(BOOL)arg2 ;
-(struct TSCEValue )scalarValueFromCoord:(struct TSUCellCoord *)arg0 permitAccessInsideMergeRegions:(BOOL)arg1 fetchRichTextAttributesIfPlainText:(BOOL)arg2 ;
-(struct TSKUIDStruct )getResolverUID;
-(unsigned char)getHidingActionForRows:(BOOL)arg0 ;
-(void)clearResolver;


@end


#endif