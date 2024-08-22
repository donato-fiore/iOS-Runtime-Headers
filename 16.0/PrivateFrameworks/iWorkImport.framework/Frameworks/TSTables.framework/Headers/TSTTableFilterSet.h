// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLEFILTERSET_H
#define TSTTABLEFILTERSET_H

@class TSPObject, NSArray;
@protocol TSPCopying;



@interface TSTTableFilterSet : TSPObject <TSPCopying>

 {
    int _type;
    vector<unsigned long, std::allocator<unsigned long>> _filterOffsets;
}


@property (readonly, nonatomic) BOOL canAddRules;
@property (nonatomic) BOOL downgradedForPrePivot; // ivar: _downgradedForPrePivot
@property (readonly, nonatomic) NSUInteger filterCount;
@property (nonatomic) int filterSetType;
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (nonatomic) BOOL needsFormulaRewriteForImport; // ivar: _needsFormulaRewriteForImport
@property (readonly, nonatomic) NSUInteger newFilterIndex;
@property (readonly, nonatomic) NSUInteger ruleCount;
@property (retain, nonatomic) NSArray *rules; // ivar: _rules


-(BOOL)containsFilterRulesInUIDForm;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)p_thresholdComparisonMatchesFilter:(NSInteger)arg0 withPredicateType:(unsigned char)arg1 ;
-(BOOL)preventsRowInsertion;
-(BOOL)rowIsShown:(unsigned int)arg0 withHiddenStateExtent:(id)arg1 withCalcEngine:(id)arg2 ;
-(NSUInteger)firstFilterIndexForBaseColumn:(struct TSUModelColumnIndex )arg0 inTable:(id)arg1 ;
-(NSUInteger)hash;
-(NSUInteger)numberOfRulesInFilter:(NSUInteger)arg0 ;
-(NSUInteger)ruleIndexInFilter:(NSUInteger)arg0 matchingCell:(id)arg1 ;
-(id)absoluteRuleIndicesForColumn:(struct TSUModelColumnIndex )arg0 inTable:(id)arg1 ;
-(id)baseColumnIndicesForRulesInTable:(id)arg0 ;
-(id)copyByRewritingFilterRulesToGeometricFormWithContext:(id)arg0 withTableInfo:(id)arg1 ;
-(id)copyByRewritingFilterRulesToUidFormWithContext:(id)arg0 withTableInfo:(id)arg1 ;
-(id)copyByRewritingFilterRulesWithContext:(id)arg0 fromTableModel:(id)arg1 toTableModel:(id)arg2 ;
-(id)copyWithContext:(id)arg0 ;
-(id)downgradeFilterSetForBackwardCompatWithLocale:(id)arg0 ;
-(id)filterAtIndex:(NSUInteger)arg0 inTable:(id)arg1 ;
-(id)filterIndicesForBaseColumn:(struct TSUModelColumnIndex )arg0 inTable:(id)arg1 ;
-(id)initWithFilterRules:(id)arg0 type:(int)arg1 context:(id)arg2 ;
-(id)initWithNotBlankColumnGroupsWithContext:(id)arg0 withPivotTable:(id)arg1 ;
-(id)initWithNotBlankRowGroupsWithContext:(id)arg0 withPivotTable:(id)arg1 ;
-(id)p_downgradedFilterRuleForListItem:(id)arg0 fromPredicate:(id)arg1 ;
-(id)removeRulesWithAbsoluteIndices:(id)arg0 ;
-(id)ruleAtAbsoluteIndex:(NSUInteger)arg0 ;
-(id)ruleInFilter:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(id)viewColumnIndicesForRulesInTable:(id)arg0 ;
-(void)addRules:(id)arg0 inFilter:(NSUInteger)arg1 ;
-(void)enumerateFilterIndicesInTable:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateFiltersForColumn:(struct TSUModelColumnIndex )arg0 withTable:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateFiltersInTable:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateRulesInFilterIndex:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_addRules:(id)arg0 atRuleIndices:(id)arg1 inFilter:(NSUInteger)arg2 isNew:(BOOL)arg3 ;
-(void)removeRulesForBaseColumnIndices:(id)arg0 withTableInfo:(id)arg1 ;
-(void)removeRulesWithIndices:(id)arg0 inFilter:(NSUInteger)arg1 ;
-(void)replaceRule:(id)arg0 atRuleIndex:(NSUInteger)arg1 inFilter:(NSUInteger)arg2 ;
-(void)replaceRuleAtAbsoluteIndex:(NSUInteger)arg0 withRule:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif