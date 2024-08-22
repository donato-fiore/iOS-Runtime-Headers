// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTFEATURETWOAXIS_H
#define TSCHCHARTFEATURETWOAXIS_H



#import "TSCHChartFeatureCategory.h"

@interface TSCHChartFeatureTwoAxis : TSCHChartFeatureCategory



-(BOOL)requiresYAxisOrdinal;
-(BOOL)supportsConnectingLines;
-(BOOL)supportsEditing;
-(BOOL)supportsGroupedShadows;
-(BOOL)supportsIndividualShadowRendering;
-(BOOL)supportsMultipleSeriesTypes;
-(BOOL)supportsReferenceLines;
-(BOOL)supportsSymbolOverhang;
-(Class)presetImagerClass;
-(Class)valueAxisClassForID:(id)arg0 scale:(NSInteger)arg1 ;
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