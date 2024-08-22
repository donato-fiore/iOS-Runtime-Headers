// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTCAPABILITYISSUPPORTEDONACTIVEWATCH_H
#define HKFEATUREAVAILABILITYREQUIREMENTCAPABILITYISSUPPORTEDONACTIVEWATCH_H



#import "HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveRemoteDevice.h"

@interface HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveWatch : HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveRemoteDevice

@property (readonly, nonatomic) BOOL supportedOnLocalDevice; // ivar: _supportedOnLocalDevice


+(BOOL)supportsSecureCoding;
+(id)requirementIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeatureIdentifier:(id)arg0 supportedOnLocalDevice:(BOOL)arg1 ;
-(id)isSatisfiedWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)requirementDescription;
-(void)encodeWithCoder:(id)arg0 ;
-(void)registerObserver:(id)arg0 forDataSource:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 fromDataSource:(id)arg1 ;


@end


#endif