// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHRCARDIOFITNESSNOTIFICATIONSETTINGSFACTORY_H
#define HKHRCARDIOFITNESSNOTIFICATIONSETTINGSFACTORY_H


#import <Foundation/Foundation.h>

#import "HKHRCardioFitnessNotificationStatus.h"

@interface HKHRCardioFitnessNotificationSettingsFactory : NSObject

@property (retain, nonatomic) HKHRCardioFitnessNotificationStatus *notificationStatus; // ivar: _notificationStatus


-(BOOL)_hasUnavailabilitySetForReasons:(NSInteger)arg0 ;
-(id)_ageGatedBridgeSettingFooter;
-(id)_ageGatedWatchSettingFooter;
-(id)_ageNotSetBridgeSettingFooter;
-(id)_ageNotSetWatchSettingFooter;
-(id)_genericBridgeSettingFooter;
-(id)_genericWatchSettingFooter;
-(id)_notificationsAvailableBridgeSettingFooter;
-(id)_pairedDeviceRegionGatedFooter;
-(id)bridgeSettings;
-(id)initWithNotificationStatus:(id)arg0 ;
-(id)watchSettings;


@end


#endif