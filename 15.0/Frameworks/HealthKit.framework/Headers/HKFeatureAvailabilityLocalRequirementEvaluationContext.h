// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKFEATUREAVAILABILITYLOCALREQUIREMENTEVALUATIONCONTEXT_H
#define HKFEATUREAVAILABILITYLOCALREQUIREMENTEVALUATIONCONTEXT_H

@class NSMutableDictionary;


#import "HKFeatureAvailabilityRequirementEvaluationDataSource.h"

@interface HKFeatureAvailabilityLocalRequirementEvaluationContext : HKFeatureAvailabilityRequirementEvaluationDataSource

@property (nonatomic) NSInteger _unitTest_cacheHits; // ivar: __unitTest_cacheHits
@property (retain, nonatomic) NSMutableDictionary *eligibilityByFeatureIdentifier; // ivar: _eligibilityByFeatureIdentifier
@property (retain, nonatomic) NSMutableDictionary *onboardingRecordByFeatureIdentifier; // ivar: _onboardingRecordByFeatureIdentifier


-(id)onboardingEligibilityForFeatureWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)onboardingRecordForFeatureWithIdentifier:(id)arg0 error:(*id)arg1 ;


@end


#endif