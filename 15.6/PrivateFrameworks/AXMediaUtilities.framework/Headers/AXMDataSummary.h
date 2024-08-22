// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMDATASUMMARY_H
#define AXMDATASUMMARY_H

@class NSArray, NSString, NSNumberFormatter;
@protocol AXMDataSummaryCategoryNameProvider;

#import <Foundation/Foundation.h>

#import "AXMChartDescriptor.h"
#import "AXMDataRegressionModel.h"
#import "AXMDataSeriesDescriptor.h"

@interface AXMDataSummary : NSObject

@property (retain, nonatomic) NSArray *axisTitles; // ivar: _axisTitles
@property (readonly, nonatomic) NSString *bestFitCurveEquation;
@property (weak, nonatomic) NSObject<AXMDataSummaryCategoryNameProvider> *categoryNameDelegate; // ivar: _categoryNameDelegate
@property (weak, nonatomic) AXMChartDescriptor *chartDescriptor; // ivar: _chartDescriptor
@property (readonly, nonatomic) NSString *confidenceDescription;
@property (readonly, nonatomic) CGFloat covariance; // ivar: _covariance
@property (retain, nonatomic) NSArray *dataFeatureDescriptions; // ivar: _dataFeatureDescriptions
@property (readonly, nonatomic) CGFloat intercept; // ivar: _intercept
@property (readonly, nonatomic) NSString *maxValueDescription;
@property (readonly, nonatomic) CGFloat maxX; // ivar: _maxX
@property (readonly, nonatomic) CGFloat maxY; // ivar: _maxY
@property (readonly, nonatomic) NSString *meanValueDescription;
@property (readonly, nonatomic) CGFloat meanX; // ivar: _meanX
@property (readonly, nonatomic) CGFloat meanY; // ivar: _meanY
@property (readonly, nonatomic) NSString *medianValueDescription;
@property (readonly, nonatomic) NSString *minValueDescription;
@property (readonly, nonatomic) CGFloat minX; // ivar: _minX
@property (readonly, nonatomic) CGFloat minY; // ivar: _minY
@property (readonly, nonatomic) NSString *modelDescription;
@property (nonatomic) NSUInteger numValues; // ivar: _numValues
@property (retain, nonatomic) NSNumberFormatter *numberFormatter; // ivar: _numberFormatter
@property (readonly, nonatomic) NSArray *outliers; // ivar: _outliers
@property (readonly, nonatomic) NSString *outliersDescription;
@property (readonly, nonatomic) CGFloat r; // ivar: _r
@property (readonly, nonatomic) CGFloat rSquared; // ivar: _rSquared
@property (readonly, nonatomic) AXMDataRegressionModel *regressionModel; // ivar: _regressionModel
@property (readonly, nonatomic) NSArray *residuals; // ivar: _residuals
@property (weak, nonatomic) AXMDataSeriesDescriptor *series; // ivar: _series
@property (readonly, nonatomic) CGFloat slope; // ivar: _slope
@property (readonly, nonatomic) NSString *slopeDescription;
@property (retain, nonatomic) NSArray *statsDescriptions; // ivar: _statsDescriptions
@property (readonly, nonatomic) CGFloat varianceX; // ivar: _varianceX
@property (readonly, nonatomic) CGFloat varianceY; // ivar: _varianceY
@property (retain, nonatomic) NSArray *xValues; // ivar: _xValues
@property (retain, nonatomic) NSArray *yValues; // ivar: _yValues


-(CGFloat)getMean:(id)arg0 ;
-(CGFloat)getMedian:(id)arg0 ;
-(CGFloat)getVariance:(id)arg0 ;
-(CGFloat)positionForXAxisValue:(CGFloat)arg0 ;
-(CGFloat)positionForYAxisValue:(CGFloat)arg0 ;
-(id)initWithSeries:(id)arg0 chartDescriptor:(id)arg1 ;
-(id)stringForComponents:(id)arg0 ;
-(void)compute;
-(void)computeMeans;
-(void)computeR;
-(void)computeRanges;
-(void)computeRegressionModel:(id)arg0 ;
-(void)computeResiduals;
-(void)getValues:(*CGFloat)arg0 fromNSNumberArray:(id)arg1 ;


@end


#endif