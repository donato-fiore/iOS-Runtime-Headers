// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFACCESSORYSETTINGMANAGEDCONFIGURATIONADAPTER_H
#define HFACCESSORYSETTINGMANAGEDCONFIGURATIONADAPTER_H

@class NSString, MCProfileConnection, NSHashTable;
@protocol MCProfileConnectionObserver, HFAccessorySettingAdapterDisplayArbitrating;


#import "HFAccessorySettingAdapter.h"

@interface HFAccessorySettingManagedConfigurationAdapter : HFAccessorySettingAdapter <MCProfileConnectionObserver, HFAccessorySettingAdapterDisplayArbitrating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSettingUp; // ivar: _isSettingUp
@property (readonly, nonatomic) NSUInteger numberOfProfiles;
@property (readonly, nonatomic) MCProfileConnection *profileConnectionForSynchronization; // ivar: _profileConnectionForSynchronization
@property (retain, nonatomic) NSHashTable *profileObservers; // ivar: _profileObservers
@property (readonly) Class superclass;


-(BOOL)shouldShowSettingsEntity:(id)arg0 ;
-(id)_beginMonitoringSettingsKeyPath:(id)arg0 ;
-(id)_installedProfileData;
-(id)_profilesSettingData;
-(id)_removeProfileFromProfileManager:(id)arg0 ;
-(id)_synchronizeHomeKitToManagedConfiguration;
-(id)_synchronizeManagedConfigurationToHomeKit;
-(id)initWithHomeKitSettingsVendor:(id)arg0 keyPaths:(id)arg1 mode:(NSUInteger)arg2 updateHandler:(id)arg3 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 keyPaths:(id)arg1 updateHandler:(id)arg2 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)profiles;
-(id)profilesSettingFuture;
-(id)removeProfileDataFromHomeKit:(id)arg0 ;
-(id)removeProfileFromHomeKit:(id)arg0 ;
-(void)_dispatchWasUpdated;
-(void)_rebootForReason:(id)arg0 ;
-(void)_setupDebugHandler;
-(void)addProfileObserver:(id)arg0 ;
-(void)dealloc;
-(void)homeKitSettingWasUpdated:(id)arg0 value:(id)arg1 ;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)removeProfileObserver:(id)arg0 ;


@end


#endif