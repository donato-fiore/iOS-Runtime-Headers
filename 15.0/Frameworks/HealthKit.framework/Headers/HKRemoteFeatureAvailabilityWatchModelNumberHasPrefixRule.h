// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKREMOTEFEATUREAVAILABILITYWATCHMODELNUMBERHASPREFIXRULE_H
#define HKREMOTEFEATUREAVAILABILITYWATCHMODELNUMBERHASPREFIXRULE_H

@class NSString;
@protocol HKRemoteFeatureAvailabilityRule;


#import "HKRemoteFeatureAvailabilityBaseRule.h"

@interface HKRemoteFeatureAvailabilityWatchModelNumberHasPrefixRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *modelNumberPrefix; // ivar: _modelNumberPrefix
@property (readonly) Class superclass;


+(id)ruleIdentifier;
-(BOOL)evaluate;
-(void)processUserInfo:(id)arg0 ;


@end


#endif