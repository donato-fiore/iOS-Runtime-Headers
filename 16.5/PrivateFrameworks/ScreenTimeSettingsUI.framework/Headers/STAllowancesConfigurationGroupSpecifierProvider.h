// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STALLOWANCESCONFIGURATIONGROUPSPECIFIERPROVIDER_H
#define STALLOWANCESCONFIGURATIONGROUPSPECIFIERPROVIDER_H

@class PSSpecifier, NSString, NSTimer;
@protocol STAlwaysAllowListControllerDelegate, STDeviceBedtimeListControllerDelegate;


#import "STRootGroupSpecifierProvider.h"

@interface STAllowancesConfigurationGroupSpecifierProvider : STRootGroupSpecifierProvider <STAlwaysAllowListControllerDelegate, STDeviceBedtimeListControllerDelegate>



@property (retain, nonatomic) PSSpecifier *alwaysAllowedSpecifier; // ivar: _alwaysAllowedSpecifier
@property (retain, nonatomic) PSSpecifier *appLimitsSpecifier; // ivar: _appLimitsSpecifier
@property (retain, nonatomic) PSSpecifier *communicationLimitsSpecifier; // ivar: _communicationLimitsSpecifier
@property (retain, nonatomic) PSSpecifier *communicationSafetySpecifier; // ivar: _communicationSafetySpecifier
@property (retain, nonatomic) PSSpecifier *contentPrivacySpecifier; // ivar: _contentPrivacySpecifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PSSpecifier *deviceBedtimeSpecifier; // ivar: _deviceBedtimeSpecifier
@property (retain, nonatomic) NSTimer *downtimeScheduleRefreshTimer; // ivar: _downtimeScheduleRefreshTimer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCommunicationSafetyRegionSupported; // ivar: _isCommunicationSafetyRegionSupported
@property (readonly) Class superclass;


-(BOOL)showDemoModeAlertIfNeeded;
-(id)_communicationLimitsDetailText;
-(id)_communicationSafetyDetailText;
-(id)_subtitleTextForDeviceBedtime:(id)arg0 ;
-(id)alwaysAllowedDetailText;
-(id)appLimitsDetailText;
-(id)contentPrivacyDetailText;
-(id)init;
-(void)_communicationLimitsDidChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)_communicationSafetyDidChange;
-(void)_deviceBedtimeDidChange:(id)arg0 ;
-(void)_hasWatchOSDevicesOnlyDidChange:(BOOL)arg0 ;
-(void)_isManagedDidChangeTo:(BOOL)arg0 ;
-(void)_isRemoteUserDidChangeFrom:(BOOL)arg0 to:(BOOL)arg1 ;
-(void)_refreshBedtimeSpecifiersForBedtime:(id)arg0 ;
-(void)_resetCommunicationLimitsDetailText;
-(void)_showCommunicationLimitsViewController:(id)arg0 ;
-(void)_userTypeDidChange:(NSUInteger)arg0 ;
-(void)alwaysAllowListController:(id)arg0 didFinishEditingAlwaysAllowList:(id)arg1 ;
-(void)bedtimeListController:(id)arg0 didFinishEditingBedtime:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)scheduleDowntimeRefreshAndReloadSpecifiersForBedtime:(id)arg0 ;
-(void)scheduleDowntimeRefreshIfNeeded;
-(void)setCoordinator:(id)arg0 ;
-(void)showAlwaysAllowedViewController:(id)arg0 ;
-(void)showAppLimitsViewController:(id)arg0 ;
-(void)showCommunicationSafetyViewController:(id)arg0 ;
-(void)showDeviceBedtimeViewController:(id)arg0 ;


@end


#endif