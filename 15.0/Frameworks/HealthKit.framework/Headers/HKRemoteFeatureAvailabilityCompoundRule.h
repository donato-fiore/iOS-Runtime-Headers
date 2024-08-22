// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKREMOTEFEATUREAVAILABILITYCOMPOUNDRULE_H
#define HKREMOTEFEATUREAVAILABILITYCOMPOUNDRULE_H

@class NSString, NSMutableArray;
@protocol HKRemoteFeatureAvailabilityRule;


#import "HKRemoteFeatureAvailabilityBaseRule.h"

@interface HKRemoteFeatureAvailabilityCompoundRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *grouping; // ivar: _grouping
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *rules; // ivar: _rules
@property (readonly) Class superclass;


+(id)ruleIdentifier;
-(BOOL)evaluate;
-(void)processUserInfo:(id)arg0 ;


@end


#endif