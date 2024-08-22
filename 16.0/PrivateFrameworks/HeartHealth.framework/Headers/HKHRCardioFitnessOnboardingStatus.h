// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHRCARDIOFITNESSONBOARDINGSTATUS_H
#define HKHRCARDIOFITNESSONBOARDINGSTATUS_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKHRCardioFitnessOnboardingStatus : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *dateOnboarded; // ivar: _dateOnboarded
@property (readonly, nonatomic) BOOL isClassificationAvailable; // ivar: _isClassificationAvailable
@property (readonly, nonatomic) BOOL isLocaleValidOnLocalDevice; // ivar: _isLocaleValidOnLocalDevice
@property (readonly, nonatomic) NSInteger onboardingUnavailableReasons; // ivar: _onboardingUnavailableReasons
@property (readonly, nonatomic) BOOL shouldAdvertiseOnboarding; // ivar: _shouldAdvertiseOnboarding
@property (readonly, nonatomic) NSInteger state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithState:(NSInteger)arg0 unavailableReasons:(NSInteger)arg1 dateOnboarded:(id)arg2 shouldOnboardingTileBeAdvertised:(BOOL)arg3 isLocaleValidOnLocalDevice:(BOOL)arg4 isClassificationAvailable:(BOOL)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif