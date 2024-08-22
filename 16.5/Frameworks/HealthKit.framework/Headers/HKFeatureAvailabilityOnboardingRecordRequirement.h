// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKFEATUREAVAILABILITYONBOARDINGRECORDREQUIREMENT_H
#define HKFEATUREAVAILABILITYONBOARDINGRECORDREQUIREMENT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;


#import "HKFeatureAvailabilityBaseRequirement.h"

@interface HKFeatureAvailabilityOnboardingRecordRequirement : HKFeatureAvailabilityBaseRequirement <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *featureIdentifier; // ivar: _featureIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeatureIdentifier:(id)arg0 ;
-(id)isSatisfiedWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)isSatisfiedWithOnboardingRecord:(id)arg0 dataSource:(id)arg1 error:(*id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif