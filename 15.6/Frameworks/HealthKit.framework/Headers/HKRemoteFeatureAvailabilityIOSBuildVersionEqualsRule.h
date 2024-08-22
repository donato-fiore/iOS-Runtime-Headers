// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKREMOTEFEATUREAVAILABILITYIOSBUILDVERSIONEQUALSRULE_H
#define HKREMOTEFEATUREAVAILABILITYIOSBUILDVERSIONEQUALSRULE_H

@class NSString;
@protocol HKRemoteFeatureAvailabilityRule;


#import "HKRemoteFeatureAvailabilityBaseRule.h"

@interface HKRemoteFeatureAvailabilityIOSBuildVersionEqualsRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule>



@property (retain, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)ruleIdentifier;
-(BOOL)evaluate;
-(void)processUserInfo:(id)arg0 ;


@end


#endif