// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTFEATURERADAR_H
#define TSCHCHARTFEATURERADAR_H



#import "TSCHChartFeature.h"

@interface TSCHChartFeatureRadar : TSCHChartFeature



-(BOOL)hasFixedFrameRatio;
-(BOOL)isNonSquareChartsEnabled;
-(BOOL)supportsAxisNames;
-(BOOL)supportsBorderFrame;
-(BOOL)supportsCategoryLabelExplosion;
-(BOOL)supportsConnectingLines;
-(BOOL)supportsEllipticalGridlines;
-(BOOL)supportsStartAngleRotation;
-(Class)presetImagerClass;
-(Class)valueAxisClassForID:(id)arg0 scale:(NSInteger)arg1 ;
-(NSUInteger)styleIndexForAxisID:(id)arg0 ;
-(id)defaultDataFileName;
-(id)initWithChartType:(id)arg0 ;
-(id)supportedAxisScales;
-(id)supportedSeriesTypes;
-(int)representativeGridValueAxisType;


@end


#endif