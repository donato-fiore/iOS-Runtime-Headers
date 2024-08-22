// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DBSSETTINGSCONTROLLER_H
#define DBSSETTINGSCONTROLLER_H

@class PSListController, NSArray, NSDictionary, NSMutableDictionary, NSDateFormatter, CBClient, UISUserInterfaceStyleMode, NSString;
@protocol UISUserInterfaceStyleModeDelegate, DBSDeviceAppearanceTableViewCellDelegate, PSListControllerTestableSpecifiers;



@interface DBSSettingsController : PSListController <UISUserInterfaceStyleModeDelegate, DBSDeviceAppearanceTableViewCellDelegate, PSListControllerTestableSpecifiers>

 {
    NSArray *_autoLockValues;
    NSDictionary *_autoLockTitleDictionary;
    NSMutableDictionary *_localizedAutoLockTitleDictionary;
    NSDateFormatter *_timeFormatter;
}


@property (retain, nonatomic) CBClient *_brightnessClient; // ivar: __brightnessClient
@property (retain, nonatomic) UISUserInterfaceStyleMode *_styleMode; // ivar: __styleMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)booleanCapabilitiesToTest;
-(BOOL)shouldShowAutoLock;
-(BOOL)shouldShowCaseLockOption;
-(id)_darkAppearanceTimeString;
-(id)_deviceAppearanceScheduleSpecifier;
-(id)_deviceAppearanceScheduleString;
-(id)_lightAppearanceTimeString;
-(id)backlightValue:(id)arg0 ;
-(id)blueLightSchedule:(id)arg0 ;
-(id)boldTextEnabledForSpecifier:(id)arg0 ;
-(id)connectedDisplaySpecifiers;
-(id)getAppearanceValueForSpecifier:(id)arg0 ;
-(id)getAutoWhiteBalanceEnabled:(id)arg0 ;
-(id)getAutomaticAppearanceEnabledForSpecifier:(id)arg0 ;
-(id)init;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)localizedMagnifyModeName;
-(id)localizedTimeForTime:(struct ? )arg0 ;
-(id)lockGroupFooter;
-(id)locksAndUnlocksWithCase:(id)arg0 ;
-(id)screenLock:(id)arg0 ;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_cleanupTransactionRef;
-(void)_localizeAutoLockTitles;
-(void)_localizeAutoLockTitlesWithSpecifiers:(id)arg0 ;
-(void)_reloadBlueLightSpecifiers:(id)arg0 reloadUI:(BOOL)arg1 ;
-(void)_updateAutoLockSpecifiers:(id)arg0 ;
-(void)_updateDeviceAppearanceToNewInterfaceStyle:(NSInteger)arg0 ;
-(void)brightnessChangedExternally;
-(void)dealloc;
-(void)deviceAppearanceTableViewCellUserDidTapOnDarkAppearance:(id)arg0 ;
-(void)deviceAppearanceTableViewCellUserDidTapOnLightAppearance:(id)arg0 ;
-(void)handleBlueLightStatusChanged:(struct ? *)arg0 ;
-(void)handleBrightnessChangedNotification:(id)arg0 ;
-(void)handleDBSExternalDisplayManagerCurrentModeDidChangeNotification:(id)arg0 ;
-(void)insertExternalDisplaySpecifiers;
-(void)presentModalMagnifyController;
-(void)profileNotification:(id)arg0 ;
-(void)removeExternalDisplaySpecifiers;
-(void)setAppearanceValue:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setAutoWhiteBalanceEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setAutomaticAppearanceEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setBacklightValue:(id)arg0 specifier:(id)arg1 ;
-(void)setBoldTextEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setLocksAndUnlocksWithCase:(id)arg0 specifier:(id)arg1 ;
-(void)setScreenLock:(id)arg0 specifier:(id)arg1 ;
// -(void)showAlertToDisableAccessibilityFilters:(id)arg0 cancel:(unk)arg1  ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAutoLockSpecifier;
-(void)userInterfaceStyleModeDidChange:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif