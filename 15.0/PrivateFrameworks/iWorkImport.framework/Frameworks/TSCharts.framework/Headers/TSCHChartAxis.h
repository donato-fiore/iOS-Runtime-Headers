// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTAXIS_H
#define TSCHCHARTAXIS_H

@class TSUFastReadInvalidatingCache, NSString, TSULocale, NSArray;
@protocol TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHStyleOwning, TSCHDataFormatter, TSCHStyleActAlike;

#import <Foundation/Foundation.h>

#import "TSCHChartAxisAnalysis.h"
#import "TSCHChartAxisID.h"
#import "TSCHChartAxisInterceptAnalysis.h"
#import "TSCHChartModel.h"
#import "TSCHChartAxis.h"

@interface TSCHChartAxis : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHStyleOwning>



@property (readonly, nonatomic) int adjustedNumberFormatType;
@property (readonly) TSCHChartAxisAnalysis *analysis;
@property (retain, nonatomic) TSUFastReadInvalidatingCache *analysisCache; // ivar: _analysisCache
@property (readonly, nonatomic) TSCHChartAxisAnalysis *axisAnalysisFromCurrentModel;
@property (retain, nonatomic) TSCHChartAxisID *axisID; // ivar: _axisID
@property (readonly, nonatomic) NSUInteger axisIndex;
@property (readonly, nonatomic) CGFloat axisInterceptPosition;
@property (readonly, nonatomic) NSInteger currentAxisScaleSetting;
@property (readonly, nonatomic) CGFloat currentDataSetModelAverage;
@property (readonly, nonatomic) CGFloat currentDataSetModelMax;
@property (readonly, nonatomic) CGFloat currentDataSetModelMedian;
@property (readonly, nonatomic) CGFloat currentDataSetModelMin;
@property (readonly, nonatomic) NSObject<TSCHDataFormatter> *dataFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL editableFormatForValueStrings;
@property (readonly, nonatomic) int gridValueType;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) TSCHChartAxisInterceptAnalysis *interceptAnalysis;
@property (retain, nonatomic) TSUFastReadInvalidatingCache *interceptCache; // ivar: _interceptCache
@property (readonly) BOOL isCategory;
@property (readonly) BOOL isRangeContinuous;
@property (readonly, nonatomic) TSULocale *locale;
@property (readonly, nonatomic) NSArray *majorGridLocations;
@property (readonly, nonatomic) CGFloat max;
@property (readonly, nonatomic) CGFloat min;
@property (readonly, nonatomic) NSArray *minorGridLocations;
@property (weak, nonatomic) TSCHChartModel *model; // ivar: _model
@property (readonly, nonatomic) CGFloat modelMax;
@property (readonly, nonatomic) CGFloat modelMin;
@property (readonly) TSCHChartAxisAnalysis *multiDataSetAnalysis;
@property (retain, nonatomic) TSUFastReadInvalidatingCache *multiDataSetAnalysisCache; // ivar: _multiDataSetAnalysisCache
@property (retain, nonatomic) NSObject<TSCHStyleActAlike> *nonStyle; // ivar: _nonStyle
@property (nonatomic) NSUInteger nonStyleIndex; // ivar: _nonStyleIndex
@property (weak, nonatomic) TSCHChartAxis *nonTransientCounterpart; // ivar: _nonTransientCounterpart
@property (readonly, nonatomic) CGFloat range;
@property (readonly, nonatomic) NSArray *referenceLines;
@property (retain, nonatomic) NSObject<TSCHStyleActAlike> *style; // ivar: _style
@property (nonatomic) NSUInteger styleIndex; // ivar: _styleIndex
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFormattedStringForInvalidValue;
@property (readonly, nonatomic) BOOL supportsLabelAngleBaselineOptions;
@property (readonly) BOOL supportsReferenceLines;


+(id)axisForInfo:(id)arg0 ;
+(id)defaultNumberFormat;
+(id)paragraphStyleForLabelsFontForInfo:(id)arg0 ;
+(struct tvec2<float> )sizeOfLabelsForInfo:(id)arg0 onlyHeight:(BOOL)arg1 ;
+(struct tvec2<float> )sizeOfSeriesLabelsForInfo:(id)arg0 ;
+(struct tvec2<float> )sizeOfSeriesLabelsForInfo:(id)arg0 onlyHeight:(BOOL)arg1 ;
-(*CGFloat)unitSpaceCenterValuesForSeries:(id)arg0 groupIndexSet:(id)arg1 count:(NSUInteger)arg2 ;
-(*CGFloat)unitSpaceValuesForCountSpaceValuesWithCount:(NSUInteger)arg0 ;
-(*CGFloat)unitSpaceValuesForSeries:(id)arg0 groupIndexSet:(id)arg1 ;
-(*CGFloat)unitSpaceValuesForSeries:(id)arg0 groupIndexSet:(id)arg1 min:(CGFloat)arg2 max:(CGFloat)arg3 ;
-(BOOL)hasCustomFormatForGridValueType:(int)arg0 ;
-(BOOL)hasFloatValueForProperty:(int)arg0 value:(*float)arg1 ;
-(BOOL)hasIntValueForProperty:(int)arg0 value:(*int)arg1 ;
-(BOOL)hasObjectValueForProperty:(int)arg0 value:(*id)arg1 ;
-(BOOL)shouldAnalyzeAxisValue:(CGFloat)arg0 ;
-(CGFloat)doubleAxisToModelValue:(CGFloat)arg0 ;
-(CGFloat)doubleModelToAxisValue:(CGFloat)arg0 forSeries:(id)arg1 ;
-(CGFloat)interceptForAxis:(id)arg0 ;
-(CGFloat)unitSpaceCenterValueForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 ;
-(CGFloat)unitSpaceCenterValueForValue:(CGFloat)arg0 ;
-(CGFloat)unitSpaceCenterValueHalfOffsetWithCount:(CGFloat)arg0 ;
-(CGFloat)unitSpaceValueForCountSpaceValue:(CGFloat)arg0 ;
-(CGFloat)unitSpaceValueForCountSpaceValue:(CGFloat)arg0 min:(CGFloat)arg1 count:(CGFloat)arg2 ;
-(CGFloat)unitSpaceValueForDataSpaceValue:(CGFloat)arg0 ;
-(CGFloat)unitSpaceValueForDataSpaceValue:(CGFloat)arg0 min:(CGFloat)arg1 max:(CGFloat)arg2 ;
-(CGFloat)unitSpaceValueForDataSpaceValue:(CGFloat)arg0 series:(id)arg1 groupIndex:(NSUInteger)arg2 addValuesFromAllPreviousSeries:(BOOL)arg3 ;
-(CGFloat)unitSpaceValueForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 ;
-(CGFloat)unitSpaceValueForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 min:(CGFloat)arg2 max:(CGFloat)arg3 ;
-(NSUInteger)indexForSelectionPathLabelIndex:(NSUInteger)arg0 ;
-(NSUInteger)p_count;
-(NSUInteger)selectionPathLabelIndexForIndex:(NSUInteger)arg0 ;
-(NSUInteger)selectionPathLabelIndexForMultiDataSetIndex:(NSUInteger)arg0 ;
-(float)floatValueForProperty:(int)arg0 defaultValue:(float)arg1 ;
-(id)chartInfo;
-(id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg0 ;
-(id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg0 ;
-(id)context;
-(id)customFormatForGridValueType:(int)arg0 ;
-(id)dataFormatterForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 ;
-(id)defaultProperties;
-(id)drawableInfo;
-(id)formattedStringForAxisValue:(id)arg0 ;
-(id)formattedStringForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 ;
-(id)formattedStringForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 multiDataSetIndex:(NSUInteger)arg2 ;
-(id)g_genericToDefaultPropertyMap;
-(id)g_operationPropertyNameForGenericProperty:(int)arg0 ;
-(id)gridValueAxisToModelValue:(CGFloat)arg0 ;
-(id)initWithAxisID:(id)arg0 model:(id)arg1 ;
-(id)inspectorStringForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 value:(id)arg2 ;
-(id)objectValueForProperty:(int)arg0 ;
-(id)operationPropertyNameFromGenericProperty:(int)arg0 ;
-(id)p_axisDataFormatterFromCurrentModel;
-(id)p_dataFormatterForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 onlyForValidValue:(BOOL)arg2 ;
-(id)p_fixupNegativeStyleForDataFormatter:(id)arg0 ;
-(id)p_genericToDefaultPropertyMap;
-(id)p_multiDataAxisAnalysisFromCurrentModel;
-(id)referenceLineAtIndex:(NSUInteger)arg0 ;
-(id)referenceLineWithUUID:(id)arg0 ;
-(id)swapTuplesForMutations:(id)arg0 forImport:(BOOL)arg1 ;
-(id)swapTuplesForParagraphStyleMutations:(id)arg0 forReferencingProperty:(int)arg1 ;
-(id)unitSpaceValuesForDataSpaceValues:(id)arg0 ;
-(id)valueForFormattedString:(id)arg0 ;
-(id)valueForProperty:(int)arg0 ;
-(int)defaultPropertyForGeneric:(int)arg0 ;
-(int)intValueForProperty:(int)arg0 defaultValue:(int)arg1 ;
-(int)p_axisGridValueType;
-(int)specificPropertyForGeneric:(int)arg0 ;
-(struct tvec2<float> )sizeOfLabelsForInfo:(id)arg0 enumerator:(id)arg1 onlyHeight:(BOOL)arg2 ;
-(void)adjustMinMaxForDataRangeInAnalysis:(id)arg0 ;
-(void)invalidateMultiDataSetAnalysis;
-(void)invalidateTransientState;
-(void)p_setupMultiDataSetAnalysisCacheIfNeeded;
-(void)propertiesWereMutated:(id)arg0 ;
-(void)updateAxisDateInterceptInAnalysis:(id)arg0 ;
-(void)updateGridValueTypeInterceptInAnalysis:(id)arg0 ;
-(void)updateMinMaxGridLocationsInAnalysis:(id)arg0 ;
-(void)updateModelAxisAnalysis:(id)arg0 ;
-(void)updateMultiDataModelAxisAnalysis:(id)arg0 ;


@end


#endif