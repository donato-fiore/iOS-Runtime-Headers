// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDCHARTEXPERIMENTSCHARTSECTION_H
#define WDCHARTEXPERIMENTSCHARTSECTION_H

@class HKHealthChartFactory, HKInteractiveChartOverlayViewController, HKHeartbeatSequenceChartViewController, NSMutableArray;


#import "WDTableViewSection.h"
#import "WDActivityQueryTestController.h"

@interface WDChartExperimentsChartSection : WDTableViewSection

@property (retain, nonatomic) WDActivityQueryTestController *activityQueryTestController; // ivar: _activityQueryTestController
@property (retain, nonatomic) HKHealthChartFactory *healthChartFactory; // ivar: _healthChartFactory
@property (retain, nonatomic) HKInteractiveChartOverlayViewController *heartRateController; // ivar: _heartRateController
@property (retain, nonatomic) HKHeartbeatSequenceChartViewController *heartbeatSequenceForUpdate; // ivar: _heartbeatSequenceForUpdate
@property (retain, nonatomic) NSMutableArray *viewControllers; // ivar: _viewControllers


-(NSUInteger)numberOfRows;
-(id)_audiogramSampleForDate:(id)arg0 sensitivityData:(id)arg1 ;
-(id)_buildHeartSequenceDataFromString:(id)arg0 ;
-(id)_dateFormatter;
-(id)_localDateFromString:(id)arg0 ;
-(id)cellForRow:(NSUInteger)arg0 table:(id)arg1 ;
-(id)titleForHeader;
-(void)activityQueryTest:(id)arg0 ;
-(void)setUpWithTableViewController:(id)arg0 ;
-(void)updateTachogram:(id)arg0 ;


@end


#endif