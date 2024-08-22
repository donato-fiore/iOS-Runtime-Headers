// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKRPWATCHAPPINSTALLER_H
#define HKRPWATCHAPPINSTALLER_H

@class NRDevice, HKWatchAppAvailability;
@protocol HKRPWatchInstallAppsProviding;

#import <Foundation/Foundation.h>


@interface HKRPWatchAppInstaller : NSObject {
    NRDevice *_device;
    HKWatchAppAvailability *_watchAppAvailability;
    id<HKRPWatchInstallAppsProviding> *_installAppsProviding;
}




-(id)init;
-(id)initWithDevice:(id)arg0 watchAppAvailability:(id)arg1 installAppsProviding:(id)arg2 ;
-(void)checkIfAppCanBeInstalledWithCompletion:(id)arg0 ;
-(void)installAppWithCompletion:(id)arg0 ;


@end


#endif