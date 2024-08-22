// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSPREFERENCES_H
#define VSPREFERENCES_H

@class NSUserDefaults, NSString, NSDate, NSURL, NSUndoManager, NSDictionary;

#import <Foundation/Foundation.h>

#import "VSDevice.h"

@interface VSPreferences : NSObject

@property (readonly, nonatomic) BOOL allowInsecureAuthContext;
@property (readonly, nonatomic) BOOL allowNonSystemTrust;
@property (nonatomic) NSInteger cachedAvailabilityStatus;
@property (nonatomic) NSInteger cachedDeveloperProviderStatus;
@property (nonatomic) NSInteger cachedStoreProviderStatus;
@property (retain, nonatomic) VSDevice *device; // ivar: _device
@property (readonly, nonatomic) BOOL flushMetrics;
@property (retain, nonatomic) NSUserDefaults *globalUserDefaults; // ivar: _globalUserDefaults
@property (nonatomic) BOOL ignoreSetTopBoxProfile;
@property (nonatomic) BOOL isInSTBMode;
@property (retain, nonatomic) NSString *metricUserID;
@property (readonly, nonatomic) NSDate *metricUserIDLastGenerated;
@property (readonly, copy, nonatomic) NSURL *overridingAppBootURL;
@property (readonly, nonatomic) BOOL performedSubcriptionToUserAccountMigration;
@property (readonly, nonatomic) NSDate *setTopBoxActivationTime;
@property (readonly, nonatomic) NSString *setTopBoxInfoAppAdamIdOverride;
@property (readonly, nonatomic) NSString *setTopBoxInfoBundleIdentifierOverride;
@property (readonly, nonatomic) BOOL setTopBoxInfoIsSetTopBoxOverride;
@property (readonly, nonatomic) NSString *setTopBoxInfoProviderDisplayNameOverride;
@property (readonly, nonatomic) NSString *setTopBoxInfoProviderIdOverride;
@property (readonly, nonatomic) BOOL shouldAlwaysAllowRemoteInspection;
@property (readonly, nonatomic) BOOL shouldDisableRequestTimeouts;
@property (readonly, nonatomic) BOOL shouldSkipSetup;
@property (retain, nonatomic) NSUndoManager *undoManager; // ivar: _undoManager
@property (readonly, nonatomic) BOOL useLegacyVendorIdentifier;
@property (retain, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults
@property (retain, nonatomic) NSDictionary *vendorIdentifierDictionary;


-(BOOL)featureIsEnabled:(id)arg0 present:(*BOOL)arg1 ;
-(BOOL)hasChosenDesiredApp;
-(BOOL)shouldUseLegacyVendorIdentifier;
-(NSInteger)forcedAvailabilityStatus;
-(void)_updateShouldSkipSetupWithNumber:(id)arg0 ;
-(void)_updateValue:(id)arg0 forKey:(id)arg1 ;
-(void)clearFeature:(id)arg0 ;
-(void)clearSetTopBoxActivationTime;
-(void)disableFeature:(id)arg0 ;
-(void)enableFeature:(id)arg0 ;
-(void)noteDesiredApp:(id)arg0 ;
-(void)removeSkipSetupPreset;


@end


#endif