// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16HEALTHMOBILITYUI32WALKINGSTEADINESSONBOARDINGMODEL_H
#define _TTC16HEALTHMOBILITYUI32WALKINGSTEADINESSONBOARDINGMODEL_H

@protocol HKMobilityWalkingSteadinessFeatureStatusManagerObserver;

#import <Foundation/Foundation.h>


@interface _TtC16HealthMobilityUI32WalkingSteadinessOnboardingModel : NSObject <HKMobilityWalkingSteadinessFeatureStatusManagerObserver>

 {
    ? onboardingFlowManager;
    ? featureStatusManager;
    ? detailsProvider;
    ? notificationPermissionManager;
    ? queue;
    ? queue_mostRecentNotificationStatus;
    ? notificationsEnabled;
    ? changedDetailItems;
    ? cancellationToken;
    ? shouldFavoriteByDefault;
}




-(id)init;
-(void)featureStatusManager:(id)arg0 didUpdateNotificationStatus:(id)arg1 ;


@end


#endif