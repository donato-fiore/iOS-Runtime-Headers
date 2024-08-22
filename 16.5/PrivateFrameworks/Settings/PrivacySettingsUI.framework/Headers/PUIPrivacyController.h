// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIPRIVACYCONTROLLER_H
#define PUIPRIVACYCONTROLLER_H

@class PSListController, PSSpecifier, ACAccountStore, NSNumber, CoreTelephonyClient, NSString, NSArray;
@protocol CoreTelephonyClientCarrierBundleDelegate, PSListControllerTestableSpecifiers, OS_dispatch_queue;



@interface PUIPrivacyController : PSListController <CoreTelephonyClientCarrierBundleDelegate, PSListControllerTestableSpecifiers>

 {
    int profileInstalledToken;
    int profileUninstalledToken;
    NSObject<OS_dispatch_queue> *securitySettingsQueue;
    PSSpecifier *_locationSpecifier;
    ACAccountStore *_accountStore;
}


@property (retain, nonatomic) NSNumber *_cachedLocationServicesAvailableValue; // ivar: __cachedLocationServicesAvailableValue
@property (retain, nonatomic) CoreTelephonyClient *_client; // ivar: __client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *driverBundleControllers; // ivar: _driverBundleControllers
@property (retain, nonatomic) NSArray *driverSpecifiers; // ivar: _driverSpecifiers
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL launchHasCompleted; // ivar: _launchHasCompleted
@property (readonly) Class superclass;


+(id)booleanCapabilitiesToTest;
+(void)formatSearchEntries:(id)arg0 parent:(id)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)_accountStore;
-(id)capabilityEnabled:(id)arg0 ;
-(id)developerModeEnabled:(id)arg0 ;
-(id)driverKitSpecifiers;
-(id)init;
-(id)locationServicesEnabled:(id)arg0 ;
-(id)lockdownModeEnabled:(id)arg0 ;
-(id)specifiers;
-(void)carrierBundleChange:(id)arg0 ;
-(void)dealloc;
-(void)refreshLocationServicesAvailable;
-(void)reloadSpecifiers;
-(void)setCapabilityEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)updateLocationServicesVisibility;
-(void)updateSecurityGroup;


@end


#endif