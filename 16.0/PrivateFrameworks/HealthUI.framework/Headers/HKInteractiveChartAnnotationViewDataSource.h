// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKINTERACTIVECHARTANNOTATIONVIEWDATASOURCE_H
#define HKINTERACTIVECHARTANNOTATIONVIEWDATASOURCE_H

@class NSArray, NSString, UILabel, UIFont;
@protocol HKInteractiveChartAnnotationViewDataSource, HKCurrentValueViewDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "HKValueRange.h"
#import "HKSelectedRangeFormatter.h"

@interface HKInteractiveChartAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource>



@property (retain, nonatomic) NSArray *annotationLabels; // ivar: _annotationLabels
@property (weak, nonatomic) NSObject<HKCurrentValueViewDataSourceDelegate> *currentValueViewDataSourceDelegate; // ivar: _currentValueViewDataSourceDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger firstWeekday; // ivar: _firstWeekday
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *lastCombinedDateString; // ivar: _lastCombinedDateString
@property (retain) HKValueRange *lastDateRange; // ivar: _lastDateRange
@property (retain, nonatomic) NSString *lastLowerDateString; // ivar: _lastLowerDateString
@property (retain, nonatomic) NSString *lastUpperDateString; // ivar: _lastUpperDateString
@property (retain, nonatomic) UILabel *mainDateLabel; // ivar: _mainDateLabel
@property (retain, nonatomic) UIFont *majorFont; // ivar: _majorFont
@property (retain, nonatomic) UIFont *minorFont; // ivar: _minorFont
@property (readonly, nonatomic) HKSelectedRangeFormatter *selectedRangeFormatter; // ivar: _selectedRangeFormatter
@property (readonly) Class superclass;
@property (nonatomic) NSInteger timeScope; // ivar: _timeScope


-(BOOL)_isMultiSelectionDateRange;
-(BOOL)showSeparators;
-(NSInteger)numberOfValuesForAnnotationView:(id)arg0 ;
-(id)_dateRangeFromSelectionContext:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)_weeksContainingDateRange:(id)arg0 ;
-(id)dateViewWithOrientation:(NSInteger)arg0 ;
-(id)initWithSelectedRangeFormatter:(id)arg0 firstWeekday:(NSInteger)arg1 currentValueViewDataSourceDelegate:(id)arg2 ;
-(id)leftMarginViewWithOrientation:(NSInteger)arg0 ;
-(id)valueViewForColumnAtIndex:(NSInteger)arg0 orientation:(NSInteger)arg1 ;
-(void)_buildDateLabels;
-(void)_updateDateText;
-(void)updateWithSelectionContext:(id)arg0 displayType:(id)arg1 timeScope:(NSInteger)arg2 ;


@end


#endif