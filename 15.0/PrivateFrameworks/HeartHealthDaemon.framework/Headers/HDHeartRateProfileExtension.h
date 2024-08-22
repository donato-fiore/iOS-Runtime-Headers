// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHEARTRATEPROFILEEXTENSION_H
#define HDHEARTRATEPROFILEEXTENSION_H

@class HKFeatureStatusManager, NSString, NSUserDefaults, HDPrimaryProfile;
@protocol HDProfileReadyObserver, HDHRHeartNotificationsUserDefaultsProviding, HDProfileExtension, HDFeatureAvailabilityExtensionProvider;

#import <Foundation/Foundation.h>

#import "HDHRCardioFitnessFeatureAvailabilityManager.h"
#import "HDHRCardioFitnessAnalyticsDailyEventActivity.h"
#import "HDHRIrregularRhythmNotificationsV1FeatureAvailabilityManager.h"
#import "HDHRDailyHeartRateManager.h"
#import "HDHRHealthLiteDataCollector.h"
#import "HDHRNotificationManager.h"

@interface HDHeartRateProfileExtension : NSObject <HDProfileReadyObserver, HDHRHeartNotificationsUserDefaultsProviding, HDProfileExtension, HDFeatureAvailabilityExtensionProvider>

 {
    HDHRCardioFitnessFeatureAvailabilityManager *_cardioFitnessFeatureAvailabilityManager;
    HDHRCardioFitnessAnalyticsDailyEventActivity *_dailyAnalyticsActivity;
    HDHRIrregularRhythmNotificationsV1FeatureAvailabilityManager *_irregularRhythmNotificationsAvailabilityManager;
    HKFeatureStatusManager *_irregularRhythmNotificationsFeatureStatusManager;
}


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
-(void)dealloc;
-(void)profileDidBecomeReady:(id)arg0 ;


@end


#endif