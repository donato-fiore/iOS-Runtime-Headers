// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKRPOXYGENSATURATIONONBOARDINGCACHE_H
#define HKRPOXYGENSATURATIONONBOARDINGCACHE_H

@class NSUserDefaults, NSNumber;
@protocol HKRPUserDefaultsSyncProviding;

#import <Foundation/Foundation.h>


@interface HKRPOxygenSaturationOnboardingCache : NSObject {
    NSUserDefaults *_userDefaults;
    id<HKRPUserDefaultsSyncProviding> *_userDefaultsSyncProvider;
}


@property (copy, nonatomic) NSNumber *hasCompletedOnboarding;


-(id)initWithUserDefaults:(id)arg0 userDefaultsSyncProvider:(id)arg1 ;


@end


#endif