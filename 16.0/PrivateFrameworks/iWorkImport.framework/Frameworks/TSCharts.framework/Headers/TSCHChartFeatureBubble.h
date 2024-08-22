// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTFEATUREBUBBLE_H
#define TSCHCHARTFEATUREBUBBLE_H



#import "TSCHChartFeatureScatter.h"

@interface TSCHChartFeatureBubble : TSCHChartFeatureScatter



-(BOOL)supportsBubbleOptions;
-(BOOL)supportsConnectingLines;
-(BOOL)supportsEditingForAxisID:(id)arg0 ;
-(BOOL)supportsSharedAndSeparateX;
-(BOOL)supportsShowLabelsInFrontOption;
-(Class)presetImagerClass;
-(Class)valueAxisClassForID:(id)arg0 scale:(NSInteger)arg1 ;
-(NSUInteger)gridOffsetToSeriesForScatterFormat:(int)arg0 ;
-(NSUInteger)styleIndexForAxisID:(id)arg0 ;
-(id)defaultDataFileName;
-(id)filteredStyleOwnersFromStyleOwners:(id)arg0 ;
-(id)genericToSpecificPropertyMap;
-(id)initWithChartType:(id)arg0 ;
-(id)supportedAxisScales;
-(id)supportedSeriesTypes;
-(int)representativeGridValueAxisType;
-(void)updateTitlesForExportingModel:(id)arg0 info:(id)arg1 ;


@end


#endif