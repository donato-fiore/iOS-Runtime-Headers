// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKWATCHAPPINSTALLATIONDATASOURCE_H
#define HKWATCHAPPINSTALLATIONDATASOURCE_H

@class NSMutableDictionary;


#import "HKObserverBridge.h"
#import "HKNanoRegistryPairingAndSwitchingNotificationDataSource.h"

@interface HKWatchAppInstallationDataSource : HKObserverBridge

@property (readonly, nonatomic) HKNanoRegistryPairingAndSwitchingNotificationDataSource *devicePairingAndSwitchingDataSource; // ivar: _devicePairingAndSwitchingDataSource
@property (readonly, nonatomic) NSMutableDictionary *watchAppInstallationManagersByBundleIdentifier; // ivar: _watchAppInstallationManagersByBundleIdentifier


-(id)init;
-(id)initWithDevicePairingAndSwitchingNotificationDataSource:(id)arg0 ;
-(id)isWatchAppInstalledWithBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)makeAndRegisterBridgedObserverForKey:(id)arg0 handle:(id)arg1 ;
-(id)watchAppInstallationManagerForBundleIdentifier:(id)arg0 ;
-(void)_populateManagersDictionaryForBundleIdentifier:(id)arg0 ;
-(void)unregisterBridgedObserver:(id)arg0 forKey:(id)arg1 ;


@end


#endif