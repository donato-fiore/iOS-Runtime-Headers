// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTCAPABILITYISSUPPORTEDONANYWATCH_H
#define HKFEATUREAVAILABILITYREQUIREMENTCAPABILITYISSUPPORTEDONANYWATCH_H

@class NSString, NSUUID;
@protocol HKObservableFeatureAvailabilityRequirement;


#import "HKFeatureAvailabilityBaseRequirement.h"

@interface HKFeatureAvailabilityRequirementCapabilityIsSupportedOnAnyWatch : HKFeatureAvailabilityBaseRequirement <HKObservableFeatureAvailabilityRequirement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *nanoRegistryCapability; // ivar: _nanoRegistryCapability
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSupportedOnLocalDevice) BOOL supportedOnLocalDevice; // ivar: _supportedOnLocalDevice


+(BOOL)supportsSecureCoding;
+(id)requirementIdentifier;
-(BOOL)_isSatisfiedWithDataSource:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNanoRegistryCapability:(id)arg0 supportedOnLocalDevice:(BOOL)arg1 ;
-(id)isSatisfiedWithDataSource:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)registerObserver:(id)arg0 forDataSource:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 fromDataSource:(id)arg1 ;


@end


#endif