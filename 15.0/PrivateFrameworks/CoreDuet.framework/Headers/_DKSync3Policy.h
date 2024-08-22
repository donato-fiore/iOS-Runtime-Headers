// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKSYNC3POLICY_H
#define _DKSYNC3POLICY_H

@class NSNumber, NSArray, NSDictionary;
@protocol _DKSync3PolicyCommonMethods;

#import <Foundation/Foundation.h>


@interface _DKSync3Policy : NSObject <_DKSync3PolicyCommonMethods>

 {
    BOOL _syncDisabled;
    BOOL _isSingleDevice;
    BOOL _isOnPower;
    NSNumber *_version;
    NSUInteger _triggeredSyncDelayInSeconds;
    NSInteger _mask;
    NSArray *_sourceDevices;
    NSArray *_destinationDevices;
    NSArray *_transportPolicies;
    NSArray *_featurePolicies;
}


@property (retain, nonatomic) NSDictionary *properties; // ivar: _properties


+(BOOL)cloudSyncDisabled;
+(BOOL)rapportSyncDisabled;
+(id)computePolicyDictionaryWithDefaultSyncPolicyDict:(id)arg0 syncPolicyOverridesDict:(id)arg1 topLevelDefaultsPolicy:(id)arg2 ;
+(id)computedPolicyDictionary;
+(id)configurationPlistForFilename:(id)arg0 ;
+(id)disabledPolicy;
+(id)productVersion;
+(id)syncPolicyConfigPathForFilename:(id)arg0 ;
+(id)userDefaults;
+(void)_possiblyAddToArray:(id)arg0 ifTransport:(NSInteger)arg1 existsInTransports:(NSInteger)arg2 ;
+(void)addToDictionary:(id)arg0 streamNamesToAlwaysSync:(id)arg1 ;
+(void)fillPolicyCache:(id)arg0 bySplittingPolicyDictionary:(id)arg1 ;
+(void)handleDownloadSyncPolicyResponse:(id)arg0 data:(id)arg1 error:(id)arg2 ;
+(void)overrideDictionary:(id)arg0 withOverrides:(id)arg1 ;
+(void)possiblyDownloadSyncPolicyWithPolicyDownloadIntervalInDays:(NSUInteger)arg0 ;
-(BOOL)_anyFeaturePropertyValueWithKey:(id)arg0 getterBlock:(id)arg1 ;
-(NSUInteger)_maximumPropertyValueWithKey:(id)arg0 policies:(id)arg1 skipZeroValues:(BOOL)arg2 ;
-(NSUInteger)_minimumPropertyValueWithKey:(id)arg0 policies:(id)arg1 skipZeroValues:(BOOL)arg2 ;
-(NSUInteger)minimumTimeBetweenSyncsInSecondsMaximumValue;
-(id)description;
-(id)init;


@end


#endif