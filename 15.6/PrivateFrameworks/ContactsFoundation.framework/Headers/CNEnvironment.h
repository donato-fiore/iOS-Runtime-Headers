// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNENVIRONMENT_H
#define CNENVIRONMENT_H

@class NSString, NSNumber, NSNotificationCenter;
@protocol CNEntitlementVerification, CNFileManager, CNLocalizationServices, CNSchedulerProvider, CNTimeProvider;


#import "CNEnvironmentBase.h"
#import "CNUserDefaults.h"

@interface CNEnvironment : CNEnvironmentBase {
    NSString *_defaultCountryCode;
    NSNumber *_isInternalBuildStorage;
    NSNumber *_isCommLimitsEnabledStorage;
}


@property (readonly, getter=isCommLimitsEnabled) BOOL commLimitsEnabled;
@property (readonly) NSString *defaultCountryCode;
@property (readonly) NSObject<CNEntitlementVerification> *entitlementVerifier; // ivar: _entitlementVerifier
@property (readonly) NSObject<CNFileManager> *fileManager; // ivar: _fileManager
@property (readonly, getter=isInternalBuild) BOOL internalBuild;
@property (readonly) NSObject<CNLocalizationServices> *localizationServices; // ivar: _localizationServices
@property (readonly) NSString *mainBundleIdentifier; // ivar: _mainBundleIdentifier
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) NSObject<CNTimeProvider> *timeProvider; // ivar: _timeProvider
@property (readonly) CNUserDefaults *userDefaults; // ivar: _userDefaults


+(char *)environmentStackKey;
+(id)defaultEnvironment;
-(id)getDefaultCountryCode;
-(id)init;
-(id)valueForKey:(id)arg0 onCacheMiss:(id)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif