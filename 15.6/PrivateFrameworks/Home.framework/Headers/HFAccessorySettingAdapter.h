// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFACCESSORYSETTINGADAPTER_H
#define HFACCESSORYSETTINGADAPTER_H

@class HMAccessory, NSString, HMHome, NSMutableDictionary, NSSet, HMSettings;
@protocol HFHomeKitSettingsObserver, HFMediaObjectObserver, HFHomeKitSettingsVendor;

#import <Foundation/Foundation.h>

#import "HFHomeKitDispatcher.h"
#import "HFHomeKitSettingsValueManager.h"

@interface HFAccessorySettingAdapter : NSObject <HFHomeKitSettingsObserver, HFMediaObjectObserver>



@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HFHomeKitDispatcher *dispatcher; // ivar: _dispatcher
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSObject<HFHomeKitSettingsVendor> *homeKitSettingsVendor; // ivar: _homeKitSettingsVendor
@property (retain, nonatomic) NSMutableDictionary *keyPathStringToFuture; // ivar: _keyPathStringToFuture
@property (readonly, copy, nonatomic) NSSet *keyPaths; // ivar: _keyPaths
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly, nonatomic) HMSettings *settings; // ivar: _settings
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) id *updateHandler; // ivar: _updateHandler
@property (readonly, nonatomic) HFHomeKitSettingsValueManager *valueManager; // ivar: _valueManager
@property (retain, nonatomic) NSMutableDictionary *watchedSettings; // ivar: _watchedSettings


+(id)createDefaultHomeSettingAdapterCollectionForProfile:(id)arg0 ;
+(id)createDefaultHomeSettingAdapterCollectionWithoutMobileTimerAdapterForProfile:(id)arg0 ;
-(BOOL)_setupKeyPaths;
-(BOOL)_updateRootAccessorySettings;
-(BOOL)_updateRootAccessorySettingsIfNeeded;
-(id)_beginMonitoringSettingsKeyPath:(id)arg0 ;
-(id)_endMonitoringSettingsKeyPath:(id)arg0 ;
-(id)_missingKeyPaths;
-(id)init;
-(id)initWithHomeKitSettingsVendor:(id)arg0 keyPaths:(id)arg1 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 keyPaths:(id)arg1 mode:(NSUInteger)arg2 updateHandler:(id)arg3 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 keyPaths:(id)arg1 updateHandler:(id)arg2 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 keyPaths:(id)arg1 updateHandlerBlock:(id)arg2 ;
-(id)settingForKeyPath:(id)arg0 ;
-(id)settingWatchFutureForKeyPath:(id)arg0 ;
-(id)updateSetting:(id)arg0 value:(id)arg1 ;
-(id)updateSettingWithKeyPath:(id)arg0 value:(id)arg1 ;
-(void)_reportUpdatedValueForSetting:(id)arg0 ;
-(void)_setupMissingKeyPaths;
-(void)_tearDownKeyPaths;
-(void)_teardownSetting:(id)arg0 ;
-(void)_watchSetting:(id)arg0 ;
-(void)homeKitSettingWasUpdated:(id)arg0 value:(id)arg1 ;
-(void)mediaObject:(id)arg0 didUpdateSettings:(id)arg1 ;
-(void)settings:(id)arg0 didUpdateForIdentifier:(id)arg1 keyPath:(id)arg2 ;
-(void)settings:(id)arg0 didWriteValueForSettings:(id)arg1 failedSettings:(id)arg2 homeKitObjectIdentifiers:(id)arg3 ;
-(void)settings:(id)arg0 willWriteValueForSettings:(id)arg1 ;
-(void)settingsDidUpdate:(id)arg0 ;


@end


#endif