// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXONBOARDINGSTACKRESULTCACHE_H
#define ATXONBOARDINGSTACKRESULTCACHE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ATXOnboardingStackResult.h"

@interface ATXOnboardingStackResultCache : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) ATXOnboardingStackResult *heavyBatteryDrainResult; // ivar: _heavyBatteryDrainResult
@property (copy, nonatomic) ATXOnboardingStackResult *lightBatteryDrainResult; // ivar: _lightBatteryDrainResult
@property (copy, nonatomic) ATXOnboardingStackResult *mediumBatteryDrainResult; // ivar: _mediumBatteryDrainResult
@property (copy, nonatomic) ATXOnboardingStackResult *unknownBatteryDrainResult; // ivar: _unknownBatteryDrainResult


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUnknownBatteryDrainResult:(id)arg0 lightBatteryDrainResult:(id)arg1 mediumBatteryDrainResult:(id)arg2 heavyBatteryDrainResult:(id)arg3 ;
-(id)resultForClassification:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif