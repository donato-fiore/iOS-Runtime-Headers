// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTMERGEACTION_H
#define TSTMERGEACTION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSTMergeAction : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL hasMergeFormulas;
@property (readonly, nonatomic) BOOL hasMultiRowMerge;
@property (nonatomic) *void mergeFormulaIndexes; // ivar: _mergeFormulaIndexes
@property (nonatomic) *void mergeFormulas; // ivar: _mergeFormulas
@property (nonatomic) int type; // ivar: _type
@property (nonatomic) *void uidRanges; // ivar: _uidRanges


+(?)cellUIDRangeFromMergeFormulacalcEngine;
+(id)mergeActionForGrowingRange:(*void)arg0 coveringRange:(*void)arg1 inTable:(id)arg2 ;
+(id)mergeActionForInsertingRange:(*void)arg0 inTable:(id)arg1 ;
+(id)mergeActionForRemovingRanges:(*void)arg0 inTable:(id)arg1 ;
+(id)stringForMergeType:(int)arg0 ;
-(id)actionByExpandingWithAction:(id)arg0 ;
-(id)cellRegionForTable:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithType:(int)arg0 ;
-(id)initWithType:(int)arg0 uidRange:(*void)arg1 ;
-(id)initWithType:(int)arg0 uidRanges:(*void)arg1 ;
-(id)remapUIDsByColumnMap:(*void)arg0 rowMap:(*void)arg1 ownerMap:(*void)arg2 ;
-(id)shrinkAction;
-(void)addFormula:(id)arg0 ;
-(void)addFormulaIndex:(NSUInteger)arg0 ;
-(void)enumerateMergeFormulasUsingBlock:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)verify;


@end


#endif