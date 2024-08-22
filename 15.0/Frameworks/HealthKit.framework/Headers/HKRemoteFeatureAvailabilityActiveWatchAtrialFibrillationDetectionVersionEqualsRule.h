// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKREMOTEFEATUREAVAILABILITYACTIVEWATCHATRIALFIBRILLATIONDETECTIONVERSIONEQUALSRULE_H
#define HKREMOTEFEATUREAVAILABILITYACTIVEWATCHATRIALFIBRILLATIONDETECTIONVERSIONEQUALSRULE_H

@class NSString;
@protocol HKRemoteFeatureAvailabilityRule;


#import "HKRemoteFeatureAvailabilityBaseRule.h"

@interface HKRemoteFeatureAvailabilityActiveWatchAtrialFibrillationDetectionVersionEqualsRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) ? targetVersion; // ivar: _targetVersion


+(id)ruleIdentifier;
-(BOOL)evaluate;
-(void)processUserInfo:(id)arg0 ;


@end


#endif