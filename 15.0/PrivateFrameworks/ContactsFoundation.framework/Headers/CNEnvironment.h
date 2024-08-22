// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNENVIRONMENT_H
#define CNENVIRONMENT_H

@class NSMutableDictionary, NSNumber, NSString;
@protocol CNEntitlementVerification, CNFileManager, CNLocalizationServices, CNSchedulerProvider, CNTimeProvider;

#import <Foundation/Foundation.h>

#import "CNUserDefaults.h"

@interface CNEnvironment : NSObject {
    NSMutableDictionary *_storage;
    NSNumber *_isInternalBuildStorage;
    NSNumber *_isCommLimitsEnabledStorage;
    NSNumber *_isCommLimitsPersistenceAccessibleStorage;
}


@property (readonly, getter=isCommLimitsEnabled) BOOL commLimitsEnabled;
@property (readonly) NSObject<CNEntitlementVerification> *entitlementVerifier; // ivar: _entitlementVerifier
@property (readonly) NSObject<CNFileManager> *fileManager; // ivar: _fileManager
@property (readonly, getter=isInternalBuild) BOOL internalBuild;
@property (readonly) NSObject<CNLocalizationServices> *localizationServices; // ivar: _localizationServices
@property (readonly) NSString *mainBundleIdentifier; // ivar: _mainBundleIdentifier
@property (readonly) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) NSObject<CNTimeProvider> *timeProvider; // ivar: _timeProvider
@property (readonly) CNUserDefaults *userDefaults; // ivar: _userDefaults


+(id)currentEnvironment;
+(id)defaultEnvironment;
+(id)defaultStack;
+(id)effectiveReadingStack;
+(id)effectiveWritingStack;
-(id)init;
-(id)valueForKey:(id)arg0 onCacheMiss:(id)arg1 ;
-(void)becomeCurrent;
-(void)resignCurrent;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif