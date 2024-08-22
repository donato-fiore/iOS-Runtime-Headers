// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUILOCATIONSERVICESLISTCONTROLLER_H
#define PUILOCATIONSERVICESLISTCONTROLLER_H

@class PSListController, NSDictionary, NSMutableArray, NSArray, NSMutableDictionary, NSDate, ACAccountStore, ACAccount, NSNumber, NSString, FMFDevice, NSOperationQueue, FMFSession;
@protocol FMFSessionDelegate, SRRelatedSettingsProvider;



@interface PUILocationServicesListController : PSListController <FMFSessionDelegate>

 {
    NSDictionary *_locationEntitiesDetails;
    NSMutableArray *_coalescedLocationBasedAlertsSystemServices;
    NSMutableArray *_coalescedHomeKitSystemServices;
    NSMutableArray *_coalescedRoutingAndTrafficSystemServices;
    NSMutableArray *_coalescedWirelessSystemServices;
    NSMutableArray *_coalescedSystemCutomizationSystemServices;
    NSArray *_ignoredLocationEntities;
    BOOL _deferredRefreshDueToConfirm;
    BOOL _locationNotificationsEnabled;
    NSMutableDictionary *_coalesceAppKeys;
    NSDate *_twentyFourHoursAgo;
    ACAccountStore *_accountStore;
    ACAccount *_primaryAccount;
    NSNumber *_isLocationServicesEnabled;
    id<SRRelatedSettingsProvider> *_sensorKitSpecifiersProvider;
}


@property (retain, nonatomic) NSMutableArray *coalescedImproveMapsServices; // ivar: _coalescedImproveMapsServices
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FMFDevice *locationSharingDevice; // ivar: _locationSharingDevice
@property (retain, nonatomic) NSNumber *locationSharingEnabled; // ivar: _locationSharingEnabled
@property (retain, nonatomic) NSOperationQueue *locationSharingOperationQueue; // ivar: _locationSharingOperationQueue
@property (retain, nonatomic) FMFSession *locationSharingSession; // ivar: _locationSharingSession
@property (readonly) Class superclass;


+(BOOL)isCoreRoutineAuthorized;
+(BOOL)isLocationRestricted;
+(void)setCoreRoutineAuthorized:(BOOL)arg0 ;
-(BOOL)_isBundleBlacklisted:(id)arg0 ;
-(BOOL)_isFindMyDeviceSpecifier:(id)arg0 ;
-(BOOL)_shouldEnableLocationSharingSpecifier;
-(BOOL)isLocationSharingEnabled;
-(BOOL)isLocationSharingModificationAllowed;
-(id)accountStore;
-(id)hiddenBundleIdentifiers;
-(id)init;
-(id)isEntityAuthorized:(id)arg0 ;
-(id)isLocationServicesEnabled:(id)arg0 ;
-(id)loadSensorKitSpecifiersProvider;
-(id)localizedDisplayNameForBundleID:(id)arg0 ;
-(id)locationDetailSpecifiersForAppsAndBundles;
-(id)locationDetailSpecifiersWithDetailsMatching:(id)arg0 ;
-(id)locationSharingSpecifiers;
-(id)primaryAccount;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(id)valueForSpecifier:(id)arg0 ;
-(int)locationUsageBasedOnDetails:(id)arg0 ;
-(int)locationUsageForEntity:(id)arg0 ;
-(void)_cancelConfirmDisableForSpecifier:(id)arg0 ;
-(void)_handleAuthenticationForSpecifier:(id)arg0 success:(BOOL)arg1 error:(id)arg2 ;
-(void)_locationSharingSpecifierWasTapped:(id)arg0 ;
-(void)_pushCoreRoutineViewController;
-(void)_setEntityAuthorized:(BOOL)arg0 specifier:(id)arg1 ;
-(void)_setLocationServicesEnabled:(BOOL)arg0 ;
-(void)connectionError:(id)arg0 ;
-(void)dealloc;
-(void)didChangeActiveLocationSharingDevice:(id)arg0 ;
-(void)didUpdateHidingStatus:(BOOL)arg0 ;
-(void)disableAfterLoginConfirmation:(id)arg0 ;
-(void)mainThreadConnectionError:(id)arg0 ;
-(void)mainThreadDidChangeActiveLocationSharingDevice:(id)arg0 ;
-(void)mainThreadDidUpdateHidingStatus:(BOOL)arg0 ;
-(void)profileNotification:(id)arg0 ;
-(void)refreshLinkStatusInParent;
-(void)setAuthLevel:(NSUInteger)arg0 forCell:(id)arg1 ;
-(void)setEntityAuthorized:(id)arg0 specifier:(id)arg1 ;
-(void)setLocationServicesEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setSOSEntityAuthorized:(id)arg0 specifier:(id)arg1 ;
-(void)setUsage:(int)arg0 forCell:(id)arg1 ;
-(void)showLocationPrivacyPage;
-(void)startLocationStatusUpdates;
-(void)stopLocationStatusUpdates;
-(void)updateFindMyFriendsStateBasedOnRestriction;
-(void)updateForApplicationDidBecomeActive:(id)arg0 ;
-(void)updateLocationSharing;
-(void)updateLocationSharingSpecifiersWithReload:(BOOL)arg0 ;
-(void)updateLocationUsage;
-(void)updateMutableStateBasedOnRestriction;
-(void)updateMutableStateForLocationSharing;
-(void)updateRecentlyUsedDate;
-(void)updateSpecifiersForImposedSettings;
-(void)updateSpecifiersForImposedSettingsWithReload:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willBecomeActive;


@end


#endif