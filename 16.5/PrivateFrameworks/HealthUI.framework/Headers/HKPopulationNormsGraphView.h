// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKPOPULATIONNORMSGRAPHVIEW_H
#define HKPOPULATIONNORMSGRAPHVIEW_H

@class UIView, NSMutableArray, NSNumber, UIColor, UIFont, NSString, UILabel;


#import "HKPopulationNormsChartGridView.h"

@interface HKPopulationNormsGraphView : UIView

@property (retain, nonatomic) NSMutableArray *ageBucketBarViews; // ivar: _ageBucketBarViews
@property (retain, nonatomic) NSNumber *ageBucketIndex; // ivar: _ageBucketIndex
@property (nonatomic) NSUInteger classificationIndex; // ivar: _classificationIndex
@property (retain, nonatomic) NSNumber *currentViewWidth; // ivar: _currentViewWidth
@property (retain, nonatomic) HKPopulationNormsChartGridView *gridView; // ivar: _gridView
@property (readonly, nonatomic) UIColor *highlightedSegmentColor; // ivar: _highlightedSegmentColor
@property (retain, nonatomic) UIView *latestSampleHighlightView; // ivar: _latestSampleHighlightView
@property (retain, nonatomic) NSNumber *latestSampleValue; // ivar: _latestSampleValue
@property (nonatomic) CGFloat maxChartYValue; // ivar: _maxChartYValue
@property (nonatomic) CGFloat minChartYValue; // ivar: _minChartYValue
@property (readonly, nonatomic) UIFont *seriesTitleFont; // ivar: _seriesTitleFont
@property (nonatomic) NSUInteger sexSegmentIndex; // ivar: _sexSegmentIndex
@property (copy, nonatomic) NSString *xSeriesTitle; // ivar: _xSeriesTitle
@property (retain, nonatomic) UILabel *xSeriesTitleLabel; // ivar: _xSeriesTitleLabel
@property (copy, nonatomic) NSString *ySeriesTitle; // ivar: _ySeriesTitle
@property (retain, nonatomic) UILabel *ySeriesTitleLabel; // ivar: _ySeriesTitleLabel


-(NSUInteger)_highlightIndexForClassificationIndex:(NSUInteger)arg0 numberOfSegments:(NSUInteger)arg1 ;
-(id)initWithMaxYValue:(CGFloat)arg0 minYValue:(CGFloat)arg1 YSeriesTitle:(id)arg2 XSeriesTitle:(id)arg3 highlightedSegmentColor:(id)arg4 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateUserValueChartPointIfNecessary;
-(void)layoutSubviews;
-(void)updateWithFlattenedLevelsByAgeBucket:(id)arg0 currentClassificationIndex:(NSUInteger)arg1 ;
-(void)updateWithUserAgeBucketIndex:(id)arg0 userLatestSampleValue:(id)arg1 ;


@end


#endif