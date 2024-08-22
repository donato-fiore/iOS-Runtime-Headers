// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKFEATUREAVAILABILITYLOCALREQUIREMENTEVALUATIONCONTEXT_H
#define HKFEATUREAVAILABILITYLOCALREQUIREMENTEVALUATIONCONTEXT_H

@class NSMutableDictionary;


#import "HKFeatureAvailabilityRequirementEvaluationDataSource.h"

@interface HKFeatureAvailabilityLocalRequirementEvaluationContext : HKFeatureAvailabilityRequirementEvaluationDataSource

@property (nonatomic) NSInteger _unitTest_cacheHits; // ivar: __unitTest_cacheHits
@property (retain, nonatomic) NSMutableDictionary *eligibilityByFeatureIdentifier; // ivar: _eligibilityByFeatureIdentifier
@property (retain, nonatomic) NSMutableDictionary *featureStatusByIdentifierAndContext; // ivar: _featureStatusByIdentifierAndContext
@property (retain, nonatomic) NSMutableDictionary *onboardingRecordByFeatureIdentifier; // ivar: _onboardingRecordByFeatureIdentifier
@property (retain, nonatomic) NSMutableDictionary *watchAppInstallationStateByBundleIdentifier; // ivar: _watchAppInstallationStateByBundleIdentifier


-(id)featureStatusForFeatureWithIdentifier:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)isWatchAppInstalledWithBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)onboardingEligibilityForFeatureWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)onboardingRecordForFeatureWithIdentifier:(id)arg0 error:(*id)arg1 ;


@end


#endif