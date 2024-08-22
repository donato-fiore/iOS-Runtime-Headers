// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMCONBOARDINGCOMPLETIONINFO_H
#define HKMCONBOARDINGCOMPLETIONINFO_H

@class NSArray, HKMobileCountryCode, HKQuantity, NSNumber;

#import <Foundation/Foundation.h>


@interface HKMCOnboardingCompletionInfo : NSObject

@property (readonly, nonatomic) NSArray *addedCycleFactors; // ivar: _addedCycleFactors
@property (readonly, nonatomic) NSArray *deletedCycleFactors; // ivar: _deletedCycleFactors
@property (retain, nonatomic) HKMobileCountryCode *deviationDetectionSupportedCountryCode; // ivar: _deviationDetectionSupportedCountryCode
@property (retain, nonatomic) HKMobileCountryCode *heartRateInputSupportedCountryCode; // ivar: _heartRateInputSupportedCountryCode
@property (readonly, nonatomic) HKQuantity *userEnteredCycleLength; // ivar: _userEnteredCycleLength
@property (readonly, nonatomic) NSNumber *userEnteredLastPeriodStartDay; // ivar: _userEnteredLastPeriodStartDay
@property (readonly, nonatomic) HKQuantity *userEnteredPeriodLength; // ivar: _userEnteredPeriodLength
@property (retain, nonatomic) HKMobileCountryCode *wristTemperatureInputSupportedCountryCode; // ivar: _wristTemperatureInputSupportedCountryCode


-(id)initWithUserEnteredCycleLength:(id)arg0 userEnteredPeriodLength:(id)arg1 userEnteredLastPeriodStartDay:(id)arg2 addedCycleFactors:(id)arg3 deletedCycleFactors:(id)arg4 heartRateInputSupportedCountryCode:(id)arg5 ;


@end


#endif