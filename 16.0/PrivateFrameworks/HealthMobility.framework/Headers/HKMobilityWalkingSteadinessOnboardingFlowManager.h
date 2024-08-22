// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMOBILITYWALKINGSTEADINESSONBOARDINGFLOWMANAGER_H
#define HKMOBILITYWALKINGSTEADINESSONBOARDINGFLOWMANAGER_H

@class NSString, HKHealthStore, HKMobileCountryCodeManager;
@protocol OS_dispatch_queue, HKFeatureStatusProviding, HKFeatureAvailabilityProviding;

#import <Foundation/Foundation.h>

#import "HKMobilityWalkingSteadinessFeatureStatusManager.h"

@interface HKMobilityWalkingSteadinessOnboardingFlowManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSObject<HKFeatureStatusProviding> *classificationsFeatureStatusProvider; // ivar: _classificationsFeatureStatusProvider
@property (readonly, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (retain, nonatomic) HKMobilityWalkingSteadinessFeatureStatusManager *featureStatusManager; // ivar: _featureStatusManager
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKMobileCountryCodeManager *mobileCountryCodeManager; // ivar: _mobileCountryCodeManager
@property (retain, nonatomic) NSObject<HKFeatureAvailabilityProviding> *notificationsFeatureAvailabilityStore; // ivar: _notificationsFeatureAvailabilityStore


-(BOOL)userCanContinueOnboardingWithDateOfBirthComponents:(id)arg0 ;
-(id)_findAnyOnboardedCountryCodeWithError:(*id)arg0 ;
-(id)initWithHealthStore:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 classificationsFeatureStatusProvider:(id)arg1 notificationsFeatureAvailabilityStore:(id)arg2 featureStatusManager:(id)arg3 ;
-(void)fetchUserCanContinueOnboardingForCountryCode:(id)arg0 completion:(id)arg1 ;
-(void)markOnboardingCompleteForCountryCode:(id)arg0 shouldTurnOnNotifications:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif