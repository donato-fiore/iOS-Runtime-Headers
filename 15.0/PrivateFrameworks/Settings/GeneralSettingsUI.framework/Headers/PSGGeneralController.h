// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSGGENERALCONTROLLER_H
#define PSGGENERALCONTROLLER_H

@class PSListController, NSTimer, PSSpecifier, NSArray, CRCarPlayPreferences, NSString;
@protocol CRCarPlayPreferencesDelegate, PSGHomeButtonCustomizeControllerDelegate, SFAirDropDiscoveryControllerDelegate, DevicePINControllerDelegate, PSListControllerTestableSpecifiers;


#import "PSGTVOutManager.h"

@interface PSGGeneralController : PSListController <CRCarPlayPreferencesDelegate, PSGHomeButtonCustomizeControllerDelegate, SFAirDropDiscoveryControllerDelegate, DevicePINControllerDelegate, PSListControllerTestableSpecifiers>

 {
    NSTimer *_usageTimer;
    PSGTVOutManager *_tvOutManager;
    PSSpecifier *_tvOutSpecifier;
    PSSpecifier *_airDropSpecifier;
    NSArray *_vpnBundleControllers;
    NSArray *_vpnSpecifiers;
    NSArray *_profileBundleControllers;
    NSArray *_profileSpecifiers;
    NSArray *_fontBundleControllers;
    NSArray *_fontSpecifiers;
}


@property (retain, nonatomic) CRCarPlayPreferences *carPreferences; // ivar: _carPreferences
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL launchHasCompleted; // ivar: _launchHasCompleted
@property (readonly) Class superclass;


+(id)booleanCapabilitiesToTest;
-(BOOL)_hasCarPlayContent;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg0 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)EDGEEnabled:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(void)_setUseSwitchForOrientationLockWithSpecifier:(id)arg0 ;
-(void)dealloc;
-(void)delayedAsyncLoadSpecifiers;
-(void)enableEdge:(id)arg0 ;
-(void)gameControllersDidChange;
-(void)handleCarPlayAllowedDidChange;
-(void)handleDidBecomeActive;
-(void)handleTVOutChange;
-(void)homeButtonCustomizeControllerDidFinish:(id)arg0 ;
-(void)insertOrderedSpecifiers:(id)arg0 atID:(id)arg1 animated:(BOOL)arg2 ;
-(void)loadHomeButtonSettings:(id)arg0 ;
-(void)loadLegalAndRegulatoryWithSpecifier:(id)arg0 ;
-(void)pairedVehiclesDidChange;
-(void)pointerDevicesDidChange;
-(void)profileNotification:(id)arg0 ;
-(void)profileVisibilityChanged:(id)arg0 ;
-(void)reloadAsyncSpecifiersWithCompletion:(id)arg0 ;
-(void)reloadSpecifiers;
-(void)shutDown:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateFontsWithCompletion:(id)arg0 ;
-(void)updateGameControllersWithCompletion:(id)arg0 ;
-(void)updateProfilesWithCompletion:(id)arg0 ;
-(void)updateSoftwareUpdateBadge;
-(void)updateTrackpadWithCompletion:(id)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif