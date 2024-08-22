// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKECGAVAILABILITYRESULT_H
#define HKECGAVAILABILITYRESULT_H


#import <Foundation/Foundation.h>


@interface HKECGAvailabilityResult : NSObject

@property (readonly, nonatomic) BOOL advertiseDirectOnboarding; // ivar: _advertiseDirectOnboarding
@property (readonly, nonatomic) BOOL advertiseDirectOnboardingEscapeHatch; // ivar: _advertiseDirectOnboardingEscapeHatch
@property (readonly, nonatomic) BOOL advertiseUpgrade; // ivar: _advertiseUpgrade
@property (readonly, nonatomic) BOOL advertiseUpgradeEscapeHatch; // ivar: _advertiseUpgradeEscapeHatch


+(id)resultWithAdvertiseDirectOnboarding:(BOOL)arg0 advertiseDirectOnboardingSecondary:(BOOL)arg1 advertiseUpgrade:(BOOL)arg2 advertiseUpgradeSecondary:(BOOL)arg3 ;
+(id)resultWithNoAdvertisements;
-(id)initWithAdvertiseDirectOnboarding:(BOOL)arg0 advertiseDirectOnboardingSecondary:(BOOL)arg1 advertiseUpgrade:(BOOL)arg2 advertiseUpgradeSecondary:(BOOL)arg3 ;


@end


#endif