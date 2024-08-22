// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHRAFIBBURDENPROFILEEXTENSIONCOMPONENTS_H
#define HDHRAFIBBURDENPROFILEEXTENSIONCOMPONENTS_H

@class HDAnalyticsDailyEventManager, HKFeatureStatusManager;
@protocol HDFeatureAvailabilityExtension;

#import <Foundation/Foundation.h>

#import "HKHRAFibBurdenAnalyzer.h"
#import "HDHRAFibBurdenNotificationManager.h"
#import "HDHRAFibBurdenRescindedNotificationManager.h"
#import "HKHRAFibBurdenSevenDayAnalysisScheduler.h"

@interface HDHRAFibBurdenProfileExtensionComponents : NSObject

@property (retain, nonatomic) HKHRAFibBurdenAnalyzer *analyzer; // ivar: _analyzer
@property (retain, nonatomic) HDAnalyticsDailyEventManager *dailyAnalyticsEventManager; // ivar: _dailyAnalyticsEventManager
@property (retain, nonatomic) NSObject<HDFeatureAvailabilityExtension> *featureAvailabilityManager; // ivar: _featureAvailabilityManager
@property (retain, nonatomic) HKFeatureStatusManager *featureStatusManager; // ivar: _featureStatusManager
@property (retain, nonatomic) HDHRAFibBurdenNotificationManager *notificationManager; // ivar: _notificationManager
@property (retain, nonatomic) HDHRAFibBurdenRescindedNotificationManager *notificationsRescindedManager; // ivar: _notificationsRescindedManager
@property (retain, nonatomic) HKHRAFibBurdenSevenDayAnalysisScheduler *sevenDayAnalysisScheduler; // ivar: _sevenDayAnalysisScheduler
@property (nonatomic) NSUInteger stateHandlerHandle; // ivar: _stateHandlerHandle


+(id)makeComponentsForProfile:(id)arg0 pairedDeviceCapabilityProvider:(id)arg1 ;
-(id)init;
-(id)initWithProfile:(id)arg0 pairedDeviceCapabilityProvider:(id)arg1 ;
-(void)dealloc;


@end


#endif