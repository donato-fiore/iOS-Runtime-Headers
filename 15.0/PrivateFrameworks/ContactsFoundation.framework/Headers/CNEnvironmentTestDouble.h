// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNENVIRONMENTTESTDOUBLE_H
#define CNENVIRONMENTTESTDOUBLE_H

@class NSString;
@protocol CNEntitlementVerification, CNFileManager, CNLocalizationServices, CNSchedulerProvider, CNTimeProvider;


#import "CNEnvironment.h"
#import "CNUserDefaults.h"

@interface CNEnvironmentTestDouble : CNEnvironment

@property (getter=isCommLimitsEnabled) BOOL commLimitsEnabled;
@property (retain) NSObject<CNEntitlementVerification> *entitlementVerifier;
@property (retain) NSObject<CNFileManager> *fileManager;
@property (getter=isInternalBuild) BOOL internalBuild;
@property (retain) NSObject<CNLocalizationServices> *localizationServices;
@property (copy) NSString *mainBundleIdentifier;
@property (retain) NSObject<CNSchedulerProvider> *schedulerProvider;
@property (retain) NSObject<CNTimeProvider> *timeProvider;
@property (retain) CNUserDefaults *userDefaults;




@end


#endif