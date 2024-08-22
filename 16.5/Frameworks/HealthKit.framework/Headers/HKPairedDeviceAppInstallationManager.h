// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKPAIREDDEVICEAPPINSTALLATIONMANAGER_H
#define HKPAIREDDEVICEAPPINSTALLATIONMANAGER_H



#import "HKWatchAppInstallationManager.h"

@interface HKPairedDeviceAppInstallationManager : HKWatchAppInstallationManager {
    id *_pairedDeviceRegistry;
}




-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 forPairedDeviceRegistry:(id)arg1 ;
-(id)isWatchAppInstalledWithError:(*id)arg0 ;
-(void)_watchAppInstallStateDidChange:(id)arg0 ;
-(void)startObserving;
-(void)stopObserving;


@end


#endif