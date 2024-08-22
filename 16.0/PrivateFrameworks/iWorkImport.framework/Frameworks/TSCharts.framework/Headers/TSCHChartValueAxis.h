// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTVALUEAXIS_H
#define TSCHCHARTVALUEAXIS_H

@class NSNumber;


#import "TSCHChartAxis.h"

@interface TSCHChartValueAxis : TSCHChartAxis

@property (readonly, nonatomic) NSNumber *userMax;
@property (readonly, nonatomic) NSNumber *userMin;


+(id)axisForInfo:(id)arg0 ;
+(unsigned char)styleOwnerPathType;
-(BOOL)editableFormatForValueStrings;
-(BOOL)supportsAxisValueLabels;
-(BOOL)supportsNegativeStyle;
-(BOOL)supportsReferenceLines;
-(CGFloat)p_calculateAxisDeltaFromSpread:(CGFloat)arg0 spreadRanges:(struct ? *)arg1 ;
-(CGFloat)validateUserMaxForDouble:(CGFloat)arg0 ;
-(CGFloat)validateUserMinForDouble:(CGFloat)arg0 ;
-(id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg0 ;
-(id)defaultProperties;
-(id)g_genericToSpecificPropertyMap;
-(id)p_GetGenericToValuePropertyMap;
-(id)p_computeMajorGridlines:(NSInteger)arg0 analysis:(id)arg1 ;
-(id)p_computeMajorGridlinesAutomaticallyInAnalysis:(id)arg0 forHorizChart:(BOOL)arg1 ;
-(int)specificPropertyForGeneric:(int)arg0 ;
-(struct ? )p_axisDescFromFixedMinValue:(CGFloat)arg0 fixedMaxValue:(CGFloat)arg1 spreadRanges:(struct ? *)arg2 ;
-(struct ? )p_axisDescFromFixedNegativeMinValue:(CGFloat)arg0 positiveMaxValue:(CGFloat)arg1 spreadRanges:(struct ? *)arg2 ;
-(struct ? )p_axisDescFromFixedPositiveMinValue:(CGFloat)arg0 positiveMaxValue:(CGFloat)arg1 spreadRanges:(struct ? *)arg2 ;
-(struct ? )p_axisDescFromMinValue:(CGFloat)arg0 maxValue:(CGFloat)arg1 userValues:(NSInteger)arg2 ;
-(struct ? )p_axisDescFromNegativeMinValue:(CGFloat)arg0 fixedPositiveMaxValue:(CGFloat)arg1 spreadRanges:(struct ? *)arg2 ;
-(struct ? )p_axisDescFromNegativeMinValue:(CGFloat)arg0 positiveMaxValue:(CGFloat)arg1 spreadRanges:(struct ? *)arg2 ;
-(struct ? )p_axisDescFromPositiveMinValue:(CGFloat)arg0 fixedPositiveMaxValue:(CGFloat)arg1 spreadRanges:(struct ? *)arg2 ;
-(struct ? )p_axisDescFromPositiveMinValue:(CGFloat)arg0 positiveMaxValue:(CGFloat)arg1 spreadRanges:(struct ? *)arg2 ;
-(struct ? )p_calculateAxisDescFromMinValue:(CGFloat)arg0 maxValue:(CGFloat)arg1 userValues:(NSInteger)arg2 ;
-(struct pair<TSCH3DAxisLabelEnumerator *, TSCH3DAxisLabelEnumerator *> )labelEnumeratorPair;
-(void)adjustMinMaxForDataRangeInAnalysis:(id)arg0 ;
-(void)p_includeZeroWithMinValue:(*CGFloat)arg0 maxValue:(*CGFloat)arg1 userValues:(NSInteger)arg2 ;
-(void)updateModelAxisAnalysis:(id)arg0 ;
-(void)updateModelMinMaxForErrorBarsOnSeries:(id)arg0 axisID:(id)arg1 analysis:(id)arg2 ;
-(void)updateModelMinMaxForTrendLineOnSeries:(id)arg0 axisID:(id)arg1 analysis:(id)arg2 ;


@end


#endif