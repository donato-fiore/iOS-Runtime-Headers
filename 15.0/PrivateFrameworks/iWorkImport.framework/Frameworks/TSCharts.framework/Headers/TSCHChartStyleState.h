// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTSTYLESTATE_H
#define TSCHCHARTSTYLESTATE_H

@class NSArray, NSMutableArray, NSMutableDictionary, NSDictionary, TSURetainedPointerKeyDictionary, TSSStylesheet;
@protocol NSCopying;


#import "TSCHPropertyValueStorageContainer.h"
#import "TSCHChartStyle.h"
#import "TSCHLegendStyle.h"
#import "TSCHReferenceLineStyle.h"
#import "TSCHChartStyleState.h"

@interface TSCHChartStyleState : TSCHPropertyValueStorageContainer <NSCopying>



@property (readonly, copy, nonatomic) NSArray *allStyles;
@property (copy, nonatomic) NSMutableArray *categoryAxisStyles;
@property (retain, nonatomic) TSCHChartStyle *chartStyle;
@property (retain, nonatomic) TSCHLegendStyle *legendStyle;
@property (readonly, nonatomic) BOOL paragraphStyleIndexesAreValid;
@property (copy, nonatomic) NSMutableArray *paragraphStyles;
@property (copy, nonatomic) NSMutableDictionary *referenceLineStyles;
@property (retain, nonatomic) TSCHReferenceLineStyle *referenceLineThemeStyle;
@property (readonly, copy, nonatomic) NSDictionary *semanticTagToStyleMap;
@property (copy, nonatomic) NSMutableArray *seriesPrivateStyles;
@property (copy, nonatomic) NSMutableArray *seriesThemeStyles;
@property (readonly, nonatomic) TSCHChartStyleState *stateForParentStyleLookup;
@property (readonly, nonatomic) TSURetainedPointerKeyDictionary *styleToSemanticTagsMap;
@property (readonly, nonatomic) TSSStylesheet *stylesheet;
@property (retain, nonatomic) TSCHChartStyleState *themeChartStyleState; // ivar: _themeChartStyleState
@property (copy, nonatomic) NSMutableArray *valueAxisStyles;


+(id)styleState;
-(BOOL)otherStateIsEquivalent:(id)arg0 ignoringSeriesThemeStyles:(BOOL)arg1 ;
-(id)applyStyleSwapTuple:(id)arg0 ;
-(id)applyStyleSwapTuple:(id)arg0 ignoringBeforeValues:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fallbackSemanticTagForSemanticTag:(id)arg0 ;
-(id)fallbackSemanticUsageForSemanticUsage:(id)arg0 ;
-(id)listOfStyles;
-(id)p_formatSemanticTag:(id)arg0 ;
-(id)p_locationOfStyleInNetwork:(id)arg0 ;
-(id)p_propertySetWithPropertySetType:(NSInteger)arg0 forStyle:(id)arg1 ;
-(id)semanticUsagesOfParagraphStylePropertiesWithPropertySetType:(NSInteger)arg0 ;
-(id)semanticUsagesToParagraphStyleMapWithPropertySetType:(NSInteger)arg0 filteredBySemanticUsages:(id)arg1 ;
-(id)stateByAdoptingStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(id)stateByExpandingForSeriesCount:(NSUInteger)arg0 andReferenceLineCount:(NSUInteger)arg1 ;
-(id)stateByExpandingReferenceLineStylesForCount:(NSUInteger)arg0 ;
-(id)stateByExpandingSeriesStylesForSeriesCount:(NSUInteger)arg0 ;
-(id)stateByOptimizingParagraphStyleTableWithStylesheet:(id)arg0 ;
-(id)stateByOptimizingParagraphStyleTableWithStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(id)stateByReducingReferenceLineStyles;
-(id)stateByReducingSeriesPrivateStyles;
-(id)stateByReducingSeriesPrivateStylesAndReferenceLineStyles;
-(id)styleForSemanticTag:(id)arg0 ;
-(id)styleLookupSemanticTagForSemanticTag:(id)arg0 ;
-(id)styleNetworkDescription;
-(id)styleToUseForSemanticTag:(id)arg0 ;
-(id)usesOfParagraphStylePropertiesWithPropertySetType:(NSInteger)arg0 ;
-(void)checkParagraphStyleIndicies;
-(void)enumerateSemanticTagsAndUsagesWithPropertySetType:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(void)p_addParagraphStyleForSemanticUsage:(id)arg0 mappedStyle:(id)arg1 mappedState:(id)arg2 fromPriorStyle:(id)arg3 andPriorState:(id)arg4 maintainPriorIndex:(BOOL)arg5 withStyleMapper:(id)arg6 withStylesheet:(id)arg7 toNewParagraphStylesTable:(id)arg8 andStyleMap:(id)arg9 ;
-(void)replaceAllInstancesOfStyle:(id)arg0 withStyle:(id)arg1 ;
-(void)replaceStylesUsingBlock:(id)arg0 ;
-(void)setStyle:(id)arg0 withSemanticTag:(id)arg1 ;


@end


#endif