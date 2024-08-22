// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTSEVALUATION_H
#define HKFEATUREAVAILABILITYREQUIREMENTSEVALUATION_H

@class NSString, NSOrderedSet, NSDictionary, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKFeatureAvailabilityRequirementsEvaluation : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *highestPriorityUnsatisfiedRequirement;
@property (readonly, copy, nonatomic) NSOrderedSet *requirementIdentifiersOrderedByPriority; // ivar: _requirementIdentifiersOrderedByPriority
@property (readonly, copy, nonatomic) NSDictionary *satisfactionByRequirementIdentifier; // ivar: _satisfactionByRequirementIdentifier
@property (readonly, copy, nonatomic) NSArray *unsatisfiedRequirementIdentifiers;


+(BOOL)supportsSecureCoding;
+(id)emptyEvaluation;
+(id)evaluationOfRequirements:(id)arg0 dataSource:(id)arg1 overrides:(id)arg2 error:(*id)arg3 ;
-(BOOL)areAllRequirementsSatisfied;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isRequirementSatisfiedWithIdentifier:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyUpdatingRequirementForIdentifier:(id)arg0 isSatisfied:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequirementIdentifiersOrderedByPriority:(id)arg0 satisfactionByRequirementIdentifier:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif