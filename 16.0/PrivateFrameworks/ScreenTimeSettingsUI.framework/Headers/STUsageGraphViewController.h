// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STUSAGEGRAPHVIEWCONTROLLER_H
#define STUSAGEGRAPHVIEWCONTROLLER_H

@class UIViewController, NSArray, UILayoutGuide, UIImage, NSString, UIView, NSLayoutConstraint, UILabel, UIImageView;
@protocol UIGestureRecognizerDelegate;


#import "STUsageReportGraphDataSet.h"
#import "STPaddleView.h"
#import "STBarView.h"
#import "STDashedVerticalDivider.h"

@interface STUsageGraphViewController : UIViewController <UIGestureRecognizerDelegate>



@property (copy) NSArray *barIndicators; // ivar: _barIndicators
@property (retain) UILayoutGuide *barSectionLayoutGuide; // ivar: _barSectionLayoutGuide
@property (copy) NSArray *barViewHeightConstraints; // ivar: _barViewHeightConstraints
@property (copy) NSArray *barViews; // ivar: _barViews
@property (readonly) UIImage *dashedAverageLineImage;
@property (retain, nonatomic) STUsageReportGraphDataSet *dataSet; // ivar: _dataSet
@property NSUInteger day; // ivar: _day
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CGFloat graphHeight; // ivar: _graphHeight
@property (retain) UILayoutGuide *graphLayoutGuide; // ivar: _graphLayoutGuide
@property (readonly) NSUInteger hash;
@property (copy) NSArray *horizontalDividers; // ivar: _horizontalDividers
@property (readonly) BOOL includePaddle; // ivar: _includePaddle
@property (readonly) CGFloat maximumYAxisLabelWidth;
@property (retain) UIView *paddleConnectorView; // ivar: _paddleConnectorView
@property (retain) STPaddleView *paddleView; // ivar: _paddleView
@property (retain) NSLayoutConstraint *paddleViewCenterXConstraint; // ivar: _paddleViewCenterXConstraint
@property (retain) NSLayoutConstraint *paddleViewConnectorCenterXConstraint; // ivar: _paddleViewConnectorCenterXConstraint
@property (retain, nonatomic) STBarView *pressedBarView; // ivar: _pressedBarView
@property (retain) STBarView *selectedBarView; // ivar: _selectedBarView
@property (retain) STDashedVerticalDivider *selectedVerticalDivider; // ivar: _selectedVerticalDivider
@property (nonatomic) NSInteger selectedWeekday; // ivar: _selectedWeekday
@property (readonly) Class superclass;
@property (readonly) UIView *titleView; // ivar: _titleView
@property (readonly) BOOL useVibrancy; // ivar: _useVibrancy
@property (copy) NSArray *verticalDividers; // ivar: _verticalDividers
@property (copy) NSArray *verticalLayoutGuides; // ivar: _verticalLayoutGuides
@property (retain) UIView *vibrancyEffectContentView; // ivar: _vibrancyEffectContentView
@property NSUInteger week; // ivar: _week
@property (retain) NSLayoutConstraint *weeklyAverageHeightConstraint; // ivar: _weeklyAverageHeightConstraint
@property (retain) UILabel *weeklyAverageLabel; // ivar: _weeklyAverageLabel
@property (retain) UILayoutGuide *weeklyAverageLayoutGuide; // ivar: _weeklyAverageLayoutGuide
@property (retain) UIImageView *weeklyAverageLine; // ivar: _weeklyAverageLine
@property (retain) NSLayoutConstraint *weeklyAverageTrailingConstraint; // ivar: _weeklyAverageTrailingConstraint
@property (retain) UILayoutGuide *xAxisLabelSectionLayoutGuide; // ivar: _xAxisLabelSectionLayoutGuide
@property (retain) UILayoutGuide *yAxisLabelSectionLayoutGuide; // ivar: _yAxisLabelSectionLayoutGuide
@property (retain) NSLayoutConstraint *yAxisLabelSectionWidthConstraint; // ivar: _yAxisLabelSectionWidthConstraint


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)_closestBarViewToPoint:(struct CGPoint )arg0 ;
-(id)createBarIndicatorWithImageName:(id)arg0 barView:(id)arg1 ;
-(id)createBarViewWithDataPoint:(id)arg0 layoutGuide:(id)arg1 previousView:(id)arg2 previousLayoutGuide:(id)arg3 layoutGuideWidthMultiplier:(CGFloat)arg4 ;
-(id)createDividerWithView:(id)arg0 layoutGuide:(id)arg1 previousLayoutGuide:(id)arg2 layoutGuideWidthMultiplier:(CGFloat)arg3 ;
-(id)createFirstDivider;
-(id)createWeeklyAverageLineWithLayoutGuide:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitleView:(id)arg0 graphHeight:(CGFloat)arg1 includePaddle:(BOOL)arg2 useVibrancy:(BOOL)arg3 ;
-(void)_handleLongPressGestureForBarSelection:(id)arg0 ;
-(void)_handleLongPressGestureForPaddle:(id)arg0 ;
-(void)_selectBarView:(id)arg0 ;
-(void)_setUpHorizontalDividerLabels;
-(void)_showPaddleForBarView:(id)arg0 ;
-(void)_stUsageGraphViewControllerCommonInit;
-(void)_updateBarViewsAndIndicators;
-(void)loadView;
-(void)setUpBarViewHeightContraints;
-(void)setUpGraphWithLabelFormatter:(id)arg0 ;
-(void)setUpWeeklyAverageLine:(BOOL)arg0 ;
-(void)setYAxisLabelSectionWidth:(CGFloat)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif