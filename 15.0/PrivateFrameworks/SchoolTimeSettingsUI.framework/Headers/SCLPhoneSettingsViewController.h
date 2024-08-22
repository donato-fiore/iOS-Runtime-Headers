// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCLPHONESETTINGSVIEWCONTROLLER_H
#define SCLPHONESETTINGSVIEWCONTROLLER_H

@class NRDevice, SCLScheduleSettings, SCLSchoolMode;


#import "SCLListViewController.h"
#import "SCLActiveSpecifierDataSource.h"
#import "SCLSettingsViewModel.h"

@interface SCLPhoneSettingsViewController : SCLListViewController

@property (retain, nonatomic) SCLActiveSpecifierDataSource *activeSpecifierSource; // ivar: _activeSpecifierSource
@property (retain, nonatomic) NRDevice *device; // ivar: _device
@property (nonatomic, getter=isObservingApplicationLifecycle) BOOL observingApplicationLifecycle; // ivar: _observingApplicationLifecycle
@property (nonatomic, getter=isObservingViewModel) BOOL observingViewModel; // ivar: _observingViewModel
@property (retain, nonatomic) SCLScheduleSettings *scheduleSettings; // ivar: _scheduleSettings
@property (retain, nonatomic) SCLSchoolMode *schoolMode; // ivar: _schoolMode
@property (retain, nonatomic) SCLSettingsViewModel *viewModel; // ivar: _viewModel


-(id)viewModelForSettings:(id)arg0 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)beginObservingViewModel:(id)arg0 ;
-(void)dealloc;
-(void)endObservingViewModel:(id)arg0 ;
-(void)loadSchoolModeIfNeeded;
-(void)loadSpecifierSource;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)scheduleDidChange;
-(void)setSpecifier:(id)arg0 ;
-(void)updateSchedule;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif