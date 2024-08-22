// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTMUTUALLYEXCLUSIVEFEATUREISOFF_H
#define HKFEATUREAVAILABILITYREQUIREMENTMUTUALLYEXCLUSIVEFEATUREISOFF_H

@class NSString;
@protocol HKObservableFeatureAvailabilityRequirement;


#import "HKFeatureAvailabilityBaseRequirement.h"

@interface HKFeatureAvailabilityRequirementMutuallyExclusiveFeatureIsOff : HKFeatureAvailabilityBaseRequirement <HKObservableFeatureAvailabilityRequirement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureIdentifier; // ivar: _featureIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isOnWhenSettingIsAbsent; // ivar: _isOnWhenSettingIsAbsent
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly, copy, nonatomic) NSString *settingsOnKey; // ivar: _settingsOnKey
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)requirementIdentifier;
-(BOOL)_isFeatureOnWithOnboardingRecord:(id)arg0 ;
-(BOOL)_isSatisfiedWithOnboardingRecord:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeatureIdentifier:(id)arg0 isOnWhenSettingIsAbsent:(BOOL)arg1 ;
-(id)initWithFeatureIdentifier:(id)arg0 settingsOnKey:(id)arg1 isOnWhenSettingIsAbsent:(BOOL)arg2 ;
-(id)isSatisfiedWithDataSource:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)registerObserver:(id)arg0 forDataSource:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 fromDataSource:(id)arg1 ;


@end


#endif