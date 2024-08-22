// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPSLEEPHEALTHDATASOURCE_H
#define HKSPSLEEPHEALTHDATASOURCE_H

@class NSString, HKProfileIdentifier;
@protocol HKFeatureAvailabilityHealthDataSource;

#import <Foundation/Foundation.h>

#import "HKSPSleepStore.h"

@interface HKSPSleepHealthDataSource : NSObject <HKFeatureAvailabilityHealthDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HKFeatureAvailabilityHealthDataSource> *healthDataSource;
@property (readonly, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly, nonatomic) BOOL requiresWeakRetention;
@property (readonly, nonatomic) HKSPSleepStore *sleepStore; // ivar: _sleepStore
@property (readonly, nonatomic) NSObject<HKFeatureAvailabilityHealthDataSource> *strongHealthDataSource; // ivar: _strongHealthDataSource
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) NSObject<HKFeatureAvailabilityHealthDataSource> *weakHealthDataSource; // ivar: _weakHealthDataSource


-(id)featureAvailabilityProvidingForFeatureIdentifier:(id)arg0 ;
-(id)initWithSleepStore:(id)arg0 healthDataSource:(id)arg1 ;
-(id)requirementSatisfactionOverridesDataSource;
-(id)watchLowPowerModeDataSource;
-(id)wristDetectionSettingManager;


@end


#endif