// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCFEATUREOVERRIDES_H
#define DMCFEATUREOVERRIDES_H


#import <Foundation/Foundation.h>


@interface DMCFeatureOverrides : NSObject



+(BOOL)_isUnknownProduct;
+(BOOL)allowAnyESSOApplicationEntitlements;
+(BOOL)allowAnyMAIDToSignIn;
+(BOOL)boolForDefaultsKey:(id)arg0 ;
+(BOOL)bypassMDMTLSClientAuthentication;
+(BOOL)ignoreEnrollmentMode;
+(BOOL)sentinelExistsAtPath:(id)arg0 ;
+(BOOL)shouldSimulateMDMCommunication;
+(BOOL)useHTTPLogging;
+(BOOL)useNonEphemeralWebAuthSession;
+(CGFloat)accountSignInTimeoutThresholdWithDefaultValue:(CGFloat)arg0 ;
+(CGFloat)enrollmentStepTimeoutThresholdWithDefaultValue:(CGFloat)arg0 ;
+(id)activationRecordFlagsWithFlags:(id)arg0 ;
+(id)attestationRateLimitOverrideMinutes;
+(id)deviceNameWithDefaultValue:(id)arg0 ;
+(id)enrollmentProfileWithDefaultValue:(id)arg0 ;
+(id)modelNameWithDefaultValue:(id)arg0 ;
+(id)numberForDefaultsKey:(id)arg0 ;
+(id)productNameWithDefaultValue:(id)arg0 ;
+(id)serviceDiscoveryDefaultPortWithValue:(id)arg0 ;
+(id)serviceDiscoveryDomainWithValue:(id)arg0 ;
+(id)serviceDiscoveryFallbackURLWithValue:(id)arg0 ;
+(id)softwareUpdateDeviceIDWithDefaultValue:(id)arg0 ;
+(id)stringForDefaultsKey:(id)arg0 ;


@end


#endif