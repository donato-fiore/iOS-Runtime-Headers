// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMOBILITYPROFILEEXTENSION_H
#define HDMOBILITYPROFILEEXTENSION_H

@class HDFeatureAvailabilityManager, HDBackgroundFeatureDeliveryManager, HDAnalyticsDailyEventManager, NSString;
@protocol HDFeatureAvailabilityExtensionProvider;

#import <Foundation/Foundation.h>

#import "HDMobilityNotificationManager.h"
#import "HDMobilityWalkingSteadinessFeatureAvailabilityManager.h"

@interface HDMobilityProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider>

 {
    HDMobilityNotificationManager *_notificationManager;
    HDFeatureAvailabilityManager *_walkingSteadinessClassificationsAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_walkingSteadinessClassificationsBackgroundFeatureDeliveryManager;
    HDMobilityWalkingSteadinessFeatureAvailabilityManager *_walkingSteadinessNotificationsAvailabilityManager;
    HDAnalyticsDailyEventManager *_walkingSteadinessDailyAnalyticsEventManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;


@end


#endif