// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHH2FRAMEWORKSWITCH_H
#define HMDHH2FRAMEWORKSWITCH_H

@class HMFObject, HMBCloudDatabase, NSString, NAFuture;
@protocol HMFLogging, HMBCloudDatabaseDelegate, HMBCloudZoneDelegate, HMDHH2FrameworkSwitchDataSource, OS_dispatch_queue;


#import "HMDHomeManager.h"

@interface HMDHH2FrameworkSwitch : HMFObject <HMFLogging, HMBCloudDatabaseDelegate, HMBCloudZoneDelegate>



@property (nonatomic) BOOL autoFrameworkSwitch; // ivar: _autoFrameworkSwitch
@property (copy, nonatomic) id *blockToBeCalledBeforeSwitchingFramework; // ivar: _blockToBeCalledBeforeSwitchingFramework
@property (retain, nonatomic) HMBCloudDatabase *cloudDatabaseToDetectHH2Zone; // ivar: _cloudDatabaseToDetectHH2Zone
@property (retain, nonatomic) NSObject<HMDHH2FrameworkSwitchDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NAFuture *fetchAllZonesSucceededFuture; // ivar: _fetchAllZonesSucceededFuture
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (nonatomic) BOOL isTapToSetupOngoing; // ivar: _isTapToSetupOngoing
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
+(void)relaunchHomedAfterSettingEnvironmentTo:(BOOL)arg0 blockToExecuteBeforeReLaunch:(id)arg1 ;
+(void)setHH2EnablementPreferenceKey:(BOOL)arg0 ;
+(void)setHH2SettingsMigrationKey:(BOOL)arg0 ;
+(void)switchBackToHH1AndDoNotLaunchDueToPrimaryAccountRemoval;
+(void)switchBackToHH1AndRelaunch;
+(void)switchBackToHH1AndRelaunchDueToHH2MigrationFailed;
+(void)switchToHH2AndRelaunchHomed;
-(BOOL)_areWeRunningInRightEnvironment:(BOOL)arg0 ;
-(BOOL)areCloudKitServersReachable;
-(BOOL)checkExistenceOfHH2SentinelZone;
-(BOOL)switchToSetupMode:(NSUInteger)arg0 ;
-(BOOL)waitForHH2SentinelZoneToBeCreated:(CGFloat)arg0 ;
-(BOOL)waitForHH2SentinelZoneToBeFetchedFromCloud;
// -(id)initWithAutoSwitch:(BOOL)arg0 callBeforeFrameworkSwitch:(id)arg1 homeManager:(unk)arg2 dataSource:(id)arg3  ;
-(id)initWithAutoSwitchDisabledWithHomeManager:(id)arg0 ;
-(id)initWithAutoSwitchEnabledWithHomeManager:(id)arg0 callBeforeFrameworkSwitchCompletionHandler:(id)arg1 ;
-(id)initWithAutoSwitchEnabledWithHomeManager:(id)arg0 dataSource:(id)arg1 callBeforeFrameworkSwitchCompletionHandler:(id)arg2 ;
-(void)_clearSetupModeIfNeeded;
-(void)_makeSureWeAreRunningInRightEnvironment:(BOOL)arg0 ;
-(void)cloudDatabase:(id)arg0 didCreateZoneWithID:(id)arg1 ;
-(void)createHH2CloudDatabaseAndStartSyncing;
-(void)createHH2SentinelZoneWithCompletionHandler:(id)arg0 ;
-(void)forceFetchAllCloudZones;
-(void)handleTapToSetupFinished:(id)arg0 ;
-(void)makeSureWeAreRunningInRightEnvironment:(BOOL)arg0 ;
-(void)performInitialSync:(id)arg0 ;
-(void)performInitialSyncAndSwitchFrameworkIfRequired;
-(void)removeHH2SentinelZoneWithCompletion:(id)arg0 ;
-(void)switchToHH2AfterPerformingHH2PreRebootTask;
-(void)switchToHH2AndRelaunchHomedToPerformHH2Migration;
-(void)waitForCloudKitAccountToBeAvailable;
-(void)waitForHH2SentinelZoneToBeRemoved;


@end


#endif