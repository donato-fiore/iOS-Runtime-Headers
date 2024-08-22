// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TNCHARTFORMULAHELPER_H
#define TNCHARTFORMULAHELPER_H


#import <Foundation/Foundation.h>

#import "TNChartMediator.h"

@interface TNChartFormulaHelper : NSObject

@property (readonly, nonatomic) TNChartMediator *chartMediator; // ivar: _chartMediator
@property (nonatomic) BOOL createSpanningReferences; // ivar: _createSpanningReferences


+(id)cellRegionCullingToFirstFoundLevelFrom:(id)arg0 inTable:(id)arg1 byRows:(BOOL)arg2 ;
+(id)chartFormulasForSummaryRegion:(id)arg0 inTable:(id)arg1 ;
-(BOOL)p_addSeriesForRangeList:(id)arg0 rowLabelRangeList:(id)arg1 columnLabelRangeList:(id)arg2 rowLabels:(id)arg3 columnLabels:(id)arg4 toFormulaMap:(id)arg5 ;
-(BOOL)p_extendExistingSeriesWithSeriesRangeList:(*id)arg0 rowLabelRangeList:(*id)arg1 columnLabelRangeList:(*id)arg2 toFormulaMap:(id)arg3 withLocale:(id)arg4 ;
-(BOOL)p_hasOneValuePerSeries;
-(id)chartFormulaByAppendingCategoryReferences:(struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> )arg0 toFormula:(id)arg1 ;
-(id)chartFormulaByAppendingRangeReference:(struct TSCERangeRef )arg0 toFormula:(id)arg1 ;
-(id)chartFormulaByAppendingTractReference:(id)arg0 toFormula:(id)arg1 ;
-(id)formulaStorageForChartGridDirection:(int)arg0 ;
-(id)formulaStorageTransformTable:(struct TSKUIDStruct )arg0 toLevel:(unsigned char)arg1 ;
-(id)initWithMediator:(id)arg0 ;
-(id)initWithMediator:(id)arg0 createSpanningReferences:(BOOL)arg1 ;
-(id)p_labelsOfType:(NSUInteger)arg0 formulaMap:(id)arg1 ;
-(id)p_rangeListsForFormula:(id)arg0 argumentIndexes:(id)arg1 byRow:(BOOL)arg2 resolveSpanning:(BOOL)arg3 ;
-(id)p_rangeListsForFormulas:(id)arg0 byRow:(BOOL)arg1 resolveSpanning:(BOOL)arg2 ;
-(unsigned char)p_addFormulasOfType:(NSUInteger)arg0 rangeList:(id)arg1 byRow:(BOOL)arg2 toFormulaMap:(id)arg3 ;
-(unsigned char)p_addFormulasOfType:(NSUInteger)arg0 rangeList:(id)arg1 byRow:(BOOL)arg2 toFormulaMap:(id)arg3 ofLevel:(unsigned char)arg4 ;
-(unsigned char)p_firstDataCategoryLevelInFormulaMap:(id)arg0 forTable:(struct TSKUIDStruct )arg1 ;
-(void)p_addStringFormulasOfType:(NSUInteger)arg0 rangeList:(id)arg1 byRow:(BOOL)arg2 labels:(id)arg3 toFormulaMap:(id)arg4 ;
-(void)p_rangeListsForFormula:(id)arg0 argumentIndexes:(id)arg1 byRow:(BOOL)arg2 resolveSpanning:(BOOL)arg3 orderedListOfOwnerIDs:(id)arg4 ownerIDToRangeList:(id)arg5 ;


@end


#endif