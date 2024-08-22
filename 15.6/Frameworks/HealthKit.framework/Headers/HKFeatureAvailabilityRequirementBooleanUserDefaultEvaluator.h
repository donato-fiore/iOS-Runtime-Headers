// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTBOOLEANUSERDEFAULTEVALUATOR_H
#define HKFEATUREAVAILABILITYREQUIREMENTBOOLEANUSERDEFAULTEVALUATOR_H

@class NSString;
@protocol HKObservableFeatureAvailabilityRequirement;

#import <Foundation/Foundation.h>


@interface HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator : NSObject <HKObservableFeatureAvailabilityRequirement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL defaultValueWhenKeyIsMissing;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *userDefaultsKey; // ivar: _userDefaultsKey


+(BOOL)supportsSecureCoding;
+(id)requirementIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSatisfiedForBoolValue:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserDefaultsKey:(id)arg0 ;
-(id)isSatisfiedWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)whichUserDefaultsDataSourceInDataSource:(id)arg0 ;
-(void)_notifyObserver:(id)arg0 forNewValue:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)registerObserver:(id)arg0 forDataSource:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 fromDataSource:(id)arg1 ;


@end


#endif