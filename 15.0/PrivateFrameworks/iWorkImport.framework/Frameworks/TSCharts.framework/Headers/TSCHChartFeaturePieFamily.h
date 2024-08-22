// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTFEATUREPIEFAMILY_H
#define TSCHCHARTFEATUREPIEFAMILY_H



#import "TSCHChartFeature.h"

@interface TSCHChartFeaturePieFamily : TSCHChartFeature



-(BOOL)editableFormatForValueStrings;
-(BOOL)hasExplodableSeriesElements;
-(BOOL)hasFixedFrameRatio;
-(BOOL)rendersBackgroundAxis;
-(BOOL)rendersUsingRadialGeometry;
-(BOOL)supportsBackgroundFill;
-(BOOL)supportsBorderFrame;
-(BOOL)supportsBorderStroke;
-(BOOL)supportsCategoryLabelsInChartRangeEditor;
-(BOOL)supportsElementSeriesNames;
-(BOOL)supportsErrorBars;
-(BOOL)supportsGroupedShadows;
-(BOOL)supportsLabelExplosion;
-(BOOL)supportsMultipleValuesPerSeries;
-(BOOL)supportsPercentNumberFormatting;
-(BOOL)supportsReferenceLines;
-(BOOL)supportsStartAngleRotation;
-(BOOL)supportsTrendLines;
-(BOOL)supportsValueLabelSpacing;
-(Class)valueAxisClassForID:(id)arg0 scale:(NSInteger)arg1 ;
-(NSUInteger)maxCellsToCheckForGridValueType;
-(NSUInteger)styleIndexForAxisID:(id)arg0 ;
-(id)animationDeliveryStylesForFilter:(id)arg0 ;
-(id)genericToSpecificPropertyMap;
-(id)initWithChartType:(id)arg0 ;
-(id)initialSceneWithChartInfo:(id)arg0 layoutSettings:(struct ? )arg1 ;
-(int)representativeGridValueAxisType;
-(void)updateTitlesForExportingModel:(id)arg0 info:(id)arg1 ;


@end


#endif