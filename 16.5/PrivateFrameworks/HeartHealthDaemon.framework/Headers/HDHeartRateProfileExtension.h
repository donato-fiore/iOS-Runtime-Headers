// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHEARTRATEPROFILEEXTENSION_H
#define HDHEARTRATEPROFILEEXTENSION_H

@class HDBackgroundFeatureDeliveryManager, HKFeatureStatusManager, NSString, NSUserDefaults, HDPrimaryProfile;
@protocol HDHRAFibBurdenProfileExtensionComponentsContainer, HDProfileReadyObserver, HDHRHeartNotificationsUserDefaultsProviding, HDProfileExtension, HDFeatureAvailabilityExtensionProvider, HDFeatureAvailabilityExtension;

#import <Foundation/Foundation.h>

#import "HDHRCardioFitnessFeatureAvailabilityManager.h"
#import "HDHRCardioFitnessAnalyticsDailyEventActivity.h"
#import "HDHRHeartbeatSeriesFeatureExclusivityManager.h"
#import "HDHRIrregularRhythmNotificationsFeatureAvailabilityManager.h"
#import "HDHRIrregularRhythmNotificationsSettingMigrator.h"
#import "HDHRElectrocardiogramRecordingFeatureAvailabilityManager.h"
#import "HDHRAFibBurdenProfileExtensionComponents.h"
#import "HDHRDailyHeartRateManager.h"
#import "HDHRHealthLiteDataCollector.h"
#import "HDHRNotificationManager.h"

@interface HDHeartRateProfileExtension : NSObject <HDHRAFibBurdenProfileExtensionComponentsContainer, HDProfileReadyObserver, HDHRHeartNotificationsUserDefaultsProviding, HDProfileExtension, HDFeatureAvailabilityExtensionProvider>

 {
    HDHRCardioFitnessFeatureAvailabilityManager *_cardioFitnessFeatureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_cardioFitnessBackgroundFeatureDeliveryManager;
    HDHRCardioFitnessAnalyticsDailyEventActivity *_dailyAnalyticsActivity;
    HDHRHeartbeatSeriesFeatureExclusivityManager *_heartbeatSeriesFeatureExclusivityManager;
    id<HDFeatureAvailabilityExtension> *_lowHeartRateNotificationsFeatureAvailabilityManager;
    id<HDFeatureAvailabilityExtension> *_highHeartRateNotificationsFeatureAvailabilityManager;
    HDHRIrregularRhythmNotificationsFeatureAvailabilityManager *_irregularRhythmNotificationsAvailabilityManager;
    HDHRIrregularRhythmNotificationsSettingMigrator *_irregularRhythmNotificationsSettingMigrator;
    HDBackgroundFeatureDeliveryManager *_irregularRhythmNotificationsV2DeliveryManager;
    HKFeatureStatusManager *_irregularRhythmNotificationsFeatureStatusManager;
    HDHRElectrocardiogramRecordingFeatureAvailabilityManager *_electrocardiogramRecordingAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_electrocardiogramRecordingV2DeliveryManager;
}


@property (retain, nonatomic) HDHRAFibBurdenProfileExtensionComponents *aFibBurdenComponents; // ivar: _aFibBurdenComponents
@property (retain, nonatomic) HDHRDailyHeartRateManager *dailyHeartRateManager; // ivar: _dailyHeartRateManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDHRHealthLiteDataCollector *healthLiteDataCollector; // ivar: _healthLiteDataCollector
@property (retain, nonatomic) NSUserDefaults *heartNotificationsUserDefaults; // ivar: _heartNotificationsUserDefaults
@property (retain, nonatomic) HDHRNotificationManager *heartRateNotificationManager; // ivar: _heartRateNotificationManager
@property (readonly, nonatomic) HKFeatureStatusManager *irregularRhythmNotificationsFeatureStatusManager;
@property (readonly, weak, nonatomic) HDPrimaryProfile *profile; // ivar: _profile
@property (readonly) Class superclass;


-(id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg0 ;
-(id)initWithProfile:(id)arg0 heartNotificationsUserDefaults:(id)arg1 ;
-(id)initWithProfile:(id)arg0 heartNotificationsUserDefaults:(id)arg1 capabilityProvider:(id)arg2 ;
-(void)_setupElectrocardiogramRecordingWithProfile:(id)arg0 pairedDeviceCapabilityProvider:(id)arg1 ;
-(void)profileDidBecomeReady:(id)arg0 ;


@end


#endif