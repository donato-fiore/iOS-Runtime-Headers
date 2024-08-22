// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HROVERLAYROOMVIEWCONTROLLER_H
#define HROVERLAYROOMVIEWCONTROLLER_H

@class HKOverlayRoomViewController, HKConcept, NSArray, HKUserDomainConcept;
@protocol _TtP15HealthRecordsUI31MedicalRecordChartConfiguration_;


#import "_TtC15HealthRecordsUI28MedicalRecordChartDataSource.h"

@interface HROverlayRoomViewController : HKOverlayRoomViewController

@property (retain, nonatomic) HKConcept *concept; // ivar: _concept
@property (retain, nonatomic) NSObject<_TtP15HealthRecordsUI31MedicalRecordChartConfiguration_> *configuration; // ivar: _configuration
@property (copy, nonatomic) NSArray *displayTypes; // ivar: _displayTypes
@property (readonly, nonatomic) BOOL hasChart; // ivar: _hasChart
@property (retain, nonatomic) _TtC15HealthRecordsUI28MedicalRecordChartDataSource *masterDataSource; // ivar: _masterDataSource
@property (retain, nonatomic) _TtC15HealthRecordsUI28MedicalRecordChartDataSource *noRangeDataSource; // ivar: _noRangeDataSource
@property (retain, nonatomic) _TtC15HealthRecordsUI28MedicalRecordChartDataSource *outOfRangeDataSource; // ivar: _outOfRangeDataSource
@property (copy, nonatomic) NSArray *seriesDataSources; // ivar: _seriesDataSources
@property (retain, nonatomic) HKUserDomainConcept *userConcept; // ivar: _userConcept


+(id)_verticalAxis;
+(void)determineChartabilityOfConcept:(id)arg0 withApplicationItems:(id)arg1 completion:(id)arg2 ;
+(void)determineChartabilityOfUserConcept:(id)arg0 records:(id)arg1 withApplicationItems:(id)arg2 completion:(id)arg3 ;
-(BOOL)supportsShowAllFilters;
-(id)contextSectionContainersForMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)controllerTitleWithApplicationItems:(id)arg0 ;
-(id)createChartOverlayViewController;
-(id)createViewControllerForMode:(NSInteger)arg0 displayDate:(id)arg1 applicationItems:(id)arg2 ;
-(id)initWithConcept:(id)arg0 configuration:(id)arg1 displayDate:(id)arg2 masterDataSource:(id)arg3 seriesDataSources:(id)arg4 outOfRangeDataSource:(id)arg5 noRangeDataSource:(id)arg6 overlayMode:(NSInteger)arg7 applicationItems:(id)arg8 ;
-(id)initWithUserConcept:(id)arg0 configuration:(id)arg1 displayDate:(id)arg2 masterDataSource:(id)arg3 seriesDataSources:(id)arg4 outOfRangeDataSource:(id)arg5 noRangeDataSource:(id)arg6 overlayMode:(NSInteger)arg7 applicationItems:(id)arg8 ;
-(id)initialSelectedContextForMode:(NSInteger)arg0 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg0 ;


@end


#endif