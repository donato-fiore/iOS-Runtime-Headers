// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKFEATUREONBOARDINGRECORD_H
#define HKFEATUREONBOARDINGRECORD_H

@class NSSet, NSArray, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKFeatureSettings.h"
#import "HKOnboardingCompletion.h"

@interface HKFeatureOnboardingRecord : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSSet *allOnboardedCountryCodesRegardlessOfSupportedState;
@property (readonly, copy, nonatomic) NSArray *allOnboardingCompletionsRegardlessOfSupportedState;
@property (readonly, copy, nonatomic) HKFeatureSettings *featureSettings; // ivar: _featureSettings
@property (readonly, copy, nonatomic) NSSet *onboardedCountryCodesForOnboardingState;
@property (readonly, copy, nonatomic) HKOnboardingCompletion *onboardingCompletion;
@property (readonly, copy, nonatomic) NSDictionary *onboardingCompletionsByState; // ivar: _onboardingCompletionsByState
@property (readonly, nonatomic) NSInteger onboardingState; // ivar: _onboardingState


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOnboardingState:(NSInteger)arg0 onboardingCompletion:(id)arg1 featureSettings:(id)arg2 ;
-(id)initWithOnboardingState:(NSInteger)arg0 onboardingCompletionsByState:(id)arg1 featureSettings:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif