// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCFEATUREOVERRIDES_H
#define DMCFEATUREOVERRIDES_H


#import <Foundation/Foundation.h>


@interface DMCFeatureOverrides : NSObject



+(BOOL)allowAnyMAIDToSignIn;
+(BOOL)boolForDefaultsKey:(id)arg0 ;
+(BOOL)ignoreEnrollmentMode;
+(BOOL)sentinelExistsAtPath:(id)arg0 ;
+(BOOL)shouldSimulateMDMCommunication;
+(BOOL)useHTTPLogging;
+(BOOL)useNonEphemeralWebAuthSession;
+(CGFloat)accountSignInTimeoutThresholdWithDefaultValue:(CGFloat)arg0 ;
+(CGFloat)enrollmentStepTimeoutThresholdWithDefaultValue:(CGFloat)arg0 ;
+(id)activationRecordFlagsWithFlags:(id)arg0 ;
+(id)depConfigurationEnrollmentURLStringWithURLString:(id)arg0 ;
+(id)depDeviceSerialNumberWithValue:(id)arg0 ;
+(id)depProvisionalEnrollmentURLStringWithURLString:(id)arg0 ;
+(id)depRemoveEnrollmentURLStringWithURLString:(id)arg0 ;
+(id)depResponseContentTypeFromContentType:(id)arg0 ;
+(id)depResponseDataFromData:(id)arg0 ;
+(id)enrollmentProfileWithDefaultValue:(id)arg0 ;
+(id)modelNameWithDefaultValue:(id)arg0 ;
+(id)numberForDefaultsKey:(id)arg0 ;
+(id)productNameWithDefaultValue:(id)arg0 ;
+(id)serviceDiscoveryDefaultPortWithValue:(id)arg0 ;
+(id)serviceDiscoveryDomainWithValue:(id)arg0 ;
+(id)serviceDiscoveryFallbackURLWithValue:(id)arg0 ;
+(id)stringForDefaultsKey:(id)arg0 ;


@end


#endif