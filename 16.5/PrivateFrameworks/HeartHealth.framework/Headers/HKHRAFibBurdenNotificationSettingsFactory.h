// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHRAFIBBURDENNOTIFICATIONSETTINGSFACTORY_H
#define HKHRAFIBBURDENNOTIFICATIONSETTINGSFACTORY_H

@class HKFeatureStatus;

#import <Foundation/Foundation.h>


@interface HKHRAFibBurdenNotificationSettingsFactory : NSObject

@property (retain, nonatomic) HKFeatureStatus *featureStatus; // ivar: _featureStatus


-(BOOL)_isFeatureOnboardedAndAvailableWithIsOnboarded:(BOOL)arg0 requirementsEvaluation:(id)arg1 ;
-(BOOL)_isOnboarded;
-(id)_deviceRegionGatedBridgeSettingFooter;
-(id)_deviceRegionGatedWatchSettingFooter;
-(id)_evaluationForIsOnboarded:(BOOL)arg0 ;
-(id)_genericBridgeSettingFooter;
-(id)_genericWatchSettingFooter;
-(id)_irnEnabledBridgeSettingFooter;
-(id)_irnEnabledWatchSettingFooter;
-(id)_remoteDisabledBridgeSettingFooter;
-(id)_remoteDisabledWatchSettingFooter;
-(id)_seedExpiryBridgeSettingFooter;
-(id)_seedExpiryWatchSettingFooter;
-(id)_wristDetectDisabledBridgeSettingFooter;
-(id)bridgeSettings;
-(id)initWithFeatureStatus:(id)arg0 ;
-(id)watchSettings;


@end


#endif