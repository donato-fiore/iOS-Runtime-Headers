// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKFEATURESTATUS_H
#define HKFEATURESTATUS_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKFeatureOnboardingRecord.h"

@interface HKFeatureStatus : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL isOnboardingRecordPresent;
@property (readonly, copy, nonatomic) HKFeatureOnboardingRecord *onboardingRecord; // ivar: _onboardingRecord
@property (readonly, copy, nonatomic) NSDictionary *requirementsEvaluationByContext; // ivar: _requirementsEvaluationByContext


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyUpdatingRequirement:(id)arg0 fromRequirements:(id)arg1 isSatisfied:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOnboardingRecord:(id)arg0 requirementsEvaluationByContext:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif