// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTFEATUREISON_H
#define HKFEATUREAVAILABILITYREQUIREMENTFEATUREISON_H

@class NSString;
@protocol HKFeatureAvailabilityRequirement;


#import "HKFeatureAvailabilityOnboardingRecordRequirement.h"

@interface HKFeatureAvailabilityRequirementFeatureIsOn : HKFeatureAvailabilityOnboardingRecordRequirement <HKFeatureAvailabilityRequirement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isOnWhenSettingIsAbsent; // ivar: _isOnWhenSettingIsAbsent
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly, copy, nonatomic) NSString *settingsOnKey; // ivar: _settingsOnKey
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)requirementIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeatureIdentifier:(id)arg0 isOnWhenSettingIsAbsent:(BOOL)arg1 ;
-(id)initWithFeatureIdentifier:(id)arg0 settingsOnKey:(id)arg1 isOnWhenSettingIsAbsent:(BOOL)arg2 ;
-(id)isSatisfiedWithOnboardingRecord:(id)arg0 dataSource:(id)arg1 error:(*id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif