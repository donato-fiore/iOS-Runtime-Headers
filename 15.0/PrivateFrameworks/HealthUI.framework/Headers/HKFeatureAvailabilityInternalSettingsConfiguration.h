// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKFEATUREAVAILABILITYINTERNALSETTINGSCONFIGURATION_H
#define HKFEATUREAVAILABILITYINTERNALSETTINGSCONFIGURATION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface HKFeatureAvailabilityInternalSettingsConfiguration : NSObject

@property (copy, nonatomic) NSString *featureIdentifier; // ivar: _featureIdentifier
@property (nonatomic) NSUInteger options; // ivar: _options
@property (copy, nonatomic) NSArray *samplesTypesToDelete; // ivar: _samplesTypesToDelete
@property (copy, nonatomic) NSString *userDefaultsDisabledOverrideKey; // ivar: _userDefaultsDisabledOverrideKey
@property (copy, nonatomic) NSString *userDefaultsDomain; // ivar: _userDefaultsDomain
@property (copy, nonatomic) NSString *userDefaultsFeatureEnabledKey; // ivar: _userDefaultsFeatureEnabledKey


-(BOOL)requireReboot;
-(BOOL)showDisabledOverride;
-(BOOL)showFeatureEnable;
-(BOOL)syncToWatch;
-(id)initWithFeatureIdentifier:(id)arg0 userDefaultsDomain:(id)arg1 userDefaultsFeatureEnabledKey:(id)arg2 userDefaultsDisabledOverrideKey:(id)arg3 options:(NSUInteger)arg4 samplesTypesToDelete:(id)arg5 ;


@end


#endif