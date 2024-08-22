// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTFEATURESCATTER_H
#define TSCHCHARTFEATURESCATTER_H



#import "TSCHChartFeature.h"

@interface TSCHChartFeatureScatter : TSCHChartFeature



-(BOOL)supportsCategoryLabelsInChartRangeEditor;
-(BOOL)supportsConnectingLines;
-(BOOL)supportsSharedAndSeparateX;
-(BOOL)supportsSymbolOverhang;
-(BOOL)supportsValueLabelSpacing;
-(Class)presetImagerClass;
-(Class)valueAxisClassForID:(id)arg0 scale:(NSInteger)arg1 ;
-(NSUInteger)gridOffsetToSeriesForScatterFormat:(int)arg0 ;
-(NSUInteger)styleIndexForAxisID:(id)arg0 ;
-(id)defaultDataFileName;
-(id)genericToSpecificPropertyMap;
-(id)initWithChartType:(id)arg0 ;
-(id)supportedAxisScales;
-(id)supportedSeriesTypes;
-(id)userInterfaceName;
-(int)representativeGridValueAxisType;
-(void)updateTitlesForExportingModel:(id)arg0 info:(id)arg1 ;


@end


#endif