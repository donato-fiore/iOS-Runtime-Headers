// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ACTIVITYSOURCEDELEGATE_H
#define _ACTIVITYSOURCEDELEGATE_H

@class NSCalendar;
@protocol HKDateRangeDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "HKDisplayTypeController.h"
#import "HKUnitPreferenceController.h"

@interface _ActivitySourceDelegate : NSObject <HKDateRangeDataSourceDelegate>



@property (readonly, nonatomic) NSInteger activityValue; // ivar: _activityValue
@property (readonly, nonatomic) NSCalendar *currentCalendar; // ivar: _currentCalendar
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController; // ivar: _displayTypeController
@property (readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController; // ivar: _unitPreferenceController


-(CGFloat)_centerOffsetForTimeScope:(NSInteger)arg0 startDate:(id)arg1 calendar:(id)arg2 ;
-(id)_chartPointForActivityValue:(NSInteger)arg0 summary:(id)arg1 timeScope:(NSInteger)arg2 ;
-(id)_healthChartPointForQuantity:(id)arg0 quantityType:(id)arg1 activityValue:(NSInteger)arg2 referenceDisplayType:(id)arg3 activitySummaryData:(id)arg4 preferredUnit:(id)arg5 date:(id)arg6 createBarValue:(BOOL)arg7 ;
-(id)_quantityForActivityValue:(NSInteger)arg0 summary:(id)arg1 ;
-(id)activitySummariesForDateRange:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)dataForDateRange:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)initWithActivityValue:(NSInteger)arg0 displayTypeController:(id)arg1 unitPreferenceController:(id)arg2 ;
-(void)setUpdateDelegate:(id)arg0 ;


@end


#endif