// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STUSAGEDETAILLISTCONTROLLER_H
#define STUSAGEDETAILLISTCONTROLLER_H

@class NSLayoutConstraint;


#import "STPINListViewController.h"
#import "STAllowanceProgressGroupSpecifierProvider.h"
#import "STDatePickerBar.h"
#import "STMostUsedGroupSpecifierProvider.h"
#import "STNoUsageDataView.h"
#import "STNotificationsUsageGroupSpecifierProvider.h"
#import "STDevicePickupsUsageGroupSpecifierProvider.h"
#import "STScreenTimeUsageGroupSpecifierProvider.h"
#import "STSegmentedControlGroupSpecifierProvider.h"
#import "STTestGroupSpecifierProvider.h"

@interface STUsageDetailListController : STPINListViewController

@property (retain) STAllowanceProgressGroupSpecifierProvider *allowancesProvider; // ivar: _allowancesProvider
@property (retain) STDatePickerBar *datePickerBar; // ivar: _datePickerBar
@property (retain) NSLayoutConstraint *datePickerBottomConstraint; // ivar: _datePickerBottomConstraint
@property (getter=isDatePickerHidden) BOOL datePickerHidden;
@property (retain) NSLayoutConstraint *datePickerTopConstraint; // ivar: _datePickerTopConstraint
@property (retain) STMostUsedGroupSpecifierProvider *mostUsedProvider; // ivar: _mostUsedProvider
@property (retain) STNoUsageDataView *noUsageDataView; // ivar: _noUsageDataView
@property (retain) STNotificationsUsageGroupSpecifierProvider *notificationsProvider; // ivar: _notificationsProvider
@property (retain) STDevicePickupsUsageGroupSpecifierProvider *pickupsProvider; // ivar: _pickupsProvider
@property (retain) STScreenTimeUsageGroupSpecifierProvider *screenTimeProvider; // ivar: _screenTimeProvider
@property (retain) STSegmentedControlGroupSpecifierProvider *segmentedControlProvider; // ivar: _segmentedControlProvider
@property (retain) STTestGroupSpecifierProvider *testProvider; // ivar: _testProvider


-(id)_getDevicesDropDownMenu;
-(id)_getUIActionForDevice:(id)arg0 deviceIndentifier:(id)arg1 weakSelf:(id)arg2 ;
-(void)_devicesDidChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)_hasUsageDataDidChange:(BOOL)arg0 ;
-(void)_leftDatePickerBarButtonTapped:(id)arg0 ;
-(void)_reportCoreAnalyticsEventWithUser:(id)arg0 currentDate:(id)arg1 calendar:(id)arg2 ;
-(void)_rightDatePickerBarButtonTapped:(id)arg0 ;
-(void)_selectedUsageReportDidChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)_setSelectedDeviceIdentifier:(id)arg0 ;
-(void)_setSelectedUsageReportType:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setCoordinator:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif