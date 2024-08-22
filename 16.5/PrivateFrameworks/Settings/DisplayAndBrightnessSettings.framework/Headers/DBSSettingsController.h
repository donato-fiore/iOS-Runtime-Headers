// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSSETTINGSCONTROLLER_H
#define DBSSETTINGSCONTROLLER_H

@class PSListController, NSArray, NSDictionary, NSMutableDictionary, NSDateFormatter, CBClient, UISUserInterfaceStyleMode, PSSetupController, NSString, SBSExternalDisplayService, SBSConnectedDisplayInfo;
@protocol UISUserInterfaceStyleModeDelegate, DBSDeviceAppearanceTableViewCellDelegate, DBSZoomAndProSpecifiersDelegate, DBSArrangementViewControllerDelegate, PSListControllerTestableSpecifiers;


#import "DBSZoomAndProSpecifiers.h"

@interface DBSSettingsController : PSListController <UISUserInterfaceStyleModeDelegate, DBSDeviceAppearanceTableViewCellDelegate, DBSZoomAndProSpecifiersDelegate, DBSArrangementViewControllerDelegate, PSListControllerTestableSpecifiers>

 {
    NSArray *_autoLockValues;
    NSDictionary *_autoLockTitleDictionary;
    NSMutableDictionary *_localizedAutoLockTitleDictionary;
    NSDateFormatter *_timeFormatter;
    BOOL _isProMode;
}


@property (retain, nonatomic) CBClient *_brightnessClient; // ivar: __brightnessClient
@property (retain, nonatomic) UISUserInterfaceStyleMode *_styleMode; // ivar: __styleMode
@property (retain, nonatomic) DBSZoomAndProSpecifiers *_zoomAndProSpecifierVendor; // ivar: __zoomAndProSpecifierVendor
@property (retain, nonatomic) PSSetupController *arrangementViewController; // ivar: _arrangementViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBSExternalDisplayService *displayService; // ivar: _displayService
@property (retain, nonatomic) SBSConnectedDisplayInfo *externalDisplayInfo; // ivar: _externalDisplayInfo
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)booleanCapabilitiesToTest;
-(BOOL)proModeSupported;
-(BOOL)shouldShowAlwaysOn;
-(BOOL)shouldShowAutoLock;
-(BOOL)shouldShowCaseLockOption;
-(id)_darkAppearanceTimeString;
-(id)_deviceAppearanceScheduleSpecifier;
-(id)_deviceAppearanceScheduleString;
-(id)_lightAppearanceTimeString;
-(id)blueLightSchedule:(id)arg0 ;
-(id)boldTextEnabledForSpecifier:(id)arg0 ;
-(id)connectedDisplaySpecifiers;
-(id)getAppearanceValueForSpecifier:(id)arg0 ;
-(id)getAutomaticAppearanceEnabledForSpecifier:(id)arg0 ;
-(id)getProModeEnabled;
-(id)init;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)localizedTimeForTime:(struct ? )arg0 ;
-(id)lockGroupFooter;
-(id)locksAndUnlocksWithCase:(id)arg0 ;
-(id)makeArrangementSpecifier;
-(id)screenLock:(id)arg0 ;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_localizeAutoLockTitles;
-(void)_localizeAutoLockTitlesWithSpecifiers:(id)arg0 ;
-(void)_reloadBlueLightSpecifiers:(id)arg0 reloadUI:(BOOL)arg1 ;
-(void)_updateAutoLockSpecifiers:(id)arg0 ;
-(void)_updateDeviceAppearanceToNewInterfaceStyle:(NSInteger)arg0 ;
-(void)arrangementViewControllerDidDismiss:(id)arg0 ;
-(void)dealloc;
-(void)deviceAppearanceTableViewCellUserDidTapOnDarkAppearance:(id)arg0 ;
-(void)deviceAppearanceTableViewCellUserDidTapOnLightAppearance:(id)arg0 ;
-(void)handleBlueLightStatusChanged:(struct ? *)arg0 ;
-(void)handleDBSExternalDisplayManagerCurrentModeDidChangeNotification:(id)arg0 ;
-(void)handleDisplayServiceInfoUpdate;
-(void)insertArrangementSpecifier;
-(void)insertExternalDisplaySpecifiers;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)presentArrangementController;
-(void)presentModalFineTuneController;
-(void)presentModalMagnifyController;
-(void)profileNotification:(id)arg0 ;
-(void)removeExternalDisplaySpecifiers;
-(void)setAppearanceValue:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setAutomaticAppearanceEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setBoldTextEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setLocksAndUnlocksWithCase:(id)arg0 specifier:(id)arg1 ;
-(void)setProModeEnabled:(BOOL)arg0 ;
-(void)setScreenLock:(id)arg0 specifier:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAutoLockSpecifier;
-(void)updateExternalDisplayInfoWithCompletionHandler:(id)arg0 ;
-(void)updateForExternalMonitorAvailability:(BOOL)arg0 ;
-(void)userInterfaceStyleModeDidChange:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif