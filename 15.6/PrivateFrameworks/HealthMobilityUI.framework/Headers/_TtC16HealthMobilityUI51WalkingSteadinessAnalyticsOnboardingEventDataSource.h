// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16HEALTHMOBILITYUI51WALKINGSTEADINESSANALYTICSONBOARDINGEVENTDATASOURCE_H
#define _TTC16HEALTHMOBILITYUI51WALKINGSTEADINESSANALYTICSONBOARDINGEVENTDATASOURCE_H

@protocol HKMobilityWalkingSteadinessAnalyticsOnboardingEventDataSourceProvider;

#import <Foundation/Foundation.h>


@interface _TtC16HealthMobilityUI51WalkingSteadinessAnalyticsOnboardingEventDataSource : NSObject <HKMobilityWalkingSteadinessAnalyticsOnboardingEventDataSourceProvider>

 {
    ? healthStore;
    ? presentation;
    ? onboardingStep;
    ? changedDetailItems;
    ? defaultDetailItems;
    ? acceptDefaults;
}




-(id)acceptDefaultHeightWithError:(*id)arg0 ;
-(id)acceptDefaultNotificationsWithError:(*id)arg0 ;
-(id)acceptDefaultWeightWithError:(*id)arg0 ;
-(id)activeWatchProductTypeWithError:(*id)arg0 ;
-(id)ageWithError:(*id)arg0 ;
-(id)biologicalSexWithError:(*id)arg0 ;
-(id)featureVersionWithError:(*id)arg0 ;
-(id)hasDefaultHeightWithError:(*id)arg0 ;
-(id)hasDefaultWeightWithError:(*id)arg0 ;
-(id)init;
-(id)provenanceWithError:(*id)arg0 ;
-(id)stepWithError:(*id)arg0 ;


@end


#endif