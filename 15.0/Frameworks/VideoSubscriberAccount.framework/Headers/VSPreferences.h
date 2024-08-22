// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSPREFERENCES_H
#define VSPREFERENCES_H

@class NSUserDefaults, NSURL, NSUndoManager;

#import <Foundation/Foundation.h>

#import "VSDevice.h"

@interface VSPreferences : NSObject

@property (nonatomic) NSInteger cachedAvailabilityStatus;
@property (nonatomic) NSInteger cachedDeveloperProviderStatus;
@property (nonatomic) NSInteger cachedStoreProviderStatus;
@property (retain, nonatomic) VSDevice *device; // ivar: _device
@property (retain, nonatomic) NSUserDefaults *globalUserDefaults; // ivar: _globalUserDefaults
@property (readonly, nonatomic) BOOL hasSentWelcomeMessage;
@property (readonly, copy, nonatomic) NSURL *overridingAppBootURL;
@property (readonly, nonatomic) BOOL shouldAlwaysAllowRemoteInspection;
@property (readonly, nonatomic) BOOL shouldDisableRequestTimeouts;
@property (readonly, nonatomic) BOOL shouldSkipSetup;
@property (retain, nonatomic) NSUndoManager *undoManager; // ivar: _undoManager
@property (retain, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


-(BOOL)allowInsecureAuthContext;
-(BOOL)hasChosenDesiredApp;
-(BOOL)ignoreSetTopBoxProfile;
-(BOOL)isInSTBMode;
-(BOOL)setTopBoxInfoIsSetTopBoxOverride;
-(BOOL)shouldIgnoreExtendedValidation;
-(id)metricUserID;
-(id)metricUserIDLastGenerated;
-(id)setTopBoxActivationTime;
-(id)setTopBoxInfoAppAdamIdOverride;
-(id)setTopBoxInfoBundleIdentifierOverride;
-(id)setTopBoxInfoProviderDisplayNameOverride;
-(id)setTopBoxInfoProviderIdOverride;
-(void)_updateShouldSkipSetupWithNumber:(id)arg0 ;
-(void)_updateValue:(id)arg0 forKey:(id)arg1 ;
-(void)clearSetTopBoxActivationTime;
-(void)noteDesiredApp:(id)arg0 ;
-(void)noteDidSendWelcomeMessage;
-(void)noteIsInSTBMode:(BOOL)arg0 ;
-(void)noteSetTopBoxActicationTime;
-(void)noteShouldSkipSetup;
-(void)removeSkipSetupPreset;
-(void)setIgnoreSetTopBoxProfile:(BOOL)arg0 ;
-(void)setMetricUserID:(id)arg0 ;


@end


#endif