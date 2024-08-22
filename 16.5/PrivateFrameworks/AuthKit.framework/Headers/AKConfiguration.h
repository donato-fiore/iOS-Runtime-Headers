// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKCONFIGURATION_H
#define AKCONFIGURATION_H

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AKConfiguration : NSObject {
    NSMutableDictionary *_cachedSettings;
    int _notificationToken;
    NSObject<OS_dispatch_queue> *_settingsQueue;
}


@property (nonatomic) NSInteger forceSilentEscrowRecordRepairEnabled;
@property (readonly, nonatomic) NSUInteger internalFeaturesMaskValue;
@property (nonatomic) NSUInteger lastKnownIDMSEnvironment;
@property (copy, nonatomic) NSString *lastKnownLocale;
@property (nonatomic) NSInteger piggybackingIDMSPresenceOverride;
@property (nonatomic) NSInteger piggybackingLocalPresenceOverride;
@property (nonatomic) NSInteger requestedCloudPartition;
@property (nonatomic) NSInteger shouldAddHSA2CreateHeader;
@property (nonatomic) NSInteger shouldAllowDemoMode;
@property (nonatomic) NSInteger shouldAllowExperimentalMode;
@property (nonatomic) NSInteger shouldAllowPhoneNumberAccounts;
@property (nonatomic) NSInteger shouldAllowTestApplication;
@property (nonatomic) NSInteger shouldAlwaysShowWelcome;
@property (nonatomic) NSInteger shouldAutocycleAppsInTiburon;
@property (nonatomic) NSInteger shouldAutocycleAppsInWebTakeover;
@property (nonatomic) NSInteger shouldBypassCustodianDeviceCheck;
@property (nonatomic) NSInteger shouldDisablePiggybacking;
@property (nonatomic) NSInteger shouldEnableBeneficiaryLiveOn;
@property (nonatomic) NSInteger shouldEnablePiggybackingPresence; // ivar: _shouldEnablePiggybackingPresence
@property (nonatomic) NSInteger shouldEnableTestAccountMode;
@property (nonatomic) NSInteger shouldFakeAuthSuccess;
@property (nonatomic) NSInteger shouldHideInternalBuildHeader;
@property (nonatomic) NSInteger shouldSuppressHSA2Suggestions;
@property (nonatomic) NSInteger shouldSuppressModalSheetsInMacBuddy;


+(id)sharedConfiguration;
-(BOOL)_validCloudPartition:(NSInteger)arg0 ;
-(NSInteger)overrideForKey:(id)arg0 ;
-(NSInteger)shouldRequestPiggybackingPresenceEnforcement;
-(id)configurationValueForKey:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)setConfigurationValue:(id)arg0 forKey:(id)arg1 ;
-(void)setOverride:(NSInteger)arg0 forKey:(id)arg1 ;


@end


#endif