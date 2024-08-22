// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENCONFIGURATIONMANAGER_H
#define ENCONFIGURATIONMANAGER_H

@class NSMutableDictionary;
@protocol ENConfigurationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ENActiveEntity.h"
#import "ENCloudServerChannel.h"
#import "ENConfigurationStore.h"
#import "ENXPCTimer.h"
#import "ENRegionMonitor.h"

@interface ENConfigurationManager : NSObject

@property (copy, nonatomic) ENActiveEntity *activeEntity; // ivar: _activeEntity
@property (retain, nonatomic) ENCloudServerChannel *cloudServerChannel; // ivar: _cloudServerChannel
@property (retain, nonatomic) ENConfigurationStore *configurationStore; // ivar: _configurationStore
@property (weak, nonatomic) NSObject<ENConfigurationManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (retain, nonatomic) ENXPCTimer *gracePeriodConfigurationFetchTimer; // ivar: _gracePeriodConfigurationFetchTimer
@property (nonatomic) BOOL mobileCountryCodeOverriden; // ivar: _mobileCountryCodeOverriden
@property (nonatomic) BOOL prefRampTrialPeriodProfile; // ivar: _prefRampTrialPeriodProfile
@property (nonatomic) BOOL prefTestHeaderEnabled; // ivar: _prefTestHeaderEnabled
@property (retain, nonatomic) ENRegionMonitor *regionMonitor; // ivar: _regionMonitor
@property (retain, nonatomic) NSMutableDictionary *regionRampModeOverride; // ivar: _regionRampModeOverride
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (retain, nonatomic) ENXPCTimer *serverConfigurationFetchTimer; // ivar: _serverConfigurationFetchTimer


+(BOOL)isRampModeEnabledFromServerResponse:(id)arg0 ;
+(BOOL)serverResponse:(id)arg0 isOnRampMode:(NSUInteger)arg1 ;
+(BOOL)verifyAppleServerResponse:(id)arg0 signatureHeader:(id)arg1 ;
+(CGFloat)randomSelectPercentagePerDayFromServerResponse:(id)arg0 ;
+(NSUInteger)rampModeFromServerResponse:(id)arg0 ;
+(id)iCloudServerEndpoint;
+(id)staticRegionForBundleID:(id)arg0 ;
+(void)_printServerConfiguration:(id)arg0 ;
-(BOOL)isInGracePeriodTransition;
-(BOOL)regionSupportsFeatures:(id)arg0 featureFlags:(unsigned int)arg1 ;
-(BOOL)updateRampModeForRegion:(id)arg0 rampMode:(NSUInteger)arg1 ;
-(NSUInteger)readCachedRampModeForRegion:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 activeEntity:(id)arg1 ;
-(void)_activate;
-(void)_fetchServerConfigurationsForRegion:(id)arg0 userInitiated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_processServerConfiguration:(id)arg0 forceUpdate:(BOOL)arg1 ;
-(void)_reportErrorMetricForHTTPStatus:(NSInteger)arg0 ;
-(void)_saveAndRemoveStaleConfigurations:(id)arg0 region:(id)arg1 error:(id)arg2 ;
-(void)_scheduleRegionConfigurationRefresh;
-(void)_serverFetchRegionConfiguration:(id)arg0 userInitiated:(BOOL)arg1 completion:(id)arg2 ;
-(void)activate;
-(void)dealloc;
-(void)fetchServerConfigurationsForRegion:(id)arg0 userInitiated:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)overrideRampModeForRegion:(id)arg0 rampMode:(NSUInteger)arg1 ;
-(void)prefsChanged;
-(void)refreshServerConfigurationsUponProfileChange;
-(void)regionMonitor:(id)arg0 authorizationStateDidChange:(NSUInteger)arg1 ;
-(void)regionMonitor:(id)arg0 regionDidChange:(id)arg1 ;
-(void)resetConfigurationCache;
-(void)resetConfigurationManager;
-(void)serverFetchRegionConfiguration:(id)arg0 userInitiated:(BOOL)arg1 completion:(id)arg2 ;
-(void)setupGracePeriodFetchTimerWithDelay:(CGFloat)arg0 ;
-(void)stopGracePeriodTimer;
-(void)updateRegionMonitorModeForCurrentRegion;


@end


#endif