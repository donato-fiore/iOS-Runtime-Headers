// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKREMOTEFEATUREAVAILABILITYALWAYSTRUERULE_H
#define HKREMOTEFEATUREAVAILABILITYALWAYSTRUERULE_H

@class NSString;
@protocol HKRemoteFeatureAvailabilityRule;

#import <Foundation/Foundation.h>


@interface HKRemoteFeatureAvailabilityAlwaysTrueRule : NSObject <HKRemoteFeatureAvailabilityRule>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)ruleIdentifier;
-(BOOL)evaluate;
-(id)initWithRawValue:(id)arg0 dataSource:(id)arg1 ;


@end


#endif