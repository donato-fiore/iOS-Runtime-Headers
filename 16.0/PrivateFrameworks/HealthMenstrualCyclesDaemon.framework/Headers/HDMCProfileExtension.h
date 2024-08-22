// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMCPROFILEEXTENSION_H
#define HDMCPROFILEEXTENSION_H

@class HDFeatureAvailabilityManager, HDBackgroundFeatureDeliveryManager, HDAnalyticsDailyEventManager, HKCalendarCache, NSString, HDPrimaryProfile, HKMCSettingsManager;
@protocol HDProfileExtension, HDFeatureAvailabilityExtensionProvider, HDHealthDaemonReadyObserver, HDPostInstallUpdateTaskHandler;

#import <Foundation/Foundation.h>

#import "HDMCAnalyticsManager.h"
#import "HDMCAnalysisScheduler.h"
#import "HDMCAnalysisManager.h"
#import "HDMCNotificationManager.h"

@interface HDMCProfileExtension : NSObject <HDProfileExtension, HDFeatureAvailabilityExtensionProvider, HDHealthDaemonReadyObserver, HDPostInstallUpdateTaskHandler>

 {
    HDMCAnalyticsManager *_analyticsManager;
    HDFeatureAvailabilityManager *_featureAvailabilityManager;
    HDFeatureAvailabilityManager *_heartRateFeatureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_heartRateBackgroundFeatureDeliveryManager;
    HDFeatureAvailabilityManager *_wristTemperatureInputAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_wristTemperatureInputBackgroundFeatureDeliveryManager;
    HDAnalyticsDailyEventManager *_wristTemperatureDailyEventManager;
    HDFeatureAvailabilityManager *_deviationsFeatureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_deviationsBackgroundFeatureDeliveryManager;
    HDMCAnalysisScheduler *_analysisScheduler;
    HKCalendarCache *_calendarCache;
}


@property (readonly, nonatomic) HDMCAnalysisManager *analysisManager; // ivar: _analysisManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HDMCNotificationManager *notificationManager; // ivar: _notificationManager
@property (readonly, weak, nonatomic) HDPrimaryProfile *profile; // ivar: _profile
@property (readonly, nonatomic) HKMCSettingsManager *settingsManager; // ivar: _settingsManager
@property (readonly) Class superclass;


-(id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(void)daemonReady:(id)arg0 ;
-(void)performPostInstallUpdateTaskForManager:(id)arg0 completion:(id)arg1 ;


@end


#endif