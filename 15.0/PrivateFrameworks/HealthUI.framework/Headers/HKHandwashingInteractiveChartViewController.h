// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHANDWASHINGINTERACTIVECHARTVIEWCONTROLLER_H
#define HKHANDWASHINGINTERACTIVECHARTVIEWCONTROLLER_H



#import "HKInteractiveChartViewController.h"
#import "HKDisplayType.h"

@interface HKHandwashingInteractiveChartViewController : HKInteractiveChartViewController

@property (retain, nonatomic) HKDisplayType *goalDisplayType; // ivar: _goalDisplayType
@property (retain, nonatomic) HKDisplayType *primaryDisplayType; // ivar: _primaryDisplayType


-(id)_generateHandwashingGoalDataSource;
-(id)_generateHandwashingGoalDisplayTypeWithDisplayType:(id)arg0 unitPreferencesController:(id)arg1 selectedTimeScopeController:(id)arg2 ;
-(id)_generateHandwashingGoalLineSeriesWithDisplayType:(id)arg0 unitPreferenceController:(id)arg1 color:(id)arg2 ;
-(id)initWithDisplayTypeController:(id)arg0 healthStore:(id)arg1 unitPreferenceController:(id)arg2 dateCache:(id)arg3 chartDataCacheController:(id)arg4 selectedTimeScopeController:(id)arg5 sampleTypeDateRangeController:(id)arg6 initialXValue:(id)arg7 ;
-(void)configureDisplayTypes:(id)arg0 timeScope:(NSInteger)arg1 stackOffset:(NSInteger)arg2 ;
-(void)viewDidLoad;


@end


#endif